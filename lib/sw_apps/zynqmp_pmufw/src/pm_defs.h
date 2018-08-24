/*
 * Copyright (C) 2014 - 2015 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Except as contained in this notice, the name of the Xilinx shall not be used
 * in advertising or otherwise to promote the sale, use or other dealings in
 * this Software without prior written authorization from Xilinx.
 */

/*********************************************************************
 * Definitions of commonly used enums that have to match definitions
 * that all software layer in the system use.
 *********************************************************************/

#ifndef PM_DEFS_H_
#define PM_DEFS_H_

#include "pmu_global.h"

/*********************************************************************
 * Macro definitions
 ********************************************************************/

/*
 * Version number is a 32bit value, like:
 * (PM_VERSION_MAJOR << 16) | PM_VERSION_MINOR
 */
#define PM_VERSION_MAJOR    1U
#define PM_VERSION_MINOR    1U

#define PM_VERSION	((PM_VERSION_MAJOR << 16) | PM_VERSION_MINOR)

/*
 * Capabilities common for all slave nodes (common capabilities should take
 * lower 16 bits, specific capabilities of each slave take higher 16 bits)
 */
#define PM_CAP_ACCESS       0x1U
#define PM_CAP_CONTEXT      0x2U
#define PM_CAP_WAKEUP       0x4U

/* Usage status, returned by PmGetNodeStatus */
#define PM_USAGE_CURRENT_MASTER 0x1U
#define PM_USAGE_OTHER_MASTER   0x2U

#define MAX_LATENCY (~0U)
#define MAX_QOS     100U

/* System shutdown macros */
#define PMF_SHUTDOWN_TYPE_SHUTDOWN	0U
#define PMF_SHUTDOWN_TYPE_RESET		1U

#define PMF_SHUTDOWN_SUBTYPE_SUBSYSTEM	0U
#define PMF_SHUTDOWN_SUBTYPE_PS_ONLY	1U
#define PMF_SHUTDOWN_SUBTYPE_SYSTEM	2U

/* PM API ids */
#define PM_GET_API_VERSION		1U
#define PM_SET_CONFIGURATION		2U
#define PM_GET_NODE_STATUS		3U
#define PM_GET_OP_CHARACTERISTIC	4U
#define PM_REGISTER_NOTIFIER		5U

#define PM_REQUEST_SUSPEND		6U
#define PM_SELF_SUSPEND			7U
#define PM_FORCE_POWERDOWN		8U
#define PM_ABORT_SUSPEND		9U
#define PM_REQUEST_WAKEUP		10U
#define PM_SET_WAKEUP_SOURCE		11U
#define PM_SYSTEM_SHUTDOWN		12U

#define PM_REQUEST_NODE			13U
#define PM_RELEASE_NODE			14U
#define PM_SET_REQUIREMENT		15U
#define PM_SET_MAX_LATENCY		16U

#define PM_RESET_ASSERT			17U
#define PM_RESET_GET_STATUS		18U
#define PM_MMIO_WRITE			19U
#define PM_MMIO_READ			20U

#define PM_INIT_FINALIZE		21U

#define PM_FPGA_LOAD			22U
#define PM_FPGA_GET_STATUS		23U

#define PM_GET_CHIPID			24U

#define PM_SECURE_RSA_AES		25U
#define PM_SECURE_SHA			26U
#define PM_SECURE_RSA			27U

#define PM_PINCTRL_REQUEST		28U
#define PM_PINCTRL_RELEASE		29U
#define PM_PINCTRL_GET_FUNCTION		30U
#define PM_PINCTRL_SET_FUNCTION		31U
#define PM_PINCTRL_CONFIG_PARAM_GET	32U
#define PM_PINCTRL_CONFIG_PARAM_SET	33U

#define PM_IOCTL			34U

#define PM_QUERY_DATA			35U

#define PM_CLOCK_ENABLE			36U
#define PM_CLOCK_DISABLE		37U
#define PM_CLOCK_GETSTATE		38U
#define PM_CLOCK_SETDIVIDER		39U
#define PM_CLOCK_GETDIVIDER		40U
#define PM_CLOCK_SETRATE		41U
#define PM_CLOCK_GETRATE		42U
#define PM_CLOCK_SETPARENT		43U
#define PM_CLOCK_GETPARENT		44U

#define PM_SECURE_IMAGE			45U
#define PM_FPGA_READ			46U
#define PM_SECURE_AES			47U

#define PM_PLL_SET_PARAM		48U
#define PM_PLL_GET_PARAM		49U
#define PM_PLL_SET_MODE			50U
#define PM_PLL_GET_MODE			51U

#define PM_API_MIN	PM_GET_API_VERSION
#define PM_API_MAX	PM_PLL_GET_MODE

/* PM API callback ids */
#define PM_INIT_SUSPEND_CB      30U
#define PM_ACKNOWLEDGE_CB       31U
#define PM_NOTIFY_CB            32U

/* Nodes */
#define NODE_UNKNOWN    0U
#define NODE_APU        1U
#define NODE_APU_0      2U
#define NODE_APU_1      3U
#define NODE_APU_2      4U
#define NODE_APU_3      5U
#define NODE_RPU        6U
#define NODE_RPU_0      7U
#define NODE_RPU_1      8U
#define NODE_PLD        9U
#define NODE_FPD        10U
#define NODE_OCM_BANK_0 11U
#define NODE_OCM_BANK_1 12U
#define NODE_OCM_BANK_2 13U
#define NODE_OCM_BANK_3 14U
#define NODE_TCM_0_A    15U
#define NODE_TCM_0_B    16U
#define NODE_TCM_1_A    17U
#define NODE_TCM_1_B    18U
#define NODE_L2         19U
#define NODE_GPU_PP_0   20U
#define NODE_GPU_PP_1   21U
#define NODE_USB_0      22U
#define NODE_USB_1      23U
#define NODE_TTC_0      24U
#define NODE_TTC_1      25U
#define NODE_TTC_2      26U
#define NODE_TTC_3      27U
#define NODE_SATA       28U
#define NODE_ETH_0      29U
#define NODE_ETH_1      30U
#define NODE_ETH_2      31U
#define NODE_ETH_3      32U
#define NODE_UART_0     33U
#define NODE_UART_1     34U
#define NODE_SPI_0      35U
#define NODE_SPI_1      36U
#define NODE_I2C_0      37U
#define NODE_I2C_1      38U
#define NODE_SD_0       39U
#define NODE_SD_1       40U
#define NODE_DP         41U
#define NODE_GDMA       42U
#define NODE_ADMA       43U
#define NODE_NAND       44U
#define NODE_QSPI       45U
#define NODE_GPIO       46U
#define NODE_CAN_0      47U
#define NODE_CAN_1      48U
#define NODE_EXTERN     49U
#define NODE_APLL       50U
#define NODE_VPLL       51U
#define NODE_DPLL       52U
#define NODE_RPLL       53U
#define NODE_IOPLL      54U
#define NODE_DDR        55U
#define NODE_IPI_APU    56U
#define NODE_IPI_RPU_0  57U
#define NODE_GPU        58U
#define NODE_PCIE       59U
#define NODE_PCAP       60U
#define NODE_RTC        61U
#define NODE_LPD        62U
#define NODE_VCU        63U
#define NODE_IPI_RPU_1  64U
#define NODE_IPI_PL_0   65U
#define NODE_IPI_PL_1   66U
#define NODE_IPI_PL_2   67U
#define NODE_IPI_PL_3   68U
#define NODE_PL         69U
#define NODE_SWDT_1	72U

#define NODE_MIN        NODE_APU
#define NODE_MAX        NODE_SWDT_1

/* Request acknowledge argument values */
#define REQUEST_ACK_NO          1U
#define REQUEST_ACK_BLOCKING    2U
#define REQUEST_ACK_NON_BLOCKING 3U
#define REQUEST_ACK_MIN         REQUEST_ACK_NO
#define REQUEST_ACK_MAX         REQUEST_ACK_NON_BLOCKING

/* Abort reason argument */
#define ABORT_REASON_WKUP_EVENT 100U
#define ABORT_REASON_PU_BUSY    101U
#define ABORT_REASON_NO_PWRDN   102U
#define ABORT_REASON_UNKNOWN    103U

#define ABORT_REASON_MIN    ABORT_REASON_WKUP_EVENT
#define ABORT_REASON_MAX    ABORT_REASON_UNKNOWN

/* Suspend reason argument */
#define SUSPEND_REASON_PU_REQ       201U
#define SUSPEND_REASON_ALERT        202U
#define SUSPEND_REASON_SYS_SHUTDOWN 203U

#define SUSPEND_REASON_MIN  SUSPEND_REASON_PU_REQ
#define SUSPEND_REASON_MAX  SUSPEND_REASON_SYS_SHUTDOWN

/* State arguments of the self suspend (master specific) */
#define PM_APU_STATE_CPU_IDLE           0x0U
#define PM_APU_STATE_SUSPEND_TO_RAM     0xFU

/* Operating characteristics type */
#define PM_OPCHAR_TYPE_POWER    1U
#define PM_OPCHAR_TYPE_TEMP     2U
#define PM_OPCHAR_TYPE_LATENCY  3U

/* PM events */
#define EVENT_NONE              0U
#define EVENT_STATE_CHANGE      0x1U
#define EVENT_ZERO_USERS        0x2U

/* Power management specific return error statuses */
#define XST_PM_INTERNAL		2000L
#define XST_PM_CONFLICT		2001L
#define XST_PM_NO_ACCESS	2002L
#define XST_PM_INVALID_NODE	2003L
#define XST_PM_DOUBLE_REQ	2004L
#define XST_PM_ABORT_SUSPEND	2005L
#define XST_PM_TIMEOUT		2006L
#define XST_PM_NODE_USED	2007L

/* Reset configuration argument */
#define PM_RESET_ACTION_RELEASE	0U
#define PM_RESET_ACTION_ASSERT	1U
#define PM_RESET_ACTION_PULSE	2U

/* Reset lines */
#define PM_RESET_BASE			1000U
#define PM_RESET_PCIE_CFG		(PM_RESET_BASE + 0U)
#define PM_RESET_PCIE_BRIDGE		(PM_RESET_BASE + 1U)
#define PM_RESET_PCIE_CTRL		(PM_RESET_BASE + 2U)
#define PM_RESET_DP			(PM_RESET_BASE + 3U)
#define PM_RESET_SWDT_CRF		(PM_RESET_BASE + 4U)
#define PM_RESET_AFI_FM5		(PM_RESET_BASE + 5U)
#define PM_RESET_AFI_FM4		(PM_RESET_BASE + 6U)
#define PM_RESET_AFI_FM3		(PM_RESET_BASE + 7U)
#define PM_RESET_AFI_FM2		(PM_RESET_BASE + 8U)
#define PM_RESET_AFI_FM1		(PM_RESET_BASE + 9U)
#define PM_RESET_AFI_FM0		(PM_RESET_BASE + 10U)
#define PM_RESET_GDMA			(PM_RESET_BASE + 11U)
#define PM_RESET_GPU_PP1		(PM_RESET_BASE + 12U)
#define PM_RESET_GPU_PP0		(PM_RESET_BASE + 13U)
#define PM_RESET_GPU			(PM_RESET_BASE + 14U)
#define PM_RESET_GT			(PM_RESET_BASE + 15U)
#define PM_RESET_SATA			(PM_RESET_BASE + 16U)
#define PM_RESET_ACPU3_PWRON		(PM_RESET_BASE + 17U)
#define PM_RESET_ACPU2_PWRON		(PM_RESET_BASE + 18U)
#define PM_RESET_ACPU1_PWRON		(PM_RESET_BASE + 19U)
#define PM_RESET_ACPU0_PWRON		(PM_RESET_BASE + 20U)
#define PM_RESET_APU_L2			(PM_RESET_BASE + 21U)
#define PM_RESET_ACPU3			(PM_RESET_BASE + 22U)
#define PM_RESET_ACPU2			(PM_RESET_BASE + 23U)
#define PM_RESET_ACPU1			(PM_RESET_BASE + 24U)
#define PM_RESET_ACPU0			(PM_RESET_BASE + 25U)
#define PM_RESET_DDR			(PM_RESET_BASE + 26U)
#define PM_RESET_APM_FPD		(PM_RESET_BASE + 27U)
#define PM_RESET_SOFT			(PM_RESET_BASE + 28U)
#define PM_RESET_GEM0			(PM_RESET_BASE + 29U)
#define PM_RESET_GEM1			(PM_RESET_BASE + 30U)
#define PM_RESET_GEM2			(PM_RESET_BASE + 31U)
#define PM_RESET_GEM3			(PM_RESET_BASE + 32U)
#define PM_RESET_QSPI			(PM_RESET_BASE + 33U)
#define PM_RESET_UART0			(PM_RESET_BASE + 34U)
#define PM_RESET_UART1			(PM_RESET_BASE + 35U)
#define PM_RESET_SPI0			(PM_RESET_BASE + 36U)
#define PM_RESET_SPI1			(PM_RESET_BASE + 37U)
#define PM_RESET_SDIO0			(PM_RESET_BASE + 38U)
#define PM_RESET_SDIO1			(PM_RESET_BASE + 39U)
#define PM_RESET_CAN0			(PM_RESET_BASE + 40U)
#define PM_RESET_CAN1			(PM_RESET_BASE + 41U)
#define PM_RESET_I2C0			(PM_RESET_BASE + 42U)
#define PM_RESET_I2C1			(PM_RESET_BASE + 43U)
#define PM_RESET_TTC0			(PM_RESET_BASE + 44U)
#define PM_RESET_TTC1			(PM_RESET_BASE + 45U)
#define PM_RESET_TTC2			(PM_RESET_BASE + 46U)
#define PM_RESET_TTC3			(PM_RESET_BASE + 47U)
#define PM_RESET_SWDT_CRL		(PM_RESET_BASE + 48U)
#define PM_RESET_NAND			(PM_RESET_BASE + 49U)
#define PM_RESET_ADMA			(PM_RESET_BASE + 50U)
#define PM_RESET_GPIO			(PM_RESET_BASE + 51U)
#define PM_RESET_IOU_CC			(PM_RESET_BASE + 52U)
#define PM_RESET_TIMESTAMP		(PM_RESET_BASE + 53U)
#define PM_RESET_RPU_R50		(PM_RESET_BASE + 54U)
#define PM_RESET_RPU_R51		(PM_RESET_BASE + 55U)
#define PM_RESET_RPU_AMBA		(PM_RESET_BASE + 56U)
#define PM_RESET_OCM			(PM_RESET_BASE + 57U)
#define PM_RESET_RPU_PGE		(PM_RESET_BASE + 58U)
#define PM_RESET_USB0_CORERESET		(PM_RESET_BASE + 59U)
#define PM_RESET_USB1_CORERESET		(PM_RESET_BASE + 60U)
#define PM_RESET_USB0_HIBERRESET	(PM_RESET_BASE + 61U)
#define PM_RESET_USB1_HIBERRESET	(PM_RESET_BASE + 62U)
#define PM_RESET_USB0_APB		(PM_RESET_BASE + 63U)
#define PM_RESET_USB1_APB		(PM_RESET_BASE + 64U)
#define PM_RESET_IPI			(PM_RESET_BASE + 65U)
#define PM_RESET_APM_LPD		(PM_RESET_BASE + 66U)
#define PM_RESET_RTC			(PM_RESET_BASE + 67U)
#define PM_RESET_SYSMON			(PM_RESET_BASE + 68U)
#define PM_RESET_AFI_FM6		(PM_RESET_BASE + 69U)
#define PM_RESET_LPD_SWDT		(PM_RESET_BASE + 70U)
#define PM_RESET_FPD			(PM_RESET_BASE + 71U)
#define PM_RESET_RPU_DBG1		(PM_RESET_BASE + 72U)
#define PM_RESET_RPU_DBG0		(PM_RESET_BASE + 73U)
#define PM_RESET_DBG_LPD		(PM_RESET_BASE + 74U)
#define PM_RESET_DBG_FPD		(PM_RESET_BASE + 75U)
#define PM_RESET_APLL			(PM_RESET_BASE + 76U)
#define PM_RESET_DPLL			(PM_RESET_BASE + 77U)
#define PM_RESET_VPLL			(PM_RESET_BASE + 78U)
#define PM_RESET_IOPLL			(PM_RESET_BASE + 79U)
#define PM_RESET_RPLL			(PM_RESET_BASE + 80U)
#define PM_RESET_GPO3_PL_0		(PM_RESET_BASE + 81U)
#define PM_RESET_GPO3_PL_1		(PM_RESET_BASE + 82U)
#define PM_RESET_GPO3_PL_2		(PM_RESET_BASE + 83U)
#define PM_RESET_GPO3_PL_3		(PM_RESET_BASE + 84U)
#define PM_RESET_GPO3_PL_4		(PM_RESET_BASE + 85U)
#define PM_RESET_GPO3_PL_5		(PM_RESET_BASE + 86U)
#define PM_RESET_GPO3_PL_6		(PM_RESET_BASE + 87U)
#define PM_RESET_GPO3_PL_7		(PM_RESET_BASE + 88U)
#define PM_RESET_GPO3_PL_8		(PM_RESET_BASE + 89U)
#define PM_RESET_GPO3_PL_9		(PM_RESET_BASE + 90U)
#define PM_RESET_GPO3_PL_10		(PM_RESET_BASE + 91U)
#define PM_RESET_GPO3_PL_11		(PM_RESET_BASE + 92U)
#define PM_RESET_GPO3_PL_12		(PM_RESET_BASE + 93U)
#define PM_RESET_GPO3_PL_13		(PM_RESET_BASE + 94U)
#define PM_RESET_GPO3_PL_14		(PM_RESET_BASE + 95U)
#define PM_RESET_GPO3_PL_15		(PM_RESET_BASE + 96U)
#define PM_RESET_GPO3_PL_16		(PM_RESET_BASE + 97U)
#define PM_RESET_GPO3_PL_17		(PM_RESET_BASE + 98U)
#define PM_RESET_GPO3_PL_18		(PM_RESET_BASE + 99U)
#define PM_RESET_GPO3_PL_19		(PM_RESET_BASE + 100U)
#define PM_RESET_GPO3_PL_20		(PM_RESET_BASE + 101U)
#define PM_RESET_GPO3_PL_21		(PM_RESET_BASE + 102U)
#define PM_RESET_GPO3_PL_22		(PM_RESET_BASE + 103U)
#define PM_RESET_GPO3_PL_23		(PM_RESET_BASE + 104U)
#define PM_RESET_GPO3_PL_24		(PM_RESET_BASE + 105U)
#define PM_RESET_GPO3_PL_25		(PM_RESET_BASE + 106U)
#define PM_RESET_GPO3_PL_26		(PM_RESET_BASE + 107U)
#define PM_RESET_GPO3_PL_27		(PM_RESET_BASE + 108U)
#define PM_RESET_GPO3_PL_28		(PM_RESET_BASE + 109U)
#define PM_RESET_GPO3_PL_29		(PM_RESET_BASE + 110U)
#define PM_RESET_GPO3_PL_30		(PM_RESET_BASE + 111U)
#define PM_RESET_GPO3_PL_31		(PM_RESET_BASE + 112U)
#define PM_RESET_RPU_LS			(PM_RESET_BASE + 113U)
#define PM_RESET_PS_ONLY		(PM_RESET_BASE + 114U)
#define PM_RESET_PL				(PM_RESET_BASE + 115U)
#define PM_RESET_GPIO5_EMIO_92	(PM_RESET_BASE + 116U)
#define PM_RESET_GPIO5_EMIO_93	(PM_RESET_BASE + 117U)
#define PM_RESET_GPIO5_EMIO_94	(PM_RESET_BASE + 118U)
#define PM_RESET_GPIO5_EMIO_95	(PM_RESET_BASE + 119U)

/* Clock IDs */
#define PM_CLOCK_IOPLL			0U
#define PM_CLOCK_RPLL			1U
#define PM_CLOCK_APLL			2U
#define PM_CLOCK_DPLL			3U
#define PM_CLOCK_VPLL			4U
#define PM_CLOCK_IOPLL_TO_FPD		5U
#define PM_CLOCK_RPLL_TO_FPD		6U
#define PM_CLOCK_APLL_TO_LPD		7U
#define PM_CLOCK_DPLL_TO_LPD		8U
#define PM_CLOCK_VPLL_TO_LPD		9U
#define PM_CLOCK_ACPU			10U
#define PM_CLOCK_ACPU_HALF		11U
#define PM_CLOCK_DBG_FPD		12U
#define PM_CLOCK_DBG_LPD		13U
#define PM_CLOCK_DBG_TRACE		14U
#define PM_CLOCK_DBG_TSTMP		15U
#define PM_CLOCK_DP_VIDEO_REF		16U
#define PM_CLOCK_DP_AUDIO_REF		17U
#define PM_CLOCK_DP_STC_REF		18U
#define PM_CLOCK_GDMA_REF		19U
#define PM_CLOCK_DPDMA_REF		20U
#define PM_CLOCK_DDR_REF		21U
#define PM_CLOCK_SATA_REF		22U
#define PM_CLOCK_PCIE_REF		23U
#define PM_CLOCK_GPU_REF		24U
#define PM_CLOCK_GPU_PP0_REF		25U
#define PM_CLOCK_GPU_PP1_REF		26U
#define PM_CLOCK_TOPSW_MAIN		27U
#define PM_CLOCK_TOPSW_LSBUS		28U
#define PM_CLOCK_GTGREF0_REF		29U
#define PM_CLOCK_LPD_SWITCH		30U
#define PM_CLOCK_LPD_LSBUS		31U
#define PM_CLOCK_USB0_BUS_REF		32U
#define PM_CLOCK_USB1_BUS_REF		33U
#define PM_CLOCK_USB3_DUAL_REF		34U
#define PM_CLOCK_USB0			35U
#define PM_CLOCK_USB1			36U
#define PM_CLOCK_CPU_R5			37U
#define PM_CLOCK_CPU_R5_CORE		38U
#define PM_CLOCK_CSU_SPB		39U
#define PM_CLOCK_CSU_PLL		40U
#define PM_CLOCK_PCAP			41U
#define PM_CLOCK_IOU_SWITCH		42U
#define PM_CLOCK_GEM_TSU_REF		43U
#define PM_CLOCK_GEM_TSU		44U
#define PM_CLOCK_GEM0_REF		45U
#define PM_CLOCK_GEM1_REF		46U
#define PM_CLOCK_GEM2_REF		47U
#define PM_CLOCK_GEM3_REF		48U
#define PM_CLOCK_GEM0_TX		49U
#define PM_CLOCK_GEM1_TX		50U
#define PM_CLOCK_GEM2_TX		51U
#define PM_CLOCK_GEM3_TX		52U
#define PM_CLOCK_QSPI_REF		53U
#define PM_CLOCK_SDIO0_REF		54U
#define PM_CLOCK_SDIO1_REF		55U
#define PM_CLOCK_UART0_REF		56U
#define PM_CLOCK_UART1_REF		57U
#define PM_CLOCK_SPI0_REF		58U
#define PM_CLOCK_SPI1_REF		59U
#define PM_CLOCK_NAND_REF		60U
#define PM_CLOCK_I2C0_REF		61U
#define PM_CLOCK_I2C1_REF		62U
#define PM_CLOCK_CAN0_REF		63U
#define PM_CLOCK_CAN1_REF		64U
#define PM_CLOCK_CAN0			65U
#define PM_CLOCK_CAN1			66U
#define PM_CLOCK_DLL_REF		67U
#define PM_CLOCK_ADMA_REF		68U
#define PM_CLOCK_TIMESTAMP_REF		69U
#define PM_CLOCK_AMS_REF		70U
#define PM_CLOCK_PL0_REF		71U
#define PM_CLOCK_PL1_REF		72U
#define PM_CLOCK_PL2_REF		73U
#define PM_CLOCK_PL3_REF		74U
#define PM_CLOCK_WDT			75U
#define PM_CLOCK_IOPLL_INT		76U
#define PM_CLOCK_IOPLL_PRE_SRC		77U
#define PM_CLOCK_IOPLL_HALF		78U
#define PM_CLOCK_IOPLL_INT_MUX		79U
#define PM_CLOCK_IOPLL_POST_SRC		80U
#define PM_CLOCK_RPLL_INT		81U
#define PM_CLOCK_RPLL_PRE_SRC		82U
#define PM_CLOCK_RPLL_HALF		83U
#define PM_CLOCK_RPLL_INT_MUX		84U
#define PM_CLOCK_RPLL_POST_SRC		85U
#define PM_CLOCK_APLL_INT		86U
#define PM_CLOCK_APLL_PRE_SRC		87U
#define PM_CLOCK_APLL_HALF		88U
#define PM_CLOCK_APLL_INT_MUX		89U
#define PM_CLOCK_APLL_POST_SRC		90U
#define PM_CLOCK_DPLL_INT		91U
#define PM_CLOCK_DPLL_PRE_SRC		92U
#define PM_CLOCK_DPLL_HALF		93U
#define PM_CLOCK_DPLL_INT_MUX		94U
#define PM_CLOCK_DPLL_POST_SRC		95U
#define PM_CLOCK_VPLL_INT		96U
#define PM_CLOCK_VPLL_PRE_SRC		97U
#define PM_CLOCK_VPLL_HALF		98U
#define PM_CLOCK_VPLL_INT_MUX		99U
#define PM_CLOCK_VPLL_POST_SRC		100U
#define PM_CLOCK_CAN0_MIO		101U
#define PM_CLOCK_CAN1_MIO		102U
#define PM_CLOCK_ACPU_FULL		103U
#define PM_CLOCK_EXT_PSS_REF		104U
#define PM_CLOCK_EXT_VIDEO		105U
#define PM_CLOCK_EXT_PSS_ALT_REF	106U
#define PM_CLOCK_EXT_AUX_REF		107U
#define PM_CLOCK_EXT_GT_CRX_REF		108U
#define PM_CLOCK_EXT_SWDT0		109U
#define PM_CLOCK_EXT_SWDT1		110U
#define PM_CLOCK_EXT_GEM0_EMIO		111U
#define PM_CLOCK_EXT_GEM1_EMIO		112U
#define PM_CLOCK_EXT_GEM2_EMIO		113U
#define PM_CLOCK_EXT_GEM3_EMIO		114U
#define PM_CLOCK_EXT_MIO50_OR_MIO51	115U
#define PM_CLOCK_EXT_MIO0		116U
#define PM_CLOCK_EXT_MIO1		117U
#define PM_CLOCK_EXT_MIO2		118U
#define PM_CLOCK_EXT_MIO3		119U
#define PM_CLOCK_EXT_MIO4		120U
#define PM_CLOCK_EXT_MIO5		121U
#define PM_CLOCK_EXT_MIO6		122U
#define PM_CLOCK_EXT_MIO7		123U
#define PM_CLOCK_EXT_MIO8		124U
#define PM_CLOCK_EXT_MIO9		125U
#define PM_CLOCK_EXT_MIO10		126U
#define PM_CLOCK_EXT_MIO11		127U
#define PM_CLOCK_EXT_MIO12		128U
#define PM_CLOCK_EXT_MIO13		129U
#define PM_CLOCK_EXT_MIO14		130U
#define PM_CLOCK_EXT_MIO15		131U
#define PM_CLOCK_EXT_MIO16		132U
#define PM_CLOCK_EXT_MIO17		133U
#define PM_CLOCK_EXT_MIO18		134U
#define PM_CLOCK_EXT_MIO19		135U
#define PM_CLOCK_EXT_MIO20		136U
#define PM_CLOCK_EXT_MIO21		137U
#define PM_CLOCK_EXT_MIO22		138U
#define PM_CLOCK_EXT_MIO23		139U
#define PM_CLOCK_EXT_MIO24		140U
#define PM_CLOCK_EXT_MIO25		141U
#define PM_CLOCK_EXT_MIO26		142U
#define PM_CLOCK_EXT_MIO27		143U
#define PM_CLOCK_EXT_MIO28		144U
#define PM_CLOCK_EXT_MIO29		145U
#define PM_CLOCK_EXT_MIO30		146U
#define PM_CLOCK_EXT_MIO31		147U
#define PM_CLOCK_EXT_MIO32		148U
#define PM_CLOCK_EXT_MIO33		149U
#define PM_CLOCK_EXT_MIO34		150U
#define PM_CLOCK_EXT_MIO35		151U
#define PM_CLOCK_EXT_MIO36		152U
#define PM_CLOCK_EXT_MIO37		153U
#define PM_CLOCK_EXT_MIO38		154U
#define PM_CLOCK_EXT_MIO39		155U
#define PM_CLOCK_EXT_MIO40		156U
#define PM_CLOCK_EXT_MIO41		157U
#define PM_CLOCK_EXT_MIO42		158U
#define PM_CLOCK_EXT_MIO43		159U
#define PM_CLOCK_EXT_MIO44		160U
#define PM_CLOCK_EXT_MIO45		161U
#define PM_CLOCK_EXT_MIO46		162U
#define PM_CLOCK_EXT_MIO47		163U
#define PM_CLOCK_EXT_MIO48		164U
#define PM_CLOCK_EXT_MIO49		165U
#define PM_CLOCK_EXT_MIO50		166U
#define PM_CLOCK_EXT_MIO51		167U
#define PM_CLOCK_EXT_MIO52		168U
#define PM_CLOCK_EXT_MIO53		169U
#define PM_CLOCK_EXT_MIO54		170U
#define PM_CLOCK_EXT_MIO55		171U
#define PM_CLOCK_EXT_MIO56		172U
#define PM_CLOCK_EXT_MIO57		173U
#define PM_CLOCK_EXT_MIO58		174U
#define PM_CLOCK_EXT_MIO59		175U
#define PM_CLOCK_EXT_MIO60		176U
#define PM_CLOCK_EXT_MIO61		177U
#define PM_CLOCK_EXT_MIO62		178U
#define PM_CLOCK_EXT_MIO63		179U
#define PM_CLOCK_EXT_MIO64		180U
#define PM_CLOCK_EXT_MIO65		181U
#define PM_CLOCK_EXT_MIO66		182U
#define PM_CLOCK_EXT_MIO67		183U
#define PM_CLOCK_EXT_MIO68		184U
#define PM_CLOCK_EXT_MIO69		185U
#define PM_CLOCK_EXT_MIO70		186U
#define PM_CLOCK_EXT_MIO71		187U
#define PM_CLOCK_EXT_MIO72		188U
#define PM_CLOCK_EXT_MIO73		189U
#define PM_CLOCK_EXT_MIO74		190U
#define PM_CLOCK_EXT_MIO75		191U
#define PM_CLOCK_EXT_MIO76		192U
#define PM_CLOCK_EXT_MIO77		193U

#define PM_CLOCK_DIV0_ID		0U
#define PM_CLOCK_DIV1_ID		1U

/* PLL parameters */
#define PM_PLL_PARAM_DIV2		0U
#define PM_PLL_PARAM_FBDIV		1U
#define PM_PLL_PARAM_DATA		2U
#define PM_PLL_PARAM_PRE_SRC		3U
#define PM_PLL_PARAM_POST_SRC		4U
#define PM_PLL_PARAM_LOCK_DLY		5U
#define PM_PLL_PARAM_LOCK_CNT		6U
#define PM_PLL_PARAM_LFHF		7U
#define PM_PLL_PARAM_CP			8U
#define PM_PLL_PARAM_RES		9U

/* PLL modes */
#define PM_PLL_MODE_RESET		0U
#define PM_PLL_MODE_INTEGER		1U
#define PM_PLL_MODE_FRACTIONAL		2U

#endif
