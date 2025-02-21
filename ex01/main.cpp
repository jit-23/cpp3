/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 03:12:59 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/20 16:24:10 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap dude1;
	ScavTrap dude2(dude1);
	ScavTrap dude3 = dude2;
	dude1.attack("dude2");
	dude2.attack("dude1");
	dude3.attack("dude3");
	dude1.takeDamage(3);
	dude2.takeDamage(10);
	dude3.takeDamage(100);
	return 0;
}
