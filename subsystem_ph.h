/***************************************************************
 * $ Bioreactor :: CSEEE Group4 $
 *
 * Title: subsystem_ph.h
 *
 * Author: Ameera Nor Khairi (ameera.khairi.21@ucl.ac.uk)
 * Author: Teii Ri (teii.ri.21@ucl.ac.uk)
 * Date: 2021/12/11
 * Version: 1.0
 **************************************************************/

/* IMPORTANT
 * ! Thermistor must at Pin A2
 * ! Pump_1 must at Pin 5
 * ! Pump_2 must at Pin 6
 */

#ifndef PH_SUBSYSTEM_H
#define PH_SUBSYSTEM_H

#define PH_PROBE_PIN  A2
#define PUMP_1_PIN    5
#define PUMP_2_PIN    6

class PHSubsystem {

public:
    void workCycle();

    float getCurrentPH() const;

    void setTargetPH(float);

private:
    float currentPH = 0;
    float targetPH = 6.5;

    void readCurrentPH();
};

#endif //PH_SUBSYSTEM_H
