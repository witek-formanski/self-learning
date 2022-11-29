# 2022-11-27
#   20:07 - 20:42

# monte_carlo_integral - calculates an integral of a function [func] from a to b

import numpy as np

def func(x):
    return x**2

# a = 3
# b = 7
# number_of_points = 1000

def monte_carlo_integral(function, a, b, number_of_points):
    
    x_linspace = np.linspace(a, b, number_of_points)
    y_linspace = np.linspace(0, function(b), number_of_points)

    counter = 0
    for i in range(number_of_points):
        value = function(x_linspace[i])
        for j in range(number_of_points):
            if y_linspace[j] <= value:
                counter += 1
            elif y_linspace[j] >= value:
                break

    area = (b-a) * function(b)
    ans = area * counter / number_of_points**2

    return ans

print(monte_carlo_integral(func, 3, 7, 1000))


