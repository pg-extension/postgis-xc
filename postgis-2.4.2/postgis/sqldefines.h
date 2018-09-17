#ifndef _LWPGIS_DEFINES
#define _LWPGIS_DEFINES

#include "../postgis_svn_revision.h"

/*
 * Define just the version numbers; otherwise we get some strange substitutions in postgis.sql.in
 */
#define POSTGIS_PGSQL_VERSION 92
#define POSTGIS_GEOS_VERSION 36
#define POSTGIS_PROJ_VERSION 49
#define POSTGIS_LIB_VERSION '2.4.2'
#define POSTGIS_LIBXML2_VERSION 2.7.1
#define POSTGIS_SFCGAL_VERSION 

#if POSTGIS_PGSQL_VERSION >= 96
#define _PARALLEL PARALLEL SAFE
#else
#define _PARALLEL
#endif

/*
 * Define the build date and the version number
 * (these substitiutions are done with extra quotes sinces CPP
 * won't substitute within apostrophes)
 */
#define _POSTGIS_SQL_SELECT_POSTGIS_VERSION 'SELECT ''2.4 USE_GEOS=1 USE_PROJ=1 USE_STATS=1''::text AS version'
#define _POSTGIS_SQL_SELECT_POSTGIS_BUILD_DATE 'SELECT ''2018-07-17 03:16:24''::text AS version'
#define _POSTGIS_SQL_SELECT_POSTGIS_PGSQL_VERSION 'SELECT ''92''::text AS version'

#ifdef POSTGIS_SVN_REVISION
#define _POSTGIS_SQL_SELECT_POSTGIS_SCRIPTS_VERSION $$ SELECT '2.4.2'::text || ' r' || POSTGIS_SVN_REVISION::text AS version $$
#else
#define _POSTGIS_SQL_SELECT_POSTGIS_SCRIPTS_VERSION $$ SELECT '2.4.2'::text AS version $$
#endif

#define SRID_USR_MAX 998999

#endif /* _LWPGIS_DEFINES */


