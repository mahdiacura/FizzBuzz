#ifndef FIZZ_BUZZ
#define FIZZ_BUZZ

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#include "Player.h"

#define FIZZ_DIVISION 3
#define BUZZ_DIVISION 5

//Use this class to teach the student about division
class CFizzBuzz
{
public:
	void ResetGame		();
	void AddPlayer		(std::string _name);
	void AskQuestion	(int32_t _number);
	void DisplayResults	();
	CFizzBuzz			();
	~CFizzBuzz			();
private:
	std::vector<CPlayer> m_players;
	int32_t m_counter;
	int32_t m_playerIndex;
	std::string m_playerAnswer;
	std::string m_answer;
};

#endif