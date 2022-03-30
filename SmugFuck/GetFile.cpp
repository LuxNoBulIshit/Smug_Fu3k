#include "GetFile.h"



char* File_locateion::get_content(string location)

{

	char* buffer = nullptr;
	std::ifstream infile(location, std::ios_base::in | std::ios_base::binary); //read binary or any other file.
	std::filebuf* pbuf = infile.rdbuf();
	size_t size = pbuf->pubseekoff(0, infile.end, infile.in);
	buffer = new char[size];
	pbuf->pubseekpos(0, infile.in);
	pbuf->sgetn(buffer, size);

	infile.close();
	buf_size = size;
	return buffer;



}





int File_locateion::Get_buf_size()
{
	return buf_size;
}
