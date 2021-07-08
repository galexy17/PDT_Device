/*
 * emrgnc_stop.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "emrgnc_stop.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

//BSP defines

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef EMRGNC_STOP_TASK_PRIO
#define EMRGNC_STOP_TASK_PRIO 1
#endif


///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB emrgnc_stop_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void emrgnc_stop_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void emrgnc_stop_init(void)
{
  RTOS_ERR err;


  //Create Emergency Stop Task
  OSCreateTask(&emrgnc_stop_tcb,
               "emergency stop task",
               emrgnc_stop_task,
               DEF_NULL,
               EMRGNC_STOP_TASK_PRIO,
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


static void emrgnc_stop_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}

