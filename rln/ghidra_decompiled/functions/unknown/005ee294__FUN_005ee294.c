/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee294
 * Function: FUN_005ee294
 * Signature: undefined FUN_005ee294(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee294(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar2 + 0xb0);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  if ((*(byte *)(lVar1 + 9) & 3) != 0) {
    FUN_005ee364(lVar2);
    lVar1 = *(long *)(lVar2 + 0xb0);
  }
                    /* try { // try from 005ee2d4 to 006ee2fb has its CatchHandler @ 005ee5d4 */
  if (3 < *(int *)(lVar1 + 0x80)) {
    if ((*(byte *)(*(long *)(lVar1 + 0x78) + 9) & 3) != 0) {
      FUN_005ee364(lVar2);
    }
  }
  if (3 < *(int *)(*(long *)(param_1 + 0x20) + 0xa8)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0xa0) + 9) & 3) != 0) {
      FUN_005ee364(lVar2);
    }
  }
                    /* try { // try from 005ee31c to 006ee343 has its CatchHandler @ 005ee908 */
  FUN_005eeb50(lVar2);
  *(undefined1 *)(lVar2 + 0x21) = 1;
  return;
}


