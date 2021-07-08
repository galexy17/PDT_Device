/*
 * fan.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */

////////////////
/// Includes ///
////////////////
#include "fan.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef FAN_TASK_PRIO
#define FAN_TASK_PRIO 5
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB fan_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void fan_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void fan_init(void)
{
  RTOS_ERR err;

  //Creating Fan Task
  OSCreateTask(&fan_tcb,
               "fan task",
               fan_task,
               DEF_NULL,
               FAN_TASK_PRIO,
               &stack[0],
               (STK_SIZE - 10u),
               STK_SIZE,
               0u,
               25u,
               DEF_NULL,
               OS_OPT_TASK_NONE,
               &err);
}


//////////////////////////////////
/// Local Funciton Definitions ///
//////////////////////////////////

static void fan_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}

