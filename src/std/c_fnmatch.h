/*
 * c_fnmatch - define fnmatch if not available on current platform
 *
 * Copyright (c) 2012      by Dominik Schmidt <dev@dominik-schmidt.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * vim: ft=c.doxygen ts=2 sw=2 et cindent
 */

#ifndef _C_FNMATCH_H
#define _C_FNMATCH_H

#include "config.h"

#ifdef HAVE_FNMATCH
#include <fnmatch.h>
#else
int fnmatch (__const char *__pattern, __const char *__name, int __flags);
#endif

#endif /* _C_FNMATCH_H */
