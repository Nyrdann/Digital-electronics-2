#ifndef GPIO_H
#define GPIO_H

#include  <avr/io.h>

#define PIN_LOW 0
#define PIN_HIGH 1

void GPIO_config_output (volatile uint8_t *reg_name, uint8_t pin_num);
void GPIO_config_input_nopull (volatile uint8_t *reg_name, uint8_t pin_num);
void GPIO_config_input_pullup (volatile uint8_t *reg_name, uint8_t pin_num);
void GPIO_write (volatile uint8_t *reg_name, uint8_t pin_num, uint8_t pin_val);
void GPIO_toggle (volatile uint8_t *reg_name, uint8_t pin_num);
uint8_t GPIO_read (volatile uint8_t *reg_name, uint8_t pin_num);

#endif /* GPIO_H */