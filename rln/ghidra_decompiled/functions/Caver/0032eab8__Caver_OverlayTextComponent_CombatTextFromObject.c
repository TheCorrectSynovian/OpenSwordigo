/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032eab8
 * Function: Caver::OverlayTextComponent::CombatTextFromObject
 * Signature: undefined __thiscall CombatTextFromObject(OverlayTextComponent * this, string * param_1, intrusive_ptr * param_2, Vector3 * param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,
   boost::intrusive_ptr<Caver::SceneObject> const&, Caver::Vector3 const&, float) */

void __thiscall
Caver::OverlayTextComponent::CombatTextFromObject
          (OverlayTextComponent *this,string *param_1,intrusive_ptr *param_2,Vector3 *param_3,
          float param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  TransformControllerComponent *this_00;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  SceneObject *this_01;
  float fVar7;
  long *local_60;
  float local_58;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)param_2;
  this_01 = *(SceneObject **)(this + 0x28);
  local_58 = *(float *)(lVar5 + 0x78) + 0.0 + *(float *)(param_3 + 8);
  local_60 = (long *)CONCAT44(*(float *)(lVar5 + 0xa8) + *(float *)(lVar5 + 0xb0) * 0.5 + 0.0 +
                              (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                              *(float *)(lVar5 + 0x70) + 0.0 + (float)*(undefined8 *)param_3);
  Vector2::Vector2((Vector2 *)&local_50,(Vector3 *)&local_60);
  if ((DAT_00683488 < ABS(local_50 - *(float *)(this_01 + 0x70))) ||
     (DAT_00683488 < ABS(local_4c - *(float *)(this_01 + 0x74)))) {
    *(float *)(this_01 + 0x70) = local_50;
    *(float *)(this_01 + 0x74) = local_4c;
    if (this_01[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_01);
      this_01[0xb4] = (SceneObject)0x1;
    }
  }
  *(float *)(this_01 + 0x78) = local_58;
  FUN_0066a6a8(this + 0x70,param_1);
  fVar7 = (float)DAT_00684378;
  uVar3 = (ulong)DAT_00684378 >> 0x20;
  *(undefined2 *)(this + 0x80) = 0x101;
  this[0xb0] = (OverlayTextComponent)0x1;
  *(ulong *)(this + 0xb8) = CONCAT44((float)uVar3 * param_4,fVar7 * param_4);
  *(undefined4 *)(this + 0xb4) = 0;
  this_00 = operator_new(0xc0);
  TransformControllerComponent::TransformControllerComponent(this_00);
  SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_00);
  local_58 = 0.0;
  local_60 = DAT_00684380;
  TransformControllerComponent::TranslateBy(this_00,(Vector3 *)&local_60,param_4);
  local_60 = *(long **)(this + 0x28);
  plVar4 = *(long **)(*(long *)param_2 + 0x20);
  pcVar6 = *(code **)(*plVar4 + 0x28);
  if (local_60 != (long *)0x0) {
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
  }
  (*pcVar6)(plVar4,&local_60);
  if ((local_60 != (long *)0x0) &&
     (iVar1 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_60 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


