#include <QCoreApplication>
#include <iostream>
#include <cstring>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if (argc < 3)
    {
        std::cout << "Usage: <command> <string>" << std::endl;
        return (0);
    }
    std::string command = argv[1];
    std::string str;
    if (command == "up" || command == "down")
        for (int i = 2; i < argc; i++)
        {
            str = argv[i];
            for (int j = 0; j < str.length(); j++)
            {
                if (command == "up")
                    std::cout << char(toupper(str[j]));
                else
                    std::cout << char(tolower(str[j]));
            }
            if (i < argc - 1)
                std::cout << " ";
        }
    else
        std::cout << "(up/down)";
    std::cout << std::endl;
    return (0);
}
