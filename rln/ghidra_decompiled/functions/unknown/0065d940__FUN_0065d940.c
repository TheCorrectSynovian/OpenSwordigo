/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065d940
 * Function: FUN_0065d940
 * Signature: undefined FUN_0065d940(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0065d940(long *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
                    /* try { // try from 0065d970 to 0075d997 has its CatchHandler @ 0065d9f8 */
    iVar1 = -(uint)(iVar1 == -1);
  }
  return iVar1;
}


