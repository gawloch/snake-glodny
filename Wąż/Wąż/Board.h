#pragma once
class Board
{
public:
	Board(void);
	~Board(void);
private:
	int Plansza[19][19];
	for (int i = 0; i < 20; i++)
	{
		for (int k = 0; k < 20; k++)
		{
			Plansza[i][k] = 0;
		}
	}
};

