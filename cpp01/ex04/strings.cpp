#include "strings.hpp"

string::string(){
}

string::~string()
{
}

std::string string::filename(std::string str)
{
    std::string filename;

    filename.append(str);
    filename.append(".replace");
    return(filename);
}

std::string string::changed_string(std::string str, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    std::string final;

    while (str[i] != '\0')
    {
        std::cout << str << std::endl;
        size_t  position = str.find(argv[1], i);
        if (i == int(position))
        {
            final.append(argv[3]);
            while(final[j])
                j++;
            while(argv[2][k])
            {
                k++;
                i++;
            }
            k = 0;
        }
        else
            final[j] = str[i];
        i++;
        j++;
    }
    return(final);
}

void string::change_str(std::string str, char **argv)
{
    std::ofstream   file(filename(argv[1]));
    file << changed_string(str, argv) << std::endl;
}