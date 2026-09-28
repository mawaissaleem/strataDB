#include <iostream>
#include <string>

int main()
{
    // bare REPL
    std::string query;
    while (true)
    {
        std::cout << "Write your query: " << "\n";
        std::getline(std::cin, query);

        // check if it's .exit
        if (query == ".exit")
        {
            break;
        }
        else
        {
            std::cout << query << "\n";
        }
    }
    return 0;
}
