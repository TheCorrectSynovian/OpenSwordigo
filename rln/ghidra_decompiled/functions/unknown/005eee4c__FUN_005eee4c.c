/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eee4c
 * Function: FUN_005eee4c
 * Signature: undefined FUN_005eee4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005eee4c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = -1;
  uVar2 = param_1;
  if (0xff < param_1) {
    do {
      param_1 = uVar2 >> 8;
      uVar1 = uVar2 >> 0x10;
                    /* try { // try from 005eee64 to 006eee6f has its CatchHandler @ 005eef1c */
      iVar3 = iVar3 + 8;
      uVar2 = param_1;
    } while (uVar1 != 0);
  }
                    /* try { // try from 005eee70 to 006eef4f has its CatchHandler @ 005eec7c */
  return iVar3 + (uint)*(byte *)((long)&DAT_00699bd8 + (ulong)param_1);
}


