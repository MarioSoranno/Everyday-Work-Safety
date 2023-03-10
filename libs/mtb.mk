#
# This file is generated by ModusToolbox during the 'make getlibs' operation
# Any edits to this file will be lost the next time the library manager is run or
# the next time 'make getlibs' is run.
#
# List of local libraries


# Path to the current BSP
SEARCH_TARGET_APP_CY8CKIT-041S-MAX=bsps/TARGET_APP_CY8CKIT-041S-MAX

# The search paths for the included middleware
SEARCH_capsense=../mtb_shared/capsense/release-v3.0.1
SEARCH_cmsis=../mtb_shared/cmsis/release-v5.8.0
SEARCH_core-lib=../mtb_shared/core-lib/release-v1.3.1
SEARCH_core-make=../mtb_shared/core-make/release-v3.0.2
SEARCH_mtb-pdl-cat2=../mtb_shared/mtb-pdl-cat2/release-v2.2.0
SEARCH_recipe-make-cat2=../mtb_shared/recipe-make-cat2/release-v2.0.0

# Search libraries added to build
SEARCH_MTB_MK+=$(SEARCH_capsense)
SEARCH_MTB_MK+=$(SEARCH_cmsis)
SEARCH_MTB_MK+=$(SEARCH_core-lib)
SEARCH_MTB_MK+=$(SEARCH_core-make)
SEARCH_MTB_MK+=$(SEARCH_mtb-pdl-cat2)
SEARCH_MTB_MK+=$(SEARCH_recipe-make-cat2)

-include $(CY_INTERNAL_APP_PATH)/importedbsp.mk
COMPONENTS += MW_CAPSENSE
COMPONENTS += MW_CMSIS
COMPONENTS += MW_CORE_LIB
COMPONENTS += MW_CORE_MAKE
COMPONENTS += MW_MTB_PDL_CAT2
COMPONENTS += MW_RECIPE_MAKE_CAT2

# Register map file
DEVICE_CY8C4149AZI-S593_SVD=$(SEARCH_mtb-pdl-cat2)/devices/svd/psoc4100smax.svd


#
# generate make targets for the graphical editors that are specific to this project
#

bsp-assistant:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name bsp-assistant
.PHONY: bsp-assistant

capsense-configurator:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name capsense-configurator
.PHONY: capsense-configurator

capsense-tuner:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name capsense-tuner
.PHONY: capsense-tuner

config:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name device-configurator
.PHONY: config

device-configurator:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name device-configurator
.PHONY: device-configurator

modlibs:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name library-manager
.PHONY: modlibs

library-manager:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name library-manager
.PHONY: library-manager

config_lin:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name lin-configurator
.PHONY: config_lin

lin-configurator:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name lin-configurator
.PHONY: lin-configurator

seglcd-configurator:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name seglcd-configurator
.PHONY: seglcd-configurator

smartio-configurator:
	$(CY_TOOL_mtblaunch_EXE_ABS) --project . --short-name smartio-configurator
.PHONY: smartio-configurator

