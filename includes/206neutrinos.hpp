/*
** EPITECH PROJECT, 2023
** B-MAT_205IQ
** File description:
** 205IQ
*/

#ifndef MY_206neutrinos_HPP_
    #define MY_205IQ_HPP_

#include <cmath>
#include <iomanip>
#include <exception>
#include <iostream>
#include <string>

class MY_Neutrinos {
protected:
    std::string buffer;
    double input_value;
    int arg1, arg2, arg3, arg4;
    double n_value;
    double standard_devi;
    double arithmetic_mean;
    double root_mean_square;
    double harmonic_mean;
public:
    MY_Neutrinos() {};
    ~MY_Neutrinos() {};
    int manage_error(int ac, char **av);
    int my_206_loop();
    int my_206(std::string user_input);
    int ini_val(char **av);
    double compute_harmonic_mean(int value);
    double compute_arithmetic_mean(int value);
};
#endif