/*
 * person.c
 * Copyright (C) 2019 Tim Hughes
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include "person.h"

int main(int argc, char** argv)
{
    APerson * of;
    of = get_person("tim", "tim hughes");
    printf("Hello C world: My name is %s, %s.\n", of->name, of->long_name);
    return 0;
}
