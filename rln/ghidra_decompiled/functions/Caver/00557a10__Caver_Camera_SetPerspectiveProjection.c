/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557a10
 * Function: Caver::Camera::SetPerspectiveProjection
 * Signature: undefined __thiscall SetPerspectiveProjection(Camera * this, float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::SetPerspectiveProjection(float, float, float, float) */

void __thiscall
Caver::Camera::SetPerspectiveProjection
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
  
                    /* catch() { ... } // from try @ 00557a60 with catch @ 00557a14
                       catch() { ... } // from try @ 00557ab8 with catch @ 00557a14 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00557a3c to 00657a4f has its CatchHandler @ 00557b84 */
                    /* try { // try from 00557a50 to 00657a5f has its CatchHandler @ 00557bfc */
  this[0xec] = (Camera)0x0;
  Matrix4::PerspectiveFov((Matrix4 *)this,param_1,param_2,param_3,param_4);
  pCVar1 = this + 0xac;
                    /* try { // try from 00557a60 to 00657a83 has its CatchHandler @ 00557a14 */
  pCVar7 = pCVar1;
  if (pCVar1 <= this + 0x70) {
    pCVar7 = this + 0x70;
  }
  uVar2 = ((ulong)(pCVar7 + (-0x6d - (long)this)) >> 2) + 1;
                    /* try { // try from 00557a84 to 00657a97 has its CatchHandler @ 00557b7c */
  if (uVar2 < 8) {
    puVar5 = local_d8;
    pCVar6 = this + 0x6c;
LAB_00557ad8:
    do {
      pCVar7 = pCVar6 + 4;
      *(undefined4 *)pCVar6 = *(undefined4 *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
      pCVar6 = pCVar7;
    } while (pCVar7 < pCVar1);
  }
  else {
    uVar8 = uVar2 & 0x7ffffffffffffff8;
                    /* try { // try from 00557a9c to 00657ab7 has its CatchHandler @ 00557b88 */
    puVar5 = (undefined8 *)((long)local_d8 + uVar8 * 4);
    pCVar7 = this + 0x7c;
    pCVar6 = this + uVar8 * 4 + 0x6c;
    puVar9 = local_d8 + 2;
    uVar10 = uVar8;
    do {
      puVar4 = puVar9 + -1;
                    /* try { // try from 00557ab8 to 00657c6f has its CatchHandler @ 00557a14 */
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
    if (uVar2 != uVar8) goto LAB_00557ad8;
  }
  Matrix4::InverseEx();
  pCVar1 = this + 0x140;
  pCVar7 = pCVar1;
  if (pCVar1 <= this + 0x104) {
    pCVar7 = this + 0x104;
  }
  uVar2 = ((ulong)(pCVar7 + (-0x101 - (long)this)) >> 2) + 1;
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
    if (uVar2 == uVar8) goto LAB_00557b7c;
  }
  do {
    pCVar7 = pCVar6 + 4;
    *(undefined4 *)pCVar6 = *(undefined4 *)puVar5;
    pCVar6 = pCVar7;
    puVar5 = (undefined8 *)((long)puVar5 + 4);
  } while (pCVar7 < pCVar1);
LAB_00557b7c:
                    /* catch() { ... } // from try @ 00557a84 with catch @ 00557b7c */
  *(float *)(this + 0xf0) = param_2;
  *(float *)(this + 0xf4) = param_1;
  *(float *)(this + 0xf8) = param_3;
  *(float *)(this + 0xfc) = param_4;
                    /* catch() { ... } // from try @ 00557a3c with catch @ 00557b84 */
                    /* catch() { ... } // from try @ 00557a9c with catch @ 00557b88 */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


