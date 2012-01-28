/*
 * c_strerror_r - define strerror_r if not available on current platform
 *
 * Copyright (c) 2008      by Andreas Schneider <mail@cynapses.org>
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

#ifndef _C_STRERROR_R_H
#define _C_STRERROR_R_H

#ifndef HAVE_STRERROR_R
#define strerror_r(errnum, buf, buflen) snprintf(buf, buflen, "%s", strerror(errnum))
#endif

#endif /* _C_STRERROR_R_H */
