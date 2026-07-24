/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b5cc
 * Function: Caver::CollisionShapeComponent::WorldMatrix
 * Signature: undefined __cdecl WorldMatrix(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CollisionShapeComponent::WorldMatrix(float) const */

void Caver::CollisionShapeComponent::WorldMatrix(float param_1)

{
  long lVar1;
  Matrix4 *in_x0;
  Matrix4 *in_x8;
  float local_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  float afStack_78 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Matrix4::RotationZ(in_x0,*(float *)(in_x0 + 0x128));
  local_c0 = *(float *)(in_x0 + 300);
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  fStack_b8 = 0.0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_94 = 0;
  uStack_90 = 0;
  local_84 = 0x3f800000;
  local_ac = local_c0;
  local_98 = local_c0;
  C_Matrix4Mul(afStack_78,&local_c0,(float *)in_x8);
  local_c0 = (float)*(undefined8 *)(in_x0 + 0x120);
  uStack_bc = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x120) >> 0x20);
  fStack_b8 = param_1;
  Matrix4::PreTranslate(in_x8,(Vector3 *)&local_c0);
  if (in_x0[0x130] != (Matrix4)0x0) {
    fStack_b8 = (float)_UNK_006837d8;
    uStack_b4 = (undefined4)((ulong)_UNK_006837d8 >> 0x20);
    local_c0 = (float)_DAT_006837d0;
    uStack_bc = (undefined4)((ulong)_DAT_006837d0 >> 0x20);
    local_a8 = _UNK_006837e8;
    uStack_b0 = (undefined4)_DAT_006837e0;
    local_ac = (float)((ulong)_DAT_006837e0 >> 0x20);
    local_98 = (float)_UNK_006837f8;
    local_94 = (undefined4)((ulong)_UNK_006837f8 >> 0x20);
    uStack_a0 = _DAT_006837f0;
    uStack_88 = (undefined4)_UNK_00683808;
    local_84 = (undefined4)((ulong)_UNK_00683808 >> 0x20);
    uStack_90 = (undefined4)_DAT_00683800;
    uStack_8c = (undefined4)((ulong)_DAT_00683800 >> 0x20);
    C_Matrix4Mul((float *)in_x8,&local_c0,(float *)in_x8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


