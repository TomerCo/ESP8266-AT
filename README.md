ESP8266-AT
==========
Based on the official SDK version 0.9.3 with AT commands version 20.

 * Added support for NTP synchronization, Usage:
    AT+CIPNTP=<offset from gmt> - to initialize the ntp and set the timezone, this will cause the module to
      send an NTP query to the global ntp pool, for example: AT+CIPNTP=2 , to set the timezone to GMT-2
    AT+CIPNTP? - to get the current date and time, for example:
      AT+CIPNTP?
      Time: 22:22:42 12/02/2014 GMT+02
      
    NOTE: the ntp is the sntp that comes with libwip with some changes.



