#ifndef __AT_CMD_H
#define __AT_CMD_H

#include "at.h"
#include "at_wifiCmd.h"
#include "at_ipCmd.h"
#include "at_baseCmd.h"
#include "at_tcCmd.h"

#define at_cmdNum   32

at_funcationType at_fun[at_cmdNum]={
  {NULL, 0, NULL, NULL, NULL, at_exeCmdNull},
  {"E", 1, NULL, NULL, at_setupCmdE, NULL},
  {"+RST", 4, NULL, NULL, NULL, at_exeCmdRst},
  {"+GMR", 4, NULL, NULL, NULL, at_exeCmdGmr},
  {"+IPR", 4, NULL, NULL, at_setupCmdIpr, NULL},
#ifdef ali
  {"+UPDATE", 7, NULL, NULL, NULL, at_exeCmdUpdate},
#endif
  {"+CWMODE", 7, at_testCmdCwmode, at_queryCmdCwmode, at_setupCmdCwmode, NULL},
  {"+CWJAP", 6, NULL, at_queryCmdCwjap, at_setupCmdCwjap, NULL},
  {"+CWLAP", 6, NULL, NULL, at_setupCmdCwlap, at_exeCmdCwlap},
  {"+CWQAP", 6, at_testCmdCwqap, NULL, NULL, at_exeCmdCwqap},
  {"+CWSAP", 6, NULL, at_queryCmdCwsap, at_setupCmdCwsap, NULL},
  {"+CWLIF", 6, NULL, NULL, NULL, at_exeCmdCwlif},
  {"+CWDHCP", 7, NULL, at_queryCmdCwdhcp, at_setupCmdCwdhcp, NULL},
  {"+CIFSR", 6, at_testCmdCifsr, NULL, at_setupCmdCifsr, at_exeCmdCifsr},
  {"+CIPSTAMAC", 10, NULL, at_queryCmdCipstamac, at_setupCmdCipstamac, NULL},
  {"+CIPAPMAC", 9, NULL, at_queryCmdCipapmac, at_setupCmdCipapmac, NULL},
  {"+CIPSTA", 7, NULL, at_queryCmdCipsta, at_setupCmdCipsta, NULL},
  {"+CIPAP", 6, NULL, at_queryCmdCipap, at_setupCmdCipap, NULL},
  {"+CIPSTATUS", 10, at_testCmdCipstatus, NULL, NULL, at_exeCmdCipstatus},
  {"+CIPSTART", 9, at_testCmdCipstart, NULL, at_setupCmdCipstart, NULL},
  {"+CIPCLOSE", 9, at_testCmdCipclose, NULL, at_setupCmdCipclose, at_exeCmdCipclose},
  {"+CIPSEND", 8, at_testCmdCipsend, NULL, at_setupCmdCipsend, at_exeCmdCipsend},
  {"+CIPMUX", 7, NULL, at_queryCmdCipmux, at_setupCmdCipmux, NULL},
  {"+CIPSERVER", 10, NULL, NULL,at_setupCmdCipserver, NULL},
  {"+CIPMODE", 8, NULL, at_queryCmdCipmode, at_setupCmdCipmode, NULL},
  {"+CIPSTO", 7, NULL, at_queryCmdCipsto, at_setupCmdCipsto, NULL},
  {"+CIUPDATE", 9, NULL, NULL, NULL, at_exeCmdCiupdate},
  {"+CIPING", 7, NULL, NULL, NULL, at_exeCmdCiping},
  {"+CTCRTC", 7, NULL, NULL, NULL, at_exeCmdTCrtc},
  {"+CTCPRTC", 8, NULL, NULL, NULL, at_exeCmdTCrtc2},
#ifdef ali
  {"+MPINFO", 7, NULL, NULL, at_setupCmdMpinfo, NULL}
#endif
};

#endif
