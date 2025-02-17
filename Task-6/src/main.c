#include <ch32v00x.h>
#include <debug.h>

void GPIO_Config(void)
{
GPIO_InitTypeDef GPIO_InitStructure = {0}; //structure variable GPIO_InitStructure of type GPIO_InitTypeDef which is used for GPIO configuration.

RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE); // to Enable the clock for Port C
//pin 4 OUT PIN FOR IR SENSOR
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 ; // Defines which Pin to configure
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; // Defines Input Type
GPIO_Init(GPIOC, &GPIO_InitStructure);

//Pin 5 for Buzzer
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5 ; // Defines which Pin to configure
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; // Defines Output Type
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // Defines speed
GPIO_Init(GPIOC, &GPIO_InitStructure);

//pin 6 IS LED PIN
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6 ; //
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; // Defines Output Type
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // Defines speed

GPIO_Init(GPIOC, &GPIO_InitStructure);

}


int main(void)
{
uint8_t IR = 0;
uint8_t set=1;
uint8_t reset=0;
NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);// Configuring NVIC priority group
SystemCoreClockUpdate();// Update System Core Clock
GPIO_Config();//Call GPIO configuration function

while(1)
{
    IR = GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_4);
    if (IR==1)
    {
        //If IR sensor detects, then Buzzer and LED will be ON
        GPIO_WriteBit(GPIOC, GPIO_Pin_6, set);
        GPIO_WriteBit(GPIOC, GPIO_Pin_5, set);
        }
    
    else{
        //If IR sensor doesn't detect, then Buzzer and LED will be OFF
        GPIO_WriteBit(GPIOC, GPIO_Pin_6,reset);
        GPIO_WriteBit(GPIOC, GPIO_Pin_5,reset);
    }

    }
    
}