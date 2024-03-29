.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* I2COLED_SCB */
.set I2COLED_SCB__CTRL, CYREG_SCB1_CTRL
.set I2COLED_SCB__EZ_DATA0, CYREG_SCB1_EZ_DATA0
.set I2COLED_SCB__EZ_DATA1, CYREG_SCB1_EZ_DATA1
.set I2COLED_SCB__EZ_DATA10, CYREG_SCB1_EZ_DATA10
.set I2COLED_SCB__EZ_DATA11, CYREG_SCB1_EZ_DATA11
.set I2COLED_SCB__EZ_DATA12, CYREG_SCB1_EZ_DATA12
.set I2COLED_SCB__EZ_DATA13, CYREG_SCB1_EZ_DATA13
.set I2COLED_SCB__EZ_DATA14, CYREG_SCB1_EZ_DATA14
.set I2COLED_SCB__EZ_DATA15, CYREG_SCB1_EZ_DATA15
.set I2COLED_SCB__EZ_DATA16, CYREG_SCB1_EZ_DATA16
.set I2COLED_SCB__EZ_DATA17, CYREG_SCB1_EZ_DATA17
.set I2COLED_SCB__EZ_DATA18, CYREG_SCB1_EZ_DATA18
.set I2COLED_SCB__EZ_DATA19, CYREG_SCB1_EZ_DATA19
.set I2COLED_SCB__EZ_DATA2, CYREG_SCB1_EZ_DATA2
.set I2COLED_SCB__EZ_DATA20, CYREG_SCB1_EZ_DATA20
.set I2COLED_SCB__EZ_DATA21, CYREG_SCB1_EZ_DATA21
.set I2COLED_SCB__EZ_DATA22, CYREG_SCB1_EZ_DATA22
.set I2COLED_SCB__EZ_DATA23, CYREG_SCB1_EZ_DATA23
.set I2COLED_SCB__EZ_DATA24, CYREG_SCB1_EZ_DATA24
.set I2COLED_SCB__EZ_DATA25, CYREG_SCB1_EZ_DATA25
.set I2COLED_SCB__EZ_DATA26, CYREG_SCB1_EZ_DATA26
.set I2COLED_SCB__EZ_DATA27, CYREG_SCB1_EZ_DATA27
.set I2COLED_SCB__EZ_DATA28, CYREG_SCB1_EZ_DATA28
.set I2COLED_SCB__EZ_DATA29, CYREG_SCB1_EZ_DATA29
.set I2COLED_SCB__EZ_DATA3, CYREG_SCB1_EZ_DATA3
.set I2COLED_SCB__EZ_DATA30, CYREG_SCB1_EZ_DATA30
.set I2COLED_SCB__EZ_DATA31, CYREG_SCB1_EZ_DATA31
.set I2COLED_SCB__EZ_DATA4, CYREG_SCB1_EZ_DATA4
.set I2COLED_SCB__EZ_DATA5, CYREG_SCB1_EZ_DATA5
.set I2COLED_SCB__EZ_DATA6, CYREG_SCB1_EZ_DATA6
.set I2COLED_SCB__EZ_DATA7, CYREG_SCB1_EZ_DATA7
.set I2COLED_SCB__EZ_DATA8, CYREG_SCB1_EZ_DATA8
.set I2COLED_SCB__EZ_DATA9, CYREG_SCB1_EZ_DATA9
.set I2COLED_SCB__I2C_CFG, CYREG_SCB1_I2C_CFG
.set I2COLED_SCB__I2C_CTRL, CYREG_SCB1_I2C_CTRL
.set I2COLED_SCB__I2C_M_CMD, CYREG_SCB1_I2C_M_CMD
.set I2COLED_SCB__I2C_S_CMD, CYREG_SCB1_I2C_S_CMD
.set I2COLED_SCB__I2C_STATUS, CYREG_SCB1_I2C_STATUS
.set I2COLED_SCB__INTR_CAUSE, CYREG_SCB1_INTR_CAUSE
.set I2COLED_SCB__INTR_I2C_EC, CYREG_SCB1_INTR_I2C_EC
.set I2COLED_SCB__INTR_I2C_EC_MASK, CYREG_SCB1_INTR_I2C_EC_MASK
.set I2COLED_SCB__INTR_I2C_EC_MASKED, CYREG_SCB1_INTR_I2C_EC_MASKED
.set I2COLED_SCB__INTR_M, CYREG_SCB1_INTR_M
.set I2COLED_SCB__INTR_M_MASK, CYREG_SCB1_INTR_M_MASK
.set I2COLED_SCB__INTR_M_MASKED, CYREG_SCB1_INTR_M_MASKED
.set I2COLED_SCB__INTR_M_SET, CYREG_SCB1_INTR_M_SET
.set I2COLED_SCB__INTR_RX, CYREG_SCB1_INTR_RX
.set I2COLED_SCB__INTR_RX_MASK, CYREG_SCB1_INTR_RX_MASK
.set I2COLED_SCB__INTR_RX_MASKED, CYREG_SCB1_INTR_RX_MASKED
.set I2COLED_SCB__INTR_RX_SET, CYREG_SCB1_INTR_RX_SET
.set I2COLED_SCB__INTR_S, CYREG_SCB1_INTR_S
.set I2COLED_SCB__INTR_S_MASK, CYREG_SCB1_INTR_S_MASK
.set I2COLED_SCB__INTR_S_MASKED, CYREG_SCB1_INTR_S_MASKED
.set I2COLED_SCB__INTR_S_SET, CYREG_SCB1_INTR_S_SET
.set I2COLED_SCB__INTR_SPI_EC, CYREG_SCB1_INTR_SPI_EC
.set I2COLED_SCB__INTR_SPI_EC_MASK, CYREG_SCB1_INTR_SPI_EC_MASK
.set I2COLED_SCB__INTR_SPI_EC_MASKED, CYREG_SCB1_INTR_SPI_EC_MASKED
.set I2COLED_SCB__INTR_TX, CYREG_SCB1_INTR_TX
.set I2COLED_SCB__INTR_TX_MASK, CYREG_SCB1_INTR_TX_MASK
.set I2COLED_SCB__INTR_TX_MASKED, CYREG_SCB1_INTR_TX_MASKED
.set I2COLED_SCB__INTR_TX_SET, CYREG_SCB1_INTR_TX_SET
.set I2COLED_SCB__RX_CTRL, CYREG_SCB1_RX_CTRL
.set I2COLED_SCB__RX_FIFO_CTRL, CYREG_SCB1_RX_FIFO_CTRL
.set I2COLED_SCB__RX_FIFO_RD, CYREG_SCB1_RX_FIFO_RD
.set I2COLED_SCB__RX_FIFO_RD_SILENT, CYREG_SCB1_RX_FIFO_RD_SILENT
.set I2COLED_SCB__RX_FIFO_STATUS, CYREG_SCB1_RX_FIFO_STATUS
.set I2COLED_SCB__RX_MATCH, CYREG_SCB1_RX_MATCH
.set I2COLED_SCB__SPI_CTRL, CYREG_SCB1_SPI_CTRL
.set I2COLED_SCB__SPI_STATUS, CYREG_SCB1_SPI_STATUS
.set I2COLED_SCB__SS0_POSISTION, 0
.set I2COLED_SCB__SS1_POSISTION, 1
.set I2COLED_SCB__SS2_POSISTION, 2
.set I2COLED_SCB__SS3_POSISTION, 3
.set I2COLED_SCB__STATUS, CYREG_SCB1_STATUS
.set I2COLED_SCB__TX_CTRL, CYREG_SCB1_TX_CTRL
.set I2COLED_SCB__TX_FIFO_CTRL, CYREG_SCB1_TX_FIFO_CTRL
.set I2COLED_SCB__TX_FIFO_STATUS, CYREG_SCB1_TX_FIFO_STATUS
.set I2COLED_SCB__TX_FIFO_WR, CYREG_SCB1_TX_FIFO_WR
.set I2COLED_SCB__UART_CTRL, CYREG_SCB1_UART_CTRL
.set I2COLED_SCB__UART_FLOW_CTRL, CYREG_SCB1_UART_FLOW_CTRL
.set I2COLED_SCB__UART_RX_CTRL, CYREG_SCB1_UART_RX_CTRL
.set I2COLED_SCB__UART_RX_STATUS, CYREG_SCB1_UART_RX_STATUS
.set I2COLED_SCB__UART_TX_CTRL, CYREG_SCB1_UART_TX_CTRL

/* I2COLED_SCB_IRQ */
.set I2COLED_SCB_IRQ__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set I2COLED_SCB_IRQ__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set I2COLED_SCB_IRQ__INTC_MASK, 0x200
.set I2COLED_SCB_IRQ__INTC_NUMBER, 9
.set I2COLED_SCB_IRQ__INTC_PRIOR_MASK, 0xC000
.set I2COLED_SCB_IRQ__INTC_PRIOR_NUM, 3
.set I2COLED_SCB_IRQ__INTC_PRIOR_REG, CYREG_CM0_IPR2
.set I2COLED_SCB_IRQ__INTC_SET_EN_REG, CYREG_CM0_ISER
.set I2COLED_SCB_IRQ__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* I2COLED_SCBCLK */
.set I2COLED_SCBCLK__CTRL_REGISTER, CYREG_PERI_PCLK_CTL3
.set I2COLED_SCBCLK__DIV_ID, 0x00000040
.set I2COLED_SCBCLK__DIV_REGISTER, CYREG_PERI_DIV_16_CTL0
.set I2COLED_SCBCLK__PA_DIV_ID, 0x000000FF

/* I2COLED_scl */
.set I2COLED_scl__0__DR, CYREG_GPIO_PRT0_DR
.set I2COLED_scl__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set I2COLED_scl__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set I2COLED_scl__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set I2COLED_scl__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set I2COLED_scl__0__HSIOM_MASK, 0x000F0000
.set I2COLED_scl__0__HSIOM_SHIFT, 16
.set I2COLED_scl__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_scl__0__INTR, CYREG_GPIO_PRT0_INTR
.set I2COLED_scl__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_scl__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set I2COLED_scl__0__MASK, 0x10
.set I2COLED_scl__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set I2COLED_scl__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set I2COLED_scl__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set I2COLED_scl__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set I2COLED_scl__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set I2COLED_scl__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set I2COLED_scl__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set I2COLED_scl__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set I2COLED_scl__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set I2COLED_scl__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set I2COLED_scl__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set I2COLED_scl__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set I2COLED_scl__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set I2COLED_scl__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set I2COLED_scl__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set I2COLED_scl__0__PC, CYREG_GPIO_PRT0_PC
.set I2COLED_scl__0__PC2, CYREG_GPIO_PRT0_PC2
.set I2COLED_scl__0__PORT, 0
.set I2COLED_scl__0__PS, CYREG_GPIO_PRT0_PS
.set I2COLED_scl__0__SHIFT, 4
.set I2COLED_scl__DR, CYREG_GPIO_PRT0_DR
.set I2COLED_scl__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set I2COLED_scl__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set I2COLED_scl__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set I2COLED_scl__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_scl__INTR, CYREG_GPIO_PRT0_INTR
.set I2COLED_scl__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_scl__INTSTAT, CYREG_GPIO_PRT0_INTR
.set I2COLED_scl__MASK, 0x10
.set I2COLED_scl__PA__CFG0, CYREG_UDB_PA0_CFG0
.set I2COLED_scl__PA__CFG1, CYREG_UDB_PA0_CFG1
.set I2COLED_scl__PA__CFG10, CYREG_UDB_PA0_CFG10
.set I2COLED_scl__PA__CFG11, CYREG_UDB_PA0_CFG11
.set I2COLED_scl__PA__CFG12, CYREG_UDB_PA0_CFG12
.set I2COLED_scl__PA__CFG13, CYREG_UDB_PA0_CFG13
.set I2COLED_scl__PA__CFG14, CYREG_UDB_PA0_CFG14
.set I2COLED_scl__PA__CFG2, CYREG_UDB_PA0_CFG2
.set I2COLED_scl__PA__CFG3, CYREG_UDB_PA0_CFG3
.set I2COLED_scl__PA__CFG4, CYREG_UDB_PA0_CFG4
.set I2COLED_scl__PA__CFG5, CYREG_UDB_PA0_CFG5
.set I2COLED_scl__PA__CFG6, CYREG_UDB_PA0_CFG6
.set I2COLED_scl__PA__CFG7, CYREG_UDB_PA0_CFG7
.set I2COLED_scl__PA__CFG8, CYREG_UDB_PA0_CFG8
.set I2COLED_scl__PA__CFG9, CYREG_UDB_PA0_CFG9
.set I2COLED_scl__PC, CYREG_GPIO_PRT0_PC
.set I2COLED_scl__PC2, CYREG_GPIO_PRT0_PC2
.set I2COLED_scl__PORT, 0
.set I2COLED_scl__PS, CYREG_GPIO_PRT0_PS
.set I2COLED_scl__SHIFT, 4

/* I2COLED_sda */
.set I2COLED_sda__0__DR, CYREG_GPIO_PRT0_DR
.set I2COLED_sda__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set I2COLED_sda__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set I2COLED_sda__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set I2COLED_sda__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set I2COLED_sda__0__HSIOM_MASK, 0x00F00000
.set I2COLED_sda__0__HSIOM_SHIFT, 20
.set I2COLED_sda__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_sda__0__INTR, CYREG_GPIO_PRT0_INTR
.set I2COLED_sda__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_sda__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set I2COLED_sda__0__MASK, 0x20
.set I2COLED_sda__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set I2COLED_sda__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set I2COLED_sda__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set I2COLED_sda__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set I2COLED_sda__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set I2COLED_sda__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set I2COLED_sda__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set I2COLED_sda__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set I2COLED_sda__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set I2COLED_sda__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set I2COLED_sda__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set I2COLED_sda__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set I2COLED_sda__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set I2COLED_sda__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set I2COLED_sda__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set I2COLED_sda__0__PC, CYREG_GPIO_PRT0_PC
.set I2COLED_sda__0__PC2, CYREG_GPIO_PRT0_PC2
.set I2COLED_sda__0__PORT, 0
.set I2COLED_sda__0__PS, CYREG_GPIO_PRT0_PS
.set I2COLED_sda__0__SHIFT, 5
.set I2COLED_sda__DR, CYREG_GPIO_PRT0_DR
.set I2COLED_sda__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set I2COLED_sda__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set I2COLED_sda__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set I2COLED_sda__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_sda__INTR, CYREG_GPIO_PRT0_INTR
.set I2COLED_sda__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set I2COLED_sda__INTSTAT, CYREG_GPIO_PRT0_INTR
.set I2COLED_sda__MASK, 0x20
.set I2COLED_sda__PA__CFG0, CYREG_UDB_PA0_CFG0
.set I2COLED_sda__PA__CFG1, CYREG_UDB_PA0_CFG1
.set I2COLED_sda__PA__CFG10, CYREG_UDB_PA0_CFG10
.set I2COLED_sda__PA__CFG11, CYREG_UDB_PA0_CFG11
.set I2COLED_sda__PA__CFG12, CYREG_UDB_PA0_CFG12
.set I2COLED_sda__PA__CFG13, CYREG_UDB_PA0_CFG13
.set I2COLED_sda__PA__CFG14, CYREG_UDB_PA0_CFG14
.set I2COLED_sda__PA__CFG2, CYREG_UDB_PA0_CFG2
.set I2COLED_sda__PA__CFG3, CYREG_UDB_PA0_CFG3
.set I2COLED_sda__PA__CFG4, CYREG_UDB_PA0_CFG4
.set I2COLED_sda__PA__CFG5, CYREG_UDB_PA0_CFG5
.set I2COLED_sda__PA__CFG6, CYREG_UDB_PA0_CFG6
.set I2COLED_sda__PA__CFG7, CYREG_UDB_PA0_CFG7
.set I2COLED_sda__PA__CFG8, CYREG_UDB_PA0_CFG8
.set I2COLED_sda__PA__CFG9, CYREG_UDB_PA0_CFG9
.set I2COLED_sda__PC, CYREG_GPIO_PRT0_PC
.set I2COLED_sda__PC2, CYREG_GPIO_PRT0_PC2
.set I2COLED_sda__PORT, 0
.set I2COLED_sda__PS, CYREG_GPIO_PRT0_PS
.set I2COLED_sda__SHIFT, 5

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 18
.set CYDEV_CHIP_DIE_PSOC4A, 10
.set CYDEV_CHIP_DIE_PSOC5LP, 17
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x112D11A1
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 10
.set CYDEV_CHIP_MEMBER_4C, 15
.set CYDEV_CHIP_MEMBER_4D, 6
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 11
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 9
.set CYDEV_CHIP_MEMBER_4I, 14
.set CYDEV_CHIP_MEMBER_4J, 7
.set CYDEV_CHIP_MEMBER_4K, 8
.set CYDEV_CHIP_MEMBER_4L, 13
.set CYDEV_CHIP_MEMBER_4M, 12
.set CYDEV_CHIP_MEMBER_4N, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 17
.set CYDEV_CHIP_MEMBER_5B, 16
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4M
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4M_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_DMA_CHANNELS_AVAILABLE, 8
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_INTR_NUMBER_DMA, 13
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDIO_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 0
.set CYIPBLOCK_m0s8can_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_m0s8wco_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set DMA_CHANNELS_USED__MASK, 0
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
