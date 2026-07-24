/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c7e0
 * Function: FUN_0064c7e0
 * Signature: undefined FUN_0064c7e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064c7e0(long param_1,long *param_2)

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
                    /* try { // try from 0064c7fc to 0074c807 has its CatchHandler @ 0064ca1c */
  if (param_1 != *param_2) {
    lVar2 = *(long *)(param_1 + 8);
                    /* try { // try from 0064c80c to 0074c887 has its CatchHandler @ 0064ca28 */
    if (param_1 == *(long *)(lVar2 + 0x10)) {
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
  return;
}


