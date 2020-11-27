DEFINE OSC 8

SPWMpin var GPIO.5 ' Output Pin for SSPWM
INCLUDE "SSPWM.inc" ' include the SSPWM module

;----[Constants]------------------------------------------
;HPWMfreq CON 20000
Freq = 85 ' Set Frequency of SSPWM (word)

;----[Variables]------------------------------------------
;HPWMduty VAR BYTE
;LastHPWMduty VAR BYTE
SSPWMduty VAR BYTE

;----[Initialize]-----------------------------------------
OSCCON = %01110000 ' 8Mhz
;ANSEL = %000011 ' AN0 and AN1 ANALOG
DutyCycle = 10 ' Set Duty Cycle of SSPWM
gosub StartSPWM ' Start SSPWM @ Freq/DutyCycle
;HPWM 1, 127, HPWMfreq ' Start 20Khz PWM @ 50%

;----[Main Program Loop]---------------------------------
Main:
;ADCIN 0, HPWMduty
;ADCIN 1, SSPWMduty

;IF HPWMDuty != LastHPWMduty THEN
;LastHPWMduty = HPWMDuty
;HPWM 1, HPWMDuty, HPWMfreq
; ENDIF


;DutyCycle = SSPWMduty*80/256+10 ' scale SSPWM dutycycle

DutyCycle = 95        ' set 95% nominal SSPWM dutycycle
gosub SetSPWM       ' Change SSPWM DutyCycle
GOTO Main
Maybe after all I will not need changes in ASM.

