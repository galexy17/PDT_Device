/*
 * lcd.c
 *
 *  Created on: Jun 23, 2021
 *      Author: inglesg
 */
////////////////
/// Includes ///
////////////////
#include "lcd.h"
#include "os.h"

///////////////
/// Defines ///
///////////////

// Hardware from BSP

#ifndef STK_SIZE
#define STK_SIZE 64
#endif


#ifndef LCD_TASK_PRIO
#define LCD_TASK_PRIO 6
#endif

///////////////////////
/// Local Variables ///
///////////////////////

static OS_TCB lcd_tcb;
static CPU_STK stack[STK_SIZE];

///////////////////////
/// Local Functions ///
///////////////////////

static void lcd_task(void *arg);

////////////////////////
/// Global Variables ///
////////////////////////



////////////////////////
/// Global Functions ///
////////////////////////

void lcd_init(void)
{
  RTOS_ERR err;

  // Create LCD Task
  OSTaskCreate(&lcd_tcb,
               "lcd task",
               lcd_task,
               DEF_NULL,
               LCD_TASK_PRIO,
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

static void lcd_task(void *arg)
{
  (void)&arg;
  do{

  }while(1);
}


