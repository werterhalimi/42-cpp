/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:23:55 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/16 23:57:53 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "Bureaucrat.h"

class Bureaucrat;

class Form
{
	public:

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what () const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw();
		};

		Form( void );
		~Form( void );
		Form( std::string const & name, int const & grade_to_sign, int const & grade_to_exec );
		Form ( Form const & src);

		void		beSigned( Bureaucrat const &  bureaucrat );
		std::string	getName() const;
		bool		is_Signed() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		Form operator=(Form const & src);

	private:
		std::string const	name;
		bool 				is_signed;
		int const			grade_to_sign;
		int const			grade_to_exec;
};

std::ostream & operator<<( std::ostream& o, Form const & rhs);
#endif
