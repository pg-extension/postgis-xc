/**********************************************************************
 *
 * PostGIS - Spatial Types for PostgreSQL
 * http://postgis.net
 *
 * PostGIS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * PostGIS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PostGIS.  If not, see <http://www.gnu.org/licenses/>.
 *
 **********************************************************************
 *
 * Copyright (C) 2010 Olivier Courtin <olivier.courtin@oslandia.com>
 * Copyright (C) 2010 Mark Cave-Ayland <mark.cave-ayland@siriusit.co.uk>
 * Copyright (C) 2009-2011 Paul Ramsey <pramsey@cleverelephant.ca>
 *
 **********************************************************************/


#include "extension_dependency.h"

#include "../postgis_config.h"
#include "liblwgeom.h"
#include "lwgeom_pg.h"

#include <math.h>
#include <float.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

extern "C" Datum lwgeom_lt(PG_FUNCTION_ARGS);
extern "C" Datum lwgeom_le(PG_FUNCTION_ARGS);
extern "C" Datum lwgeom_eq(PG_FUNCTION_ARGS);
extern "C" Datum lwgeom_ge(PG_FUNCTION_ARGS);
extern "C" Datum lwgeom_gt(PG_FUNCTION_ARGS);
extern "C" Datum lwgeom_cmp(PG_FUNCTION_ARGS);

PG_FUNCTION_INFO_V1(lwgeom_lt);
Datum lwgeom_lt(PG_FUNCTION_ARGS)
{
	GSERIALIZED *g1 = PG_GETARG_GSERIALIZED_P(0);
	GSERIALIZED *g2 = PG_GETARG_GSERIALIZED_P(1);
	int cmp = gserialized_cmp(g1, g2);
	PG_FREE_IF_COPY(g1, 0);
	PG_FREE_IF_COPY(g2, 1);
	if (cmp < 0)
		PG_RETURN_BOOL(TRUE);
	else
		PG_RETURN_BOOL(FALSE);
}

PG_FUNCTION_INFO_V1(lwgeom_le);
Datum lwgeom_le(PG_FUNCTION_ARGS)
{
	GSERIALIZED *g1 = PG_GETARG_GSERIALIZED_P(0);
	GSERIALIZED *g2 = PG_GETARG_GSERIALIZED_P(1);
	int cmp = gserialized_cmp(g1, g2);
	PG_FREE_IF_COPY(g1, 0);
	PG_FREE_IF_COPY(g2, 1);
	if (cmp == 0)
		PG_RETURN_BOOL(TRUE);
	else
		PG_RETURN_BOOL(FALSE);
}

PG_FUNCTION_INFO_V1(lwgeom_eq);
Datum lwgeom_eq(PG_FUNCTION_ARGS)
{
	GSERIALIZED *g1 = PG_GETARG_GSERIALIZED_P(0);
	GSERIALIZED *g2 = PG_GETARG_GSERIALIZED_P(1);
	int cmp = gserialized_cmp(g1, g2);
	PG_FREE_IF_COPY(g1, 0);
	PG_FREE_IF_COPY(g2, 1);
	if (cmp == 0)
		PG_RETURN_BOOL(TRUE);
	else
		PG_RETURN_BOOL(FALSE);
}

PG_FUNCTION_INFO_V1(lwgeom_ge);
Datum lwgeom_ge(PG_FUNCTION_ARGS)
{
	GSERIALIZED *g1 = PG_GETARG_GSERIALIZED_P(0);
	GSERIALIZED *g2 = PG_GETARG_GSERIALIZED_P(1);
	int cmp = gserialized_cmp(g1, g2);
	PG_FREE_IF_COPY(g1, 0);
	PG_FREE_IF_COPY(g2, 1);
	if (cmp >= 0)
		PG_RETURN_BOOL(TRUE);
	else
		PG_RETURN_BOOL(FALSE);
}

PG_FUNCTION_INFO_V1(lwgeom_gt);
Datum lwgeom_gt(PG_FUNCTION_ARGS)
{
	GSERIALIZED *g1 = PG_GETARG_GSERIALIZED_P(0);
	GSERIALIZED *g2 = PG_GETARG_GSERIALIZED_P(1);
	int cmp = gserialized_cmp(g1, g2);
	PG_FREE_IF_COPY(g1, 0);
	PG_FREE_IF_COPY(g2, 1);
	if (cmp > 0)
		PG_RETURN_BOOL(TRUE);
	else
		PG_RETURN_BOOL(FALSE);
}

PG_FUNCTION_INFO_V1(lwgeom_cmp);
Datum lwgeom_cmp(PG_FUNCTION_ARGS)
{
	GSERIALIZED *g1 = PG_GETARG_GSERIALIZED_P(0);
	GSERIALIZED *g2 = PG_GETARG_GSERIALIZED_P(1);
	int ret = gserialized_cmp(g1, g2);
	PG_FREE_IF_COPY(g1, 0);
	PG_FREE_IF_COPY(g2, 1);
	PG_RETURN_INT32(ret);
}

