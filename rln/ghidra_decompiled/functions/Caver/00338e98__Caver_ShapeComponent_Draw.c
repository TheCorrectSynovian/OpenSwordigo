/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00338e98
 * Function: Caver::ShapeComponent::Draw
 * Signature: undefined __thiscall Draw(ShapeComponent * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShapeComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall
Caver::ShapeComponent::Draw(ShapeComponent *this,RenderingContext *param_1,Matrix4 *param_2)

{
  long lVar1;
  ShapeComponent *this_00;
  float afStack_d0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x70) != 0) {
    SceneObject::WorldMatrix();
    if (*(char *)(*(long *)(this + 0x28) + 0x90) != '\0') {
      uStack_88 = _UNK_006837d8;
      local_90 = _DAT_006837d0;
      uStack_78 = _UNK_006837e8;
      uStack_80 = _DAT_006837e0;
      uStack_68 = _UNK_006837f8;
      local_70 = _DAT_006837f0;
      uStack_58 = _UNK_00683808;
      uStack_60 = _DAT_00683800;
      C_Matrix4Mul(afStack_d0,(float *)&local_90,afStack_d0);
    }
    this_00 = (ShapeComponent *)C_Matrix4Mul((float *)param_2,afStack_d0,(float *)&local_90);
    DrawShape(this_00,param_1,(Shape *)(this + 0x70),(Matrix4 *)&local_90);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


