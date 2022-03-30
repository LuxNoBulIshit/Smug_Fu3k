#include  "template.h"
#include "resource.h"
/*for (int i = 0; i < temp.size(); i++)
	{
		cout << i << temp[i] << endl;
	}*/



HMODULE GCM()
{
	HMODULE hModule = NULL;
	GetModuleHandleEx(
		GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
		(LPCTSTR)GCM,
		&hModule);
	return hModule;

}


string templa::get_temp()
{
	return final_temp;
}

void templa::set_temp(string encode, int ans, string extension)
{
	string temp;
	int res_ext;
	int res_name;
	res_ext = extension.find_last_of('.');
	extension = extension.substr(res_ext, extension.size());
	extension.push_back('\'');
	

	HRSRC hRes = FindResource(GCM(), MAKEINTRESOURCE(ans), MAKEINTRESOURCE(TEXTFILE));
	HGLOBAL hData = LoadResource(GCM(), hRes);
	DWORD hSize = SizeofResource(GCM(), hRes);
	char* hFinal = (char*)LockResource(hData);
	temp.assign(hFinal, hSize);
	if (ans == 243) {
		temp.insert(469, extension);
		temp.insert(289, encode);
		std::ofstream out("SourceBase64.html");
		out << temp;
		out.close();
	
	}
	if (ans == 244) {
		temp.insert(346, extension);
		temp.insert(71, encode);
		
	std::ofstream out("SourceByte.html");
		out << temp;
		out.close();
	
	
	}
	final_temp = temp;
	

}
