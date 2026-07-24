/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b30a0
 * Function: boost::uuids::to_string
 * Signature: undefined __thiscall to_string(uuids * this, uuid * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::uuids::to_string(boost::uuids::uuid const&) */

void __thiscall boost::uuids::to_string(uuids *this,uuid *param_1)

{
  ulong uVar1;
  char cVar2;
  uuids uVar3;
  long lVar4;
  undefined *puVar5;
  long *in_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005b30d4 to 006b30fb has its CatchHandler @ 005b339c */
  *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
  FUN_00667088();
  uVar10 = 0;
  do {
    lVar7 = *in_x8;
    uVar3 = this[uVar10];
    lVar8 = *(long *)(lVar7 + -0x18);
    cVar2 = '0';
    if (0x9f < (byte)uVar3) {
      cVar2 = 'W';
    }
    uVar1 = lVar8 + 1;
                    /* try { // try from 005b3168 to 006b33bb has its CatchHandler @ 005b3014 */
    if ((*(ulong *)(lVar7 + -0x10) < uVar1) || (0 < *(int *)(lVar7 + -8))) {
      FUN_00667088();
      lVar7 = *in_x8;
      lVar8 = *(long *)(lVar7 + -0x18);
    }
    *(byte *)(lVar7 + lVar8) = cVar2 + ((byte)uVar3 >> 4);
    lVar8 = *in_x8;
    plVar9 = (long *)puVar5;
    if ((undefined *)(lVar8 + -0x18) != puVar5) {
      *(undefined4 *)(lVar8 + -8) = 0;
      *(ulong *)(lVar8 + -0x18) = uVar1;
      *(undefined1 *)(lVar8 + uVar1) = 0;
      lVar8 = *in_x8;
      plVar9 = (long *)(lVar8 + -0x18);
    }
    uVar3 = this[uVar10];
    lVar7 = *plVar9;
    uVar1 = lVar7 + 1;
    cVar2 = '0';
    if (9 < ((byte)uVar3 & 0xf)) {
      cVar2 = 'W';
    }
    if ((*(ulong *)(lVar8 + -0x10) < uVar1) || (0 < *(int *)(lVar8 + -8))) {
      FUN_00667088();
      lVar8 = *in_x8;
      lVar7 = *(long *)(lVar8 + -0x18);
    }
    *(byte *)(lVar8 + lVar7) = cVar2 + ((byte)uVar3 & 0xf);
    lVar8 = *in_x8;
    if ((undefined *)(lVar8 + -0x18) != puVar5) {
      *(undefined4 *)(lVar8 + -8) = 0;
      *(ulong *)(lVar8 + -0x18) = uVar1;
      *(undefined1 *)(lVar8 + uVar1) = 0;
    }
    if ((uVar10 < 10) && ((1L << (uVar10 & 0x3f) & 0x2a8U) != 0)) {
      lVar7 = *in_x8;
      lVar8 = *(long *)(lVar7 + -0x18);
      uVar1 = lVar8 + 1;
      if ((*(ulong *)(lVar7 + -0x10) < uVar1) || (0 < *(int *)(lVar7 + -8))) {
        FUN_00667088();
        lVar7 = *in_x8;
        lVar8 = *(long *)(lVar7 + -0x18);
      }
      *(undefined1 *)(lVar7 + lVar8) = 0x2d;
      lVar8 = *in_x8;
      if ((undefined *)(lVar8 + -0x18) != puVar5) {
        *(undefined4 *)(lVar8 + -8) = 0;
        *(ulong *)(lVar8 + -0x18) = uVar1;
                    /* try { // try from 005b3140 to 006b3167 has its CatchHandler @ 005b3390 */
        *(undefined1 *)(lVar8 + uVar1) = 0;
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x10);
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


