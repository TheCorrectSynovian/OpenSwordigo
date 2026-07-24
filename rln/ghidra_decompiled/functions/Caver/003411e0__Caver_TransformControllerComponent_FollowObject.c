/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003411e0
 * Function: Caver::TransformControllerComponent::FollowObject
 * Signature: undefined __thiscall FollowObject(TransformControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject>
   const&) */

void __thiscall
Caver::TransformControllerComponent::FollowObject
          (TransformControllerComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  SceneObject *this_00;
  undefined8 local_50;
  undefined4 local_48;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)param_1;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xb8);
  *(long *)(this + 0xb8) = lVar4;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar4 = *(long *)param_1;
  if (lVar4 != 0) {
    local_50 = *(undefined8 *)(lVar4 + 0x70);
    local_48 = *(undefined4 *)(lVar4 + 0x78);
    this_00 = *(SceneObject **)(this + 0x28);
    Vector2::Vector2((Vector2 *)&local_40,(Vector3 *)&local_50);
    if ((DAT_00683488 < ABS(local_40 - *(float *)(this_00 + 0x70))) ||
       (DAT_00683488 < ABS(local_3c - *(float *)(this_00 + 0x74)))) {
      *(float *)(this_00 + 0x70) = local_40;
      *(float *)(this_00 + 0x74) = local_3c;
      if (this_00[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(this_00);
        this_00[0xb4] = (SceneObject)0x1;
      }
    }
    *(undefined4 *)(this_00 + 0x78) = local_48;
    *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = *(undefined8 *)(*(long *)param_1 + 0x68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


