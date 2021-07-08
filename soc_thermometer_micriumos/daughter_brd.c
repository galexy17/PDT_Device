/*
 * daughter_brd.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "daughter_brd.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Daughter Board BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef DAUGHTER_BRD_TASK_PRIO
#define DAUGHTER_BRD_TASK_PRIO 3
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB daughter_brd_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void daughter_brd_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void daughter_brd_init(void)
{
  RTOS_ERR err;

  //Create Daughter Board Task
  OSCreateTask(&daughter_brd_tcb,
               "daughter board task",
               daughter_brd_task,
               DEF_NULL,
               DAUGHTER_BRD_TASK_PRIO,
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

static void daughter_brd_task(void *arg)
{
  (void)&arg;
    do{

    }while(1);
}


