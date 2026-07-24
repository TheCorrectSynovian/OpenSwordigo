/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006002d4
 * Function: FUN_006002d4
 * Signature: undefined FUN_006002d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006002d4(long param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_4 != -1) {
    uVar2 = param_4 << 0x17;
  }
                    /* catch() { ... } // from try @ 006002bc with catch @ 0060031c */
  uVar1 = (param_3 + -1) / 0x32 + 1;
  uVar2 = uVar2 | param_2 << 6 | 0x22;
  if (param_3 < 0x63cf) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar1 = uVar2 | uVar1 * 0x4000;
                    /* try { // try from 0060033c to 00700363 has its CatchHandler @ 0060036c */
  }
  else {
    FUN_006001e8(param_1,uVar2,*(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
    lVar3 = *(long *)(param_1 + 0x18);
  }
  FUN_006001e8(param_1,uVar1,*(undefined4 *)(lVar3 + 8));
                    /* try { // try from 00600364 to 0070036f has its CatchHandler @ 00600250 */
  *(int *)(param_1 + 0x3c) = param_2 + 1;
                    /* catch() { ... } // from try @ 0060033c with catch @ 0060036c */
  return;
}


