/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:02:17 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/21 03:42:30 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cstring>
#include <cctype>

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(void);
	ScavTrap(ScavTrap& other);
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &other);
	
	void guardGate();
};

#endif