#include <Windows.h>
#include <iostream>
#include "Encode_Type.h"
#include "GetFile.h"
#include "template.h"
#include "resource4.h"
#include "resource.h"
#include "resource1.h"
#include "resource2.h"
#include "resource3.h"

using namespace std;


HMODULE GCM()
{
	HMODULE hModule = NULL;
	GetModuleHandleEx(
		GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
		(LPCTSTR)GCM,
		&hModule);
	return hModule;

}


void main(int argc, char* argv[]) {

	cout << "******************************************************************************" << endl;
	cout << "Author: Hai_vaknin (Lux) " << endl;
	cout << "Written with love and compassion   " << endl;
	cout << "Twitter: @VakninHai" << endl;
	cout << "****************************************************************************** " << endl;



	int encode_Type;
	File_locateion fl;
	Encode type;
	string encode;
	templa temp;
	char* ptr = fl.get_content(argv[1]);
	HRSRC hRes = FindResource(GCM(), MAKEINTRESOURCE(BYTES_TEXT), MAKEINTRESOURCE(TEXTFILE));

	cout << "******************Please Choose type of Encode ***************************" << endl;
	cout << "******************     1 - For Base64 ************************************" << endl;
	cout << "******************     2 - For Bytes  ************************************" << endl;
	cin >> encode_Type;
	//-------------------------------//

	switch (encode_Type) {
	case 1:
		encode=type.Encode_To_Base64(argv[1]);
		temp.set_temp(encode);
		break;
	case 2:


		encode=type.Encode_To_Byte(ptr, fl.Get_buf_size());
		temp.set_temp(encode);
		break;

	}
	
}






