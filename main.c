#include <stdlib.h>
#include <stdio.h>
#include "SegSegForces.c"

int main(void)
	{
    
    int p[3][4] = {
        {p1x, p1y, p1z},
        {p2x, p2y, p2z},
        {p3x, p3y, p3z},
        {p4x, p4y, p4z}
    }
    
    int bp[][1] = {
        {bpx, bpy, bpz}
    }

    int bx[][1] = {
        {bx, by, bz}
    }

    int result_01 = SpecialSegSegForceIntergrals(double a2,double d2,double yin,double zin,
                                 double *f_003, double *f_103, double *f_013,
                                 double *f_113, double *f_213, double *f_123,
                                 double *f_005, double *f_105, double *f_015,
                                 double *f_115, double *f_215, double *f_125)
    
    
    
    int result = SegSegForceIntegrals(double a, double d, double c,double yin,double zin,
                        double *f_003, double *f_103, double *f_013,
                        double *f_113, double *f_203, double *f_023,
                        double *f_005, double *f_105, double *f_015,
                        double *f_115, double *f_205, double *f_025,
                        double *f_215, double *f_125, double *f_225,
                        double *f_305, double *f_035, double *f_315,
                        double *f_135);
		
	} 