# EspSoftwareSerial

Implementation of the Arduino software serial library for the ESP8266

Same functionality as the corresponding AVR library but several instances can be active at the same time.
Speed up to 115200 baud is supported. The constructor also has an optional input buffer size.

Please note that due to the fact that the ESP always have other activities ongoing, there will be some inexactness in interrupt
timings. This may lead to bit errors when having heavy data traffic in high baud rates.

# History

- 2017/06/17 - rearranged repo Platformio layout
- 2017/06/17 - Add 2 stop bits support.
- 2016/12/11 - Add parity bit support. (credits go to https://github.com/PerryWu/espsoftwareserial)
- 2015-09-22 - Original (https://github.com/plerup/espsoftwareserial)