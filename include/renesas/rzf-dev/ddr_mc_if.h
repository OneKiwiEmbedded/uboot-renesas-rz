// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2021, Renesas Electronics Corporation. All rights reserved.
 */

#ifndef __DDR_MC_IF_H__
#define __DDR_MC_IF_H__

#include <renesas/rzf-dev/ddr_mc_regs.h>

#define	AN_VERSION		"2.09"
#define	AN_VERSION_0		"1.12"

#define MC_INIT_NUM			(436)

#define LP_CMD_OFFSET		(0)

#define DDRMC_R000		DENALI_CTL_00
#define DDRMC_R001		DENALI_CTL_11
#define DDRMC_R002		DENALI_CTL_14
#define DDRMC_R003		DENALI_CTL_15
#define DDRMC_R004		DENALI_CTL_56
#define DDRMC_R005		DENALI_CTL_59
#define DDRMC_R006		DENALI_CTL_60
#define DDRMC_R007		DENALI_CTL_64
#define DDRMC_R008		DENALI_CTL_67
#define DDRMC_R009		DENALI_CTL_70
#define DDRMC_R010		DENALI_CTL_71
#define DDRMC_R011		DENALI_CTL_73
#define DDRMC_R012		DENALI_CTL_74
#define DDRMC_R013		DENALI_CTL_75
#define DDRMC_R014		DENALI_CTL_76
#define DDRMC_R015		DENALI_CTL_81
#define DDRMC_R016		DENALI_CTL_82
#define DDRMC_R017		DENALI_CTL_83
#define DDRMC_R018		DENALI_CTL_84
#define DDRMC_R019		DENALI_CTL_133
#define DDRMC_R020		DENALI_CTL_134
#define DDRMC_R021		DENALI_CTL_146
#define DDRMC_R022		DENALI_CTL_147
#define DDRMC_R023		DENALI_CTL_154
#define DDRMC_R024		DENALI_CTL_155
#define DDRMC_R025		DENALI_CTL_176
#define DDRMC_R026		DENALI_CTL_177
#define DDRMC_R027		DENALI_CTL_391
#define DDRMC_R028		DENALI_CTL_398
#define DDRMC_R029		DENALI_CTL_401
#define DDRMC_R030		DENALI_CTL_403
#define DDRMC_R031		DENALI_CTL_404
#define DDRMC_R032		DENALI_CTL_405
#define DDRMC_R033		DENALI_CTL_406
#define DDRMC_R034		DENALI_CTL_407
#define DDRMC_R035		DENALI_CTL_408
#define DDRMC_R036		DENALI_CTL_409
#define DDRMC_R037		DENALI_CTL_410
#define DDRMC_R038		DENALI_CTL_411
#define DDRMC_R039		DENALI_CTL_413
#define DDRMC_R040		DENALI_CTL_414
#define DDRMC_R041		DENALI_CTL_415
#define DDRMC_R042		DENALI_CTL_416
#define DDRMC_R043		DENALI_CTL_417
#define DDRMC_R044		DENALI_CTL_418

#endif	// __DDR_MC_IF_H__