#include <iostream>

int main(int argc, char *argv[]) 
{
    for (int i = 0; i < argc; i++)
    {
        // std::cout << argv[i] << std::endl;
        int k = atoi(argv[i]);
        printf("%d ", k);
    }
    return 0;
}