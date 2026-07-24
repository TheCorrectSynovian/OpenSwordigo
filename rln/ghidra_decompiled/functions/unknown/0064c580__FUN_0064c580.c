/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c580
 * Function: FUN_0064c580
 * Signature: undefined FUN_0064c580(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064c580(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x10);
  *(long *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = param_1;
  }
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  if (*param_2 != param_1) {
    lVar2 = *(long *)(param_1 + 8);
    if (*(long *)(lVar2 + 0x10) == param_1) {
      *(long *)(lVar2 + 0x10) = lVar1;
    }
    else {
      *(long *)(lVar2 + 0x18) = lVar1;
    }
    *(long *)(lVar1 + 0x10) = param_1;
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  *param_2 = lVar1;
  *(long *)(lVar1 + 0x10) = param_1;
  *(long *)(param_1 + 8) = lVar1;
                    /* catch() { ... } // from try @ 0064c140 with catch @ 0064c5d4 */
  return;
}


