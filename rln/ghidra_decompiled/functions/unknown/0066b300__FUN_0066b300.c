/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b300
 * Function: FUN_0066b300
 * Signature: undefined FUN_0066b300(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b300(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  if (param_3 != 1) {
    wmemmove(param_1,param_2,param_3);
    return;
  }
                    /* try { // try from 0066b310 to 0076b313 has its CatchHandler @ 0066b324 */
                    /* try { // try from 0066b314 to 0076b327 has its CatchHandler @ 0066b2e0 */
  *param_1 = *param_2;
  return;
}


