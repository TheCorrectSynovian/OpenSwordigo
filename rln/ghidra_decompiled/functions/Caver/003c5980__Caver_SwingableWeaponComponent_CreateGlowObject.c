/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5980
 * Function: Caver::SwingableWeaponComponent::CreateGlowObject
 * Signature: undefined __thiscall CreateGlowObject(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::CreateGlowObject() */

void __thiscall Caver::SwingableWeaponComponent::CreateGlowObject(SwingableWeaponComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  SceneObject *this_00;
  WeaponGlowComponent *this_01;
  ObjectLinkControllerComponent *this_02;
  long *plVar5;
  int iVar6;
  string *psVar7;
  float fVar8;
  undefined1 auStack_58 [8];
  long *local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 0x168) == 0) && (*(long *)(*(long *)(this + 0x28) + 0x20) != 0)) {
    psVar7 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
    FUN_00666bb8(&local_50,0x68a106,auStack_58);
    ObjectLibrary::TemplateForName(psVar7,SUB81(&local_50,0));
    puVar4 = PTR_DAT_007e5de8;
    if (local_50 + -3 != (long *)PTR_DAT_007e5de8) {
      plVar5 = local_50 + -1;
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
        operator_delete(local_50 + -3);
      }
    }
    if (local_48[0] != (long *)0x0) {
      this_00 = operator_new(0x128);
      SceneObject::SceneObject(this_00);
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      FUN_00666bb8(&local_50,&DAT_006981db,auStack_58);
      SceneObject::SetIdentifier(this_00,(string *)&local_50);
      if (local_50 + -3 != (long *)puVar4) {
        plVar5 = local_50 + -1;
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
          operator_delete(local_50 + -3);
        }
      }
      this_00[0x18] = (SceneObject)0x0;
      SceneObject::InitWithTemplate(this_00,(intrusive_ptr *)local_48);
      this_01 = (WeaponGlowComponent *)
                SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e7c68);
      if (this_01 != (WeaponGlowComponent *)0x0) {
        *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
      }
      plVar5 = *(long **)(this + 0x168);
      *(WeaponGlowComponent **)(this + 0x168) = this_01;
      if ((plVar5 != (long *)0x0) &&
         (iVar6 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*plVar5 + 8))(plVar5);
        this_01 = *(WeaponGlowComponent **)(this + 0x168);
      }
      fVar8 = *(float *)(this + 0x1bc);
      this_01[0x70] = (WeaponGlowComponent)0x1;
      this_01[0xa0] = (WeaponGlowComponent)0x1;
      *(float *)(this_01 + 0xf4) = fVar8 + 4.0;
      WeaponGlowComponent::SetColor(this_01,(FloatColor *)(this + 0x1a8));
      this_02 = (ObjectLinkControllerComponent *)
                SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6970);
      local_50 = *(long **)(this + 0x28);
      if (local_50 != (long *)0x0) {
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      }
      ObjectLinkControllerComponent::LinkToObject(this_02,(intrusive_ptr *)&local_50);
      if ((local_50 != (long *)0x0) &&
         (iVar6 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
      iVar6 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar6 + -1;
      if (iVar6 + -1 == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
      if ((local_48[0] != (long *)0x0) &&
         (iVar6 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar6, iVar6 == 0)) {
        (**(code **)(*local_48[0] + 8))();
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


