/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c6a0
 * Function: FUN_0064c6a0
 * Signature: undefined FUN_0064c6a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064c6a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    do {
      lVar1 = lVar2;
      lVar2 = *(long *)(lVar1 + 0x10);
    } while (lVar2 != 0);
    return lVar1;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (param_1 == *(long *)(lVar2 + 0x18)) {
    do {
      lVar1 = lVar2;
      lVar2 = *(long *)(lVar1 + 8);
    } while (*(long *)(lVar2 + 0x18) == lVar1);
    if (lVar2 == *(long *)(lVar1 + 0x18)) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  return lVar2;
}


