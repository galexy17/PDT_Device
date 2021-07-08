/*
 * pid_circ.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "pid_circ.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Hardware from BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef PID_CIRC_TASK_PRIO
#define PID_CIRC_TASK_PRIO 3
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB pid_circ_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void pid_circ_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void pid_circ_init(void)
{
  RTOS_ERR err;

  // Create PID Circuit Task
  OSTaskCreate(&pid_circ_tcb,
               "pid circuit task",
               pid_circ_task,
               DEF_NULL,
               PID_CIRC_TASK_PRIO,
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

static void pid_circ_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}


