/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c8aec
 * Function: Caver::SwingableWeaponControllerComponent::CreateWeapon
 * Signature: undefined __thiscall CreateWeapon(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::CreateWeapon() */

void __thiscall
Caver::SwingableWeaponControllerComponent::CreateWeapon(SwingableWeaponControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  SceneObject *pSVar4;
  long *plVar5;
  int iVar6;
  long *local_68;
  undefined4 local_60;
  undefined1 auStack_58 [8];
  SceneObject *local_50;
  long *local_48;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)(*(SceneObject **)(this + 0x28) + 0x20) != 0) {
    if (*(long *)(this + 0x98) != 0) {
      SceneObject::RemoveChildObject
                (*(SceneObject **)(this + 0x28),*(SceneObject **)(*(long *)(this + 0x98) + 0x28),
                 true);
      local_68 = (long *)0x0;
      SetWeaponComponent(this,(intrusive_ptr *)&local_68);
    }
    if ((*(long *)(*(long *)(this + 0x90) + -0x18) != 0) &&
       (ObjectLibrary::TemplateForName
                  (*(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0),
                   SUB81(this + 0x90,0)), local_48 != (long *)0x0)) {
      pSVar4 = operator_new(0x128);
      SceneObject::SceneObject(pSVar4);
      pSVar4[0x18] = (SceneObject)0x0;
      *(int *)(pSVar4 + 8) = *(int *)(pSVar4 + 8) + 1;
      local_50 = pSVar4;
      FUN_00666bb8(&local_68,&DAT_006981db,auStack_58);
      SceneObject::SetIdentifier(pSVar4,(string *)&local_68);
      if (local_68 + -3 != (long *)PTR_DAT_007e5de8) {
        plVar5 = local_68 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = (int)*plVar5;
          *(int *)plVar5 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = (int)*plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *(int *)plVar5 = iVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete(local_68 + -3);
        }
      }
      pSVar4 = local_50;
      SceneObject::InitWithTemplate(local_50,(intrusive_ptr *)&local_48);
      plVar5 = (long *)SceneObject::ComponentWithInterface(pSVar4,(long)PTR_Interface_007e7110);
      if (plVar5 != (long *)0x0) {
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      }
      local_68 = plVar5;
      SetWeaponComponent(this,(intrusive_ptr *)&local_68);
      if ((plVar5 != (long *)0x0) &&
         (iVar6 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      pSVar4 = local_50;
      if (*(long *)(this + 0x98) != 0) {
        local_68 = *(long **)(*(long *)(this + 0x28) + 0x70);
        local_60 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
        Vector2::Vector2((Vector2 *)&local_40,(Vector3 *)&local_68);
        if ((DAT_00683488 < ABS(local_40 - *(float *)(pSVar4 + 0x70))) ||
           (DAT_00683488 < ABS(local_3c - *(float *)(pSVar4 + 0x74)))) {
          *(float *)(pSVar4 + 0x70) = local_40;
          *(float *)(pSVar4 + 0x74) = local_3c;
          if (pSVar4[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(pSVar4);
            pSVar4[0xb4] = (SceneObject)0x1;
          }
        }
        *(undefined4 *)(pSVar4 + 0x78) = local_60;
        SceneObject::AddChildObject(*(SceneObject **)(this + 0x28),(intrusive_ptr *)&local_50);
      }
      if ((local_50 != (SceneObject *)0x0) &&
         (iVar6 = *(int *)(local_50 + 8), *(int *)(local_50 + 8) = iVar6 + -1, iVar6 + -1 == 0)) {
        (**(code **)(*(long *)local_50 + 8))();
      }
      if ((local_48 != (long *)0x0) &&
         (iVar6 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*local_48 + 8))();
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


