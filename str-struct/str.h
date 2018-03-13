#pragma once

#include <cstddef> // size_t

struct String {
    explicit String(const char *str = "");

    String(size_t n, char c);
    String(const String & other);
    String & operator=(const String &other);

    ~String();

    const void print();

    void append(String &other);

    size_t size;
    char *str;
};
