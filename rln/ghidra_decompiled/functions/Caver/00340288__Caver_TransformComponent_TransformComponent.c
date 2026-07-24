/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00340288
 * Function: Caver::TransformComponent::TransformComponent
 * Signature: undefined __thiscall TransformComponent(TransformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::TransformComponent() */

void __thiscall Caver::TransformComponent::TransformComponent(TransformComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  TransformComponent *pTVar9;
  TransformComponent *pTVar10;
  TransformComponent *pTVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_60 [7];
  undefined8 uStack_28;
  long local_18;
  
  puVar8 = PTR_identityMatrix_007e74c8;
  lVar6 = tpidr_el0;
  local_18 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e51e0 + 0x128;
  puVar2 = PTR_vtable_007e51e0 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  puVar4 = PTR_vtable_007e51e0 + 0x10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (TransformComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  pTVar11 = this + 0x48;
  *(undefined8 *)pTVar11 = 0;
  *(undefined **)this = puVar4;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x50) = 0;
  *(TransformComponent **)(this + 0x58) = pTVar11;
  *(TransformComponent **)(this + 0x60) = pTVar11;
  *(undefined8 *)(this + 0x68) = 0;
  pTVar11 = this + 0xb0;
  pTVar10 = pTVar11;
  if (pTVar11 <= this + 0x74) {
    pTVar10 = this + 0x74;
  }
  uVar5 = ((ulong)(pTVar10 + (-0x71 - (long)this)) >> 2) + 1;
  local_60[5] = *(undefined8 *)(puVar8 + 0x28);
  local_60[4] = *(undefined8 *)(puVar8 + 0x20);
  uStack_28 = *(undefined8 *)(puVar8 + 0x38);
  local_60[6] = *(undefined8 *)(puVar8 + 0x30);
  local_60[1] = *(undefined8 *)(puVar8 + 8);
  local_60[0] = *(undefined8 *)puVar8;
  local_60[3] = *(undefined8 *)(puVar8 + 0x18);
  local_60[2] = *(undefined8 *)(puVar8 + 0x10);
  if (uVar5 < 8) {
    pTVar9 = this + 0x70;
    puVar12 = local_60;
  }
  else {
    uVar13 = uVar5 & 0x7ffffffffffffff8;
    puVar12 = (undefined8 *)((long)local_60 + uVar13 * 4);
    pTVar10 = this + 0x80;
    pTVar9 = this + uVar13 * 4 + 0x70;
    puVar14 = local_60 + 2;
    uVar15 = uVar13;
    do {
      puVar7 = puVar14 + -1;
      uVar16 = puVar14[-2];
      uVar18 = puVar14[1];
      uVar17 = *puVar14;
      uVar15 = uVar15 - 8;
      puVar14 = puVar14 + 4;
      *(undefined8 *)(pTVar10 + -8) = *puVar7;
      *(undefined8 *)(pTVar10 + -0x10) = uVar16;
      *(undefined8 *)(pTVar10 + 8) = uVar18;
      *(undefined8 *)pTVar10 = uVar17;
      pTVar10 = pTVar10 + 0x20;
    } while (uVar15 != 0);
    if (uVar5 == uVar13) goto LAB_00340394;
  }
  do {
    pTVar10 = pTVar9 + 4;
    *(undefined4 *)pTVar9 = *(undefined4 *)puVar12;
    pTVar9 = pTVar10;
    puVar12 = (undefined8 *)((long)puVar12 + 4);
  } while (pTVar10 < pTVar11);
LAB_00340394:
  if (*(long *)(lVar6 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


