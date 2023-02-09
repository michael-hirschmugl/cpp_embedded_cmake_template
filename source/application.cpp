#include "application.hpp"

#include "main.h"

extern "C" {

void setup() {
    // For future episodes ;)
}

void loop() {

    HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_3);
    HAL_Delay(200U);

}
}