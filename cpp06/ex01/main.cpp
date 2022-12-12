
#include "includes/Data.h"

Data* deserialize(uintptr_t raw)
{
	Data *data;

	data = reinterpret_cast<Data *>(raw);

	return (data);
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t u_ptr;

	u_ptr = reinterpret_cast<uintptr_t>(ptr);
	return u_ptr;
}

int main(void)
{
	Data 		data;
	uintptr_t	tmp;
	Data		*ptr_to_data;

	data.name = "data";
	data.value = 9999;
	tmp = serialize(&data);
	ptr_to_data = deserialize(tmp);

	std::cout << std::endl << "*** ADRESSES ***" << std::endl << std::endl;
	std::cout << "Data structure address : " << &data << std::endl;
	std::cout << "tmp value after serialization : " << tmp << std::endl;
	std::cout << "tmp address after serialization : " << &tmp << std::endl;
	std::cout << "ptr_to_data adress recovered after deserilization : " << ptr_to_data << std::endl;

	std::cout << std::endl << "*** Data modified via ptr_to_data ***" << std::endl << std::endl;
	std::cout << "data name value before modification : " << data.name << std::endl;
	ptr_to_data->name = "hihihhihi modified";
	std::cout << "data name value after modification : " << data.name << std::endl;
	return (0);
}