#include "../includes/206neutrinos.hpp"

int MY_Neutrinos::manage_error(int ac, char **av)
{
    if (ac != 5)
        return -1;
    if (atoi(av[2]) == 0)
        return -1;
    for (int x = 1; x < ac; x++) {
        for (int y = 0; av[x][y] != '\0'; y++) {
            if (av[x][y] < '0' || av[x][y] > '9') {
                return (-1);
            }
            else;
        }
    }
    return 1;
}

int MY_Neutrinos::ini_val(char **av)
{
    arg1 = std::atoi(av[1]);
    arg2 = std::atoi(av[2]);
    arg3 = std::atoi(av[3]);
    arg4 = std::atoi(av[4]);
    return (0);
}

double MY_Neutrinos::compute_arithmetic_mean(int value)
{
    double temp_h = ((arg2 * (n_value - 1.0)) + value) * (1.0 / (n_value));
    return temp_h;
}

double MY_Neutrinos::compute_harmonic_mean(int value)
{
    double temp_h = (n_value) / (((1.0 / arg3) * (n_value - 1.0)) + (1.0 / value));
    return temp_h;
}

int MY_Neutrinos::my_206(std::string user_input)
{
    for (int x = 0; x < user_input.size(); x++)
        if (user_input[x] < '0' || user_input[x] > '9')
            return (84);
        else;
    arg1++;
    n_value = arg1;
    input_value = std::stoi(user_input);
    arithmetic_mean = compute_arithmetic_mean(input_value);
    harmonic_mean = compute_harmonic_mean(input_value);
    std::cout << "    Number of values:\t" << std::fixed << std::setprecision(0) << n_value << std::endl;
    std::cout << "    Standard deviation:\t" << std::fixed << std::setprecision(2) << standard_devi << std::endl;
    std::cout << "    Arithmetic mean:\t" << std::fixed << std::setprecision(2) << arithmetic_mean << std::endl;
    std::cout << "    Root mean square:\t" << std::fixed << std::setprecision(2) << root_mean_square << std::endl;
    std::cout << "    Harmonic mean:\t" << std::fixed << std::setprecision(2) << harmonic_mean << std::endl << std::endl;
    return(0);
}

int MY_Neutrinos::my_206_loop()
{
    standard_devi = 0.0; arithmetic_mean = 0.0;  root_mean_square = 0.0;
    harmonic_mean = 0.0;
    while(true) {
        std::cout << "Enter next value: ";
        getline(std::cin, buffer);
        if (buffer == "END") break;
        my_206(buffer);
    }
    return (0);
}

int main(int ac, char **av)
{
    MY_Neutrinos make_206neutrinos;
    if (make_206neutrinos.manage_error(ac, av) != 1)
        return (84);
    make_206neutrinos.ini_val(av);
    make_206neutrinos.my_206_loop();
    return (0);
}
