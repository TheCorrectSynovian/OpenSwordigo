/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003835e4
 * Function: Caver::HookshotTrailComponent::Draw
 * Signature: undefined __cdecl Draw(RenderingContext * param_1, Matrix4 * param_2, Vector3 * param_3, Vector3 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HookshotTrailComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&,
   Caver::Vector3 const&, Caver::Vector3 const&) */

void Caver::HookshotTrailComponent::Draw
               (RenderingContext *param_1,Matrix4 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  uVar3 = _DAT_006837f0;
  uVar2 = _UNK_006837e8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = *(undefined8 *)(param_3 + 0x38);
  local_50 = *(undefined8 *)(param_3 + 0x30);
  uStack_58 = *(undefined8 *)(param_3 + 0x28);
  local_60 = *(undefined8 *)(param_3 + 0x20);
  uStack_68 = *(undefined8 *)(param_3 + 0x18);
  local_70 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 8);
  local_80 = *(undefined8 *)param_3;
  uStack_88 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x78);
  uStack_b8 = (undefined4)_UNK_00683498;
  uVar6 = uStack_b8;
  uStack_b4 = (undefined4)((ulong)_UNK_00683498 >> 0x20);
  uVar7 = uStack_b4;
  local_c0 = (float)_DAT_00683490;
  fVar4 = local_c0;
  uStack_bc = (undefined4)((ulong)_DAT_00683490 >> 0x20);
  uVar5 = uStack_bc;
  fStack_90 = (float)*(undefined8 *)(param_1 + 0xac);
  fStack_8c = (float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20);
  uStack_84 = 0x3f800000;
  uStack_a8 = _UNK_006837e8;
  local_b0 = (undefined4)_DAT_006837e0;
  uVar8 = local_b0;
  fStack_ac = (float)((ulong)_DAT_006837e0 >> 0x20);
  fVar9 = fStack_ac;
  fStack_98 = (float)_UNK_006837f8;
  fVar10 = fStack_98;
  uStack_94 = (undefined4)((ulong)_UNK_006837f8 >> 0x20);
  uVar11 = uStack_94;
  local_a0 = _DAT_006837f0;
  C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
  local_c0 = *(float *)(*(long *)(param_1 + 0x28) + 0x8c);
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  fStack_8c = 0.0;
  uStack_88 = 0;
  uStack_94 = 0;
  fStack_90 = 0.0;
  uStack_84 = 0x3f800000;
  fStack_ac = local_c0;
  fStack_98 = local_c0;
  C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
  fStack_90 = -*(float *)(param_1 + 0xac);
  fStack_8c = -*(float *)(param_1 + 0xb0);
  uStack_88 = 0;
  uStack_84 = 0x3f800000;
  uStack_a8 = uVar2;
  local_a0 = uVar3;
  local_c0 = fVar4;
  uStack_bc = uVar5;
  uStack_b8 = uVar6;
  uStack_b4 = uVar7;
  local_b0 = uVar8;
  fStack_ac = fVar9;
  fStack_98 = fVar10;
  uStack_94 = uVar11;
  C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
  RenderingContext::SetMatrix((RenderingContext *)param_2,(Matrix4 *)&local_80);
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8074,3,0x1406,0x10,*(undefined8 *)(param_1 + 0x88));
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8076,4,0x1401,0x10,*(long *)(param_1 + 0x88) + 0xc);
  RenderingContext::DrawElements
            ((RenderingContext *)param_2,4,*(int *)(param_1 + 0xa0) * 3,0x1403,
             *(undefined8 *)(param_1 + 0x98));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


