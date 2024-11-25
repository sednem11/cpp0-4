#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
    int	i;

	i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc > 1)
    {
        while(argv[i])
		{
			string argument = argv[i];

			for (char& c : argument)
				c = toupper(c);
			std::cout << argument << " ";
			i++;
		}
    }
	cout << endl;
	return(1);
}