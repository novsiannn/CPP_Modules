/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:59:56 by novsiann          #+#    #+#             */
/*   Updated: 2024/01/28 21:56:36 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145,137)
{
    std::cout << "ShrubberyCreationForm default constructor is called" << std::endl;
	_target = "default_target";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : AForm("ShrubberyCreationForm", 145,137)
{
    std::cout << "ShrubberyCreationForm constructor is called" << std::endl;
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
    this->setSignBool(src.getSign());
    _target = src.getTarget();
	return *this;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
    if ( !this->getSign() )
        throw ShrubberyCreationForm::UnsignedForm();
    else if (executor.getGrade() > this->getGradeExec())
       throw ShrubberyCreationForm::GradeTooLowException();
	std::ofstream file(getTarget() + "_shrubbery");
	file  << "                                                  ." << std::endl;
    file << "                                              .         ;" << std::endl;
    file << "                 .              .              ;%     ;;" << std::endl;
    file << "                   ,           ,                :;%  %;" << std::endl;
    file << "                    :         ;                   :;%;'     .," << std::endl;
    file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%';" << std::endl;
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
    file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
    file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
    file << "                          `@%%. `@%%    ;@@%;" << std::endl;
    file << "                            ;@%. :@%%  %@@%;" << std::endl;
    file << "                              %@bd%%%bd%%:; " << std::endl;
    file << "                                #@%%%%%:;;" << std::endl;
    file << "                                %@@%%%::;" << std::endl;
    file << "                                %@@@%(o);  . '         " << std::endl;
    file << "                                %@@@o%;:(.,'         " << std::endl;
    file << "                            `.. %@@@o%::;         " << std::endl;
    file << "                               `)@@@o%::;         " << std::endl;
    file << "                                %@@(o)::;        " << std::endl;
    file << "                               .%@@@@%::;         " << std::endl;
    file << "                                ;%@@@@%::;.          " << std::endl;
    file << "                              ;%@@@@%%:;;;. " << std::endl;
    file << "by novsiann                 ...;%@@@@@%%:;;;;,." << std::endl;
	file.close();
}

const char *ShrubberyCreationForm::UnsignedForm::what() const throw()
{
    return " Unsigned form can not create a file!";
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return ( this->_target );
}