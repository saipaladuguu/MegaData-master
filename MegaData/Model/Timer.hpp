//
//  Timer.hpp

//  FirstCPlusPlus
//
//  Created by Paladugu, Sai Neeraj on 5/1/17.
//  Copyright � 2017 paladugu, Sai Neeraj. All rights reserved..
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
    
};

#endif /* Timer_hpp */
