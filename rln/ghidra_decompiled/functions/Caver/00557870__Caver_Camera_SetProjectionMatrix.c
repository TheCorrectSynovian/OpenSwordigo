/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557870
 * Function: Caver::Camera::SetProjectionMatrix
 * Signature: undefined __thiscall SetProjectionMatrix(Camera * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::SetProjectionMatrix(Caver::Matrix4 const&) */

void __thiscall Caver::Camera::SetProjectionMatrix(Camera *this,Matrix4 *param_1)

{
  Camera *pCVar1;
  ulong uVar2;
  Camera *pCVar3;
  long lVar4;
  undefined8 *puVar5;
  Matrix4 *pMVar6;
  Camera *pCVar7;
  undefined8 *puVar8;
  Camera *pCVar9;
  ulong uVar10;
  undefined8 *puVar11;
  Matrix4 *pMVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_78 [8];
  long local_38;
  
                    /* catch() { ... } // from try @ 005577fc with catch @ 00557888 */
  pCVar1 = this + 0xac;
  pCVar9 = this + 0x70;
  lVar4 = tpidr_el0;
  pCVar7 = pCVar1;
  if (pCVar1 <= pCVar9) {
    pCVar7 = pCVar9;
  }
  local_38 = *(long *)(lVar4 + 0x28);
  uVar2 = ((ulong)(pCVar7 + (-0x6d - (long)this)) >> 2) + 1;
  pCVar7 = this + 0x6c;
  if (uVar2 < 8) {
LAB_00557900:
    do {
      pCVar9 = pCVar7 + 4;
      *(undefined4 *)pCVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pCVar7 = pCVar9;
    } while (pCVar9 < pCVar1);
  }
  else {
    pCVar3 = pCVar1;
    if (pCVar1 <= pCVar9) {
      pCVar3 = pCVar9;
    }
    if ((pCVar7 < (Camera *)
                  (param_1 + ((ulong)(pCVar3 + (-0x6d - (long)this)) & 0xfffffffffffffffc) + 4)) &&
       (param_1 < this + ((ulong)(pCVar3 + (-0x6d - (long)this) + 0x70) & 0xfffffffffffffffc)))
    goto LAB_00557900;
    uVar10 = uVar2 & 0x7ffffffffffffff8;
    pCVar9 = this + 0x7c;
    pCVar7 = this + uVar10 * 4 + 0x6c;
    pMVar12 = param_1 + 0x10;
    uVar13 = uVar10;
    do {
      pMVar6 = pMVar12 + -8;
      uVar14 = *(undefined8 *)(pMVar12 + -0x10);
      uVar16 = *(undefined8 *)(pMVar12 + 8);
      uVar15 = *(undefined8 *)pMVar12;
      uVar13 = uVar13 - 8;
      pMVar12 = pMVar12 + 0x20;
      *(undefined8 *)(pCVar9 + -8) = *(undefined8 *)pMVar6;
      *(undefined8 *)(pCVar9 + -0x10) = uVar14;
      *(undefined8 *)(pCVar9 + 8) = uVar16;
      *(undefined8 *)pCVar9 = uVar15;
      pCVar9 = pCVar9 + 0x20;
    } while (uVar13 != 0);
    param_1 = param_1 + uVar10 * 4;
    if (uVar2 != uVar10) goto LAB_00557900;
  }
  Matrix4::InverseEx();
  pCVar1 = this + 0x140;
  pCVar9 = pCVar1;
  if (pCVar1 <= this + 0x104) {
    pCVar9 = this + 0x104;
  }
  uVar2 = ((ulong)(pCVar9 + (-0x101 - (long)this)) >> 2) + 1;
  if (uVar2 < 8) {
    pCVar7 = this + 0x100;
    puVar8 = local_78;
  }
  else {
    uVar10 = uVar2 & 0x7ffffffffffffff8;
    puVar8 = (undefined8 *)((long)local_78 + uVar10 * 4);
    pCVar9 = this + 0x110;
    pCVar7 = this + uVar10 * 4 + 0x100;
    puVar11 = local_78 + 2;
    uVar13 = uVar10;
    do {
      puVar5 = puVar11 + -1;
      uVar14 = puVar11[-2];
      uVar16 = puVar11[1];
      uVar15 = *puVar11;
      uVar13 = uVar13 - 8;
      puVar11 = puVar11 + 4;
      *(undefined8 *)(pCVar9 + -8) = *puVar5;
      *(undefined8 *)(pCVar9 + -0x10) = uVar14;
      *(undefined8 *)(pCVar9 + 8) = uVar16;
      *(undefined8 *)pCVar9 = uVar15;
      pCVar9 = pCVar9 + 0x20;
    } while (uVar13 != 0);
    if (uVar2 == uVar10) goto LAB_005579a4;
  }
  do {
    pCVar9 = pCVar7 + 4;
    *(undefined4 *)pCVar7 = *(undefined4 *)puVar8;
    pCVar7 = pCVar9;
    puVar8 = (undefined8 *)((long)puVar8 + 4);
  } while (pCVar9 < pCVar1);
LAB_005579a4:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


