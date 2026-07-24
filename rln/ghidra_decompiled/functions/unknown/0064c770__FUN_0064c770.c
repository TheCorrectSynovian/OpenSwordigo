/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c770
 * Function: FUN_0064c770
 * Signature: undefined FUN_0064c770(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064c770(int *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_1 == 0) && (param_1 == *(int **)(*(long *)(param_1 + 2) + 8))) {
    return *(long *)(param_1 + 6);
  }
  lVar3 = *(long *)(param_1 + 4);
  if (*(long *)(param_1 + 4) != 0) {
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x18);
    } while (lVar3 != 0);
    return lVar2;
  }
  lVar3 = *(long *)(param_1 + 2);
  if (param_1 != *(int **)(lVar3 + 0x10)) {
    return lVar3;
  }
  do {
    lVar2 = *(long *)(lVar3 + 8);
    bVar1 = *(long *)(lVar2 + 0x10) == lVar3;
    lVar3 = lVar2;
  } while (bVar1);
  return lVar2;
}


