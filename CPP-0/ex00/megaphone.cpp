#include <iostream>

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - 'a' + 'A';
				j++;
			}
			std::cout << argv[i];
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}
