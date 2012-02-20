/*
* c_fnmatch
*
* Copyright (c) 2008 by Dominik Schmidt <dev@dominik-schmidt.de>
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software Foundation,
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
* vim: ts=2 sw=2 et cindent
*/

#include "c_fnmatch.h"

#ifndef HAVE_FNMATCH
#include <shlwapi.h>
int fnmatch (__const char *__pattern, __const char *__name, int __flags)
{
    if(PathMatchSpec(__name, __pattern))
        return 0;
    else
        return 1;
}

#endif