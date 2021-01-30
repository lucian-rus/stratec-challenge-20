#pragma once
#ifndef INPUTMANAGER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <tuple>

/******************* macros *********************/
#define NULL   0
#define OK     1
#define NOT_OK 0

// macro representing the desired level
#define MAP_1 1
#define MAP_2 2
#define MAP_3 3
#define MAP_U 10

// macro representing the path to the desired input file
#define MAP_1_PATH "resources/csv/step-one.csv"
#define MAP_2_PATH "resources/csv/step-two.csv"
#define MAP_3_PATH "resources/csv/step-three.csv"

// macro representing the error that has been encountered
#define FILE_OPEN_ERROR   "error opening the requested .csv file"
#define INVALID_PATH_CALL "no file found based on the provided path"
#define INVALID_ID_CALL   "invalid level id call"

#define PIN_IGNORE 'Z'

namespace im
{
	/***************** functions *******************/

	/**
	 * This function casts a type `char` variable to type `int`
	 *
	 * @param
	 */
	int ctoi(char c);

	/**
	 * This function returns a 2D vector that contains the input field
	 *
	 * @param
	 */
	std::vector<std::vector<int>> get_file_input(std::string path);

	/**
	 * This function returns the data that was collected from the input file.
	 *
	 * @param level_id Integer representing the level from which the data is collected
	 */
	std::tuple<int, int, std::vector<std::vector<int>>> get_input_data(int level_id, std::string map_u_path);
}

#endif