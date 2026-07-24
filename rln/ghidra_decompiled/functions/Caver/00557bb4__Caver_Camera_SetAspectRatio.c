/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557bb4
 * Function: Caver::Camera::SetAspectRatio
 * Signature: undefined __thiscall SetAspectRatio(Camera * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::SetAspectRatio(float) */

void __thiscall Caver::Camera::SetAspectRatio(Camera *this,float param_1)

{
  Camera *pCVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Camera *pCVar6;
  Camera *pCVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_d8 [8];
  undefined8 local_98 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00557a50 with catch @ 00557bfc */
  if ((this[0xec] != (Camera)0x0) || (fVar14 = *(float *)(this + 0xf4), fVar14 <= DAT_00683734)) {
    *(float *)(this + 0xf0) = param_1;
    goto LAB_00557c64;
  }
  fVar15 = *(float *)(this + 0xf8);
  fVar16 = *(float *)(this + 0xfc);
  this[0xec] = (Camera)0x0;
  Matrix4::PerspectiveFov((Matrix4 *)this,fVar14,param_1,fVar15,fVar16);
  pCVar1 = this + 0xac;
  pCVar7 = pCVar1;
  if (pCVar1 <= this + 0x70) {
    pCVar7 = this + 0x70;
  }
  uVar2 = ((ulong)(pCVar7 + (-0x6d - (long)this)) >> 2) + 1;
  if (uVar2 < 8) {
    puVar5 = local_d8;
    pCVar6 = this + 0x6c;
LAB_00557cd0:
    do {
      pCVar7 = pCVar6 + 4;
      *(undefined4 *)pCVar6 = *(undefined4 *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
      pCVar6 = pCVar7;
    } while (pCVar7 < pCVar1);
  }
  else {
    uVar8 = uVar2 & 0x7ffffffffffffff8;
    puVar5 = (undefined8 *)((long)local_d8 + uVar8 * 4);
    pCVar7 = this + 0x7c;
    pCVar6 = this + uVar8 * 4 + 0x6c;
    puVar9 = local_d8 + 2;
    uVar10 = uVar8;
    do {
      puVar4 = puVar9 + -1;
      uVar11 = puVar9[-2];
      uVar13 = puVar9[1];
      uVar12 = *puVar9;
      uVar10 = uVar10 - 8;
      puVar9 = puVar9 + 4;
      *(undefined8 *)(pCVar7 + -8) = *puVar4;
      *(undefined8 *)(pCVar7 + -0x10) = uVar11;
      *(undefined8 *)(pCVar7 + 8) = uVar13;
      *(undefined8 *)pCVar7 = uVar12;
      pCVar7 = pCVar7 + 0x20;
    } while (uVar10 != 0);
    if (uVar2 != uVar8) goto LAB_00557cd0;
  }
  Matrix4::InverseEx();
  pCVar1 = this + 0x140;
  pCVar7 = pCVar1;
  if (pCVar1 <= this + 0x104) {
    pCVar7 = this + 0x104;
  }
  uVar2 = ((ulong)(pCVar7 + (-0x101 - (long)this)) >> 2) + 1;
  if (uVar2 < 8) {
                    /* catch() { ... } // from try @ 00557dec with catch @ 00557d1c
                       catch() { ... } // from try @ 00557e6c with catch @ 00557d1c
                       catch() { ... } // from try @ 00557ea4 with catch @ 00557d1c
                       catch() { ... } // from try @ 00558088 with catch @ 00557d1c
                       catch() { ... } // from try @ 005580f4 with catch @ 00557d1c
                       catch() { ... } // from try @ 00558274 with catch @ 00557d1c
                       catch() { ... } // from try @ 005583b4 with catch @ 00557d1c
                       catch() { ... } // from try @ 005584d4 with catch @ 00557d1c
                       catch() { ... } // from try @ 00558814 with catch @ 00557d1c
                       catch() { ... } // from try @ 00558864 with catch @ 00557d1c
                       catch() { ... } // from try @ 00558980 with catch @ 00557d1c */
    pCVar6 = this + 0x100;
    puVar5 = local_98;
LAB_00557d64:
    do {
      pCVar7 = pCVar6 + 4;
      *(undefined4 *)pCVar6 = *(undefined4 *)puVar5;
      pCVar6 = pCVar7;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    } while (pCVar7 < pCVar1);
  }
  else {
    uVar8 = uVar2 & 0x7ffffffffffffff8;
    puVar5 = (undefined8 *)((long)local_98 + uVar8 * 4);
    pCVar7 = this + 0x110;
    pCVar6 = this + uVar8 * 4 + 0x100;
    puVar9 = local_98 + 2;
    uVar10 = uVar8;
    do {
      puVar4 = puVar9 + -1;
      uVar11 = puVar9[-2];
      uVar13 = puVar9[1];
      uVar12 = *puVar9;
      uVar10 = uVar10 - 8;
      puVar9 = puVar9 + 4;
      *(undefined8 *)(pCVar7 + -8) = *puVar4;
      *(undefined8 *)(pCVar7 + -0x10) = uVar11;
      *(undefined8 *)(pCVar7 + 8) = uVar13;
      *(undefined8 *)pCVar7 = uVar12;
      pCVar7 = pCVar7 + 0x20;
    } while (uVar10 != 0);
    if (uVar2 != uVar8) goto LAB_00557d64;
  }
  *(float *)(this + 0xf0) = param_1;
  *(float *)(this + 0xf4) = fVar14;
  *(float *)(this + 0xf8) = fVar15;
  *(float *)(this + 0xfc) = fVar16;
LAB_00557c64:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


