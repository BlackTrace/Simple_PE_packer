#pragma once
#include <Windows.h>

#pragma pack(push, 1)
//Structure to store packed section data
struct packed_section
{
	char name[8]; //Section name
	DWORD virtual_size; //Virtual size
	DWORD virtual_address; //Virtual address (RVA)
	DWORD size_of_raw_data; //Raw data size
	DWORD pointer_to_raw_data; //Raw data file offset
	DWORD characteristics; //Section characteristics
};

//Structure to store information about packed file
struct packed_file_info
{
	//BYTE number_of_sections; //Number of original file sections 
	DWORD size_of_packed_data; //Size of packed data
	DWORD size_of_unpacked_data; //Size of original data
	
	//DWORD total_virtual_size_of_sections; //Total virtual size of all original file sections 
	//DWORD original_entry_point; //Original entry point
	
	DWORD load_library_a; //LoadLibraryA procedure address from kernel32.dll
	DWORD get_proc_address; //GetProcAddress procedure address from kernel32.dll
	DWORD end_of_import_address_table; //IAT end
};
#pragma pack(pop)
