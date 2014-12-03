 #include <stdlib.h>
#include "osapi.h"
#include "c_types.h"
#include "at.h"
#include "at_tcCmd.h"
#include "user_interface.h"

void ICACHE_FLASH_ATTR
at_exeCmdTCrtc(uint8_t id)
{
	char tmp[50];
	os_sprintf(tmp,"Time: %u\n",system_get_rtc_time());
	uart0_sendStr(tmp);
	at_backOk;
}

void ICACHE_FLASH_ATTR
at_exeCmdTCrtc2(uint8_t id)
{
	char tmp[50];
	os_sprintf(tmp,"Cali Time: %u\n",system_rtc_clock_cali_proc());
	uart0_sendStr(tmp);
	at_backOk;
}