/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eeb50
 * Function: FUN_005eeb50
 * Signature: undefined FUN_005eeb50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eeb50(long param_1)

{
  if ((*(long *)(param_1 + 0xe0) != 0) && ((*(byte *)(*(long *)(param_1 + 0xe0) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0xe8) != 0) && ((*(byte *)(*(long *)(param_1 + 0xe8) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0xf0) != 0) && ((*(byte *)(*(long *)(param_1 + 0xf0) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0xf8) != 0) && ((*(byte *)(*(long *)(param_1 + 0xf8) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0x100) != 0) && ((*(byte *)(*(long *)(param_1 + 0x100) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0x108) != 0) && ((*(byte *)(*(long *)(param_1 + 0x108) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0x110) != 0) && ((*(byte *)(*(long *)(param_1 + 0x110) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
  if ((*(long *)(param_1 + 0x118) != 0) && ((*(byte *)(*(long *)(param_1 + 0x118) + 9) & 3) != 0)) {
    FUN_005ee364(param_1);
  }
                    /* try { // try from 005eec44 to 006eec7b has its CatchHandler @ 005edc0c */
                    /* catch() { ... } // from try @ 005ee5f8 with catch @ 005eec4c
                       catch() { ... } // from try @ 005eeaf4 with catch @ 005eec4c */
  if ((*(long *)(param_1 + 0x120) != 0) && ((*(byte *)(*(long *)(param_1 + 0x120) + 9) & 3) != 0)) {
                    /* catch() { ... } // from try @ 005eea90 with catch @ 005eec58 */
    FUN_005ee364(param_1);
    return;
  }
  return;
}


