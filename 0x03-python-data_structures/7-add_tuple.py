#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    sum_a = tuple_a[0] + tuple_b[0]
    sum_b = tuple_a[1] + tuple_b[1]

    total = sum_a, sum_b

    return total
