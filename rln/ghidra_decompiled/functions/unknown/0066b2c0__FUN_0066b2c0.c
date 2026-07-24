/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b2c0
 * Function: FUN_0066b2c0
 * Signature: undefined FUN_0066b2c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0066b2c0(ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  bVar1 = true;
  if (uVar2 <= param_2) {
    bVar1 = uVar2 + *(long *)(uVar2 - 0x18) * 4 < param_2;
  }
                    /* catch() { ... } // from try @ 0066b314 with catch @ 0066b2e0 */
  return bVar1;
}


