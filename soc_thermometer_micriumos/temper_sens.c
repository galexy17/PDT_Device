/*
 * temper_sens.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "temper_sens.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Hardware from BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef TEMPER_SENS_TASK_PRIO
#define TEMPER_SENS_TASK_PRIO 4
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB temper_sens_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void temper_sens_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void temper_sens_init(void)
{
  RTOS_ERR err;

  // Create Temperature Sensor Task
  OSTaskCreate(&temper_sens_tcb,
               "temperature sensor task",
               temper_sens_task,
               DEF_NULL,
               TEMPER_SENS_TASK_PRIO,
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

static void temper_sens_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}


