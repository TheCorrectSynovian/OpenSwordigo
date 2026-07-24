/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034040c
 * Function: Caver::TransformComponent::WorldMatrix
 * Signature: undefined __cdecl WorldMatrix(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::WorldMatrix() */

void Caver::TransformComponent::WorldMatrix(void)

{
  long lVar1;
  long in_x0;
  Matrix4 *in_x8;
  undefined8 local_88;
  undefined4 local_80;
  float local_78 [6];
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78[0] = *(float *)(*(long *)(in_x0 + 0x28) + 0x8c);
  local_78[3] = 0.0;
  local_78[4] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_44 = 0;
  local_4c = 0;
  local_3c = 0x3f800000;
  local_78[5] = local_78[0];
  local_50 = local_78[0];
  C_Matrix4Mul(local_78,(float *)(in_x0 + 0x70),(float *)in_x8);
  local_88 = *(undefined8 *)(*(long *)(in_x0 + 0x28) + 0x70);
  local_80 = *(undefined4 *)(*(long *)(in_x0 + 0x28) + 0x78);
  Matrix4::PreTranslate(in_x8,(Vector3 *)&local_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


