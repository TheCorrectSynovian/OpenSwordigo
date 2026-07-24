/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067fb24
 * Function: FUN_0067fb24
 * Signature: undefined FUN_0067fb24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_0067fb24(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = param_2._8_8_;
  uVar12 = param_2._0_8_;
  uVar11 = param_1._8_8_;
  uVar10 = param_1._0_8_;
  uVar1 = fpcr;
  uVar8 = uVar11 >> 0x30 & 0x7fff;
  uVar4 = uVar11 & 0xffffffffffff;
  uVar5 = uVar13 & 0xffffffffffff;
  uVar9 = uVar13 >> 0x30 & 0x7fff;
  if (uVar8 == 0x7fff) {
    if (uVar4 != 0 || uVar10 != 0) goto LAB_0067fc30;
    bVar6 = false;
    if (uVar9 == 0x7fff) goto LAB_0067fb80;
  }
  else {
    if (uVar9 == 0x7fff) {
LAB_0067fb80:
      if (uVar5 != 0 || uVar12 != 0) {
LAB_0067fc30:
        FUN_0068340c(1);
        return 2;
      }
    }
    bVar6 = false;
    if (uVar8 == 0) {
      bVar6 = uVar4 == 0 && uVar10 == 0;
    }
  }
                    /* try { // try from 0067fb9c to 0077fc8b has its CatchHandler @ 0067fb9c
                       catch() { ... } // from try @ 0067fb9c with catch @ 0067fb9c
                       catch() { ... } // from try @ 0067fe08 with catch @ 0067fb9c
                       catch() { ... } // from try @ 0067ff4c with catch @ 0067fb9c
                       catch() { ... } // from try @ 00680058 with catch @ 0067fb9c */
  bVar2 = uVar9 == 0 && (uVar5 == 0 && uVar12 == 0);
  if ((bool)(bVar2 & bVar6)) {
    return 0;
  }
  uVar3 = uVar13 >> 0x3f;
  if (!bVar6) {
    uVar3 = -((long)uVar11 >> 0x3f);
    if (((bVar2) || (uVar3 != uVar13 >> 0x3f)) || (uVar9 < uVar8)) {
LAB_0067fbfc:
      if (uVar3 == 0) {
        return 1;
      }
      return 0xffffffff;
    }
    if (uVar9 <= uVar8) {
      if ((uVar5 < uVar4) || ((uVar4 == uVar5 && (uVar12 < uVar10)))) goto LAB_0067fbfc;
      if ((uVar5 <= uVar4) && ((uVar4 != uVar5 || (uVar12 <= uVar10)))) {
        return 0;
      }
    }
  }
  uVar7 = 0xffffffff;
  if (uVar3 != 0) {
    uVar7 = 1;
  }
  return uVar7;
}


