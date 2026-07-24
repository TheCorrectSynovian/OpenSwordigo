/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c5b8
 * Function: FUN_0066c5b8
 * Signature: undefined FUN_0066c5b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066c5b8(ulong param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (0xffffffffffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 << 1) {
      param_1 = param_2 << 1;
    }
    lVar1 = (param_1 + 1) * 4;
    uVar3 = lVar1 + 0x38;
                    /* catch() { ... } // from try @ 0066c5a0 with catch @ 0066c5fc */
    if ((uVar3 < 0x1001) || (param_1 <= param_2)) {
      uVar3 = lVar1 + 0x18;
      goto LAB_0066c624;
    }
    param_1 = param_1 + (0x1000 - (uVar3 & 0xfff) >> 2);
    if (0xffffffffffffffe < param_1) {
      param_1 = 0xffffffffffffffe;
    }
  }
  uVar3 = param_1 * 4 + 0x1c;
LAB_0066c624:
  pvVar2 = operator_new(uVar3);
  *(ulong *)((long)pvVar2 + 8) = param_1;
                    /* try { // try from 0066c62c to 0076c653 has its CatchHandler @ 0066c670 */
  *(undefined4 *)((long)pvVar2 + 0x10) = 0;
  return;
}


