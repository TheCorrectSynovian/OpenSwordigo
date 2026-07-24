/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668814
 * Function: FUN_00668814
 * Signature: undefined FUN_00668814(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00668814(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 006687a8 with catch @ 0066881c */
  uVar4 = *(ulong *)((long)*param_2 + -0x18);
  uVar2 = *(ulong *)((long)*param_1 + -0x18);
  __n = uVar4;
  if (uVar2 < uVar4) {
    __n = uVar2;
  }
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,__n);
  if (iVar1 == 0) {
    iVar1 = 0x7fffffff;
    lVar3 = uVar2 - uVar4;
    if (lVar3 < 0x80000000) {
      iVar1 = -0x80000000;
      if (-0x80000001 < lVar3) {
        iVar1 = (int)lVar3;
      }
      return iVar1;
    }
  }
  return iVar1;
}


