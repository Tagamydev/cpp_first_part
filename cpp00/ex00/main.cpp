#include <string>
#include <cstdlib>
#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		exit(1);
	}
	for (int i = 1; i < argc; i++) {
		for (int j = 0; j < (int)(std::string(argv[i]).length()); j++) {
			char c = toupper(argv[i][j]);
			std::cout << &c;
		}
	}
	std::cout << std::endl;
	return (0);
}
