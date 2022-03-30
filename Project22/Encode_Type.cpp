#include "Encode_Type.h"
#include <vector>
//#pragma comment(lib, "Crypt32.lib")


string Encode::Encode_To_Byte(char* buffer, int size)
{

	int* byte_array = new int[size];
	for (int i = 0; i < size; i++) {
		if (buffer[i] + 0 < 0) {
			byte_array[i] = buffer[i] + 256;
		}
		else
		{
			byte_array[i] = buffer[i] + 0;
		}

	}
	string str;
	str.append("[");
	for (int i = 0; i < size; i++) {
		str.append(to_string(byte_array[i]));
		str.push_back(',');

	}

	str.push_back(']');
	encode = str;
	return str;
}




string Encode::get_encode()
{
	return encode;
}

string Encode::Encode_To_Base64(string file)
{

	const char          fillchar = '=';

	static std::string  cvt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"


		"abcdefghijklmnopqrstuvwxyz"


		"0123456789+/";


	std::ifstream in;
	in.open(file.c_str(), std::ios::binary);
	if (!in.good())
	{
		throw std::invalid_argument(std::string("can't open file ") + file);
	}
	std::vector<char> fBytes;
	while (in.good())
		fBytes.push_back(in.get());
	fBytes.pop_back();
	in.close();

	std::string::size_type  i;
	char               c;
	unsigned int       len = fBytes.size();
	std::string             ret;

	for (i = 0; i < len; ++i)
	{
		c = (fBytes[i] >> 2) & 0x3f;
		ret.append(1, cvt[c]);
		c = (fBytes[i] << 4) & 0x3f;
		if (++i < len)
			c |= (fBytes[i] >> 4) & 0x0f;

		ret.append(1, cvt[c]);
		if (i < len)
		{
			c = (fBytes[i] << 2) & 0x3f;
			if (++i < len)
				c |= (fBytes[i] >> 6) & 0x03;

			ret.append(1, cvt[c]);
		}
		else
		{
			++i;
			ret.append(1, fillchar);
		}

		if (i < len)
		{
			c = fBytes[i] & 0x3f;
			ret.append(1, cvt[c]);
		}
		else
		{
			ret.append(1, fillchar);
		}
	}
	ret.push_back('\'');
	ret.insert(0, 1, '\'');
	encode = ret;
	return ret;



}



