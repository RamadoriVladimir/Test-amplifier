#include <iostream>
#include <string>
#include <memory>
#include <amp.hpp>
#include <TestEvaluator.hpp>

using namespace std;

auto te = make_unique<TestEvaluator>();

void testAmpIsOn()
{
    auto amp = make_unique<Amplifier>();
    amp->turnOn();
    bool status = amp->getAmpStatus();
    te->evaluate("The amp is on", status == true);
}

void testAmpIsOff()
{
    auto amp = make_unique<Amplifier>();
    amp->turnOff();
    bool status = !amp->getAmpStatus();
    te->evaluate("The amp is off", status);
}

void testAmpIsOverdriving()
{
   auto amp = make_unique<Amplifier>();
   amp->setVolume(8);
   bool loudness = amp->getVolume()>4;
   te->evaluate("The amp is overdriving", loudness);
}

void testAmpIsClean()
{
auto amp = make_unique<Amplifier>();
   amp->setVolume(3);
   bool loudness = amp->getVolume()<4;
   te->evaluate("The amp is clean", loudness);
}

void testAmpSoundsBright()
{
    auto amp = make_unique<Amplifier>();
    amp->setTone(7);
    bool timbre = amp->getTone()>5;
    te->evaluate("The amp sound is bright", timbre);
}

void testAmpSoundsDark()
{
    auto amp = make_unique<Amplifier>();
    amp->setTone(1);
    bool timbre = amp->getTone()<5;
    te->evaluate("The amp sound is dark", timbre);
}

int main()
{
testAmpIsOff();
testAmpIsOn();
testAmpIsOverdriving();
testAmpIsClean();
testAmpSoundsBright();
testAmpSoundsDark();
return 0;
}