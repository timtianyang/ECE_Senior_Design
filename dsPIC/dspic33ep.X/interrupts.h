/* 
 * File:   interrupts.h
 * Author: Tim
 *
 * Created on February 25, 2015, 5:08 PM
 */

#ifndef INTERRUPTS_H
#define	INTERRUPTS_H

#ifdef	__cplusplus
extern "C" {
#endif


    //controls
    extern volatile unsigned int sendMagwickFlag;
    extern volatile unsigned int calibrate_gyro_flag;
    extern volatile unsigned int calibrate_yaw_flag;

#ifdef	__cplusplus
}
#endif

#endif	/* INTERRUPTS_H */

