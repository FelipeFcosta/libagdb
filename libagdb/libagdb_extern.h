/*
 * The internal extern definition
 *
 * Copyright (C) 2014-2019, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBAGDB_INTERNAL_EXTERN_H )
#define _LIBAGDB_INTERNAL_EXTERN_H

#include <common.h>

/* Define HAVE_LOCAL_LIBAGDB for local use of libagdb
 */
#if !defined( HAVE_LOCAL_LIBAGDB )

#include <libagdb/extern.h>

#define LIBAGDB_EXTERN_VARIABLE	LIBAGDB_EXTERN

#else
#define LIBAGDB_EXTERN		/* extern */
#define LIBAGDB_EXTERN_VARIABLE	extern

#endif /* !defined( HAVE_LOCAL_LIBAGDB ) */

#endif /* !defined( _LIBAGDB_INTERNAL_EXTERN_H ) */

