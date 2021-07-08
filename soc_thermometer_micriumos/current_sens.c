/*
 * current_sens.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "current_sens.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

#ifndef STK_SIZE
#define STK_SIZE 64
#endif

#ifndef CURRENT_SENS_TASK_PRIO
#define CURRENT_SENS_TASK_PRIO 3
#endif


///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB current_sens_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void current_sens_task(void);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void current_snes_init(void){
  RTOS_ERR err;

  // Create Current Sensor Task
  OSTaskCreate(&current_sens_tcb,
               "current snesor task",
               current_sens_task,
               DEF_NULL,
               CURRENT_SENS_TASK_PRIO,
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

static void current_sens_task(void *arg)
{
  (void)&arg;
   do{

   }while(1);
}

