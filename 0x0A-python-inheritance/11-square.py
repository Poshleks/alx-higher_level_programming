#!/usr/bin/python3
# 11-square.py
""" New class """
Rectangle = __import__("9-rectangle").Rectangle


class Square(Rectangle):
    """ Class square inherist from rectangle """
    def __init__(self, size):
        self.integer_validator("size", size)
        self.__size = size
        super().__init__(size, size)
