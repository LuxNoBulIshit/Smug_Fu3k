#include "Obsfucation.h"

HMODULE GDM()
{
    HMODULE hModule = NULL;
    GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
        (LPCTSTR)GDM,
        &hModule);
    return hModule;

}



string Obsfucation::obsfucate_url_decode(string obsf,int ans)
{
        string url_temp;
        ostringstream escaped;
        escaped.fill('0');
        escaped << hex;

        for (string::const_iterator i = obsf.begin(), n = obsf.end(); i != n; ++i) {
            string::value_type c = (*i);

            // Keep alphanumeric and other accepted characters intact
            if (isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') {
                escaped << c;
                continue;
            }

            // Any other characters are percent-encoded
            escaped << uppercase;
            escaped << '%' << setw(2) << int((unsigned char)c);
            escaped << nouppercase;
        }

       

        HRSRC hRes = FindResource(GDM(), MAKEINTRESOURCE(242), MAKEINTRESOURCE(TEXTFILE));
        HGLOBAL hData = LoadResource(GDM(), hRes);
        DWORD hSize = SizeofResource(GDM(), hRes);
        char* hFinal = (char*)LockResource(hData);
        url_temp.assign(hFinal, hSize);
        url_temp.insert(57, escaped.str());
        std::ofstream out("Url_decode.html");
        out << url_temp;
        out.close();
    
    


	return string();
}

void Obsfucation::set_temp(string temp)
{
}
