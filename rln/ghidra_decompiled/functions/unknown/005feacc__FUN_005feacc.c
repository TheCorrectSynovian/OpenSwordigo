/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005feacc
 * Function: FUN_005feacc
 * Signature: undefined FUN_005feacc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005feacc(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 005fead8 to 006feb7f has its CatchHandler @ 005fde3c */
  iVar1 = param_2[4];
  iVar2 = param_2[5];
  FUN_005fe488();
  if (iVar1 == iVar2) {
    return;
  }
  if (*param_2 == 0xc) {
    if (param_2[4] == param_2[5]) {
      return;
    }
    if ((int)(uint)*(byte *)(param_1 + 0x4a) <= param_2[2]) {
      FUN_005fe674(param_1,param_2);
      return;
    }
  }
  FUN_005fe5c0(param_1,param_2);
  return;
}


