// MonitorPower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Monitors.h"
#include <chrono>
#include <thread>
#include <iostream>     // std::cin, std::cout

void _tmain()
{
	Monitors oMonitors;
	char answer = ' ';

	std::cout << "Acts on " << oMonitors.monitorCount() << " monitors" << std::endl;
	std::cout << "Enter 1=On, 2=Standby, 3=Suspend, 4=Off, 5=HardOff" << std::endl;
	std::cin >> answer;
	oMonitors.SetPower(Monitors::Power(answer));
	std::cout << "Done";
}
