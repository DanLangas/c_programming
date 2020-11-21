/*******************************************************************************
  Fan PWM control
  12F683
  CONFIG = 0x0FD4
  Project > Edit project:
                        Oscillator: Internal RC No Clock
                        WDT: Off
                        PUT: Off
                        MCLRE: Disabled
                        CP: Off
                        Data EE RP: Off
                        BOD: BOD enabled, SBOREN disabled
                        Internal External SOM: Enabled
                        Monitor clock fail safe: Enabled
*******************************************************************************/

void main() {
     OSCCON = 0b01000111;        // pdf 22.
     ADCON0 = 0b10001111;        // pdf 67.
     CMCON0 = 7;                 // pdf 58.
     ANSEL =  0b00001000;        // pdf 35.
     TRISIO = 0b00011000;        // pdf 33.
     GPIO = 0;
     PWM1_Init(200);
     PWM1_Start();

     while(1){
          PWM1_Set_Duty(ADC_Read(3)>>2);
          delay_ms(200);
     }    // while
}    // main
