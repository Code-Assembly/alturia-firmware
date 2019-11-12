#ifndef __ALTURIA_H__
#define __ALTURIA_H__

#include <zephyr.h>
#include <drivers/gpio.h>
#include <device.h>

#define LED_GPIO_CONTROLLER                 DT_ALIAS_LED0_GPIOS_CONTROLLER
#define SUMMER_GPIO_CONTROLLER              "GPIOB"
#define BARO_CS_GPIO_CONTROLLER             "GPIOB"
#define IMU_GYRO_CS_GPIO_CONTROLLER         "GPIOB"
#define IMU_ACC_CS_GPIO_CONTROLLER          "GPIOB"
#define ACC_CS_GPIO_CONTROLLER              "GPIOB"

#define LED_GPIO_PIN                        DT_ALIAS_LED0_GPIOS_PIN
#define SUMMER_GPIO_PIN                     11
#define BARO_CS_GPIO_PIN                    1
#define IMU_GYRO_CS_GPIO_PIN                2
#define IMU_ACC_CS_GPIO_PIN                 10
#define ACC_CS_GPIO_PIN                     0

#define ALTURIA_FLASH_MP                    "/lfs"

void __attribute__((noreturn)) panic(const char *str);
void init_gpios(void);

#endif