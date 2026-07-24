/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062bdbc
 * Function: FUN_0062bdbc
 * Signature: undefined FUN_0062bdbc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062bdbc(undefined8 *param_1,long param_2)

{
                    /* try { // try from 0062bdbc to 0072bdcf has its CatchHandler @ 0062c278 */
                    /* try { // try from 0062bdd0 to 0072bde3 has its CatchHandler @ 0062c27c */
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007da180;
  param_1[2] = 0;
                    /* try { // try from 0062bdf0 to 0072bdff has its CatchHandler @ 0062c244 */
  FUN_0063e704(param_1,0,0);
  return;
}


