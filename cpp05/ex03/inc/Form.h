/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:23:55 by shalimi           #+#    #+#             */
/*   Updated: 2023/01/19 00:43:12 by shalimi          ###   ########.fr       */
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
		virtual ~Form( void );
		Form( std::string const & name, int const & grade_to_sign, int const & grade_to_exec );
		Form ( Form const & src);

		void				execute ( Bureaucrat const & executor );
		virtual void		execute_action ( Bureaucrat const & executor ) = 0;

		void		beSigned( Bureaucrat const &  bureaucrat );
		std::string	getName() const;
		std::string	getTarget() const;
		bool		is_Signed() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		Form & operator=(Form const & src);

	protected:

		Form( std::string const & name, int const & grade_to_sign, int const & grade_to_exec, std::string taregt );
		std::string const	name;
		bool 				is_signed;
		int const			grade_to_sign;
		int const			grade_to_exec;
		std::string const	target;
};

std::ostream & operator<<( std::ostream& o, Form const & rhs);
#endif
