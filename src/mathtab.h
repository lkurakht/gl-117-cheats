/*
    GL-117
    Copyright 2001, 2002 Thomas A. Drexl aka heptargon

    This file is part of GL-117.

    GL-117 is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    GL-117 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with GL-117; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* This file includes a collection of functions and precalculated tables. */

#ifndef IS_MATHTAB_H
#define IS_MATHTAB_H

extern float sine[], cosi[]; // sine and cosine tables (only use for approximations)
extern float PI;

extern void mathtab_init (); // calculate tables
extern int myrandom (int n); // random integer number [0;n-1]
extern int extremerandom (int n); // random integer number [0;n-1], prefer extremely low/high values
extern int myrandom (int n, int x, int y); // random integer number [0;n-1]
extern int extremerandom (int n, int x, int y); // random integer number [0;n-1], prefer extremely low/high values
extern float dist (float dx, float dy); // distance (Euklidean norm, 2D vector)
extern int randptr;

#define MAXSMOKEELEM 40
extern float smokezoom [MAXSMOKEELEM];

#endif
