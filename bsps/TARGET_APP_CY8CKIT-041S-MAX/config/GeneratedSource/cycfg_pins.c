/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t ioss_0_port_0_pin_0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_0_pin_0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_0_pin_0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_0_pin_0_PORT_NUM,
        .channel_num = ioss_0_port_0_pin_0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_0_pin_1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_0_pin_1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_0_pin_1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_0_pin_1_PORT_NUM,
        .channel_num = ioss_0_port_0_pin_1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_1_pin_0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = ioss_0_port_1_pin_0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_1_pin_0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_1_pin_0_PORT_NUM,
        .channel_num = ioss_0_port_1_pin_0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_1_pin_1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = ioss_0_port_1_pin_1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_1_pin_1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_1_pin_1_PORT_NUM,
        .channel_num = ioss_0_port_1_pin_1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t REL_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = REL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t REL_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = REL_PORT_NUM,
        .channel_num = REL_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t LED_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LED_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t LED_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = LED_PORT_NUM,
        .channel_num = LED_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = ioss_0_port_3_pin_2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_3_pin_2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_3_pin_2_PORT_NUM,
        .channel_num = ioss_0_port_3_pin_2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_3_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = ioss_0_port_3_pin_3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_3_pin_3_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_3_pin_3_PORT_NUM,
        .channel_num = ioss_0_port_3_pin_3_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_6_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_3_pin_6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_3_pin_6_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_3_pin_6_PORT_NUM,
        .channel_num = ioss_0_port_3_pin_6_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_7_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_3_pin_7_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_3_pin_7_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_3_pin_7_PORT_NUM,
        .channel_num = ioss_0_port_3_pin_7_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_4_pin_0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_4_pin_0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_4_pin_0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_4_pin_0_PORT_NUM,
        .channel_num = ioss_0_port_4_pin_0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_4_pin_1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_4_pin_1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_4_pin_1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_4_pin_1_PORT_NUM,
        .channel_num = ioss_0_port_4_pin_1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_7_pin_0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_7_pin_0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_7_pin_0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_7_pin_0_PORT_NUM,
        .channel_num = ioss_0_port_7_pin_0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_7_pin_1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ioss_0_port_7_pin_1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ioss_0_port_7_pin_1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ioss_0_port_7_pin_1_PORT_NUM,
        .channel_num = ioss_0_port_7_pin_1_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(ioss_0_port_1_pin_0_PORT, ioss_0_port_1_pin_0_PIN, &ioss_0_port_1_pin_0_config);
    Cy_GPIO_Pin_Init(ioss_0_port_1_pin_1_PORT, ioss_0_port_1_pin_1_PIN, &ioss_0_port_1_pin_1_config);
    Cy_GPIO_Pin_Init(REL_PORT, REL_PIN, &REL_config);
    Cy_GPIO_Pin_Init(LED_PORT, LED_PIN, &LED_config);
    Cy_GPIO_Pin_Init(ioss_0_port_3_pin_2_PORT, ioss_0_port_3_pin_2_PIN, &ioss_0_port_3_pin_2_config);
    Cy_GPIO_Pin_Init(ioss_0_port_3_pin_3_PORT, ioss_0_port_3_pin_3_PIN, &ioss_0_port_3_pin_3_config);
}

void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&ioss_0_port_0_pin_0_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_0_pin_1_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_1_pin_0_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_1_pin_1_obj);
    cyhal_hwmgr_reserve(&REL_obj);
    cyhal_hwmgr_reserve(&LED_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_3_pin_2_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_3_pin_3_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_3_pin_6_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_3_pin_7_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_4_pin_0_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_4_pin_1_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_7_pin_0_obj);
    cyhal_hwmgr_reserve(&ioss_0_port_7_pin_1_obj);
#endif //defined (CY_USING_HAL)
}
