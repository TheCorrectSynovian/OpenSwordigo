/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640a1c
 * Function: FUN_00640a1c
 * Signature: undefined FUN_00640a1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00640a1c(long *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    FUN_00640490(param_1,param_2,sVar2);
                    /* try { // try from 00640a4c to 00740a6f has its CatchHandler @ 00641534 */
    return param_1;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
                    /* try { // try from 00640a84 to 00740a97 has its CatchHandler @ 006414e4 */
  return param_1;
}


