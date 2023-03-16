cmake_minimum_required(VERSION 3.5)

idf_component_register(
     SRCS src/Interrupt/FunctionalInterrupt.cpp src/Interrupt/interrupt-hal.cpp 
     src/Update/MD5Builder.cpp src/Update/Updater.cpp
     INCLUDE_DIRS "src" "src/Update" "src/Interrupt"
     REQUIRES app_update driver esp_partition spi_flash
)

project(astubs)
