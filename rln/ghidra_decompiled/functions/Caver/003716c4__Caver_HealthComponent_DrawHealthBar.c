/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003716c4
 * Function: Caver::HealthComponent::DrawHealthBar
 * Signature: undefined __thiscall DrawHealthBar(HealthComponent * this, RenderingContext * param_1, Camera * param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::DrawHealthBar(Caver::RenderingContext*, Caver::Camera const*,
   Caver::Rectangle const&) */

void __thiscall
Caver::HealthComponent::DrawHealthBar
          (HealthComponent *this,RenderingContext *param_1,Camera *param_2,Rectangle *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_90 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x28);
  local_80 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x70) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20) *
                      *(float *)(lVar2 + 0x8c),
                      (float)*(undefined8 *)(lVar2 + 0x70) +
                      (float)*(undefined8 *)(this + 0x8c) * *(float *)(lVar2 + 0x8c));
  uStack_78 = CONCAT44(uStack_78._4_4_,*(float *)(lVar2 + 0x78) + 0.0);
  Camera::ScreenPointFromWorldPosition((Vector3 *)param_2,(Rectangle *)&local_80,(float *)param_3);
  uStack_58 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_60 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_48 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uStack_50 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_80 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uStack_68 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  uStack_70 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_80);
  fVar3 = (float)DAT_00688280;
  fVar4 = (float)((ulong)DAT_00688280 >> 0x20);
  local_80 = CONCAT44(SUB84(local_90._8_8_,4) + fVar4,(float)local_90._8_8_ + fVar3);
  uStack_78 = DAT_00688288;
  local_90[0] = 0x4c4c4c4c;
  RenderingContext::FillRect(param_1,(Rectangle *)&local_80,(Color *)local_90,0.0);
  local_80 = CONCAT44(SUB84(local_90._8_8_,4) + fVar4,(float)local_90._8_8_ + fVar3);
  uStack_78 = CONCAT44(0x40800000,
                       ((float)*(int *)(this + 0x80) / (float)*(int *)(this + 0x7c)) * 30.0);
  local_90[0] = 0xbf0000bf;
  RenderingContext::FillRect(param_1,(Rectangle *)&local_80,(Color *)local_90,0.0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


