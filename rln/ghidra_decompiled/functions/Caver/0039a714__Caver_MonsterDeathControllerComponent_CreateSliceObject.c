/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039a714
 * Function: Caver::MonsterDeathControllerComponent::CreateSliceObject
 * Signature: undefined __thiscall CreateSliceObject(MonsterDeathControllerComponent * this, shared_ptr * param_1, Vector3 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,
   Caver::Vector3 const&) */

void __thiscall
Caver::MonsterDeathControllerComponent::CreateSliceObject
          (MonsterDeathControllerComponent *this,shared_ptr *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  SceneObject *this_00;
  ModelComponent *this_01;
  ParticleObjectComponent *this_02;
  long *plVar4;
  long lVar5;
  undefined8 local_68;
  long *local_60;
  SceneObject *local_58;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0x128);
  SceneObject::SceneObject(this_00);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  local_68 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  local_60 = (long *)CONCAT44(local_60._4_4_,*(undefined4 *)(*(long *)(this + 0x28) + 0x78));
  local_58 = this_00;
  Vector2::Vector2((Vector2 *)&local_50,(Vector3 *)&local_68);
  if ((DAT_00683488 < ABS(local_50 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(local_4c - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = local_50;
    *(float *)(this_00 + 0x74) = local_4c;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(this_00 + 0x78) = local_60._0_4_;
  (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
            (*(long **)(*(long *)(this + 0x28) + 0x20),&local_58);
  this_01 = operator_new(0x140);
  ModelComponent::ModelComponent(this_01);
  local_68 = *(undefined8 *)param_1;
  local_60 = *(long **)(param_1 + 8);
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  ModelComponent::InitWithModel(this_01,(shared_ptr *)&local_68);
  plVar4 = local_60;
  if ((local_60 != (long *)0x0) && (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  SceneObject::AddComponent(local_58,(Component *)this_01);
  this_02 = operator_new(0x120);
  ParticleObjectComponent::ParticleObjectComponent(this_02);
  SceneObject::AddComponent(local_58,(Component *)this_02);
  if (*(int *)(this_02 + 0x78) != *(int *)(this_01 + 0x20)) {
    plVar4 = *(long **)(this_02 + 0x80);
    *(int *)(this_02 + 0x78) = *(int *)(this_01 + 0x20);
    *(undefined8 *)(this_02 + 0x80) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  Vector2::Vector2((Vector2 *)&local_68,param_2);
  PhysicsObjectState::setVelocity((PhysicsObjectState *)(this_02 + 0x88),(Vector2 *)&local_68);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this_02 + 0x118) = 0x40000000;
  *(undefined4 *)(this_02 + 0x110) = uVar1;
  if ((local_58 != (SceneObject *)0x0) &&
     (iVar2 = *(int *)(local_58 + 8), *(int *)(local_58 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*(long *)local_58 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


