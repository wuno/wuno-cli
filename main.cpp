#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> arguments;
    std::stringstream ss(str);
    std::string token;

    while(getline(ss, token, delimiter)) {
        arguments.push_back(token);
    }

    return arguments;
}

int main(int argc, char* argv[]) {

    std::string input = "";
    std::cout << "Select Run Mode -\n"
        << "1 - Run Happy Time\n"
        << "2 - Run Triangle Face\n"
        << "3 - Run Pie Making Class\n"
        << "4 - Run Bread Pudding Contest\n"
        << "5 - Run Can I Get A Hell Yea For Bread Pudding Contest?\n";

    getline(std::cin, input);
    std::vector<std::string> params = split(input, ' ');

    if(params[0] == "1") {
        std::cout << "Argument " << params[0] << " You Chose " << params[0] << "\n" << std::endl;
        for(int i = 1; i < params.size(); i++) {
            std::cout << "Argument " << params[i] << " " << "You Also Chose - " << params[i] << "\n" << std::endl;
        }
    }

    if(params[0] == "2") {
        std::cout << "Argument " << params[0] << " You Chose " << params[0] << "\n" << std::endl;
        for(int i = 1; i < params.size(); i++) {
            std::cout << "Argument " << params[i] << " " << "You Also Chose - " << params[i] << "\n" << std::endl;
        }
    }


    std::cout << "Original Input - " << input << std::endl << std::endl;

    return 0;

}