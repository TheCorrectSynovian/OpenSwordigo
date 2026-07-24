/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067f2d4
 * Function: FUN_0067f2d4
 * Signature: undefined FUN_0067f2d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067f2d4(long param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_3;
  if ((uVar1 != 0x30 && 1 < uVar1) && (uVar1 != 6)) {
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
                    /* catch() { ... } // from try @ 0067efec with catch @ 0067f32c */
    *(undefined1 *)(param_1 + lVar3) = 0x28;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
                    /* catch() { ... } // from try @ 0067f434 with catch @ 0067f338
                       catch() { ... } // from try @ 0067f480 with catch @ 0067f338
                       catch() { ... } // from try @ 0067f588 with catch @ 0067f338
                       catch() { ... } // from try @ 0067f5c0 with catch @ 0067f338 */
    FUN_0067a6e8(param_1,param_2,param_3);
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    *(undefined1 *)(param_1 + lVar3) = 0x29;
    *(undefined1 *)(param_1 + 0x108) = 0x29;
    return;
  }
  FUN_0067a6e8(param_1);
  return;
}


