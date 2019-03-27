// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "FizzBuzz.h"

int main()
{
	CFizzBuzz fizzBuzz;
	int32_t questionsNumber	= 0;
	int32_t playersCount	= 0;
	int32_t index			= 0;
	std::string playerName;
	std::cout << "[Fizz Buzz]\n";
	
	//Initialize players
	{
		std::cout << "Enter the number of players : ";
		std::cin >> playersCount;
		for (index = 0; index < playersCount; index++){
			std::cout << "Enter the name of player " 
				<< index + 1 << "th : ";
			std::cin >> playerName;
			fizzBuzz.AddPlayer(playerName);
		}
	}

	//Questions
	{
		std::cout << "\nEnter the number of questions : ";
		std::cin >> questionsNumber;
		std::cout << "\n\n";
	}

	//Asking questions
	fizzBuzz.ResetGame();
	for (index = 0; index < questionsNumber; index++){
		fizzBuzz.AskQuestion(index);
	}	

	fizzBuzz.DisplayResults();

	std::cout << "Press any key to exit...";
	getchar();
}
