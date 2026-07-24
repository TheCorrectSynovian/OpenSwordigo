/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622f54
 * Function: FUN_00622f54
 * Signature: undefined FUN_00622f54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00622f54(long *param_1,code *param_2)

{
  (*param_2)((long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00622f7c to 00722fb3 has its CatchHandler @ 0062080c */
  return param_1;
}


