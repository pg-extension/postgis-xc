/*
 * csfglob.c
 */


#include "csf.h"
#include "csfimpl.h"

/* global variable set on the last error condition
 * Most functions sets this variable in case of an error condition.
 */
THR_LOCAL int Merrno = NOERROR;
