#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

class Mutantstack
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		Mutantstack &		operator=( Mutantstack const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Mutantstack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */