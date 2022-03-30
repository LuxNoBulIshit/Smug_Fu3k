#pragma once
#include "resource.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;



class templa {

public:


	string get_temp();

	void set_temp(string temp,int ans,string extension);

	string final_temp;

};