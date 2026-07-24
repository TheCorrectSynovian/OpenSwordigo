/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328180
 * Function: Caver::ModelTransformControllerComponent::Update
 * Signature: undefined __thiscall Update(ModelTransformControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::Update(float) */

void __thiscall
Caver::ModelTransformControllerComponent::Update
          (ModelTransformControllerComponent *this,float param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  Matrix4 *pMVar8;
  Matrix4 *this_00;
  long lVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_90;
  undefined8 auStack_88 [6];
  undefined8 uStack_58;
  long local_48;
  
  fVar7 = DAT_00683488;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (ABS(*(float *)(this + 0xa8)) <= DAT_00683488) {
    if (this[0x88] == (ModelTransformControllerComponent)0x0) goto LAB_003283a4;
    lVar9 = *(long *)(this + 0x80);
  }
  else {
    this[0x88] = (ModelTransformControllerComponent)0x1;
    *(float *)(this + 0xa4) = *(float *)(this + 0xa8) * param_1 + *(float *)(this + 0xa4);
    lVar9 = *(long *)(this + 0x80);
  }
  if ((lVar9 == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_003283a4;
  this[0x88] = (ModelTransformControllerComponent)0x0;
  auStack_88[4] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  auStack_88[3] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_58 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  auStack_88[5] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  auStack_88[0] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_90 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  auStack_88[2] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  auStack_88[1] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  pMVar8 = (Matrix4 *)
           Vector3::IsClose((Vector3 *)(this + 0x8c),(Vector3 *)PTR_Vector3Zero_007e5988,fVar7);
  this_00 = pMVar8;
  if (((ulong)pMVar8 & 1) == 0) {
    this_00 = (Matrix4 *)Matrix4::PostTranslate((Matrix4 *)&local_90,(Vector3 *)(this + 0x8c));
  }
  bVar1 = fVar7 < ABS(*(float *)(this + 0xa4));
  if (bVar1) {
    Matrix4::RotationAxis
              (this_00,*(float *)(this + 0xa4),*(float *)(this + 0x98),*(float *)(this + 0x9c),
               *(float *)(this + 0xa0));
    C_Matrix4Mul((float *)&local_90,(float *)&local_d0,(float *)&local_90);
  }
  if (((ulong)pMVar8 & 1) == 0) {
    local_d0 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20),
                        -(float)*(undefined8 *)(this + 0x8c));
    local_c8 = -*(float *)(this + 0x94);
    Matrix4::PostTranslate((Matrix4 *)&local_90,(Vector3 *)&local_d0);
  }
  lVar9 = *(long *)(this + 0x80);
  if (lVar9 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar9 = *(long *)(this + 0x80);
    if (!bVar1) goto LAB_003282c4;
LAB_003282e0:
    puVar2 = (undefined4 *)(lVar9 + 0x118);
    puVar12 = (undefined4 *)(lVar9 + 0xdc);
    puVar11 = puVar2;
    if (puVar2 <= puVar12) {
      puVar11 = puVar12;
    }
    uVar3 = ((ulong)((long)puVar11 + (-0xd9 - lVar9)) >> 2) + 1;
    puVar11 = (undefined4 *)(lVar9 + 0xd8);
    puVar13 = &local_90;
    if (uVar3 < 8) {
LAB_0032838c:
      do {
        puVar12 = puVar11 + 1;
        *puVar11 = *(undefined4 *)puVar13;
        puVar11 = puVar12;
        puVar13 = (undefined8 *)((long)puVar13 + 4);
      } while (puVar12 < puVar2);
    }
    else {
      puVar4 = puVar2;
      if (puVar2 <= puVar12) {
        puVar4 = puVar12;
      }
      uVar16 = (long)puVar4 + (-0xd9 - lVar9);
      if ((puVar11 < (undefined4 *)((long)&local_90 + (uVar16 & 0xfffffffffffffffc) + 4)) &&
         (&local_90 < (undefined8 *)(lVar9 + (uVar16 + 0xdc & 0xfffffffffffffffc))))
      goto LAB_0032838c;
      uVar14 = uVar3 & 0x7ffffffffffffff8;
      puVar13 = (undefined8 *)(lVar9 + 0xe8);
      puVar15 = auStack_88 + 1;
      uVar16 = uVar14;
      do {
        puVar6 = puVar15 + -1;
        uVar17 = puVar15[-2];
        uVar19 = puVar15[1];
        uVar18 = *puVar15;
        uVar16 = uVar16 - 8;
        puVar15 = puVar15 + 4;
        puVar13[-1] = *puVar6;
        puVar13[-2] = uVar17;
        puVar13[1] = uVar19;
        *puVar13 = uVar18;
        puVar13 = puVar13 + 4;
      } while (uVar16 != 0);
      puVar11 = (undefined4 *)(lVar9 + uVar14 * 4 + 0xd8);
      puVar13 = (undefined8 *)((long)&local_90 + uVar14 * 4);
      if (uVar3 != uVar14) goto LAB_0032838c;
    }
    uVar10 = 1;
  }
  else {
    if (bVar1) goto LAB_003282e0;
LAB_003282c4:
    uVar10 = 0;
  }
  *(undefined1 *)(lVar9 + 0x118) = uVar10;
LAB_003283a4:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


