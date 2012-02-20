/**
 * Copyright (c) 2011 Pranav Sawargaonkar.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * @file intc.h
 * @author Pranav Sawargaonkar (pranav.sawargaonkar@gmail.com)
 * @brief OMAP3 interrupt controller APIs
 */
#ifndef __OMAP3_INTC_H__
#define __OMAP3_INTC_H__

#include <vmm_types.h>

/** OMAP3/OMAP343X INTC Base Physical Address */
#define OMAP3_MPU_INTC_BASE			0x48200000

/** OMAP3/OMAP343X INTC IRQ Count */
#define OMAP3_MPU_INTC_NRIRQ			96

#define OMAP3_MPU_INTC_EMUINT			0
#define OMAP3_MPU_INTC_COMMTX			1
#define OMAP3_MPU_INTC_COMMRX			2
#define OMAP3_MPU_INTC_BENCH			3
#define OMAP3_MPU_INTC_MCBSP2_ST_IRQ		4
#define OMAP3_MPU_INTC_MCBSP3_ST_IRQ		5
#define OMAP3_MPU_INTC_RESERVED0		6
#define OMAP3_MPU_INTC_SYS_NIRQ			7
#define OMAP3_MPU_INTC_RESERVED1		8
#define OMAP3_MPU_INTC_SMX_DBG_IRQ		9
#define OMAP3_MPU_INTC_SMX_APP_IRQ		10
#define OMAP3_MPU_INTC_PRCM_MPU_IRQ		11
#define OMAP3_MPU_INTC_SDMA_IRQ_0		12
#define OMAP3_MPU_INTC_SDMA_IRQ_1		13
#define OMAP3_MPU_INTC_SDMA_IRQ_2		14
#define OMAP3_MPU_INTC_SDMA_IRQ_3		15
#define OMAP3_MPU_INTC_MCBSP1_IRQ		16
#define OMAP3_MPU_INTC_MCBSP2_IRQ		17
#define OMAP3_MPU_INTC_RESERVED2		18
#define OMAP3_MPU_INTC_RESERVED3		19
#define OMAP3_MPU_INTC_GPMC_IRQ			20
#define OMAP3_MPU_INTC_SGX_IRQ			21
#define OMAP3_MPU_INTC_MCBSP3_IRQ		22
#define OMAP3_MPU_INTC_MCBSP4_IRQ		23
#define OMAP3_MPU_INTC_CAM_IRQ0			24
#define OMAP3_MPU_INTC_DSS_IRQ			25
#define OMAP3_MPU_INTC_MAIL_U0_MPU_IRQ		26
#define OMAP3_MPU_INTC_MCBSP5_IRQ		27
#define OMAP3_MPU_INTC_IVA2_MMU_IRQ		28
#define OMAP3_MPU_INTC_GPIO1_MPU_IRQ		29
#define OMAP3_MPU_INTC_GPIO2_MPU_IRQ		30
#define OMAP3_MPU_INTC_GPIO3_MPU_IRQ		31
#define OMAP3_MPU_INTC_GPIO4_MPU_IRQ		32
#define OMAP3_MPU_INTC_GPIO5_MPU_IRQ		33
#define OMAP3_MPU_INTC_GPIO6_MPU_IRQ		34
#define OMAP3_MPU_INTC_RESERVED4		35
#define OMAP3_MPU_INTC_WDT3_IRQ			36
#define OMAP3_MPU_INTC_GPT1_IRQ			37
#define OMAP3_MPU_INTC_GPT2_IRQ			38
#define OMAP3_MPU_INTC_GPT3_IRQ			39
#define OMAP3_MPU_INTC_GPT4_IRQ			40
#define OMAP3_MPU_INTC_GPT5_IRQ			41
#define OMAP3_MPU_INTC_GPT6_IRQ			42
#define OMAP3_MPU_INTC_GPT7_IRQ			43
#define OMAP3_MPU_INTC_GPT8_IRQ			44
#define OMAP3_MPU_INTC_GPT9_IRQ			45
#define OMAP3_MPU_INTC_GPT10_IRQ		46
#define OMAP3_MPU_INTC_GPT11_IRQ		47
#define OMAP3_MPU_INTC_SPI4_IRQ			48
#define OMAP3_MPU_INTC_RESERVED5		49
#define OMAP3_MPU_INTC_RESERVED6		50
#define OMAP3_MPU_INTC_RESERVED7		51
#define OMAP3_MPU_INTC_RESERVED8		52
#define OMAP3_MPU_INTC_RESERVED9		53
#define OMAP3_MPU_INTC_MCBSP4_IRQ_TX		54
#define OMAP3_MPU_INTC_MCBSP4_IRQ_RX		55
#define OMAP3_MPU_INTC_I2C1_IRQ			56
#define OMAP3_MPU_INTC_I2C2_IRQ			57
#define OMAP3_MPU_INTC_HDQ_IRQ			58
#define OMAP3_MPU_INTC_McBSP1_IRQ_TX		59
#define OMAP3_MPU_INTC_McBSP1_IRQ_RX		60
#define OMAP3_MPU_INTC_I2C3_IRQ			61
#define OMAP3_MPU_INTC_McBSP2_IRQ_TX		62
#define OMAP3_MPU_INTC_McBSP2_IRQ_RX		63
#define OMAP3_MPU_INTC_RESERVED10		64
#define OMAP3_MPU_INTC_SPI1_IRQ			65
#define OMAP3_MPU_INTC_SPI2_IRQ			66
#define OMAP3_MPU_INTC_RESERVED11		67
#define OMAP3_MPU_INTC_RESERVED12		68
#define OMAP3_MPU_INTC_RESERVED13		69
#define OMAP3_MPU_INTC_RESERVED14		70
#define OMAP3_MPU_INTC_RESERVED15		71
#define OMAP3_MPU_INTC_UART1_IRQ		72
#define OMAP3_MPU_INTC_UART2_IRQ		73
#define OMAP3_MPU_INTC_UART3_IRQ		74
#define OMAP3_MPU_INTC_PBIAS_IRQ		75
#define OMAP3_MPU_INTC_OHCI_IRQ			76
#define OMAP3_MPU_INTC_EHCI_IRQ			77
#define OMAP3_MPU_INTC_TLL_IRQ			78
#define OMAP3_MPU_INTC_RESERVED16		79
#define OMAP3_MPU_INTC_RESERVED17		80
#define OMAP3_MPU_INTC_MCBSP5_IRQ_TX		81
#define OMAP3_MPU_INTC_MCBSP5_IRQ_RX		82
#define OMAP3_MPU_INTC_MMC1_IRQ			83
#define OMAP3_MPU_INTC_RESERVED18		84
#define OMAP3_MPU_INTC_RESERVED19		85
#define OMAP3_MPU_INTC_MMC2_IRQ			86
#define OMAP3_MPU_INTC_MPU_ICR_IRQ		87
#define OMAP3_MPU_INTC_D2DFRINT			88
#define OMAP3_MPU_INTC_MCBSP3_IRQ_TX		89
#define OMAP3_MPU_INTC_MCBSP3_IRQ_RX		90
#define OMAP3_MPU_INTC_SPI3_IRQ			91
#define OMAP3_MPU_INTC_HSUSB_MC_NINT		92
#define OMAP3_MPU_INTC_HSUSB_DMA_NINT		93
#define OMAP3_MPU_INTC_MMC3_IRQ			94
#define OMAP3_MPU_INTC_RESERVED20		95

#define OMAP3_INTC_BITS_PER_REG			32

#define OMAP3_INTC_REVISION			0x00000000
#define OMAP3_INTC_REVISION_REV_S		0
#define OMAP3_INTC_REVISION_REV_M		0x000000FF

#define OMAP3_INTC_SYSCONFIG			0x00000010
#define OMAP3_INTC_SYSCONFIG_SOFTRST_S		1
#define OMAP3_INTC_SYSCONFIG_SOFTRST_M		0x00000002
#define OMAP3_INTC_SYSCONFIG_AUTOIDLE_S		0
#define OMAP3_INTC_SYSCONFIG_AUTOIDLE_M		0x00000001

#define OMAP3_INTC_SYSSTATUS			0x00000014
#define OMAP3_INTC_SYSSTATUS_RESETDONE_S 	0
#define OMAP3_INTC_SYSSTATUS_RESETDONE_M	0x00000001

#define OMAP3_INTC_SIR_IRQ			0x00000040
#define OMAP3_INTC_SIR_IRQ_SPURIOUSFLAG_S	7
#define OMAP3_INTC_SIR_IRQ_SPURIOUSFLAG_M	0xFFFFFF80
#define OMAP3_INTC_SIR_IRQ_ACTIVEIRQ_S		0
#define OMAP3_INTC_SIR_IRQ_ACTIVEIRQ_M		0x0000007F

#define OMAP3_INTC_SIR_FIQ			0x00000044
#define OMAP3_INTC_SIR_FIQ_SPURIOUSFLAG_S	7
#define OMAP3_INTC_SIR_FIQ_SPURIOUSFLAG_M	0xFFFFFF80
#define OMAP3_INTC_SIR_FIQ_ACTIVEIRQ_S		0
#define OMAP3_INTC_SIR_FIQ_ACTIVEIRQ_M		0x0000007F

#define OMAP3_INTC_CONTROL			0x00000048
#define OMAP3_INTC_CONTROL_NEWFIQAGR_S		1
#define OMAP3_INTC_CONTROL_NEWFIQAGR_M		0x00000002
#define OMAP3_INTC_CONTROL_NEWIRQAGR_S		0
#define OMAP3_INTC_CONTROL_NEWIRQAGR_M		0x00000001

#define OMAP3_INTC_PROTECTION			0x0000004C
#define OMAP3_INTC_PROTECTION_PROTECTION_S	0
#define OMAP3_INTC_PROTECTION_PROTECTION_M	0x00000001

#define OMAP3_INTC_IDLE				0x00000050
#define OMAP3_INTC_IDLE_TURBO_S			1
#define OMAP3_INTC_IDLE_TURBO_M			0x00000002
#define OMAP3_INTC_IDLE_FUNCIDLE_S		0
#define OMAP3_INTC_IDLE_FUNCIDLE_M		0x00000001

#define OMAP3_INTC_IRQ_PRIORITY			0x00000060
#define OMAP3_INTC_IRQ_PRIORITY_SPURIOUSFLAG_S	6
#define OMAP3_INTC_IRQ_PRIORITY_SPURIOUSFLAG_M	0xFFFFFFC0
#define OMAP3_INTC_IRQ_PRIORITY_ACTIVEIRQ_S	0
#define OMAP3_INTC_IRQ_PRIORITY_IRQPRIORITY_M	0x0000003F

#define OMAP3_INTC_FIQ_PRIORITY			0x00000064
#define OMAP3_INTC_FIQ_PRIORITY_SPURIOUSFLAG_S	6
#define OMAP3_INTC_FIQ_PRIORITY_SPURIOUSFLAG_M	0xFFFFFFC0
#define OMAP3_INTC_FIQ_PRIORITY_ACTIVEIRQ_S	0
#define OMAP3_INTC_FIQ_PRIORITY_IRQPRIORITY_M	0x0000003F

#define OMAP3_INTC_THRESHOLD			0x00000068
#define OMAP3_INTC_THRESHOLD_PRIOTHRESHOLD_S	0
#define OMAP3_INTC_THRESHOLD_PRIOTHRESHOLD_M	0x000000FF

#define OMAP3_INTC_ITR(n)			(0x00000080+(0x20*(n)))

#define OMAP3_INTC_MIR(n)			(0x00000084+(0x20*(n)))

#define OMAP3_INTC_MIR_CLEAR(n)			(0x00000088+(0x20*(n)))

#define OMAP3_INTC_MIR_SET(n)			(0x0000008C+(0x20*(n)))

#define OMAP3_INTC_ISR_SET(n)			(0x00000090+(0x20*(n)))

#define OMAP3_INTC_ISR_CLEAR(n)			(0x00000094+(0x20*(n)))

#define OMAP3_INTC_PENDING_IRQ(n)		(0x00000098+(0x20*(n)))

#define OMAP3_INTC_PENDING_FIQ(n)		(0x0000009C+(0x20*(n)))

#define OMAP3_INTC_ILR(m)			(0x00000100+(0x04*(m)))
#define OMAP3_INTC_ILR_PRIORITY_S		2
#define OMAP3_INTC_ILR_PRIORITY_M		0x000000FC
#define OMAP3_INTC_ILR_FIQNIRQ_S		1
#define OMAP3_INTC_ILR_FIQNIRQ_M		0x00000001

int omap3_intc_active_irq(u32 cpu_irq);
int omap3_intc_ack_irq(u32 irq);
int omap3_intc_mask(u32 irq);
int omap3_intc_unmask(u32 irq);
int omap3_intc_init(void);

#endif
