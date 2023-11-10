/*
 * vu_meter.c
 *
 *  Created on: Nov 10, 2023
 *      Author: sandepun87
 */


#include "vu_meter.c"




SPI_HandleTypeDef hspi3;  // Declare an instance for SPI3


    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();

    MX_SPI3_Init(&hspi3);






int vu_init(h_vu_t *h_vu){


led[PORTA]=0x00;

led[PORTB]=0x80;

HAL_GPIO_WritePin(VU_nCS_GPIO_Port, VU_nCS_Pin, GPIO_PIN_RESET);  // Set nCS


    //mettre le PORT A EN OUTPUT

spi_buffer[0] = VU_ADDR;

spi_buffer[1]=IODIRA_ADDRESS;

spi_buffer[2]=0x00;

HAL_SPI_Transmit(hspi3, spi_buffer, Size, 100);

spi_buffer[0] = VU_ADDR;

spi_buffer[1]=IODIRB_ADDRESS;

spi_buffer[2]=0x00;

HAL_SPI_Transmit(hspi3, uint8_t *pData, uint16_t Size, uint32_t Timeout);


}



int vu_led(h_vu_t *h_vu, uint8_t port, uint8_t led, uint8_t state){
