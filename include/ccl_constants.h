#pragma once

// Parameters for grids and related things
// one day to be determined by a long careful process.
// At the moment we are just thinking that:
//    the only high-z thing we need is CMB lensing
//    the contribution to this from W*P is very small above z=10 ish
// NB: Need to calculate chi_star separated from the process
// of filling these splines
#define A_SPLINE_DELTA 0.001
#define A_SPLINE_MIN   0.1
#define A_SPLINE_MAX   1.0
#define A_SPLINE_TYPE gsl_interp_akima
#define K_SPLINE_TYPE gsl_interp_akima

// These are in units of Mpc (no factor of h)
#define K_PIVOT 0.05
#define K_MAX 1e3
#define K_MIN 1e-4
#define N_K 500

//TODO: created constants for precision parameters
//Precision parameters
#define EPSREL_DIST 1E-6
#define EPSREL_GROWTH 1E-6
#define EPS_SCALEFAC_GROWTH 1E-6
