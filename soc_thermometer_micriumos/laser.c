/*
 * laser.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "laser.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef LASER_TASK_PRIO
#define LASER_TASK_PRIO 3
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB laser_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void laser_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void laser_init(void)
{
  RTOS_ERR err;

  // Create Laser Task
  OSTaskCreate(&laser_tcb,
               "laser task",
               laser_task,
               DEF_NULL,
               LASER_TASK_PRIO,
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

static void laser_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}


