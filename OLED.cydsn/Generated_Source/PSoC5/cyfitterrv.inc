;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.1 Update 1
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; I2COLED
I2COLED_I2C_FF__ADR EQU CYREG_I2C_ADR
I2COLED_I2C_FF__CFG EQU CYREG_I2C_CFG
I2COLED_I2C_FF__CLK_DIV1 EQU CYREG_I2C_CLK_DIV1
I2COLED_I2C_FF__CLK_DIV2 EQU CYREG_I2C_CLK_DIV2
I2COLED_I2C_FF__CSR EQU CYREG_I2C_CSR
I2COLED_I2C_FF__D EQU CYREG_I2C_D
I2COLED_I2C_FF__MCSR EQU CYREG_I2C_MCSR
I2COLED_I2C_FF__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
I2COLED_I2C_FF__PM_ACT_MSK EQU 0x04
I2COLED_I2C_FF__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
I2COLED_I2C_FF__PM_STBY_MSK EQU 0x04
I2COLED_I2C_FF__TMOUT_CFG0 EQU CYREG_I2C_TMOUT_CFG0
I2COLED_I2C_FF__TMOUT_CFG1 EQU CYREG_I2C_TMOUT_CFG1
I2COLED_I2C_FF__TMOUT_CSR EQU CYREG_I2C_TMOUT_CSR
I2COLED_I2C_FF__TMOUT_SR EQU CYREG_I2C_TMOUT_SR
I2COLED_I2C_FF__XCFG EQU CYREG_I2C_XCFG
I2COLED_I2C_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
I2COLED_I2C_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
I2COLED_I2C_IRQ__INTC_MASK EQU 0x8000
I2COLED_I2C_IRQ__INTC_NUMBER EQU 15
I2COLED_I2C_IRQ__INTC_PRIOR_NUM EQU 7
I2COLED_I2C_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_15
I2COLED_I2C_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
I2COLED_I2C_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SCL
SCL__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
SCL__0__MASK EQU 0x02
SCL__0__PC EQU CYREG_PRT0_PC1
SCL__0__PORT EQU 0
SCL__0__SHIFT EQU 1
SCL__AG EQU CYREG_PRT0_AG
SCL__AMUX EQU CYREG_PRT0_AMUX
SCL__BIE EQU CYREG_PRT0_BIE
SCL__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SCL__BYP EQU CYREG_PRT0_BYP
SCL__CTL EQU CYREG_PRT0_CTL
SCL__DM0 EQU CYREG_PRT0_DM0
SCL__DM1 EQU CYREG_PRT0_DM1
SCL__DM2 EQU CYREG_PRT0_DM2
SCL__DR EQU CYREG_PRT0_DR
SCL__INP_DIS EQU CYREG_PRT0_INP_DIS
SCL__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SCL__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SCL__LCD_EN EQU CYREG_PRT0_LCD_EN
SCL__MASK EQU 0x02
SCL__PORT EQU 0
SCL__PRT EQU CYREG_PRT0_PRT
SCL__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SCL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SCL__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SCL__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SCL__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SCL__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SCL__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SCL__PS EQU CYREG_PRT0_PS
SCL__SHIFT EQU 1
SCL__SLW EQU CYREG_PRT0_SLW

; SDA
SDA__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
SDA__0__MASK EQU 0x01
SDA__0__PC EQU CYREG_PRT0_PC0
SDA__0__PORT EQU 0
SDA__0__SHIFT EQU 0
SDA__AG EQU CYREG_PRT0_AG
SDA__AMUX EQU CYREG_PRT0_AMUX
SDA__BIE EQU CYREG_PRT0_BIE
SDA__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SDA__BYP EQU CYREG_PRT0_BYP
SDA__CTL EQU CYREG_PRT0_CTL
SDA__DM0 EQU CYREG_PRT0_DM0
SDA__DM1 EQU CYREG_PRT0_DM1
SDA__DM2 EQU CYREG_PRT0_DM2
SDA__DR EQU CYREG_PRT0_DR
SDA__INP_DIS EQU CYREG_PRT0_INP_DIS
SDA__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SDA__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SDA__LCD_EN EQU CYREG_PRT0_LCD_EN
SDA__MASK EQU 0x01
SDA__PORT EQU 0
SDA__PRT EQU CYREG_PRT0_PRT
SDA__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SDA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SDA__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SDA__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SDA__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SDA__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SDA__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SDA__PS EQU CYREG_PRT0_PS
SDA__SHIFT EQU 0
SDA__SLW EQU CYREG_PRT0_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 16
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 16
CYDEV_CHIP_MEMBER_4D EQU 12
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 17
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 15
CYDEV_CHIP_MEMBER_4I EQU 21
CYDEV_CHIP_MEMBER_4J EQU 13
CYDEV_CHIP_MEMBER_4K EQU 14
CYDEV_CHIP_MEMBER_4L EQU 20
CYDEV_CHIP_MEMBER_4M EQU 19
CYDEV_CHIP_MEMBER_4N EQU 9
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 18
CYDEV_CHIP_MEMBER_4Q EQU 11
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 22
CYDEV_CHIP_MEMBER_FM3 EQU 26
CYDEV_CHIP_MEMBER_FM4 EQU 27
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 23
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 24
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 25
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 0
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00008000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO0_MV EQU 3300
CYDEV_VDDIO1_MV EQU 3300
CYDEV_VDDIO2_MV EQU 3300
CYDEV_VDDIO3_MV EQU 3300
CYDEV_VIO0_MV EQU 3300
CYDEV_VIO1_MV EQU 3300
CYDEV_VIO2_MV EQU 3300
CYDEV_VIO3_MV EQU 3300
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
CyScBoostClk__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
CyScBoostClk__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
CyScBoostClk__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
CyScBoostClk__CFG2_SRC_SEL_MASK EQU 0x07
CyScBoostClk__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
CyScBoostClk__CFG3_PHASE_DLY_MASK EQU 0x0F
CyScBoostClk__INDEX EQU 0x00
CyScBoostClk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
CyScBoostClk__PM_ACT_MSK EQU 0x01
CyScBoostClk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
CyScBoostClk__PM_STBY_MSK EQU 0x01
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
