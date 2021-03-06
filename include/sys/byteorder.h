/*****************************************************************************\
 *  Copyright (C) 2007-2010 Lawrence Livermore National Security, LLC.
 *  Copyright (C) 2007 The Regents of the University of California.
 *  Produced at Lawrence Livermore National Laboratory (cf, DISCLAIMER).
 *  Written by Brian Behlendorf <behlendorf1@llnl.gov>.
 *  UCRL-CODE-235197
 *
 *  This file is part of the SPL, Solaris Porting Layer.
 *  For details, see <http://github.com/behlendorf/spl/>.
 *
 *  The SPL is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; either version 2 of the License, or (at your
 *  option) any later version.
 *
 *  The SPL is distributed in the hope that it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with the SPL.  If not, see <http://www.gnu.org/licenses/>.
\*****************************************************************************/

#ifndef _SPL_BYTEORDER_H
#define _SPL_BYTEORDER_H

#include <machine/byte_order.h>

#define LE_16(x)	cpu_to_le16(x)
#define LE_32(x)	cpu_to_le32(x)
#define LE_64(x)	cpu_to_le64(x)
#define BE_16(x)	cpu_to_be16(x)
#define BE_32(x)	cpu_to_be32(x)
#define BE_64(x)	cpu_to_be64(x)


#ifdef __LITTLE_ENDIAN__
#define _LITTLE_ENDIAN
#endif

#ifdef __BIG_ENDIAN__
#define _BIG_ENDIAN
#endif

#endif /* SPL_BYTEORDER_H */
