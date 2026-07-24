/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e6d0
 * Function: FUN_0064e6d0
 * Signature: undefined FUN_0064e6d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e6d0(undefined8 *param_1,long param_2)

{
                    /* try { // try from 0064e6d4 to 0074e6df has its CatchHandler @ 0064ee30 */
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
                    /* try { // try from 0064e6ec to 0074e6f7 has its CatchHandler @ 0064eea0 */
  param_1[2] = 0;
                    /* try { // try from 0064e6f8 to 0074e703 has its CatchHandler @ 0064ee34 */
  *param_1 = &PTR_FUN_007db0e0;
  FUN_0063f19c(param_1,0);
  return;
}


