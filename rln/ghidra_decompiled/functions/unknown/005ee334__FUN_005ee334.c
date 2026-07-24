/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee334
 * Function: FUN_005ee334
 * Signature: undefined FUN_005ee334(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee334(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x21) == '\x01') {
    FUN_005ee364(lVar1,param_3);
    return;
  }
                    /* try { // try from 005ee358 to 006ee35f has its CatchHandler @ 005eea60 */
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xf8 | *(byte *)(lVar1 + 0x20) & 3;
                    /* try { // try from 005ee360 to 006ee36b has its CatchHandler @ 005eea5c */
  return;
}


