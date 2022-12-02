
#include <iostream>
#include <fstream>

int transformer(std::string filename, char *find_str, char *new_str)
{
    std::string buffer;
    size_t  lastpos = 0;

    std::ifstream base_file (filename);
    std::ofstream new_file (filename.append(".replace"));

    if (!base_file.is_open() || !new_file.is_open())
    {
        std::cout << "error : can't open file" << std::endl;
        exit(EXIT_FAILURE);
    }
    while (base_file)
        buffer.push_back(base_file.get());
    while (1)
    {
        lastpos = buffer.find(find_str, lastpos);
        if (lastpos == buffer.npos)
            break;
        buffer.erase(lastpos, strlen(find_str));
        buffer.insert(lastpos, new_str);
        lastpos += strlen(new_str);
    }
    buffer.erase(buffer.length() - 1, 1);
    new_file << buffer;
    base_file.close();
    new_file.close();
    return (0);
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "bad arguments amount, usage :\
            ./sedloosers [filename] [to_replace] [replacement]";
        exit(EXIT_FAILURE);
    }
    else if (argv[2][0])
    {
        transformer(std::string (argv[1]), argv[2], argv[3]);
    }
    return (0);
}