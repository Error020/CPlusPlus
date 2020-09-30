#include <iostream>
#include <string>

int main()  {
    std::string s1 = "kitten";
    std::string s2 = "sitting";
    int length = 0;

    std::cout << "changes between \"" << s1 << "\" and \"" << s2 << "\" : " << ::std::endl << ::std::endl;

    if (s1.length() < s2.length())  {
        length = s2.length();
    }
    else    {
        length = s1.length();
    }
    int ticker = 0;
    for (int i = 0; i < length; i++)    {
        if (s1[i] != s2[i]) {
            ticker++;
            if  ((s1[i]) && (s2[i]))  {
                std::cout << ::std::endl << "change \'" << s1[i] << "\' to \'" << s2[i] << "\'" << ::std::endl; 
            }
            else if (!s1[i])  {
                std::cout << ::std::endl << "append \'" << s2[i] << "\'" << ::std::endl;
            }
            else {
                std::cout << ::std::endl << "erase \'" << s1[i] << "\'" << ::std::endl;
            }
        } 
    }

    std::cout << ::std::endl << "you need " << ticker << " changes between those strings!";

    return 0;
}
