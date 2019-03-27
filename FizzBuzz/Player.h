#ifndef CPLAYER
#define CPLAYER

#include <cstdint>
#include <string>

class CPlayer{
public:
	void AddScore();
	std::string GetName	();
	int32_t GetScore	();

	CPlayer				(std::string _name);
	~CPlayer			();
private:
	std::string m_name;
	int32_t m_score;
};

#endif