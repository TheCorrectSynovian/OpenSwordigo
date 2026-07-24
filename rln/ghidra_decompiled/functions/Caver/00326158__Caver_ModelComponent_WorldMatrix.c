/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00326158
 * Function: Caver::ModelComponent::WorldMatrix
 * Signature: undefined __cdecl WorldMatrix(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::WorldMatrix() const */

void Caver::ModelComponent::WorldMatrix(void)

{
  long lVar1;
  float fVar2;
  Matrix4 *in_x0;
  Matrix4 *this;
  Matrix4 *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_78;
  float local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uVar6 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uVar4 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uVar8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  uVar7 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uVar10 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  uVar9 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  *(undefined8 *)(in_x8 + 0x28) = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  *(undefined8 *)(in_x8 + 0x20) = uVar3;
  *(undefined8 *)(in_x8 + 0x38) = uVar6;
  *(undefined8 *)(in_x8 + 0x30) = uVar4;
  *(undefined8 *)(in_x8 + 8) = uVar8;
  *(undefined8 *)in_x8 = uVar7;
  *(undefined8 *)(in_x8 + 0x18) = uVar10;
  *(undefined8 *)(in_x8 + 0x10) = uVar9;
  this = in_x0;
  if (in_x0[0x118] != (Matrix4)0x0) {
    this = (Matrix4 *)C_Matrix4Mul((float *)in_x8,(float *)(in_x0 + 0xd8),(float *)in_x8);
  }
  if (in_x0[0xc0] != (Matrix4)0x0) {
    local_78 = CONCAT44(-(float)((ulong)*(undefined8 *)(in_x0 + 0xc4) >> 0x20),
                        -(float)*(undefined8 *)(in_x0 + 0xc4));
    local_70 = -*(float *)(in_x0 + 0xcc);
    this = (Matrix4 *)Matrix4::PostTranslate(in_x8,(Vector3 *)&local_78);
  }
  fVar2 = DAT_00683734;
  if (DAT_00683734 < ABS(*(float *)(in_x0 + 0xd0))) {
    Matrix4::RotationX(this,*(float *)(in_x0 + 0xd0));
    this = (Matrix4 *)C_Matrix4Mul((float *)in_x8,(float *)&local_78,(float *)in_x8);
  }
  dVar5 = 0.0;
  if (*(char *)(*(long *)(in_x0 + 0x28) + 0x90) != '\0') {
    dVar5 = DAT_00684028;
  }
  if (fVar2 < ABS((float)(dVar5 + (double)*(float *)(in_x0 + 0xd4)))) {
    Matrix4::RotationY(this,(float)(dVar5 + (double)*(float *)(in_x0 + 0xd4)));
    C_Matrix4Mul((float *)in_x8,(float *)&local_78,(float *)in_x8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


