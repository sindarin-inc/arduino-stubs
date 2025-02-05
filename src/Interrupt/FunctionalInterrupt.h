/*
 * FunctionalInterrupt.h
 *
 *  Created on: 8 jul. 2018
 *      Author: Herman
 */

#pragma once

#include <cstdint>
#include <functional>

struct InterruptArgStructure {
    std::function<void(void)> interruptFunction;
};

void attachInterrupt(uint8_t pin, std::function<void(void)> intRoutine, int mode);
