/***************************************************************
 * $ Bioreactor :: CSEEE Group4 $
 *
 * Title: subsystem_stirring.h
 *
 * Author: Teii Ri (teii.ri.21@ucl.ac.uk)
 * Date: 2021/12/11
 * Version: 1.0
 **************************************************************/

/* IMPORTANT
 * ! Photo-interrupter must at Pin A1
 * ! Motor must at Pin 10
 */

#ifndef STIRRING_SUBSYSTEM_H
#define STIRRING_SUBSYSTEM_H

#include <Arduino.h>

#define STIRRING_MOTOR_PIN 10

class StirringSubsystem {
public:
    void workCycle();

    uint16_t getMotorDutyCycle() const;

    uint16_t getSpeedCurrent() const;

    void setSpeedTarget(uint16_t);

private:
    uint16_t speedTarget = 0;
    uint16_t speedCurrent = 0;
    int motorDutyCycle = 0;

    void getMotorSpeedCurrent();
};

#endif // STIRRING_SUBSYSTEM_H
