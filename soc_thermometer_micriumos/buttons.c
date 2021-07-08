/*
 * buttons.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "buttons.h"
#include "os.h"

///////////////
/// Defines ///
///////////////
#ifndef BUTTON_1
#define BUTTON_1

#endif

#ifndef BUTTON_2
#define BUTTON_2

#endif

#ifndef BUTTON_3
#define BUTTON_3

#endif

#ifndef BUTTON_4
#define BUTTON_4
#endif

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef BUTTONS_TASK_PRIO
#define BUTTONS_TASK_PRIO 4
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB buttons_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void buttons_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void buttons_init(){
  RTOS_ERR err;

  // Create Buttons Task
  OSTaskCreate(&buttons_tcb,
               "buttons task",
               buttons_task,
               DEF_NULL,
               BUTTONS_TASK_PRIO,
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

static void buttons_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}
