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
 * Copyright (C) 2004 Refractions Research Inc.
 *
 **********************************************************************/

#include "extension_dependency.h"

#include "../postgis_config.h"
#include "lwgeom_pg.h"
extern "C" Datum cache_bbox(PG_FUNCTION_ARGS);

/** @file
 * 	The intended use for this trigger function is making
 * 	a geometry field cache it's bbox. Use like this:
 *
 * 	CREATE TRIGGER <name> BEFORE INSERT OR UPDATE
 *		ON <table> FOR EACH ROW EXECUTE PROCEDURE
 *		cache_bbox(<field>);
 *
 */
PG_FUNCTION_INFO_V1(cache_bbox);
Datum cache_bbox(PG_FUNCTION_ARGS)
{
	return NULL;
}



