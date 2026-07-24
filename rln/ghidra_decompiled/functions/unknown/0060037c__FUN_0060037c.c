/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060037c
 * Function: FUN_0060037c
 * Signature: undefined FUN_0060037c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0060037c(long *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = (uint *)(*(long *)(*param_1 + 0x18) + (long)param_2 * 4);
  if (0 < param_2) {
    puVar2 = puVar1 + -1;
                    /* catch() { ... } // from try @ 00600404 with catch @ 00600394
                       catch() { ... } // from try @ 006004a8 with catch @ 00600394 */
    uVar3 = *puVar2;
    if ((char)(&DAT_00699dd1)[(ulong)uVar3 & 0x3f] < '\0') goto LAB_006003b8;
  }
  uVar3 = *puVar1;
  puVar2 = puVar1;
LAB_006003b8:
  if ((uVar3 & 0x3f) != 0x1b) {
    return 0;
  }
  if ((param_3 == 0xff) || (uVar3 >> 0x17 == param_3)) {
    uVar3 = uVar3 & 0x7fc000 | (uVar3 >> 0x17) << 6 | 0x1a;
  }
  else {
    uVar3 = uVar3 & 0xffffc000 | uVar3 & 0x3f | (param_3 & 0xff) << 6;
  }
  *puVar2 = uVar3;
                    /* try { // try from 00600400 to 00700403 has its CatchHandler @ 00600460 */
  return 1;
}


