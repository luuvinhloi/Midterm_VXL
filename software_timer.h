/*
 * SOFTWARE_TIMER.H
 *
 *  Created on: Nov 5, 2022
 *      Author: LUUVINHLOI
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_counter;
extern int timer2_counter;
extern int timer3_counter;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
