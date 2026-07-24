/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8988
 * Function: Caver::GroundMeshComponent::Draw
 * Signature: undefined __thiscall Draw(GroundMeshComponent * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GroundMeshComponent::Draw(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) const */

void __thiscall
Caver::GroundMeshComponent::Draw
          (GroundMeshComponent *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  Texture *pTVar5;
  long lVar6;
  MeshInstance *pMVar7;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  Rectangle aRStack_f0 [16];
  float local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  float local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 0x70) != *(long *)(this + 0x78)) ||
     (*(long *)(this + 0x88) != *(long *)(this + 0x90))) {
    lVar6 = *(long *)(this + 0x28);
    local_70 = *(undefined8 *)(lVar6 + 0x70);
    local_68 = *(undefined4 *)(lVar6 + 0x78);
    uStack_98 = _UNK_00683498;
    local_a0 = _DAT_00683490;
    uStack_88 = _UNK_006837e8;
    uStack_90 = _DAT_006837e0;
    uStack_78 = _UNK_006837f8;
    local_80 = _DAT_006837f0;
    uStack_64 = 0x3f800000;
    Matrix4::RotationZ((Matrix4 *)this,*(float *)(lVar6 + 0x80));
    C_Matrix4Mul((float *)&local_a0,&local_e0,(float *)&local_a0);
    local_e0 = *(float *)(*(long *)(this + 0x28) + 0x8c);
    uStack_d4 = 0;
    fStack_dc = 0.0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_ac = 0;
    local_b4 = 0;
    local_a4 = 0x3f800000;
    local_cc = local_e0;
    local_b8 = local_e0;
    C_Matrix4Mul((float *)&local_a0,&local_e0,(float *)&local_a0);
    C_Matrix4Mul((float *)param_3,(float *)&local_a0,&local_e0);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_e0);
    local_e0 = -(float)*(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    fStack_dc = -(float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) >> 0x20);
    Rectangle::TranslatedRectangle((Vector2 *)param_2);
    if (DAT_00683944 < ABS(*(float *)(*(long *)(this + 0x28) + 0x80))) {
      Rectangle::Rotate(aRStack_f0,-*(float *)(*(long *)(this + 0x28) + 0x80));
    }
    if (*(int *)param_1 == 0) {
      local_100 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20) *
                           (float)((ulong)*(undefined8 *)(this + 0xc4) >> 0x20),
                           (float)*(undefined8 *)(this + 0xb0) * (float)*(undefined8 *)(this + 0xc4)
                          );
      uStack_f8 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) *
                           (float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20),
                           (float)*(undefined8 *)(this + 0xb8) * (float)*(undefined8 *)(this + 0xcc)
                          );
      glMaterialfv(0x408,0x1602,&local_100);
      local_110 = 0;
      uStack_108 = 0;
      glMaterialfv(0x408,0x1600,&local_110);
    }
    puVar2 = *(undefined8 **)(this + 0x78);
    for (puVar1 = *(undefined8 **)(this + 0x70); puVar1 != puVar2; puVar1 = puVar1 + 2) {
      local_120 = *(undefined8 *)(*(long *)*puVar1 + 0x144);
      uStack_118 = *(undefined8 *)(*(long *)*puVar1 + 0x150);
      uVar4 = Rectangle::IntersectsWithRect((Rectangle *)&local_120,aRStack_f0);
      if ((uVar4 & 1) != 0) {
        pMVar7 = (MeshInstance *)*puVar1;
        pTVar5 = *(Texture **)(*(long *)pMVar7 + 0xd8);
        if (pTVar5 != (Texture *)0x0) {
          RenderingContext::BindTexture(param_1,pTVar5);
        }
        MeshInstance::Draw(pMVar7,param_1);
      }
    }
    C_Matrix4Mul((float *)param_3,(float *)&local_a0,&local_e0);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_e0);
    puVar2 = *(undefined8 **)(this + 0x90);
    for (puVar1 = *(undefined8 **)(this + 0x88); puVar1 != puVar2; puVar1 = puVar1 + 2) {
      local_130 = *(undefined8 *)(*(long *)*puVar1 + 0x144);
      uStack_128 = *(undefined8 *)(*(long *)*puVar1 + 0x150);
      uVar4 = Rectangle::IntersectsWithRect((Rectangle *)&local_130,aRStack_f0);
      if ((uVar4 & 1) != 0) {
        pMVar7 = (MeshInstance *)*puVar1;
        pTVar5 = *(Texture **)(*(long *)pMVar7 + 0xd8);
        if (pTVar5 != (Texture *)0x0) {
          RenderingContext::BindTexture(param_1,pTVar5);
        }
        MeshInstance::Draw(pMVar7,param_1);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


