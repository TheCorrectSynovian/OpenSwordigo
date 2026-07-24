/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033c854
 * Function: Caver::SpriteComponent::Draw
 * Signature: undefined __thiscall Draw(SpriteComponent * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SpriteComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) const */

void __thiscall
Caver::SpriteComponent::Draw(SpriteComponent *this,RenderingContext *param_1,Matrix4 *param_2)

{
  long lVar1;
  Matrix4 *this_00;
  undefined8 uVar2;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  if (**(long **)(this + 0x78) != 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x38);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    uStack_58 = *(undefined8 *)(param_2 + 0x28);
    local_60 = *(undefined8 *)(param_2 + 0x20);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    local_70 = *(undefined8 *)(param_2 + 0x10);
    uStack_78 = *(undefined8 *)(param_2 + 8);
    local_80 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    local_88 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    uStack_b8 = (undefined4)_UNK_00683498;
    uStack_b4 = (undefined4)((ulong)_UNK_00683498 >> 0x20);
    local_c0 = (float)_DAT_00683490;
    uStack_bc = (undefined4)((ulong)_DAT_00683490 >> 0x20);
    uStack_a8 = _UNK_006837e8;
    uStack_b0 = (undefined4)_DAT_006837e0;
    local_ac = (float)((ulong)_DAT_006837e0 >> 0x20);
    fStack_98 = (float)_UNK_006837f8;
    uStack_94 = (undefined4)((ulong)_UNK_006837f8 >> 0x20);
    local_a0 = _DAT_006837f0;
    local_90 = (undefined4)uVar2;
    uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
    local_84 = 0x3f800000;
    this_00 = (Matrix4 *)C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
    Matrix4::RotationZ(this_00,*(float *)(*(long *)(this + 0x28) + 0x80));
    C_Matrix4Mul((float *)&local_80,&local_c0,(float *)&local_80);
    local_c0 = *(float *)(*(long *)(this + 0x28) + 0x8c);
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
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
    local_c0 = -NAN;
    RenderingContext::SetColor(param_1,(Color *)&local_c0);
    Sprite::Draw(*(Sprite **)(this + 0x78),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


