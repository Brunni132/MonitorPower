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

	std::cout << "Press 1 to turn off, 2 to turn on" << std::endl;
	std::cin >> answer;
	if (answer == '1') {
		oMonitors.SetPower(Monitors::Power::Off);
		std::cout << "Turned off" << std::endl;
	}
	else if (answer == '2') {
		oMonitors.SetPower(Monitors::Power::On);
		std::cout << "Turned on" << std::endl;
	}
	else {
		std::cout << "Did nothing" << std::endl;
	}
}

