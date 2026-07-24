/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eab00
 * Function: FUN_005eab00
 * Signature: undefined FUN_005eab00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_005eab00(long param_1)

{
  int iVar1;
  
                    /* try { // try from 005eab08 to 006eab2f has its CatchHandler @ 005eabfc */
  iVar1 = FUN_005eab24(param_1,*(undefined4 *)(param_1 + 0x50),0xff);
  return iVar1 != 0;
}


