/* 
 * File:   pin_manager.h
 * Author: TOP
 *
 * Created on February 14, 2019, 10:15 AM
 */

#ifndef PIN_MANAGER_H
#define	PIN_MANAGER_H

#define INPUT 1
#define OUTPPUT 0

#define HIGH 1
#define LOW 0

#define ANALOG 1
#define DIGITAL 0

#define PULL_UP_ENABLED 1
#define PULL_UP_DISABLED 0

void PIN_MANAGER_Initialize (void);

void PIN_MANAGER_IOC(void);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* PIN_MANAGER_H */

