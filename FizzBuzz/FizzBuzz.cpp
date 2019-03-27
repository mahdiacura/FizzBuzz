#include "pch.h"
#include "FizzBuzz.h"

CFizzBuzz::CFizzBuzz()
{
	ResetGame();
}

CFizzBuzz::~CFizzBuzz()
{

}

void CFizzBuzz::ResetGame(){
	m_counter		= 0;
	m_playerIndex	= 0;
	m_players.clear();
}

void CFizzBuzz::AddPlayer(std::string _name){
	m_players.push_back(CPlayer(_name));
}


void CFizzBuzz::AskQuestion(int32_t _number){
	//Dialog
	{
		std::cout << "----------\n";
		std::cout << m_players[m_playerIndex].GetName();
		std::cout << " what is the answer for " << _number;
		std::cin >> m_playerAnswer;
	}
	
	//Check the answer
	{
		m_answer = "";
		if (0 == _number % FIZZ_DIVISION){
			m_answer += "Fizz";
		}
		if (0 == _number % BUZZ_DIVISION){
			if (0 == _number % FIZZ_DIVISION)
				m_answer += " ";
			m_answer += "Buzz";
		}

	}
	//std::atoi
	//std::to_string(

	//Player Choosing
	{
		if (m_playerIndex >= m_players.size() - 1)
			m_playerIndex = 0;
		else
			m_playerIndex++;
	}
}

void CFizzBuzz::DisplayResults(){
	std::cout << "\n\n**********\n";
	std::cout << "[Results]\n";
	for (index = 0; index < playersCount; index++){
		//std::cout << fizzBuzz.
	}
}