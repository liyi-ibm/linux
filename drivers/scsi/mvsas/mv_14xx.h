/*
 * Marvell 88SE14xx hardware specific head file
 *
 * Copyright 2007 Red Hat, Inc.
 * Copyright 2008 Marvell. <kewei@marvell.com>
 * Copyright 2009-2011 Marvell. <yuxiangl@marvell.com>
 *
 * This file is licensed under GPLv2.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
*/

#ifndef _MVS14XX_REG_H_
#define _MVS14XX_REG_H_

#include <linux/types.h>

#define MAX_LINK_RATE		SAS_LINK_RATE_6_0_GBPS

enum VANIR_REVISION_ID {
	VANIR_A0_REV		= 0xA0,
	VANIR_B0_REV		= 0x01,
	VANIR_C0_REV		= 0x02,
	VANIR_C1_REV		= 0x03,
	VANIR_C2_REV		= 0xC2,
};

enum host_registers {
	MVS_HST_CHIP_CONFIG	= 0x2C104,	/* chip configuration */
// adam: what is host? 
};

enum hw_registers {
	/* SATA/SAS port common registers *
	MVS_PORT_IMPLEMENT	= 0x20,  /* port implement register */
	MVS_PORT_TYPE		= 0x24,  /* port type register */
	MVS_FIS_ADDR		= 0x30, /* FIS rx buf addr */
	MVS_FIS_ADDR_HI      = 0x34, /* FIS rx buf addr hi */^M
^M
        MVS_LST_ADDR         = 0x38, /* command list DMA addr -- External IO Context Base Address*/^M
        MVS_LST_ADDR_HI      = 0x3C, /* command list DMA addr hi --  External IO Context Base Address hi*/^M
        MVS_CONFIG           = 0x40, /* configuration register */^M
        MVS_CONTROL          = 0x44, /* control register */^M
        ^M
        MVS_SATA_REG_SET0    = 0x50, /* SATA/STP Register Set 0 */^M
        MVS_SATA_REG_SET1    = 0x54, /* SATA/STP Register Set 1 */^M
        MVS_SATA_REG_SET2    = 0x58, /* SATA/STP Register Set 2 */^M
        MVS_SATA_REG_SET3    = 0x5C, /* SATA/STP Register Set 3 */^M
^M
        MVS_SRS_IRQ_STAT0    = 0xD0, /* SRS interrupt status 0 */^M
        MVS_SRS_IRQ_MASK0    = 0xD4, /* SRS intr enable/disable mask 0 */^M
        MVS_SRS_IRQ_STAT0    = 0xD0, /* SRS interrupt status 0 */^M
        MVS_SRS_IRQ_MASK0    = 0xD4, /* SRS intr enable/disable mask 0 */^M
        MVS_SRS_IRQ_STAT1    = 0xD8, /* SRS interrupt status 1*/^M
        MVS_SRS_IRQ_MASK1    = 0xDC, /* SRS intr enable/disable mask 1*/^M
        MVS_SRS_IRQ_STAT2    = 0xE0, /* SRS interrupt status 2 */^M
        MVS_SRS_IRQ_MASK2    = 0xE4, /* SRS intr enable/disable mask 2 */^M
        MVS_SRS_IRQ_STAT3    = 0xE8, /* SRS interrupt status 3*/^M
        MVS_SRS_IRQ_MASK3    = 0xEC, /* SRS intr enable/disable mask 3*/^M
        ^M
        MVS_NON_SPEC_NCQ_ERR0= 0x0110, /* Non Specific NCQ Error 0 */^M
        MVS_NON_SPEC_NCQ_ERR1= 0x0114, /* Non Specific NCQ Error 1 */^M
        MVS_NON_SPEC_NCQ_ERR2= 0x0118, /* Non Specific NCQ Error 2 */^M
        MVS_NON_SPEC_NCQ_ERR3= 0x011C, /* Non Specific NCQ Error 3 */^M
^M
        MVS_CMD_ADDR         = 0x0130, /* Command Address Port */^M
        MVS_CMD_DATA         = 0x0134, /* Command Data Port */^M
^M
        MVS_STP_CLR_AFFILIATION_DIS0   = 0x0150, /* STP Clear Affiliation Disable 0*/^M
        MVS_STP_CLR_AFFILIATION_DIS1   = 0x0154, /* STP Clear Affiliation Disable 1*/^M
        MVS_STP_CLR_AFFILIATION_DIS2   = 0x0158, /* STP Clear Affiliation Disable 2*/^M
        MVS_STP_CLR_AFFILIATION_DIS3   = 0x015C, /* STP Clear Affiliation Disable 3*/^M
^M
        /* Port interrupt status/mask register set $i (0x180/0x184-0x1b8/0x1bc) */^M
//      MVS_PORT_IRQ_STAT0   = 0x0180,^M
//      MVS_PORT_IRQ_MASK0   = 0x0184,^M
^M
//      MVS_PORT_ALL_IRQ_STAT   = 0x01c0, /* All Port interrupt status */^M
//      MVS_PORT_ALL_IRQ_MASK   = 0x01c4, /* All Port interrupt enable/disable mask */^M
^M
        /* port config address/data regsiter set $i (0x170/0x174- 0x208/0x20c) */^M
        MVS_PORT_CONFIG_ADDR0  = 0x0170,^M
        MVS_PORT_CONFIG_DATA0  = 0x0174,^M
        MVS_PORT_ALL_CONFIG_ADDR  = 0x01B0, /* All Port config address */^M
        MVS_PORT_ALL_CONFIG_DATA  = 0x01B4, /* All Port config data */^M
^M
^M
        /*phy control/data register set $i (0x220/0x224- 0x258/0x25c) */^M
^M
        /*phy control/data register set $i (0x220/0x224- 0x258/0x25c) */^M
        MVS_PORT_PHY_CONTROL0  = 0x0220,^M
        MVS_PORT_PHY_CONTROL_DATA0  = 0x0224,^M
^M
        MVS_PORT_ALL_PHY_CONTROL = 0x0260, /* All phy Config/Control Address Port*/^M
        MVS_PORT_ALL_PHY_CONTROL_DATA = 0x0264, /* All phy Config/Control Data Port */^M
^M
^M
        /* port vendor specific address/data register set $i (0x250/0x254-0x268/0x26c) */^M
//      MVS_PORT_VSR_ADDR0      = 0x0250,^M
//      MVS_PORT_VSR_DATA0      = 0x0254,^M
//      MVS_PORT_ALL_VSR_ADDR   = 0x0290, /* All port Vendor Specific Register addr */^M
//      MVS_PORT_ALL_VSR_DATA   = 0x0294, /* All port Vendor Specific Register Data */^M
^M
        /* Athena new reqister */^M
#ifdef SUPPORT_SECURITY_KEY_RECORDS^M
        MVS_KEY_UNWRAP_ENG_CTRL  = 0x02A0, /* Key Unwrap Engine Control */^M
        MVS_KEY_UNWRAP_ENG_STS  = 0x02A4, /* Key Unwrap Engine Status */^M
        MVS_S_KEK0_INIT_VAL  = 0x02A8,           /* S_KEK 0 Initial Value Lower 32 Bits */^M
        MVS_S_KEK0_INIT_VAL_HI  = 0x02AC, /* S_KEK 0 Initial Value Upper 32 Bits */^M
        MVS_S_KEK1_INIT_VAL  = 0x02B0,       /* S_KEK 1 Initial Value Lower 32 Bits */^M
        MVS_S_KEK1_INIT_VAL_HI  = 0x02B4, /* S_KEK 1 Initial Value Upper 32 Bits */^M
        MVS_KEY_UNWRAP_ENG_IRQ_STAT  = 0x02B8, /* Key Unwrap Engine Interrupt Cause*/^M
        MVS_KEY_UNWRAP_ENG_IRQ_MASK  = 0x02BC, /* Key Unwrap Engine Interrupt Enable */^M
#endif^M
        MVS_INTL_MEM_PARITY_ERR  = 0x02D0, /* Internal Memory Parity Error */^M
        MVS_INTL_MEM_PARITY_ERR_EN  = 0x02D4, /* Internal Memory Parity Error Enable*/^M
        MVS_DATA_PATH_PARITY_CTRL  = 0x02D8, /*Data Path Parity Control*/^M
        MVS_DATA_PATH_PARITY_STS  = 0x02DC,   /* Data Path Parity Status*/^M
        MVS_DATA_PATH_ERR_ADDR = 0x02E0,     /*Data Path Error Address Low*/^M
        MVS_DATA_PATH_ERR_ADDR_HI  = 0x02E4, /* Data Path Error Address High*/^M
#ifdef SUPPORT_SECURITY_KEY_RECORDS^M
        MVS_GLOBAL_SECURITY_CONFIG = 0x0300, /* Global Security Configuration */^M
        MVS_GLOBAL_ZERIOCATION_CTRL  = 0x0304, /* Global Zeriozation Control*/^M
        MVS_R_KEK_VAULT_CTRL  = 0x0308,              /*R-KEK Vault Control*/^M
        MVS_R_KEK_VAULT_STS  = 0x030C,               /*R-KEK Vault Status*/^M
        MVS_SRS_IRQ_STAT0    = 0xD0, /* SRS interrupt status 0 */^M
        MVS_SRS_IRQ_MASK0    = 0xD4, /* SRS intr enable/disable mask 0 */^M
        MVS_SRS_IRQ_STAT1    = 0xD8, /* SRS interrupt status 1*/^M
        MVS_SRS_IRQ_MASK1    = 0xDC, /* SRS intr enable/disable mask 1*/^M
        MVS_SRS_IRQ_STAT2    = 0xE0, /* SRS interrupt status 2 */^M
        MVS_SRS_IRQ_MASK2    = 0xE4, /* SRS intr enable/disable mask 2 */^M
        MVS_SRS_IRQ_STAT3    = 0xE8, /* SRS interrupt status 3*/^M
        MVS_SRS_IRQ_MASK3    = 0xEC, /* SRS intr enable/disable mask 3*/^M
        ^M
        MVS_NON_SPEC_NCQ_ERR0= 0x0110, /* Non Specific NCQ Error 0 */^M
        MVS_NON_SPEC_NCQ_ERR1= 0x0114, /* Non Specific NCQ Error 1 */^M
        MVS_NON_SPEC_NCQ_ERR2= 0x0118, /* Non Specific NCQ Error 2 */^M
        MVS_NON_SPEC_NCQ_ERR3= 0x011C, /* Non Specific NCQ Error 3 */^M
^M
        MVS_CMD_ADDR         = 0x0130, /* Command Address Port */^M
        MVS_CMD_DATA         = 0x0134, /* Command Data Port */^M
^M
        MVS_STP_CLR_AFFILIATION_DIS0   = 0x0150, /* STP Clear Affiliation Disable 0*/^M
        MVS_STP_CLR_AFFILIATION_DIS1   = 0x0154, /* STP Clear Affiliation Disable 1*/^M
        MVS_STP_CLR_AFFILIATION_DIS2   = 0x0158, /* STP Clear Affiliation Disable 2*/^M
        MVS_STP_CLR_AFFILIATION_DIS3   = 0x015C, /* STP Clear Affiliation Disable 3*/^M
^M
        /* Port interrupt status/mask register set $i (0x180/0x184-0x1b8/0x1bc) */^M
//      MVS_PORT_IRQ_STAT0   = 0x0180,^M
//      MVS_PORT_IRQ_MASK0   = 0x0184,^M
^M
//      MVS_PORT_ALL_IRQ_STAT   = 0x01c0, /* All Port interrupt status */^M
//      MVS_PORT_ALL_IRQ_MASK   = 0x01c4, /* All Port interrupt enable/disable mask */^M
^M
        /* port config address/data regsiter set $i (0x170/0x174- 0x208/0x20c) */^M
        MVS_PORT_CONFIG_ADDR0  = 0x0170,^M
        MVS_PORT_CONFIG_DATA0  = 0x0174,^M
        MVS_PORT_ALL_CONFIG_ADDR  = 0x01B0, /* All Port config address */^M
        MVS_PORT_ALL_CONFIG_DATA  = 0x01B4, /* All Port config data */^M
^M
^M
        /*phy control/data register set $i (0x220/0x224- 0x258/0x25c) */^M
        MVS_DELV_Q0_RD_PTR    = 0x418, /* delivery queue 0 read pointer */^M
^M
        MVS_CMPL_Q0_CONFIG    = 0x600, /* completion queue 0 configuration */^M
        MVS_CMPL_Q0_ADDR      = 0x604, /* completion queue 0 base address */^M
        MVS_CMPL_Q0_ADDR_HI   = 0x608, /* completion queue 0 base address hi */^M
        MVS_CMPL_Q0_WR_PTR_SHADOW_ADDR       = 0x60C, /* completion queue 0 Write Pointer Shadow Address */^M
        MVS_CMPL_Q0_WR_PTR_SHADOW_ADDR_HI   = 0x610, /* completion queue 0 Write Pointer Shadow Address hi*/^M
        MVS_CMPL_Q0_WR_PTR    = 0x614, /* completion queue 0 write pointer */^M
        MVS_CMPL_Q0_RD_PTR    = 0x618, /* completion queue 0 read pointer */^M
^M
        MVS_COAL0_CONFIG      = 0x700, /* interrupt coalescing 0 config */^M
        MVS_COAL0_TIMEOUT     = 0x740, /* interrupt coalescing 0 time wait */^M
        MVS_IRQ_STAT                 = 0x800, /* SAS/SATA Common Interrupt Cause  */^M
        MVS_CMPLQ_IRQN_STAT   = 0x804, /* SAS/SATA CmplQ N Interrupt Cause */^M
        MVS_CMPLQ_IRQN_MASK   = 0x808, /* SAS/SATA CmplQ N Interrupt Enable */^M
        MVS_CMPLQ_IRQ0_STAT   = 0x810, /* SAS/SATA CmplQ 0 Interrupt Cause */^M
        MVS_CMPLQ_IRQ0_MASK   = 0x840, /* SAS/SATA CmplQ 0 Interrupt Enable */^M
        MVS_IRQ_ROUTING0   = 0x880, /* SAS/SATA Interrupt Routing 0 */^M


};

enum pci_cfg_registers {
// adam: 14.1.3.2: table 14-5 PCIE PF0 register
	PCR_PHY_CTL		= 0x40,
	PCR_PHY_CTL2		= 0x90,
	PCR_DEV_CTRL		= 0x78,
	PCR_LINK_STAT		= 0xD0,
};

/*  SAS/SATA Vendor Specific Port Registers */
enum sas_sata_vsp_regs {
// adam: table 14-24
	VSR_PHY_STAT		= 0x00 * 4, /* Phy Interrupt Status */
	VSR_PHY_MODE1		= 0x01 * 4, /* phy Interrupt Enable */
	VSR_PHY_MODE2		= 0x02 * 4, /* Phy Configuration */
	VSR_PHY_MODE3		= 0x03 * 4, /* Phy Status */
	VSR_PHY_MODE4		= 0x04 * 4, /* Phy Counter 0 */
	VSR_PHY_MODE5		= 0x05 * 4, /* Phy Counter 1 */
	VSR_PHY_MODE6		= 0x06 * 4, /* Event Counter Control */
	VSR_PHY_MODE7		= 0x07 * 4, /* Event Counter Select */
	VSR_PHY_MODE8		= 0x08 * 4, /* Event Counter 0 */
	VSR_PHY_MODE9		= 0x09 * 4, /* Event Counter 1 */
	VSR_PHY_MODE10		= 0x0A * 4, /* Event Counter 2 */
	VSR_PHY_MODE11		= 0x0B * 4, /* Event Counter 3 */
	VSR_PHY_ACT_LED		= 0x0C * 4, /* Activity LED control */

	VSR_PHY_FFE_CONTROL	= 0x10C,
	VSR_PHY_DFE_UPDATE_CRTL	= 0x110,
	VSR_REF_CLOCK_CRTL	= 0x1A0,
};

enum chip_register_bits {
// adam: core_hal.h: common port serial control/status (R140h) bits
// table 14-23
	PHY_MIN_SPP_PHYS_LINK_RATE_MASK = (0xF << 8),
	PHY_MAX_SPP_PHYS_LINK_RATE_MASK = (0xF << 12),
	PHY_NEG_SPP_PHYS_LINK_RATE_MASK_OFFSET = (16),
	PHY_NEG_SPP_PHYS_LINK_RATE_MASK =
			(0xF << PHY_NEG_SPP_PHYS_LINK_RATE_MASK_OFFSET),
};

enum pci_interrupt_cause {
// adam: SOC main interrupt cause (402D274), more likely
// [or CPU main interrupt cause (402D234)? what is the difference? ]
	/*  MAIN_IRQ_CAUSE (R10200) Bits*/
	MVS_IRQ_COM_IN_I2O_IOP0        = (1 << 0),
	MVS_IRQ_COM_IN_I2O_IOP1        = (1 << 1),
	MVS_IRQ_COM_IN_I2O_IOP2        = (1 << 2),
	MVS_IRQ_COM_IN_I2O_IOP3        = (1 << 3),
	MVS_IRQ_COM_OUT_I2O_HOS0       = (1 << 4),
	MVS_IRQ_COM_OUT_I2O_HOS1       = (1 << 5),
	MVS_IRQ_COM_OUT_I2O_HOS2       = (1 << 6),
	MVS_IRQ_COM_OUT_I2O_HOS3       = (1 << 7),
	MVS_IRQ_PCIF_TO_CPU_DRBL0      = (1 << 8),
	MVS_IRQ_PCIF_TO_CPU_DRBL1      = (1 << 9),
	MVS_IRQ_PCIF_TO_CPU_DRBL2      = (1 << 10),
	MVS_IRQ_PCIF_TO_CPU_DRBL3      = (1 << 11),
	MVS_IRQ_PCIF_DRBL0             = (1 << 12),
	MVS_IRQ_PCIF_DRBL1             = (1 << 13),
	MVS_IRQ_PCIF_DRBL2             = (1 << 14),
	MVS_IRQ_PCIF_DRBL3             = (1 << 15),
	MVS_IRQ_XOR_A                  = (1 << 16),
	MVS_IRQ_XOR_B                  = (1 << 17),
	MVS_IRQ_SAS_A                  = (1 << 18),
	MVS_IRQ_SAS_B                  = (1 << 19),
	MVS_IRQ_CPU_CNTRL              = (1 << 20),
	MVS_IRQ_GPIO                   = (1 << 21),
	MVS_IRQ_UART                   = (1 << 22),
	MVS_IRQ_SPI                    = (1 << 23),
	MVS_IRQ_I2C                    = (1 << 24),
	MVS_IRQ_SGPIO                  = (1 << 25),
	MVS_IRQ_COM_ERR                = (1 << 29),
	MVS_IRQ_I2O_ERR                = (1 << 30),
	MVS_IRQ_PCIE_ERR               = (1 << 31),
};

union reg_phy_cfg {
// adam: 14-24: PHY configration: R08h.
// alsol core_hal.h: VSR PHY Configuration (R08)
	u32 v;
	struct {
		u32 phy_reset:1;
		u32 sas_support:1;
		u32 sata_support:1;
		u32 sata_host_mode:1;
		/*
		 * bit 2: 6Gbps support
		 * bit 1: 3Gbps support
		 * bit 0: 1.5Gbps support
		 */
		u32 speed_support:3;
		u32 snw_3_support:1;
		u32 tx_lnk_parity:1;
		/*
		 * bit 5: G1 (1.5Gbps) Without SSC
		 * bit 4: G1 (1.5Gbps) with SSC
		 * bit 3: G2 (3.0Gbps) Without SSC
		 * bit 2: G2 (3.0Gbps) with SSC
		 * bit 1: G3 (6.0Gbps) without SSC
		 * bit 0: G3 (6.0Gbps) with SSC
		 */
		u32 tx_spt_phs_lnk_rate:6;
		/* 8h: 1.5Gbps 9h: 3Gbps Ah: 6Gbps */
		u32 tx_lgcl_lnk_rate:4;
		u32 tx_ssc_type:1;
		u32 sata_spin_up_spt:1;
		u32 sata_spin_up_en:1;
		u32 bypass_oob:1;
		u32 disable_phy:1;
		u32 rsvd:8;
	} u;
};

// adam: see 11.5.8: PRD data buffer pointer entry
#define MAX_SG_ENTRY		255

struct mvs_prd_imt {
#ifndef __BIG_ENDIAN
	__le32			len:22;
	u8			_r_a:2;
	u8			misc_ctl:4;
	u8			inter_sel:4;
#else
	u32			inter_sel:4;
	u32			misc_ctl:4;
	u32			_r_a:2;
	u32			len:22;
#endif
};

struct mvs_prd {
	/* 64-bit buffer address */
	__le64			addr;
	/* 22-bit length */
	__le32			im_len;
} __attribute__ ((packed));

enum sgpio_registers {
	MVS_SGPIO_HOST_OFFSET	= 0x100,	/* offset between hosts */

	MVS_SGPIO_CFG0	= 0xc200,
	MVS_SGPIO_CFG0_ENABLE	= (1 << 0),	/* enable pins */
	MVS_SGPIO_CFG0_BLINKB	= (1 << 1),	/* blink generators */
	MVS_SGPIO_CFG0_BLINKA	= (1 << 2),
	MVS_SGPIO_CFG0_INVSCLK	= (1 << 3),	/* invert signal? */
	MVS_SGPIO_CFG0_INVSLOAD	= (1 << 4),
	MVS_SGPIO_CFG0_INVSDOUT	= (1 << 5),
	MVS_SGPIO_CFG0_SLOAD_FALLEDGE = (1 << 6),	/* rise/fall edge? */
	MVS_SGPIO_CFG0_SDOUT_FALLEDGE = (1 << 7),
	MVS_SGPIO_CFG0_SDIN_RISEEDGE = (1 << 8),
	MVS_SGPIO_CFG0_MAN_BITLEN_SHIFT = 18,	/* bits/frame manual mode */
	MVS_SGPIO_CFG0_AUT_BITLEN_SHIFT = 24,	/* bits/frame auto mode */

	MVS_SGPIO_CFG1	= 0xc204,	/* blink timing register */
	MVS_SGPIO_CFG1_LOWA_SHIFT	= 0,	/* A off time */
	MVS_SGPIO_CFG1_HIA_SHIFT	= 4,	/* A on time */
	MVS_SGPIO_CFG1_LOWB_SHIFT	= 8,	/* B off time */
	MVS_SGPIO_CFG1_HIB_SHIFT	= 12,	/* B on time */
	MVS_SGPIO_CFG1_MAXACTON_SHIFT	= 16,	/* max activity on time */

		/* force activity off time */
	MVS_SGPIO_CFG1_FORCEACTOFF_SHIFT	= 20,
		/* stretch activity on time */
	MVS_SGPIO_CFG1_STRCHACTON_SHIFT	= 24,
		/* stretch activiity off time */
	MVS_SGPIO_CFG1_STRCHACTOFF_SHIFT	= 28,


	MVS_SGPIO_CFG2	= 0xc208,	/* clock speed register */
	MVS_SGPIO_CFG2_CLK_SHIFT	= 0,
	MVS_SGPIO_CFG2_BLINK_SHIFT	= 20,

	MVS_SGPIO_CTRL	= 0xc20c,	/* SDOUT/SDIN mode control */
	MVS_SGPIO_CTRL_SDOUT_AUTO	= 2,
	MVS_SGPIO_CTRL_SDOUT_SHIFT	= 2,

	MVS_SGPIO_DSRC	= 0xc220,	/* map ODn bits to drives */

	MVS_SGPIO_DCTRL	= 0xc238,
	MVS_SGPIO_DCTRL_ERR_SHIFT	= 0,
	MVS_SGPIO_DCTRL_LOC_SHIFT	= 3,
	MVS_SGPIO_DCTRL_ACT_SHIFT	= 5,
};

enum sgpio_led_status {
	LED_OFF	= 0,
	LED_ON	= 1,
	LED_BLINKA	= 2,
	LED_BLINKA_INV	= 3,
	LED_BLINKA_SOF	= 4,
	LED_BLINKA_EOF	= 5,
	LED_BLINKB	= 6,
	LED_BLINKB_INV	= 7,
};

#define DEFAULT_SGPIO_BITS ((LED_BLINKA_SOF << \
				MVS_SGPIO_DCTRL_ACT_SHIFT) << (8 * 3) | \
			(LED_BLINKA_SOF << \
				MVS_SGPIO_DCTRL_ACT_SHIFT) << (8 * 2) | \
			(LED_BLINKA_SOF << \
				MVS_SGPIO_DCTRL_ACT_SHIFT) << (8 * 1) | \
			(LED_BLINKA_SOF << \
				MVS_SGPIO_DCTRL_ACT_SHIFT) << (8 * 0))

/*
 * these registers are accessed through port vendor
 * specific address/data registers
 */
enum sas_sata_phy_regs {
	GENERATION_1_SETTING		= 0x118,
	GENERATION_1_2_SETTING		= 0x11C,
	GENERATION_2_3_SETTING		= 0x120,
	GENERATION_3_4_SETTING		= 0x124,
};

#define SPI_CTRL_REG_14XX           	0xc800
#define SPI_ADDR_REG_14XX            	0xc804
#define SPI_WR_DATA_REG_14XX         0xc808
#define SPI_RD_DATA_REG_14XX         	0xc80c
#define SPI_CTRL_READ_14XX         	(1U << 2)
#define SPI_ADDR_VLD_14XX         	(1U << 1)
#define SPI_CTRL_SpiStart_14XX     	(1U << 0)

static inline int
mv_ffc64(u64 v)
{
	u64 x = ~v;
	return x ? __ffs64(x) : -1;
}

#define r_reg_set_enable(i) \
	(((i) > 31) ? mr32(MVS_STP_REG_SET_1) : \
	mr32(MVS_STP_REG_SET_0))

#define w_reg_set_enable(i, tmp) \
	(((i) > 31) ? mw32(MVS_STP_REG_SET_1, tmp) : \
	mw32(MVS_STP_REG_SET_0, tmp))

extern const struct mvs_dispatch mvs_14xx_dispatch;
#endif

