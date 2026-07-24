/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065d980
 * Function: FUN_0065d980
 * Signature: undefined FUN_0065d980(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0065d980(long *param_1)

{
  int iVar1;
  
  iVar1 = 0;
                    /* try { // try from 0065d998 to 0075da3f has its CatchHandler @ 0065d7e0 */
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    iVar1 = -(uint)(iVar1 == -1);
  }
  return iVar1;
}


