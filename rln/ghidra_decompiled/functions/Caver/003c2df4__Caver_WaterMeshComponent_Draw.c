/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2df4
 * Function: Caver::WaterMeshComponent::Draw
 * Signature: undefined __thiscall Draw(WaterMeshComponent * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WaterMeshComponent::Draw(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::WaterMeshComponent::Draw
          (WaterMeshComponent *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  Matrix4 *this_00;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *pFVar2;
  FloatColor *extraout_x1_01;
  undefined8 uVar3;
  long lVar4;
  Color aCStack_c8 [8];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float local_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x128] == (WaterMeshComponent)0x0) {
    CreateMesh(this);
  }
  if (this[0x140] != (WaterMeshComponent)0x0) {
    UpdateMesh(this);
  }
  if (*(int *)(this + 0x150) == 0) goto LAB_003c2fd0;
  uStack_48 = *(undefined8 *)(param_3 + 0x38);
  local_50 = *(undefined8 *)(param_3 + 0x30);
  uStack_58 = *(undefined8 *)(param_3 + 0x28);
  local_60 = *(undefined8 *)(param_3 + 0x20);
  uStack_68 = *(undefined8 *)(param_3 + 0x18);
  local_70 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 8);
  local_80 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  local_88 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  fStack_b8 = (float)_UNK_00683498;
  fStack_b4 = (float)((ulong)_UNK_00683498 >> 0x20);
  local_c0 = (float)_DAT_00683490;
  fStack_bc = (float)((ulong)_DAT_00683490 >> 0x20);
  uStack_a8 = _UNK_006837e8;
  uStack_b0 = (undefined4)_DAT_006837e0;
  local_ac = (float)((ulong)_DAT_006837e0 >> 0x20);
  fStack_98 = (float)_UNK_006837f8;
  uStack_94 = (undefined4)((ulong)_UNK_006837f8 >> 0x20);
  local_a0 = _DAT_006837f0;
  local_90 = (undefined4)uVar3;
  uStack_8c = (undefined4)((ulong)uVar3 >> 0x20);
  local_84 = 0x3f800000;
  this_00 = (Matrix4 *)C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
  Matrix4::RotationZ(this_00,*(float *)(*(long *)(this + 0x28) + 0x80));
  C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
  local_c0 = *(float *)(*(long *)(this + 0x28) + 0x8c);
  fStack_b4 = 0.0;
  uStack_b0 = 0;
  fStack_bc = 0.0;
  fStack_b8 = 0.0;
  local_a0 = 0;
  uStack_a8 = 0;
  uStack_8c = 0;
  local_88 = 0;
  uStack_94 = 0;
  local_90 = 0;
  local_84 = 0x3f800000;
  local_ac = local_c0;
  fStack_98 = local_c0;
  C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_80);
  lVar4 = *(long *)(this + 0xa8);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x98),(Component *)this);
    lVar4 = *(long *)(this + 0xa8);
    pFVar2 = extraout_x1;
    if (lVar4 != 0) goto LAB_003c2f30;
  }
  else {
LAB_003c2f30:
    pFVar2 = (FloatColor *)0x0;
    if (*(Texture **)(lVar4 + 0x78) != (Texture *)0x0) {
      RenderingContext::BindTexture(param_1,*(Texture **)(lVar4 + 0x78));
      pFVar2 = extraout_x1_00;
    }
  }
  local_c0 = (float)*(undefined8 *)(this + 0xb0) * (float)*(undefined8 *)(this + 0xd0);
  fStack_bc = (float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20) *
              (float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20);
  fStack_b8 = (float)*(undefined8 *)(this + 0xb8) * (float)*(undefined8 *)(this + 0xd8);
  fStack_b4 = (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) *
              (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20);
  Color::FromFloatColor((Color *)&local_c0,pFVar2);
  RenderingContext::SetColor(param_1,aCStack_c8);
  VertexArrayObject::Draw((VertexArrayObject *)(this + 0xe0),param_1,4,0,*(int *)(this + 0x14c) * 3)
  ;
  local_c0 = (float)*(undefined8 *)(this + 0xc0) * (float)*(undefined8 *)(this + 0xd0);
  fStack_bc = (float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20) *
              (float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20);
  fStack_b8 = (float)*(undefined8 *)(this + 200) * (float)*(undefined8 *)(this + 0xd8);
  fStack_b4 = (float)((ulong)*(undefined8 *)(this + 200) >> 0x20) *
              (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20);
  Color::FromFloatColor((Color *)&local_c0,extraout_x1_01);
  RenderingContext::SetColor(param_1,aCStack_c8);
  VertexArrayObject::Draw
            ((VertexArrayObject *)(this + 0xe0),param_1,4,*(int *)(this + 0x14c) * 3,
             *(int *)(this + 0x150) * 3);
LAB_003c2fd0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


