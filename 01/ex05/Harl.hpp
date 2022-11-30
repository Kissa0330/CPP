/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:06:10 by takanoraika       #+#    #+#             */
/*   Updated: 2022/11/30 10:54:27 by takanoraika      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	std::string level[4];
	std::string comment[4];
	void (Harl::*func_arr[4])(void);

public:
	Harl( void );
	~Harl( void );
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void complain( std::string level );
};

#endif
