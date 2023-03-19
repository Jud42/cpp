//
// Created by Raphael Mamison on 3/14/23.
//

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iomanip>
#include <fstream>



ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor [SHRUBBERY] is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    :   Form("SHRUBBERY", target, 145, 137) {
    std::cout << "Constructor [SHRUBBERY] is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src) {
    std::cout << "Copy Constructor [SHRUBBERY] is called" << std::endl;
}

void ShrubberyCreationForm::StartExecution() const {

    std::string text("*");
    int width = 20;
    std::ofstream outfile;

    outfile.open(this->getTarget() + "_shrubbery.txt", std::ofstream::out | std::ofstream::trunc);
    for (int i = 0; i < 20; i++) {
        outfile << std::setw(width + text.length() / 2) << std::right << text << std::endl;
        text.append("*");
        if (i == 19)
            outfile << std::setw(text.length()) << std::right << "||" << std::endl;
    }
    outfile.close();
}