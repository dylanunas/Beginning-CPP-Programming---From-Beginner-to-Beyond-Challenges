#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key     {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr "};

    string secretMsg {};
    cout << "Enter your secret message to be encrypted!: ";
    getline(cin, secretMsg);

    string convertedMsg {};

    for (char ch : secretMsg)
    {
        int index {0};

        if (alphabet.find(ch) != string::npos)
        {
            convertedMsg.push_back(key.at(alphabet.find(ch)));
        }
        else
        {
            convertedMsg.push_back(ch);
        }

        index++;
    }

    cout << "Encrypted Message is: " << convertedMsg << endl;
    secretMsg = convertedMsg;
    convertedMsg.clear();

    for (char ch : secretMsg)
    {
        int index {0};

        if (key.find(ch) != string::npos)
        {
            convertedMsg.push_back(alphabet.at(key.find(ch)));
        }
        else
        {
            convertedMsg.push_back(ch);
        }

        index++;
    }

    cout << "Decrypted Message is: " << convertedMsg << endl;
    secretMsg = convertedMsg;
    convertedMsg.clear();

    return 0;
}