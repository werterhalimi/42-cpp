/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:35:50 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 23:06:34 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <exception>
class Bureaucrat
{
	public:
		Bureaucrat( void ) ;
		Bureaucrat( std::string name, int grade );
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const & src );

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		class GradeTooLowException : public std::exception
		{
			public:
				//GradeTooLowException( std::string const & name, int const & grade);
				virtual const char * what () const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				//GradeTooHighException( std::string const & name, int const & grade);
				virtual const char * what () const throw();
		};

		void	increment();
		void	decrement();

		Bureaucrat & operator=( Bureaucrat const & src);
	private:
		std::string const	name;
		int					grade;
};
std::ostream & operator<<( std::ostream& o, Bureaucrat const & rhs);


#endif
