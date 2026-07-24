/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067f200
 * Function: FUN_0067f200
 * Signature: undefined FUN_0067f200(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067f200(undefined1 *param_1,undefined8 param_2,int *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 0067f0a8 with catch @ 0067f208 */
  if (*param_3 != 0x31) {
    FUN_0067a6e8();
    return;
  }
  lVar4 = (long)*(int *)(*(long *)(param_3 + 2) + 0x10);
                    /* catch() { ... } // from try @ 0067f094 with catch @ 0067f240 */
  lVar5 = *(long *)(*(long *)(param_3 + 2) + 8);
                    /* catch() { ... } // from try @ 0067f078 with catch @ 0067f244 */
  if (lVar4 != 0) {
    lVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x100);
    do {
                    /* catch() { ... } // from try @ 0067f064 with catch @ 0067f27c */
      while (uVar1 = *(undefined1 *)(lVar5 + lVar3), lVar2 == 0xff) {
                    /* catch() { ... } // from try @ 0067f044 with catch @ 0067f280 */
        lVar3 = lVar3 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = uVar1;
                    /* catch() { ... } // from try @ 0067f030 with catch @ 0067f2b8 */
        param_1[0x108] = uVar1;
        lVar2 = 1;
                    /* catch() { ... } // from try @ 0067f000 with catch @ 0067f2bc */
        if (lVar4 == lVar3) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar2 + 1;
      lVar3 = lVar3 + 1;
      param_1[lVar2] = uVar1;
      param_1[0x108] = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}


