#pragma once

#include <iostream>
#include <string>
using namespace std;

class Amplifier
{
    public:
    Amplifier();
    ~Amplifier();
    void turnOn();
    void turnOff();
    void setAmpStatus(bool status);
    bool getAmpStatus();
    void setVolume(int volume);
    int getVolume();
    void setTone(int tone);
    int getTone();

    private:
    bool _ampStatus;
    int _volume;
    int _tone;
};