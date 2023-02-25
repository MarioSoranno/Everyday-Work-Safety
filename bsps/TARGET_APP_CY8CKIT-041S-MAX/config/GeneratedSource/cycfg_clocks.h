/*******************************************************************************
* File Name: cycfg_clocks.h
*
* Description:
* Clock configuration
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

#if !defined(CYCFG_CLOCKS_H)
#define CYCFG_CLOCKS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_MSC_CLK_DIV_ENABLED 1U
#define CYBSP_MSC_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define CYBSP_MSC_CLK_DIV_NUM 0U
#define CYBSP_EZI2C_CLK_DIV_ENABLED 1U
#define CYBSP_EZI2C_CLK_DIV_HW CY_SYSCLK_DIV_16_BIT
#define CYBSP_EZI2C_CLK_DIV_NUM 1U

#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_MSC_CLK_DIV_obj;
    extern const cyhal_resource_inst_t CYBSP_EZI2C_CLK_DIV_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_clocks(void);
void reserve_cycfg_clocks(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_CLOCKS_H */
