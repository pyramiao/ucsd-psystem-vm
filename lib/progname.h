//
// UCSD p-System virtual machine
// Copyright (C) 2006 Peter Miller
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or (at
// you option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program. If not, see <http://www.gnu.org/licenses/>
//

#ifndef LIB_PROGNAME_H
#define LIB_PROGNAME_H

/**
  * The progname_set function is used by main() to set the name of the
  * currently executing programme.
  *
  * @param argv_zero
  *     The string handed to the program by the kernel.  Usually this
  *     contains the name of the executable.
  */
void progname_set(char *argv_zero);

/**
  * The progname_get function is used to retrieve the name of the
  * currently executing programme.  Used by error messages.
  */
const char *progname_get(void);

#endif // LIB_PROGNAME_H
