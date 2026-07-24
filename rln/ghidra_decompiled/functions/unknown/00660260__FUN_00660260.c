/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660260
 * Function: FUN_00660260
 * Signature: undefined FUN_00660260(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660260(long param_1,long param_2)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00660230 with catch @ 00660264 */
  if (((*(uint *)(param_1 + 0x78) >> 3 & 1) == 0) || (param_2 < 1)) {
    lVar1 = *(long *)(param_1 + 0x98);
                    /* try { // try from 006602d0 to 007602db has its CatchHandler @ 00660828 */
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 8) = lVar1;
                    /* catch() { ... } // from try @ 006604b0 with catch @ 00660284 */
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar1 + param_2;
  }
  if (((param_2 == 0) && ((*(uint *)(param_1 + 0x78) & 0x11) != 0)) &&
     (1 < *(ulong *)(param_1 + 0xa0))) {
    *(long *)(param_1 + 0x28) = lVar1;
                    /* try { // try from 006602ac to 007602bf has its CatchHandler @ 00660894 */
    *(long *)(param_1 + 0x20) = lVar1;
    *(ulong *)(param_1 + 0x30) = lVar1 + (*(ulong *)(param_1 + 0xa0) - 1);
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


