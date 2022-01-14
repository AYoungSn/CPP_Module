#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
	std::vector<int> vec;
	std::list<int> list;

	vec.push_back(42);
	vec.push_back(0);
	vec.push_back(-42);

	list.push_back(45);
	list.push_back(-895);
	list.push_back(0);
	list.push_back(12);

	std::vector<int>::iterator vec_iter = easyfind(vec, 0);
	std::cout << "Search 0: " << *vec_iter << "\n";
	
	try
    {
        std::cout << "Search 10000 : ";
        vec_iter = easyfind(vec, 10000);
        std::cout << *vec_iter << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }

    std::list<int>::iterator it_find_list = easyfind(list, -895);
    std::cout << "Search -895 : " << *it_find_list << std::endl; 
    std::cout << "Previous of -895 in array is : " << *(--it_find_list) << std::endl;
}