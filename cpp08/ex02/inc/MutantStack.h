/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shalimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:37:20 by shalimi           #+#    #+#             */
/*   Updated: 2023/03/09 17:25:57 by shalimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>(), b(new iterator(this, 0)), e(new iterator(this, 1)) {}	
		~MutantStack(void)
		{
			iterator 	*it = this->b;
			iterator	*tmp;
			while (it)
			{
				tmp = &(it->next_it());
				delete it;
				it = tmp;
			}
		}
		MutantStack(MutantStack const & src) : std::stack<T>(src), b(0), e(0){}
		MutantStack & operator=(MutantStack const & src)
		{ 
			(void) src;
		}

		virtual void	push(T element)
		{
			if (this->b->isSet())
			{
				iterator *it = new iterator(this, this->e->getIndex(),element);
				this->e->prev_it().setNext(it);
				it->setPrev(&(this->e->prev_it()));
				this->e->setPrev(it);
				it->setNext(this->e);
				this->e->incrementIndex();
			}
			else
			{
				this->b->setValue(element);
				this->b->setNext(this->e);
				this->e->setPrev(b);
			}
			std::stack<T>::push(element);
		}

		virtual void	pop(void)
		{
			iterator &	it  = this->e->prev_it();
			if (it.isSet())
			{
				it.prev_it().setNext(this->e);
				this->e->setPrev(&(it.prev_it()));
				delete &it;
				this->e->decrementIndex();
			}
			std::stack<T>::pop();
		}

		class iterator
		{
			public:
				iterator(void) : source(0), index(0) ,value(0), set(false), prev(0), next(0){}
				iterator(MutantStack * src, int index) : source(src),index(index),value(0), set(false), prev(0), next(0){}
				iterator(MutantStack * src, int index,T & value) : source(src),index(index) ,value(value), set(true), prev(0), next(0){}
				~iterator(void){}
				iterator(iterator & src)
				{
					this->value = *src;
					this->set = src.isSet();
					this->index = src.getIndex();
					this->prev = &(src.prev_it());
					this->next = &(src.next_it());
				}

				iterator &	operator=(iterator & src)
				{
					this->value = *src;
					this->index = src.getIndex();
					this->set = src.isSet();
					this->prev = &(src.prev_it());
					this->next = &(src.next_it());
					return *this;
				}

				void	setValue(T element)
				{
					this->set = true;
					this->value = element;
				}

				T &	operator*(void)
				{
					return this->value;
				}

				bool	operator==(iterator & it)
				{
					return this->index == it.getIndex() && this->value == *it;
				}

				bool	operator!=(iterator & it)
				{

					return this->index != it.getIndex() || this->value != *it;
				}

				iterator &	operator--(int)
				{
					iterator & tmp = *this;
					*this = *this->prev;
					return tmp;
				}

				iterator &	operator--()
				{
					*this = *this->prev;
					return *this;
				}

				iterator &	operator++(int)
				{
					iterator & tmp = *this;
					*this = *this->next;
					return tmp;
				}

				iterator &	operator++()
				{
					*this = *this->next;
					return *this;
				}

				iterator &	next_it(void) const
				{
					return *this->next;
				}

				iterator & prev_it(void) const
				{
					return *this->prev;
				}

				int getIndex(void) const
				{
					return this->index;
				}

				MutantStack *	getSource(void) const
				{
					return this->source;
				}
				bool	isSet(void) const
				{
					return this->set;
				}
				void	setPrev(iterator * prev) { this->prev = prev; }
				void	setNext(iterator * next) { this->next = next; }

				void	decrementIndex(void)
				{
					this->index--;
				}



				void	incrementIndex(void)
				{
					this->index++;
				}

			private:
				MutantStack	*source;
				int			index;
				T			value;
				bool		set;
				iterator *	prev;
				iterator *	next;
		};

		iterator &	begin()
		{
			return *(this->b);
		}

		iterator &	end()
		{
			return *(this->e);
		}
	private:
		iterator * b;
		iterator * e;
};	
#endif
