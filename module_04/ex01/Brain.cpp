/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:15:25 by rmamison          #+#    #+#             */
/*   Updated: 2023/03/04 21:59:19 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"
#include <string>

// Implémentation du constructeur par défaut
Brain::Brain() {
    std::cout << "<BRAIN> Default Constructor is called!" << std::endl;
}

// Implémentation du constructeur de copie
Brain::Brain(const Brain &src) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = src._ideas[i];
    }
    std::cout << "<BRAIN> Copy Constructor is called!" << std::endl;
}

// Implémentation de l'opérateur d'assignation
Brain& Brain::operator=(const Brain &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = rhs._ideas[i];
        }
        std::cout << "<BRAIN> Assignation Operator is called!" << std::endl;
    }
    return *this;
}

// Implémentation du destructeur
Brain::~Brain() {
    std::cout << "<BRAIN> Destructor is called!" << std::endl;
}

