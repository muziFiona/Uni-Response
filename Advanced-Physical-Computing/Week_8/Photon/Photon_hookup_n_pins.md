# Photon IOT Wi-Fi 

## This page for the hookup and pins

## To Set up 
https://docs.particle.io/quickstart/photon/

Here is the official web link to tell you how to setup your component and the basic pins to control the outcome. 

Set up your own Wifi (hotspot) and connect it to Photon via the app. (The WiFi is your own hotspot!!!! Not any wifi from the board!!!)

[![setup and blink tutorial](https://docs.particle.io/assets/images/photon-kit-new.jpg)](https://vimeo.com/178282058)

### Pins and Structure

[![Photon Board Detail](https://www.electronicwings.com/public/images/user_images/images/Particle_Photon/What%20is%20particle%20photon/Pin%20details%20copy2.jpg)](https://www.electronicwings.com/particle/particle-photon-board)

D7 is the pin with LED on it, so you don't really need to connect to a breadboard to test its connectivity. 

After you have setup through the app "Particle IoT" (ios/android), with set WiFi, go to the "Tinker" on the app and you can start control. 

As D7 comes with LED, you don't need to connect to any components for first time. Press D7 and set this as digitalWrite and this LED will lights up when it is HIGH, and off when it is LOW. 

### Pin Detail Diagram of Particle Photon

3V3: This pin is the output of the on-board regulator and is internally connected to the VDD of the Wi-Fi module. When powering the Photon via VIN or the USB port, this pin will output a voltage of 3.3VDC. This pin can also be used to power the Photon directly (max input 3.3VDC).
NOTE: When powering the Photon via this pin, do not put power on the VIN pin.

GND
WKP: This is an active-high input that allows you to wake-up the module from sleep/deep sleep modes. When not used as a WAKEUP, this pin can also be used as a digital GPIO, ADC input or PWM.
VIN: This is the power supply pin to the Photon with a voltage range of 3.6 to 5.5VDC (internally regulated down to 3.3VDC). When the Photon is powered via its USB port, this pin will output a voltage of approximately 4.7VDC.
Why 4.7 and not 5?
Well, the actual voltage will be the USB voltage, which is normally 5, minus the forward voltage drop (0.3V) of the protection diode.

D0 - D7: These are digital only GPIO pins.
A0 - A5: These can be used as digital GPIOs or as ADC inputs channels.
DAC: This pin can be used as a digital GPIO, ADC input or as a DAC output.
RX: Primarily used as UART RX, but can also be used as a digital GPIO, ADC input or PWM.
TX: Primarily used as UART TX, but can also be used as a digital GPIO, ADC input or PWM.
PWM: It has On-board 9 pins or channels (i.e. D0, D1, D2, D3, A4, A5, WKP, RX and TX) for PWM generation. The PWM pins are shown in above image named as TIMx_CHx i.e. TIM3_CH1, TIM3_CH2, etc.
RST: This is an active-low reset pin for the Photon.
VBAT: Supply to the internal RTC, backup registers and SRAM (1.8 to 3.3VDC).
SPI: It has two On-board hardware SPI, namely SPI and SPI1.
      The SPI pins on Particle Photon are as follows,

SPI                                                             SPI1          

SS         - A2 (default)                                SS         - D5 (default)

SCK      - A3                                                SCK       - D4

MISO   - A4                                                MISO    - D3

MOSI   - A5                                                MOSI    - D2

I2C: It has one I2C port. SDA and SCL pins are available on D0 and D1 pin respectively.

//information from https://www.electronicwings.com/particle/particle-photon-board 


## More examples from others

https://github.com/johnsdiyplayground/Particle-Photon
https://youtu.be/LkH4tAueexc
https://youtu.be/0nQia-OYfbw
