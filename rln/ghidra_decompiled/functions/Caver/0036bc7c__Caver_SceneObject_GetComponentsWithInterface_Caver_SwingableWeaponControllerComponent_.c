/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036bc7c
 * Function: Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>
 * Signature: void __thiscall GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(SceneObject * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,
   std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> > >*) */

void __thiscall
Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>
          (SceneObject *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long *local_50;
  long local_48;
  
  puVar6 = PTR_Interface_007e48a0;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar3 = *(undefined8 **)(this + 200);
  for (puVar1 = *(undefined8 **)(this + 0xc0); puVar1 != puVar3; puVar1 = puVar1 + 1) {
    plVar8 = (long *)*puVar1;
    if (plVar8 != (long *)0x0) {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    }
    uVar7 = (**(code **)(*plVar8 + 0xa0))(plVar8,puVar6);
    if ((uVar7 & 1) != 0) {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      puVar2 = *(undefined8 **)(param_1 + 8);
      local_50 = plVar8;
      if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
        std::
        vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>
        ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>
                         *)param_1,puVar2,&local_50);
      }
      else {
        *puVar2 = plVar8;
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        *(undefined8 **)(param_1 + 8) = puVar2 + 1;
      }
      if ((local_50 != (long *)0x0) &&
         (iVar4 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar4, iVar4 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
    }
    iVar4 = (int)plVar8[1] + -1;
    *(int *)(plVar8 + 1) = iVar4;
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


