/*******************************************************************************
* File Name: cycfg_pins.h
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define ioss_0_port_0_pin_0_ENABLED 1U
#define ioss_0_port_0_pin_0_PORT GPIO_PRT0
#define ioss_0_port_0_pin_0_PORT_NUM 0U
#define ioss_0_port_0_pin_0_PIN 0U
#define ioss_0_port_0_pin_0_NUM 0U
#define ioss_0_port_0_pin_0_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_0_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_0_pin_0_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_0_pin_0_HAL_PORT_PIN P0_0
    #define ioss_0_port_0_pin_0 P0_0
    #define ioss_0_port_0_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_0_pin_0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_0_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_0_pin_1_ENABLED 1U
#define ioss_0_port_0_pin_1_PORT GPIO_PRT0
#define ioss_0_port_0_pin_1_PORT_NUM 0U
#define ioss_0_port_0_pin_1_PIN 1U
#define ioss_0_port_0_pin_1_NUM 1U
#define ioss_0_port_0_pin_1_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_0_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_0_pin_1_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_0_pin_1_HAL_PORT_PIN P0_1
    #define ioss_0_port_0_pin_1 P0_1
    #define ioss_0_port_0_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_0_pin_1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_0_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_1_pin_0_ENABLED 1U
#define ioss_0_port_1_pin_0_PORT GPIO_PRT1
#define ioss_0_port_1_pin_0_PORT_NUM 1U
#define ioss_0_port_1_pin_0_PIN 0U
#define ioss_0_port_1_pin_0_NUM 0U
#define ioss_0_port_1_pin_0_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define ioss_0_port_1_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_0_HSIOM
    #define ioss_0_port_1_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_1_pin_0_IRQ ioss_interrupts_gpio_1_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_1_pin_0_HAL_PORT_PIN P1_0
    #define ioss_0_port_1_pin_0 P1_0
    #define ioss_0_port_1_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_1_pin_0_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define ioss_0_port_1_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif //defined (CY_USING_HAL)
#define ioss_0_port_1_pin_1_ENABLED 1U
#define ioss_0_port_1_pin_1_PORT GPIO_PRT1
#define ioss_0_port_1_pin_1_PORT_NUM 1U
#define ioss_0_port_1_pin_1_PIN 1U
#define ioss_0_port_1_pin_1_NUM 1U
#define ioss_0_port_1_pin_1_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define ioss_0_port_1_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_1_HSIOM
    #define ioss_0_port_1_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_1_pin_1_IRQ ioss_interrupts_gpio_1_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_1_pin_1_HAL_PORT_PIN P1_1
    #define ioss_0_port_1_pin_1 P1_1
    #define ioss_0_port_1_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_1_pin_1_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define ioss_0_port_1_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif //defined (CY_USING_HAL)
#define REL_ENABLED 1U
#define REL_PORT GPIO_PRT2
#define REL_PORT_NUM 2U
#define REL_PIN 0U
#define REL_NUM 0U
#define REL_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define REL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_0_HSIOM
    #define ioss_0_port_2_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define REL_HSIOM ioss_0_port_2_pin_0_HSIOM
#define REL_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
    #define REL_HAL_PORT_PIN P2_0
    #define REL P2_0
    #define REL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define REL_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define REL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define LED_ENABLED 1U
#define LED_PORT GPIO_PRT2
#define LED_PORT_NUM 2U
#define LED_PIN 1U
#define LED_NUM 1U
#define LED_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define LED_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_1_HSIOM
    #define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define LED_HSIOM ioss_0_port_2_pin_1_HSIOM
#define LED_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
    #define LED_HAL_PORT_PIN P2_1
    #define LED P2_1
    #define LED_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define LED_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
    #define LED_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_3_pin_2_ENABLED 1U
#define ioss_0_port_3_pin_2_PORT GPIO_PRT3
#define ioss_0_port_3_pin_2_PORT_NUM 3U
#define ioss_0_port_3_pin_2_PIN 2U
#define ioss_0_port_3_pin_2_NUM 2U
#define ioss_0_port_3_pin_2_DRIVEMODE CY_GPIO_DM_STRONG
#define ioss_0_port_3_pin_2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_2_HSIOM
    #define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_3_pin_2_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_3_pin_2_HAL_PORT_PIN P3_2
    #define ioss_0_port_3_pin_2 P3_2
    #define ioss_0_port_3_pin_2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_3_pin_2_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define ioss_0_port_3_pin_2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_3_pin_3_ENABLED 1U
#define ioss_0_port_3_pin_3_PORT GPIO_PRT3
#define ioss_0_port_3_pin_3_PORT_NUM 3U
#define ioss_0_port_3_pin_3_PIN 3U
#define ioss_0_port_3_pin_3_NUM 3U
#define ioss_0_port_3_pin_3_DRIVEMODE CY_GPIO_DM_STRONG
#define ioss_0_port_3_pin_3_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_3_HSIOM
    #define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_3_pin_3_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_3_pin_3_HAL_PORT_PIN P3_3
    #define ioss_0_port_3_pin_3 P3_3
    #define ioss_0_port_3_pin_3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_3_pin_3_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define ioss_0_port_3_pin_3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_3_pin_6_ENABLED 1U
#define ioss_0_port_3_pin_6_PORT GPIO_PRT3
#define ioss_0_port_3_pin_6_PORT_NUM 3U
#define ioss_0_port_3_pin_6_PIN 6U
#define ioss_0_port_3_pin_6_NUM 6U
#define ioss_0_port_3_pin_6_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_3_pin_6_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_6_HSIOM
    #define ioss_0_port_3_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_3_pin_6_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_3_pin_6_HAL_PORT_PIN P3_6
    #define ioss_0_port_3_pin_6 P3_6
    #define ioss_0_port_3_pin_6_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_3_pin_6_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_3_pin_6_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_3_pin_7_ENABLED 1U
#define ioss_0_port_3_pin_7_PORT GPIO_PRT3
#define ioss_0_port_3_pin_7_PORT_NUM 3U
#define ioss_0_port_3_pin_7_PIN 7U
#define ioss_0_port_3_pin_7_NUM 7U
#define ioss_0_port_3_pin_7_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_3_pin_7_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_7_HSIOM
    #define ioss_0_port_3_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_3_pin_7_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_3_pin_7_HAL_PORT_PIN P3_7
    #define ioss_0_port_3_pin_7 P3_7
    #define ioss_0_port_3_pin_7_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_3_pin_7_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_3_pin_7_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_4_pin_0_ENABLED 1U
#define ioss_0_port_4_pin_0_PORT GPIO_PRT4
#define ioss_0_port_4_pin_0_PORT_NUM 4U
#define ioss_0_port_4_pin_0_PIN 0U
#define ioss_0_port_4_pin_0_NUM 0U
#define ioss_0_port_4_pin_0_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_4_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_0_HSIOM
    #define ioss_0_port_4_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_4_pin_0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_4_pin_0_HAL_PORT_PIN P4_0
    #define ioss_0_port_4_pin_0 P4_0
    #define ioss_0_port_4_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_4_pin_0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_4_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_4_pin_1_ENABLED 1U
#define ioss_0_port_4_pin_1_PORT GPIO_PRT4
#define ioss_0_port_4_pin_1_PORT_NUM 4U
#define ioss_0_port_4_pin_1_PIN 1U
#define ioss_0_port_4_pin_1_NUM 1U
#define ioss_0_port_4_pin_1_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_4_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_1_HSIOM
    #define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_4_pin_1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_4_pin_1_HAL_PORT_PIN P4_1
    #define ioss_0_port_4_pin_1 P4_1
    #define ioss_0_port_4_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_4_pin_1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_4_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_7_pin_0_ENABLED 1U
#define ioss_0_port_7_pin_0_PORT GPIO_PRT7
#define ioss_0_port_7_pin_0_PORT_NUM 7U
#define ioss_0_port_7_pin_0_PIN 0U
#define ioss_0_port_7_pin_0_NUM 0U
#define ioss_0_port_7_pin_0_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_7_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_0_HSIOM
    #define ioss_0_port_7_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_7_pin_0_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_7_pin_0_HAL_PORT_PIN P7_0
    #define ioss_0_port_7_pin_0 P7_0
    #define ioss_0_port_7_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_7_pin_0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_7_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_7_pin_1_ENABLED 1U
#define ioss_0_port_7_pin_1_PORT GPIO_PRT7
#define ioss_0_port_7_pin_1_PORT_NUM 7U
#define ioss_0_port_7_pin_1_PIN 1U
#define ioss_0_port_7_pin_1_NUM 1U
#define ioss_0_port_7_pin_1_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_7_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_1_HSIOM
    #define ioss_0_port_7_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_7_pin_1_IRQ ioss_interrupt_gpio_IRQn
#if defined (CY_USING_HAL)
    #define ioss_0_port_7_pin_1_HAL_PORT_PIN P7_1
    #define ioss_0_port_7_pin_1 P7_1
    #define ioss_0_port_7_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ioss_0_port_7_pin_1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ioss_0_port_7_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t ioss_0_port_0_pin_0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_0_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_0_pin_1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_0_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_1_pin_0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_1_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_1_pin_1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_1_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t REL_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t REL_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t LED_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t LED_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_2_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_3_pin_2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_3_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_3_pin_3_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_6_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_3_pin_6_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_3_pin_7_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_3_pin_7_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_4_pin_0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_4_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_4_pin_1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_4_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_7_pin_0_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_7_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_7_pin_1_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ioss_0_port_7_pin_1_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
