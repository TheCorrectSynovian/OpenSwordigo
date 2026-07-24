/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b0e90
 * Function: Caver::SimpleGlowComponent::Draw
 * Signature: undefined __cdecl Draw(RenderingContext * param_1, Matrix4 * param_2, Vector3 * param_3, Vector3 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SimpleGlowComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&, Caver::Vector3
   const&, Caver::Vector3 const&) */

void Caver::SimpleGlowComponent::Draw
               (RenderingContext *param_1,Matrix4 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float local_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0x70] != (RenderingContext)0x0) {
    CreateVertexData();
    param_1[0x70] = (RenderingContext)0x0;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
  local_e0 = (float)uVar3 - (float)*(undefined8 *)param_4;
  fStack_dc = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  local_d8 = *(float *)(*(long *)(param_1 + 0x28) + 0x78) - *(float *)(param_4 + 8);
  Vector3::Normalize((Vector3 *)&local_e0);
  uStack_58 = *(undefined8 *)(param_3 + 0x38);
  local_60 = *(undefined8 *)(param_3 + 0x30);
  uStack_68 = *(undefined8 *)(param_3 + 0x28);
  local_70 = *(undefined8 *)(param_3 + 0x20);
  uStack_78 = *(undefined8 *)(param_3 + 0x18);
  local_80 = *(undefined8 *)(param_3 + 0x10);
  uStack_88 = *(undefined8 *)(param_3 + 8);
  local_90 = *(undefined8 *)param_3;
  SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(param_1 + 0x28));
  fVar2 = *(float *)(param_1 + 0xc4);
  local_a0 = local_e8 + fVar2 * local_e0;
  uStack_9c = CONCAT44(*(float *)(*(long *)(param_1 + 0x28) + 0x78) + fVar2 * local_d8,
                       fStack_e4 + fVar2 * fStack_dc);
  uStack_c8 = (undefined4)_UNK_00683498;
  uStack_c4 = (undefined4)((ulong)_UNK_00683498 >> 0x20);
  local_d0 = (float)_DAT_00683490;
  uStack_cc = (undefined4)((ulong)_DAT_00683490 >> 0x20);
  uStack_b8 = _UNK_006837e8;
  uStack_c0 = (undefined4)_DAT_006837e0;
  local_bc = (float)((ulong)_DAT_006837e0 >> 0x20);
  fStack_a8 = (float)_UNK_006837f8;
  uStack_a4 = (undefined4)((ulong)_UNK_006837f8 >> 0x20);
  local_b0 = _DAT_006837f0;
  local_94 = 0x3f800000;
  C_Matrix4Mul((float *)&local_90,&local_d0,(float *)&local_90);
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  local_d0 = *(float *)(param_1 + 200) * *(float *)(*(long *)(param_1 + 0x28) + 0x8c);
  local_b0 = 0;
  uStack_b8 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  local_a0 = 0.0;
  local_94 = 0x3f800000;
  local_bc = local_d0;
  fStack_a8 = local_d0;
  C_Matrix4Mul((float *)&local_90,&local_d0,(float *)&local_90);
  RenderingContext::SetMatrix((RenderingContext *)param_2,(Matrix4 *)&local_90);
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8074,3,0x1406,0x10,*(undefined8 *)(param_1 + 0x88));
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8076,4,0x1401,0x10,*(long *)(param_1 + 0x88) + 0xc);
  RenderingContext::DrawElements
            ((RenderingContext *)param_2,4,*(int *)(param_1 + 0xa0) * 3,0x1403,
             *(undefined8 *)(param_1 + 0x98));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


