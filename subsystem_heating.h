/***************************************************************
 * $ Bioreactor :: CSEEE Group4 $
 *
 * Title: subsystem_heating.h
 *
 * Author: Teii Ri (teii.ri.21@ucl.ac.uk)
 * Date: 2021/12/11
 * Version: 1.0
 **************************************************************/

/*IMPORTANT
 * ! Thermistor must at Pin A0
 * ! Heater must at Pin 9
 */

#ifndef HEATING_SUBSYSTEM_H
#define HEATING_SUBSYSTEM_H

#include <Arduino.h>

class HeatingSubsystem {

public:
    void workCycle();

    float getTempCurrent() const;

    float getHeaterDutyCycle() const;

    void setTempTarget(float);

private:
    const uint16_t vdR = 10000;    // From Data Sheet
    const uint16_t ntcBeta = 4220;    // From Data Sheet
    const uint16_t ntcR0 = 10000;     // From Data Sheet
    const float ntcT0 = 298.15; // From Data Sheet

    float tempCurrent = 0;
    float tempTarget = 0;
    float heaterDutyCycle = 0;

    void getTempCelsiusCurrent();

    void setHeaterPower();

};

#endif // HEATING_SUBSYSTEM_H
