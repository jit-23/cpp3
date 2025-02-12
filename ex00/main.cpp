/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 03:12:59 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/02/08 17:44:56 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main()
{
	Claptrap dude1("dude1");
	Claptrap dude2("dude2");
	dude1.attack("dude2");
	dude2.attack("dude1");
	dude1.takeDamage(3);
	dude2.takeDamage(10);
	return 0;
}
