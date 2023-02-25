/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* device-db 4.0.4.3352
* mtb-pdl-cat2 2.2.0.8881
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_msc.h"
#include "cy_scb_ezi2c.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_MSC0_ENABLED 1U
#define CY_MSC0_DMAC_BASE_ADDR NULL
#define CY_MSC0_WR_DMA_CH_INDEX 0u
#define CY_MSC0_CHAIN_WR_DMA_CH_INDEX 0u
#define CY_MSC0_RD_DMA_CH_INDEX 0u
#define CY_MSC0_CHAIN_RD_DMA_CH_INDEX 0u
#define Button0_Sns0_PORT GPIO_PRT3
#define Button2_Sns0_PORT GPIO_PRT3
#define Button0_Sns0_PIN 7u
#define Button2_Sns0_PIN 6u
#define Button0_Sns0_PAD MSC0_SPAD0
#define Button2_Sns0_PAD MSC0_SPAD1
#define Button0_Sns0_CH_INDEX 0u
#define Button2_Sns0_CH_INDEX 0u
#define CY_MSC0_Cmod1_PORT GPIO_PRT4
#define CY_MSC0_Cmod1_PIN 0u
#define CY_MSC0_Cmod1_PORT_NUM 4
#define CY_MSC0_Cmod1_PAD MSC0_CMOD1
#define CY_MSC0_Cmod1_CH_INDEX 0u
#define CY_MSC0_Cmod2_PORT GPIO_PRT4
#define CY_MSC0_Cmod2_PIN 1u
#define CY_MSC0_Cmod2_PORT_NUM 4
#define CY_MSC0_Cmod2_PAD MSC0_CMOD2
#define CY_MSC0_Cmod2_CH_INDEX 0u
#define CY_MSC0_HW MSC0
#define CYBSP_MSC0_HW MSC0
#define CY_MSC0_IRQ msc_0_interrupt_IRQn
#define CYBSP_MSC0_IRQ msc_0_interrupt_IRQn
#define CYBSP_CapSense_ENABLED 1U
#define CY_CAPSENSE_CPU_CLK 48000000u
#define CY_CAPSENSE_VDDA_MV 5000u
#define CY_CAPSENSE_PERI_CLK 48000000u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_16_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define CY_CAPSENSE_CORE 0u
#define CY_MSC_SAMPLE_NUMBER 1u
#define CY_MSC_CONFIG_NUMBER 0u
#define CY_MSC_SENSE_PAD_NUMBER 16u
#define CY_MSC_CH_NUMBER 2u
#define CY_MSC_SENSE_MODE_NUMBER 3u
#define CY_MSC_LP_AOC_PRESENT 0u
#define CY_MSC_NP_PRESENT 0u
#define CY_MSC_CAP_PAD_NUMBER 4u
#define CY_CAPSENSE_MSC0_EN (1u)
#define CY_CAPSENSE_MSC1_EN (1u)
#define CY_MSC_CHIP_ID 0u
#define CY_MSC_ENABLED_CH_NUMBER 2u
#define CY_MSC_MASTER_CHIP_EN 0u
#define CY_MSC_COMM_CHIP_EN 0u
#define CY_MSC_LITE_CONFIG_EN 0u
#define CY_MSC_CHANNEL_OFFSET 0u
#define CY_CAPSENSE_DMA_CONFIGURED 0u
#define CYBSP_MSC1_ENABLED 1U
#define CY_MSC1_DMAC_BASE_ADDR NULL
#define CY_MSC1_WR_DMA_CH_INDEX 0u
#define CY_MSC1_CHAIN_WR_DMA_CH_INDEX 0u
#define CY_MSC1_RD_DMA_CH_INDEX 0u
#define CY_MSC1_CHAIN_RD_DMA_CH_INDEX 0u
#define Button1_Sns0_PORT GPIO_PRT0
#define Button3_Sns0_PORT GPIO_PRT0
#define Button1_Sns0_PIN 0u
#define Button3_Sns0_PIN 1u
#define Button1_Sns0_PAD MSC1_SPAD0
#define Button3_Sns0_PAD MSC1_SPAD1
#define Button1_Sns0_CH_INDEX 1u
#define Button3_Sns0_CH_INDEX 1u
#define CY_MSC1_Cmod1_PORT GPIO_PRT7
#define CY_MSC1_Cmod1_PIN 0u
#define CY_MSC1_Cmod1_PORT_NUM 7
#define CY_MSC1_Cmod1_PAD MSC1_CMOD1
#define CY_MSC1_Cmod1_CH_INDEX 1u
#define CY_MSC1_Cmod2_PORT GPIO_PRT7
#define CY_MSC1_Cmod2_PIN 1u
#define CY_MSC1_Cmod2_PORT_NUM 7
#define CY_MSC1_Cmod2_PAD MSC1_CMOD2
#define CY_MSC1_Cmod2_CH_INDEX 1u
#define CY_MSC1_HW MSC1
#define CYBSP_MSC1_HW MSC1
#define CY_MSC1_IRQ msc_1_interrupt_IRQn
#define CYBSP_MSC1_IRQ msc_1_interrupt_IRQn
#define CYBSP_EZI2C_ENABLED 1U
#define CYBSP_EZI2C_HW SCB0
#define CYBSP_EZI2C_IRQ scb_0_interrupt_IRQn

extern cy_stc_msc_context_t cy_msc_0_context;
extern cy_stc_msc_context_t cy_msc_1_context;
extern const cy_stc_scb_ezi2c_config_t CYBSP_EZI2C_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_EZI2C_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
