#include "Data.hpp"

int main() {
	Data data;
	data.s1 = "data";

	uintptr_t raw = serialize(&data);
	std::cout << "serialize: " << raw << "\n";

	Data* temp = deserialize(raw);
	std::cout << "deserialize: " << temp->s1;
}