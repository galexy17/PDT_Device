/*
 * tamping_sens.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "tamping_sens.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Hardware from BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef TAMPING_SENS_TASK_PRIO
#define TAMPING_SENS_TASK_PRIO 3
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB tamping_sens_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void tamping_sens_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void tamping_sens_init(void)
{
  RTOS_ERR err;

  // Create Tampering Sensor Task
  OSTaskCreate(&tamping_sens_tcb,
               "tampering sensor task",
               tamping_sens_task,
               DEF_NULL,
               TAMPING_SENS_TASK_PRIO,
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

static void tamping_sens_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}


