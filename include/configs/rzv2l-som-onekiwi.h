/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2021 Renesas Electronics Corporation
 */

#ifndef __RZV2L_SOM_ONEKIWI_H
#define __RZV2L_SOM_ONEKIWI_H

#include <asm/arch/rmobile.h>

#define CONFIG_REMAKE_ELF

#ifdef CONFIG_SPL
#define CONFIG_SPL_TARGET	"spl/u-boot-spl.scif"
#endif

/* boot option */

#define CONFIG_CMDLINE_TAG
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_INITRD_TAG

/* Generic Interrupt Controller Definitions */
/* RZ/V2L use GIC-v3 */
#define CONFIG_GICV3
#define GICD_BASE	0x11900000
#define GICR_BASE	0x11960000

/* console */
#define CONFIG_SYS_CBSIZE		2048
#define CONFIG_SYS_BARGSIZE		CONFIG_SYS_CBSIZE
#define CONFIG_SYS_MAXARGS		64
#define CONFIG_SYS_BAUDRATE_TABLE	{ 115200, 38400 }

/* PHY needs a longer autoneg timeout */
#define PHY_ANEG_TIMEOUT		20000

/* MEMORY */
#define CONFIG_SYS_INIT_SP_ADDR		CONFIG_SYS_TEXT_BASE

/* SDHI clock freq */
#define CONFIG_SH_SDHI_FREQ		133000000

#define DRAM_RSV_SIZE			0x08000000
#define CONFIG_SYS_SDRAM_BASE		(0x40000000 + DRAM_RSV_SIZE)
#define CONFIG_SYS_SDRAM_SIZE		(0x80000000u - DRAM_RSV_SIZE) //total 2GB
#define CONFIG_SYS_LOAD_ADDR		0x58000000
#define CONFIG_LOADADDR			CONFIG_SYS_LOAD_ADDR // Default load address for tfpt,bootp...
#define CONFIG_VERY_BIG_RAM
#define CONFIG_MAX_MEM_MAPPED		(0x80000000u - DRAM_RSV_SIZE)

#define CONFIG_SYS_MONITOR_BASE		0x00000000
#define CONFIG_SYS_MONITOR_LEN		(1 * 1024 * 1024)
#define CONFIG_SYS_MALLOC_LEN		(64 * 1024 * 1024)
#define CONFIG_SYS_BOOTM_LEN		(64 << 20)

/* The HF/QSPI layout permits up to 1 MiB large bootloader blob */
#define CONFIG_BOARD_SIZE_LIMIT		1048576

/* ENV setting */

#define CONFIG_EXTRA_ENV_SETTINGS \
	"usb_pgood_delay=2000\0" \
	"bootm_size=0x10000000 \0" \
	"prodsdbootargs=setenv bootargs rw rootwait earlycon root=/dev/mmcblk1p2 \0" \
	"prodemmcbootargs=setenv bootargs rw rootwait earlycon root=/dev/mmcblk0p2 \0" \
	"produsbbootargs=setenv bootargs rw rootwait earlycon root=/dev/sda2 \0" \
	"bootimage=unzip 0x4A080000 0x48080000; booti 0x48080000 - 0x48000000 \0" \
	"emmcload=ext4load mmc 0:2 0x48080000 boot/Image;ext4load mmc 0:2 0x48000000 boot/rzv2l-som-onekiwi.dtb;run prodemmcbootargs \0" \
	"sd1load=ext4load mmc 1:2 0x48080000 boot/Image;ext4load mmc 1:2 0x48000000 boot/rzv2l-som-onekiwi.dtb;run prodsdbootargs \0" \
	"usbload=ext4load usb 0:2 0x48080000 boot/Image;ext4load usb 0:2 0x48000000 boot/rzv2l-som-onekiwi.dtb;run produsbbootargs \0" \
	"bootusb=usb start; run usbload; run bootimage \0" \
	"bootcmd_check=if mmc dev 1; then run sd1load; else run emmcload; fi \0"
	

#define CONFIG_BOOTCOMMAND	"env default -a;run bootcmd_check;run bootimage"

/* For board */
/* Ethernet RAVB */
#define CONFIG_BITBANGMII_MULTI

#endif /* __RZV2L_SOM_ONEKIWI_H */