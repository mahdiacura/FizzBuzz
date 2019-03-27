#include "pch.h"
#include "Player.h"

CPlayer::CPlayer(std::string _name)
{
	m_name	= _name;
	m_score	= 0;
}

CPlayer::~CPlayer()
{
}

void CPlayer::AddScore()
{
	m_score++;
}

std::string CPlayer::GetName()
{
	return m_name;
}

int32_t CPlayer::GetScore()
{
	return m_score;
}
