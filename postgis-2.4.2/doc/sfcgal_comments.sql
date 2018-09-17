
COMMENT ON FUNCTION postgis_sfcgal_version() IS 'Returns the version of SFCGAL in use';
			
COMMENT ON FUNCTION ST_Extrude(geometry, float, float, float) IS 'args: geom, x, y, z - Extrude a surface to a related volume';
			
COMMENT ON FUNCTION ST_StraightSkeleton(geometry) IS 'args: geom - Compute a straight skeleton from a geometry';
			
COMMENT ON FUNCTION ST_ApproximateMedialAxis(geometry) IS 'args: geom - Compute the approximate medial axis of an areal geometry.';
			
COMMENT ON FUNCTION ST_IsPlanar(geometry) IS 'args: geom - Check if a surface is or not planar';
			
COMMENT ON FUNCTION ST_Orientation(geometry) IS 'args: geom - Determine surface orientation';
			
COMMENT ON FUNCTION ST_ForceLHR(geometry) IS 'args: geom - Force LHR orientation';
			
COMMENT ON FUNCTION ST_MinkowskiSum(geometry, geometry) IS 'args: geom1, geom2 - Performs Minkowski sum';
			
COMMENT ON FUNCTION ST_3DIntersection(geometry, geometry) IS 'args: geom1, geom2 - Perform 3D intersection';
			
COMMENT ON FUNCTION ST_3DDifference(geometry, geometry) IS 'args: geom1, geom2 - Perform 3D difference';
			
COMMENT ON FUNCTION ST_3DUnion(geometry, geometry) IS 'args: geom1, geom2 - Perform 3D union';
			
COMMENT ON FUNCTION ST_3DArea(geometry) IS 'args: geom1 - Computes area of 3D surface geometries. Will return 0 for solids.';
			
COMMENT ON FUNCTION ST_Tesselate(geometry) IS 'args: geom - Perform surface Tesselation of a polygon or polyhedralsurface and returns as a TIN or collection of TINS';
			
COMMENT ON FUNCTION ST_Volume(geometry) IS 'args: geom1 - Computes the volume of a 3D solid. If applied to surface (even closed) geometries will return 0.';
			
COMMENT ON FUNCTION ST_MakeSolid(geometry) IS 'args: geom1 - Cast the geometry into a solid. No check is performed. To obtain a valid solid, the input geometry must be a closed Polyhedral Surface or a closed TIN.';
			
COMMENT ON FUNCTION ST_IsSolid(geometry) IS 'args: geom1 - Test if the geometry is a solid. No validity check is performed.';
			