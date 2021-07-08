/*
 * battery.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "battery.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Hardware from BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef BATTERY_TASK_PRIO
#define BATTERY_TASK_PRIO 2
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB battery_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void battery_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void battery_init(void)
{
  RTOS_ERR err;

  // Create Battery Task
  OSTaskCreate(&battery_tcb,
               "battery task",
               battery_task,
               DEF_NULL,
               BATTERY_TASK_PRIO,
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

static void battery_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}


