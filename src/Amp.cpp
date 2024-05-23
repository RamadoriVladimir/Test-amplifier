#include <amp.hpp>

Amplifier::Amplifier()
{
    setAmpStatus(false);
    setVolume(0);
    setTone(0);
}

Amplifier::~Amplifier()
{ 
}

void Amplifier::turnOn()
{
    setAmpStatus(true);
}

void Amplifier::turnOff()
{
    setAmpStatus(false);
}

void Amplifier::setAmpStatus(bool status)
{
    _ampStatus = status;
}

bool Amplifier::getAmpStatus()
{
    return _ampStatus;
}

void Amplifier::setVolume(int volume)
{
    _volume = volume;
}

int Amplifier::getVolume()
{
    return _volume;
}

void Amplifier::setTone(int tone)
{
    _tone = tone;
}

int Amplifier::getTone()
{
    return _tone;
}
