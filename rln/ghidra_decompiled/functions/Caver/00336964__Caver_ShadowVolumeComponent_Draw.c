/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336964
 * Function: Caver::ShadowVolumeComponent::Draw
 * Signature: undefined __thiscall Draw(ShadowVolumeComponent * this, RenderingContext * param_1, intrusive_ptr * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext*,
   boost::intrusive_ptr<Caver::LightComponent> const&, Caver::Matrix4 const&) */

void __thiscall
Caver::ShadowVolumeComponent::Draw
          (ShadowVolumeComponent *this,RenderingContext *param_1,intrusive_ptr *param_2,
          Matrix4 *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  Matrix4 aMStack_78 [64];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)param_2;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x78);
  *(long *)(this + 0x78) = lVar4;
  if ((plVar3 == (long *)0x0) ||
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 != 0)) {
    lVar4 = *(long *)(this + 0x88);
  }
  else {
    (**(code **)(*plVar3 + 8))();
    lVar4 = *(long *)(this + 0x88);
  }
  if (lVar4 == 0) {
    UpdateVolume(this);
  }
  local_90 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  local_88 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  uStack_b8 = _UNK_00683498;
  local_c0 = _DAT_00683490;
  uStack_a8 = _UNK_006837e8;
  uStack_b0 = _DAT_006837e0;
  uStack_98 = _UNK_006837f8;
  local_a0 = _DAT_006837f0;
  local_84 = 0x3f800000;
  C_Matrix4Mul((float *)param_3,(float *)&local_c0,(float *)aMStack_78);
  RenderingContext::SetMatrix(param_1,aMStack_78);
  RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,*(undefined8 *)(this + 0x88))
  ;
  RenderingContext::DrawArrays(param_1,4,0,*(int *)(this + 0x80) * 3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


