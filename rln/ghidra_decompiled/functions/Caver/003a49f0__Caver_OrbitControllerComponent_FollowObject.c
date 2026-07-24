/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a49f0
 * Function: Caver::OrbitControllerComponent::FollowObject
 * Signature: undefined __thiscall FollowObject(OrbitControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall
Caver::OrbitControllerComponent::FollowObject(OrbitControllerComponent *this,intrusive_ptr *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  SceneObject *this_00;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)param_1;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x70);
  *(long *)(this + 0x70) = lVar5;
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
    lVar5 = *(long *)(this + 0x70);
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x78);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(lVar5 + 0x70);
  this_00 = *(SceneObject **)(this + 0x28);
  *(undefined4 *)(this + 0x98) = uVar1;
  Vector2::Vector2((Vector2 *)&local_40,(Vector3 *)(this + 0x90));
  if ((DAT_00683488 < ABS(local_40 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(local_3c - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = local_40;
    *(float *)(this_00 + 0x74) = local_3c;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x98);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


