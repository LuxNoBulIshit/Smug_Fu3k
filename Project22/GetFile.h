#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include<algorithm>
#include <stdlib.h>
#include <filesystem>using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::ostringstream;
using namespace std;


class File_locateion {

public:


	char* get_content(string location);
	int Get_buf_size();


private:

	int buf_size;












};