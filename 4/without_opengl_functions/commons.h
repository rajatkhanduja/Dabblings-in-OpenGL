#ifndef COMMONS_H
#define COMMONS_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

typedef unsigned short int Boolean;
#define TRUE	1
#define FALSE	0

typedef unsigned int Colour;
#define RED	(127 << 8)
#define GREEN	(127)
#define BLUE	(127 << 16)
#define YELLOW	(RED + GREEN)
#define GREY	(0 * (6 + (6 << 8) + (6 << 16)))
#define BLACK	(0)
#define COLBG	(BLACK)

#define DBG FALSE

#endif // end of file

