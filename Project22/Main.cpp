#include <Windows.h>
#include <iostream>
#include "Encode_Type.h"
#include "GetFile.h"
#include "template.h"
#include "Obsfucation.h"
#include "resource.h"


using namespace std;





void main(int argc, char* argv[]) {
	int encode_Type, obsf;
	File_locateion fl;
	Encode type;
	Obsfucation obsfu;
	string encode;
	templa temp;
	
	char* ptr = fl.get_content(argv[1]);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	{
		

		SetConsoleTextAttribute(hConsole, 10);




		cout << "******************************************************************************" << endl;
		cout << "Author: Hai_vaknin (Lux) " << endl;
		cout << "Written with love and compassion   " << endl;
		cout << "Twitter: @VakninHai" << endl;
		cout << "****************************************************************************** " << endl;





		cout << "******************Please Choose type of Encode ***************************" << endl;
		cout << "******************     1 - For Base64 ************************************" << endl;
		cout << "******************     2 - For Bytes  ************************************" << endl;
		cin >> encode_Type;
		//-------------------------------//

		switch (encode_Type) {
		case 1:
			encode = type.Encode_To_Base64(argv[1]);
			temp.set_temp(encode, 243,argv[1]);
			break;
		case 2:


			encode = type.Encode_To_Byte(ptr, fl.Get_buf_size());
			temp.set_temp(encode, 244,argv[1]);
			break;
			
			
		}
		SetConsoleTextAttribute(hConsole, 3);
		

	}
	cout << "******************Please Choose type of Obsfucation ***************************" << endl;
	cout << "******************     1 - For Url_Decode ************************************" << endl;
	cout << "******************     2 - WithOut_Decode ************************************" << endl;
	cin >> obsf;
	switch (obsf) {
	case 1:
		obsfu.obsfucate_url_decode(temp.get_temp(), obsf);
		break;
	case 2:


		break;


	}
}






