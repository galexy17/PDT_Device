/*
 * microsd.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "microsd.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Hardware from BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef MICROSD_TASK_PRIO
#define MICROSD_TASK_PRIO 6
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB microsd_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void microsd_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void microsd_init(void)
{
  RTOS_ERR err;

  // Create MicroSD Task
  OSTaskCreate(&microsd_tcb,
               "microsd task",
               microsd_task,
               DEF_NULL,
               MICROSD_TASK_PRIO,
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

static void microsd_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}





