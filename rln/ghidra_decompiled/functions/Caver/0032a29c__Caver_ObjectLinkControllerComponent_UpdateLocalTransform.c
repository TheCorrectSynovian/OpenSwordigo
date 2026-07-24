/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032a29c
 * Function: Caver::ObjectLinkControllerComponent::UpdateLocalTransform
 * Signature: undefined __thiscall UpdateLocalTransform(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::UpdateLocalTransform() */

void __thiscall
Caver::ObjectLinkControllerComponent::UpdateLocalTransform(ObjectLinkControllerComponent *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined *puVar5;
  ObjectLinkControllerComponent *pOVar6;
  ObjectLinkControllerComponent *pOVar7;
  undefined8 *puVar8;
  ObjectLinkControllerComponent *pOVar9;
  ulong uVar10;
  ulong uVar11;
  ObjectLinkControllerComponent *pOVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_80 [7];
  undefined8 uStack_48;
  long local_38;
  
  puVar5 = PTR_identityMatrix_007e74c8;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pOVar7 = this + 0xe8;
  *pOVar7 = (ObjectLinkControllerComponent)0x0;
  pOVar6 = pOVar7;
  if (pOVar7 <= this + 0xac) {
    pOVar6 = this + 0xac;
  }
  pOVar12 = this + 0xa8;
  uVar1 = ((ulong)(pOVar6 + (0x3f - (long)pOVar7)) >> 2) + 1;
  local_80[5] = *(undefined8 *)(puVar5 + 0x28);
  local_80[4] = *(undefined8 *)(puVar5 + 0x20);
  uStack_48 = *(undefined8 *)(puVar5 + 0x38);
  local_80[6] = *(undefined8 *)(puVar5 + 0x30);
  local_80[1] = *(undefined8 *)(puVar5 + 8);
  local_80[0] = *(undefined8 *)puVar5;
  local_80[3] = *(undefined8 *)(puVar5 + 0x18);
  local_80[2] = *(undefined8 *)(puVar5 + 0x10);
  puVar8 = local_80;
  pOVar6 = pOVar12;
  if (7 < uVar1) {
    uVar10 = uVar1 & 0x7ffffffffffffff8;
    pOVar6 = this + 0xb8;
    puVar8 = local_80 + 2;
    uVar11 = uVar10;
    do {
      puVar3 = puVar8 + -1;
      uVar13 = puVar8[-2];
      uVar15 = puVar8[1];
      uVar14 = *puVar8;
      uVar11 = uVar11 - 8;
      puVar8 = puVar8 + 4;
      *(undefined8 *)(pOVar6 + -8) = *puVar3;
      *(undefined8 *)(pOVar6 + -0x10) = uVar13;
      *(undefined8 *)(pOVar6 + 8) = uVar15;
      *(undefined8 *)pOVar6 = uVar14;
      pOVar6 = pOVar6 + 0x20;
    } while (uVar11 != 0);
    puVar8 = (undefined8 *)((long)local_80 + uVar10 * 4);
    pOVar6 = this + uVar10 * 4 + 0xa8;
    if (uVar1 == uVar10) goto LAB_0032a36c;
  }
  do {
    pOVar9 = pOVar6 + 4;
    *(undefined4 *)pOVar6 = *(undefined4 *)puVar8;
    puVar8 = (undefined8 *)((long)puVar8 + 4);
    pOVar6 = pOVar9;
  } while (pOVar9 < pOVar7);
LAB_0032a36c:
  fVar4 = DAT_00683734;
  pOVar6 = this;
  if (DAT_00683734 < ABS(*(float *)(this + 0xf8))) {
    Matrix4::RotationX((Matrix4 *)this,*(float *)(this + 0xf8));
    pOVar6 = (ObjectLinkControllerComponent *)
             C_Matrix4Mul((float *)pOVar12,(float *)local_80,(float *)pOVar12);
    this[0xe8] = (ObjectLinkControllerComponent)0x1;
  }
  if (fVar4 < ABS(*(float *)(this + 0xfc))) {
    Matrix4::RotationY((Matrix4 *)pOVar6,*(float *)(this + 0xfc));
    pOVar6 = (ObjectLinkControllerComponent *)
             C_Matrix4Mul((float *)pOVar12,(float *)local_80,(float *)pOVar12);
    this[0xe8] = (ObjectLinkControllerComponent)0x1;
  }
  if (fVar4 < ABS(*(float *)(this + 0x100))) {
    Matrix4::RotationZ((Matrix4 *)pOVar6,*(float *)(this + 0x100));
    C_Matrix4Mul((float *)pOVar12,(float *)local_80,(float *)pOVar12);
    this[0xe8] = (ObjectLinkControllerComponent)0x1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


