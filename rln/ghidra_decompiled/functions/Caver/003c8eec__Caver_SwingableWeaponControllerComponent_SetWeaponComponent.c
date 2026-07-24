/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c8eec
 * Function: Caver::SwingableWeaponControllerComponent::SetWeaponComponent
 * Signature: undefined __thiscall SetWeaponComponent(SwingableWeaponControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent>
   const&) */

void __thiscall
Caver::SwingableWeaponControllerComponent::SetWeaponComponent
          (SwingableWeaponControllerComponent *this,intrusive_ptr *param_1)

{
  SwingableWeaponControllerComponent SVar1;
  int iVar2;
  long lVar3;
  SwingableWeaponComponent *this_00;
  SwingableWeaponComponent *this_01;
  long *plVar4;
  SceneObject *this_02;
  SceneObject *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = *(SwingableWeaponComponent **)param_1;
  this_01 = *(SwingableWeaponComponent **)(this + 0x98);
  if (this_00 != this_01) {
    if (this_01 != (SwingableWeaponComponent *)0x0) {
      SwingableWeaponComponent::SetController(this_01,(SwingableWeaponControllerComponent *)0x0);
      SceneObject::RemoveChildObject
                (*(SceneObject **)(this + 0x28),*(SceneObject **)(*(long *)(this + 0x98) + 0x28),
                 true);
      this_00 = *(SwingableWeaponComponent **)param_1;
    }
    if (this_00 != (SwingableWeaponComponent *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0x98);
    *(SwingableWeaponComponent **)(this + 0x98) = this_00;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))(plVar4);
      this_00 = *(SwingableWeaponComponent **)(this + 0x98);
    }
    if (this_00 != (SwingableWeaponComponent *)0x0) {
      SwingableWeaponComponent::SetController(this_00,this);
      local_40 = *(SceneObject **)(*(long *)(this + 0x98) + 0x28);
      SVar1 = this[0xac];
      *(SwingableWeaponControllerComponent *)(local_40 + 0xf4) = SVar1;
      if ((SVar1 == (SwingableWeaponControllerComponent)0x0) && (local_40[0xf0] == (SceneObject)0x0)
         ) {
        SceneObject::Activate(local_40);
        local_40 = *(SceneObject **)(*(long *)(this + 0x98) + 0x28);
      }
      this_02 = *(SceneObject **)(this + 0x28);
      if (local_40 != (SceneObject *)0x0) {
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      }
      SceneObject::AddChildObject(this_02,(intrusive_ptr *)&local_40);
      if ((local_40 != (SceneObject *)0x0) &&
         (iVar2 = *(int *)(local_40 + 8), *(int *)(local_40 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*(long *)local_40 + 8))();
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


