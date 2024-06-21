/******************************************************************************
 * DISCLAIMER
 * This code has been generated by ASCET-DEVELOPER Community Edition.
 * It shall be used only in projects for non commercial use.
 * See license terms and conditions under https://www.etas.com/en/products/download_center.php.
 ******************************************************************************/

/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER Community Edition 7.9.0 Hotfix 1
 * CODE GENERATOR:..............6.4.7
 * COMPONENT:...................SystemLib.CounterTimer.Timer
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    Timer decrements the time counter by dT and signals when the time counter has reached zero. It is not retriggerable.
 ******************************************************************************/
#ifndef _ASD_SYSTEMLIB_COUNTERTIMER_TIMER_AUTOMATIC_H_
#define _ASD_SYSTEMLIB_COUNTERTIMER_TIMER_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 7))
# error NOT COMPLIANT (< compliance level 7) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"


/* SERAP structure for SystemLib_CounterTimer_Timer_Automatic intentionally not created */
/* reason: no local parameters                                                */




/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'SystemLib_CounterTimer_Timer_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct SystemLib_CounterTimer_Timer_Automatic_RAM_SUBSTRUCT {
   float32 timeCounter;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'SystemLib_CounterTimer_Timer_Automatic'
 ******************************************************************************/


/* component structure for class SYSTEMLIB_COUNTERTIMER_TIMER_AUTOMATIC intentionally not created */
/* reason: no local elements                                                  */

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: .....SystemLib_CounterTimer_Timer_Automatic */
#define _SystemLib_CounterTimer_Timer_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'esdl_timer_gameController_model_MainClass_RAM' */
/* containing 'RAM' memory class tree */
extern struct SystemLib_CounterTimer_Timer_Automatic_RAM_SUBSTRUCT esdl_timer_gameController_model_MainClass_RAM;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by class SystemLib_CounterTimer_Timer_Automatic
 ******************************************************************************/
extern void SystemLib_CounterTimer_Timer_Automatic_begin (/* IN    */ const float32 startTime);
extern void SystemLib_CounterTimer_Timer_Automatic_compute (void);
extern float32 SystemLib_CounterTimer_Timer_Automatic_getTime (void);
extern boolean SystemLib_CounterTimer_Timer_Automatic_isElapsed (void);


/* BEGIN: extern declarations for SERAP */
/* END: extern declarations for SERAP */



#endif /* _ASD_SYSTEMLIB_COUNTERTIMER_TIMER_AUTOMATIC_H_ */
