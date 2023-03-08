/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:28:39 by rtakano           #+#    #+#             */
/*   Updated: 2023/03/08 22:47:22 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack() : std::stack<T>(){};
	~MutantStack(){};
	MutantStack(const MutantStack &origin) : std::stack<T>(origin){};
	MutantStack<T> &operator=(const MutantStack<T> &origin)
	{
		if (*this != origin)
			static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(origin);
		return (*this);
	}

	typedef typename std::stack<T>::container_type container_type;
	typedef typename container_type::iterator iterator;
	typedef typename container_type::const_iterator const_iterator;
	typedef typename container_type::reverse_iterator reverse_iterator;
	typedef typename container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }

	const_iterator begin() const { return (this->c.begin()); }
	const_iterator end() const { return (this->c.end()); }

	reverse_iterator rbegin() { return (this->c.rbegin()); }
	reverse_iterator rend() { return (this->c.rend()); }

	const_reverse_iterator rbegin() const { return (this->c.rbegin()); }
	const_reverse_iterator rend() const { return (this->c.rend()); }
};

#endif
