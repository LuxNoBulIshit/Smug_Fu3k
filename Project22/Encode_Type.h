#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>



using namespace std;


class Encode {

public:

	string get_encode();

	string Encode_To_Base64(string file);

	string Encode_To_Byte(char* buffer, int size);

private:

	string encode;











};