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
#include <cctype>
#include <iomanip>
#include <sstream>
using namespace std;

class Obsfucation {

public:


	string obsfucate_url_decode(string obs,int ans);

	void set_temp(string temp);

	string final_temp;

};