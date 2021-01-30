#include "inputmanager.h"

std::vector<std::vector<int>> FIELD;

std::vector<std::vector<std::tuple<int, int, int>>> CELLS;

int LINE_COUNT;
int COL_COUNT;

void debug_field_data()
{
	for (size_t i = 0; i < FIELD.size(); i++)
	{
		for (size_t j = 0; j < FIELD[i].size(); j++)
			std::cout << FIELD[i][j] << ' ';
		std::cout << std::endl;
	}

	std::cout << "number of lines:   " << LINE_COUNT << std::endl;
	std::cout << "number of columns: " << COL_COUNT << std::endl;
}

int init_field_data(int level, std::string path)
{
	int line_count;
	int col_count;

	// try getting level data
	try {
		std::tie(line_count, col_count, FIELD) = im::get_input_data(level, path);
	}
	catch (std::string e) { std::cout << e << std::endl; return NOT_OK; }

	for (size_t i = 0; i < FIELD.size(); i++)
		for (size_t j = 0; j < FIELD[i].size(); j++)
		{
			if (FIELD[i][j] == im::ctoi(PIN_IGNORE)) continue;
			if (FIELD[i][j] != 0)
			{


			}
		}

	LINE_COUNT = line_count;
	COL_COUNT  = col_count;

	return OK;
}