/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322f98
 * Function: Caver::LightComponent::Enable
 * Signature: undefined __thiscall Enable(LightComponent * this, RenderingContext * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::Enable(Caver::RenderingContext*, int) */

void __thiscall
Caver::LightComponent::Enable(LightComponent *this,RenderingContext *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x70);
  *(int *)(this + 0xac) = param_2;
  if (iVar1 == 3) {
    fVar4 = *(float *)(*(long *)(this + 0x28) + 0x78);
    uVar8 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    Vector2::Vector2((Vector2 *)&local_a8,(Vector3 *)(this + 0xa0));
    local_58 = local_a8;
    Vector2::Rotate((Vector2 *)&local_58,*(float *)(*(long *)(this + 0x28) + 0x80));
    if (*(int *)param_1 == 0) {
      fVar5 = *(float *)(this + 0xa8);
      iVar1 = param_2 + 0x4000;
      fVar7 = (float)local_58;
      uVar3 = (ulong)local_58 >> 0x20;
      glEnable(iVar1);
      local_ac = 0x3f800000;
      local_b8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)uVar3,(float)uVar8 + fVar7);
      local_b0 = fVar4 + fVar5;
      glLightfv(iVar1,0x1203,&local_b8);
      fVar4 = *(float *)(this + 0x74);
      local_c8 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) * fVar4,
                          (float)*(undefined8 *)(this + 0x78) * fVar4);
      uStack_c0 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) * fVar4,
                           (float)*(undefined8 *)(this + 0x80) * fVar4);
      glLightfv(iVar1,0x1201,&local_c8);
      auVar6 = NEON_fmov(0x3f800000,4);
      uStack_d8 = auVar6._8_8_;
      local_e0 = auVar6._0_8_;
      glLightfv(iVar1,0x1202,&local_e0);
      glLightf(iVar1,0x1208);
      glLightf(iVar1,0x1209);
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)param_1 == 0) {
      iVar1 = param_2 + 0x4000;
      glEnable(iVar1);
      local_58 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
      local_50 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
      Vector3::Normalize((Vector3 *)&local_58);
      local_78 = local_58;
      local_70 = local_50;
      uStack_6c = 0;
      glLightfv(iVar1,0x1203,&local_78);
      fVar4 = *(float *)(this + 0x74);
      local_88 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) * fVar4,
                          (float)*(undefined8 *)(this + 0x78) * fVar4);
      uStack_80 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) * fVar4,
                           (float)*(undefined8 *)(this + 0x80) * fVar4);
      glLightfv(iVar1,0x1201,&local_88);
      auVar6 = NEON_fmov(0x3f800000,4);
      uStack_98 = auVar6._8_8_;
      local_a0 = auVar6._0_8_;
      glLightfv(iVar1,0x1202,&local_a0);
    }
  }
  else if ((iVar1 == 1) && (*(int *)param_1 == 0)) {
    fVar4 = *(float *)(this + 0x74);
    local_68 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) * fVar4,
                        (float)*(undefined8 *)(this + 0x78) * fVar4);
    uStack_60 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) * fVar4,
                         (float)*(undefined8 *)(this + 0x80) * fVar4);
    glLightModelfv(0xb53,&local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


