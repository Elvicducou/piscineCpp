
#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "not good arguments amount, usage :\
            ./sedloosers [filename] [to_replace] [replacement]";
        exit(EXIT_FAILURE);
    }
    
}