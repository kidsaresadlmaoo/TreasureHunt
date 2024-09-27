#include <iostream>
#include <ctime>
#include "fuctions.h"

//void gamebasic()
//{
//	std::srand(time(0));
//	
//	int Xtreasure = (rand()% kRowSize) + 1;
//	int Ytreasure = (rand()% kColSize) + 1;
//	std::cout << Xtreasure << Ytreasure << std::endl;
//	int Xplayer;
//	int Yplayer;
//
//	std::cout << "Choose your coordinates : " << std::endl;
//
//	std::cin >> Xplayer;
//	std::cin >> Yplayer;
//
//	if (Xtreasure == Xplayer && Ytreasure == Yplayer)
//	{
//		std::cout << "You win\n";
//	}
//	else
//	{
//		std::cout << "you lost \n";
//	}
//}
void ShowMap(const std::array<char, kRowSize * kColSize>& map_to_show)
{
	std::cout << '\t';
	for (char letter = 'A'; letter < 'A' + kColSize; letter++)
	{
		std::cout << letter << '\t';
	}
	std::cout << '\n';
	std::cout << '\n';

	for (int num_row = 0; num_row < kRowSize; num_row++)
	{
		std::cout << num_row + 1 << '\t';

		for (int num_col = 0; num_col < kColSize; num_col++)
		{
			int idx = num_row * kColSize + num_col;
			std::cout << map_to_show[idx] << '\t';
		}
		std::cout << "\n\n";
	}
	
}

int ConvertThing(char x, int y)
{
	int Col = x - 'A';
	int Row = y - 1;

	return Row * kColSize + Col;
}


//int idx = num_row * kColSize + num_col;