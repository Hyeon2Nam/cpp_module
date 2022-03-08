#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	std::string makeFileName(void) const;
	std::string makeTree(void) const;
	void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);


#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */