/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005576a0
 * Function: Caver::Camera::SetOrthoProjection
 * Signature: undefined __thiscall SetOrthoProjection(Camera * this, float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::SetOrthoProjection(float, float, float, float) */

void __thiscall
Caver::Camera::SetOrthoProjection
          (Camera *this,float param_1,float param_2,float param_3,float param_4)

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
  undefined8 local_d8 [8];
  undefined8 local_98 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this[0xec] = (Camera)0x1;
                    /* catch() { ... } // from try @ 005574ec with catch @ 005576fc */
                    /* catch() { ... } // from try @ 005575b0 with catch @ 00557700 */
  Matrix4::Ortho((Matrix4 *)this,param_1 * -0.5,param_2 * 0.5,param_1 * 0.5,param_2 * -0.5,param_3,
                 param_4);
                    /* catch() { ... } // from try @ 0055753c with catch @ 00557710 */
  pCVar1 = this + 0xac;
  pCVar7 = pCVar1;
  if (pCVar1 <= this + 0x70) {
    pCVar7 = this + 0x70;
  }
                    /* catch() { ... } // from try @ 00557564 with catch @ 00557724 */
  uVar2 = ((ulong)(pCVar7 + (-0x6d - (long)this)) >> 2) + 1;
  if (uVar2 < 8) {
    puVar5 = local_d8;
    pCVar6 = this + 0x6c;
                    /* try { // try from 00557748 to 006577b7 has its CatchHandler @ 005577c0 */
LAB_0055778c:
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
    if (uVar2 != uVar8) goto LAB_0055778c;
  }
  Matrix4::InverseEx();
  pCVar1 = this + 0x140;
                    /* try { // try from 005577b8 to 006577c3 has its CatchHandler @ 00557478 */
  pCVar7 = pCVar1;
  if (pCVar1 <= this + 0x104) {
    pCVar7 = this + 0x104;
  }
                    /* catch() { ... } // from try @ 00557748 with catch @ 005577c0 */
  uVar2 = ((ulong)(pCVar7 + (-0x101 - (long)this)) >> 2) + 1;
                    /* try { // try from 005577cc to 006577fb has its CatchHandler @ 005577cc
                       catch() { ... } // from try @ 005577cc with catch @ 005577cc
                       catch() { ... } // from try @ 00557808 with catch @ 005577cc */
  if (uVar2 < 8) {
    pCVar6 = this + 0x100;
    puVar5 = local_98;
  }
  else {
    uVar8 = uVar2 & 0x7ffffffffffffff8;
    puVar5 = (undefined8 *)((long)local_98 + uVar8 * 4);
    pCVar7 = this + 0x110;
    pCVar6 = this + uVar8 * 4 + 0x100;
    puVar9 = local_98 + 2;
                    /* try { // try from 005577fc to 00657807 has its CatchHandler @ 00557888 */
    uVar10 = uVar8;
    do {
      puVar4 = puVar9 + -1;
      uVar11 = puVar9[-2];
      uVar13 = puVar9[1];
      uVar12 = *puVar9;
      uVar10 = uVar10 - 8;
                    /* try { // try from 00557808 to 006578f7 has its CatchHandler @ 005577cc */
      puVar9 = puVar9 + 4;
      *(undefined8 *)(pCVar7 + -8) = *puVar4;
      *(undefined8 *)(pCVar7 + -0x10) = uVar11;
      *(undefined8 *)(pCVar7 + 8) = uVar13;
      *(undefined8 *)pCVar7 = uVar12;
      pCVar7 = pCVar7 + 0x20;
    } while (uVar10 != 0);
    if (uVar2 == uVar8) goto LAB_00557830;
  }
  do {
    pCVar7 = pCVar6 + 4;
    *(undefined4 *)pCVar6 = *(undefined4 *)puVar5;
    pCVar6 = pCVar7;
    puVar5 = (undefined8 *)((long)puVar5 + 4);
  } while (pCVar7 < pCVar1);
LAB_00557830:
  *(undefined4 *)(this + 0xf4) = 0;
  *(float *)(this + 0xf8) = param_3;
  *(float *)(this + 0xfc) = param_4;
  *(float *)(this + 0xf0) = param_1 / param_2;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


