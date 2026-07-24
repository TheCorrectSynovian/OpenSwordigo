/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468de8
 * Function: Caver::HeroEquipmentManager::EquipWeapon
 * Signature: undefined __thiscall EquipWeapon(HeroEquipmentManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::EquipWeapon(HeroEquipmentManager *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  SceneObject *pSVar13;
  int *piVar14;
  long *plVar15;
  SwingableWeaponControllerComponent *this_00;
  long *plVar16;
  SceneObject *pSVar17;
  long local_80;
  SceneObject *local_78 [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* catch() { ... } // from try @ 00468cfc with catch @ 00468e14 */
  plVar16 = *(long **)(this + 0x20);
  plVar15 = *(long **)(this + 0x18);
  for (plVar2 = plVar15; plVar16 != plVar2; plVar2 = plVar2 + 1) {
    plVar9 = (long *)*plVar2;
    if ((plVar9 != (long *)0x0) &&
       (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  *(long **)(this + 0x20) = plVar15;
  puVar7 = PTR_Interface_007e48a0;
  puVar3 = *(undefined8 **)(*(long *)(this + 0x10) + 200);
  pSVar17 = (SceneObject *)PTR_DAT_007e5de8;
  for (puVar1 = *(undefined8 **)(*(long *)(this + 0x10) + 0xc0); puVar1 != puVar3;
      puVar1 = puVar1 + 1) {
    this_00 = (SwingableWeaponControllerComponent *)*puVar1;
    if (this_00 != (SwingableWeaponControllerComponent *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    uVar10 = (**(code **)(*(long *)this_00 + 0xa0))(this_00,puVar7);
    if ((uVar10 & 1) != 0) {
      FUN_0066a528(&local_80,*(long *)param_1 + 8);
      FUN_0035a030(local_78,"weapon_",&local_80);
      FUN_0066a6a8(this_00 + 0x90,local_78);
      if (local_78[0] + -0x18 != pSVar17) {
        pSVar13 = local_78[0] + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *(int *)pSVar13;
          *(int *)pSVar13 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *(int *)pSVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
            if (bVar5) {
              *(int *)pSVar13 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_78[0] + -0x18);
        }
      }
      if ((SceneObject *)(local_80 + -0x18) != pSVar17) {
        piVar14 = (int *)(local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar14;
          *piVar14 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar5) {
              *piVar14 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((SceneObject *)(local_80 + -0x18));
        }
      }
      SwingableWeaponControllerComponent::CreateWeapon(this_00);
      if (*(long *)(this_00 + 0x98) != 0) {
        local_78[0] = *(SceneObject **)(*(long *)(this_00 + 0x98) + 0x28);
        if (local_78[0] != (SceneObject *)0x0) {
          *(int *)(local_78[0] + 8) = *(int *)(local_78[0] + 8) + 1;
        }
        plVar2 = *(long **)(this + 0x20);
        if (plVar2 == *(long **)(this + 0x28)) {
                    /* try { // try from 00468ff0 to 005690b7 has its CatchHandler @ 00468ff0
                       catch() { ... } // from try @ 00468ff0 with catch @ 00468ff0
                       catch() { ... } // from try @ 0046926c with catch @ 00468ff0
                       catch() { ... } // from try @ 00469390 with catch @ 00468ff0
                       catch() { ... } // from try @ 00469450 with catch @ 00468ff0 */
          std::
          vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
          ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                           *)(this + 0x18),plVar2,local_78);
        }
        else {
          *plVar2 = (long)local_78[0];
          if (local_78[0] != (SceneObject *)0x0) {
            *(int *)(local_78[0] + 8) = *(int *)(local_78[0] + 8) + 1;
          }
          *(long **)(this + 0x20) = plVar2 + 1;
        }
        lVar11 = SceneObject::ComponentWithInterface(local_78[0],(long)PTR_Interface_007e6cd0);
        if ((lVar11 != 0) && (*(long *)this != 0)) {
          uVar12 = CharacterState::WeaponDamageRange((CharacterState *)(*(long *)this + 0x10));
          iVar8 = (int)uVar12;
          *(int *)(lVar11 + 0xa4) = iVar8;
          *(int *)(lVar11 + 0xa8) = (int)((ulong)uVar12 >> 0x20) - iVar8;
          *(int *)(lVar11 + 0xac) = iVar8;
          *(int *)(lVar11 + 0xb0) = iVar8;
        }
        pSVar17 = (SceneObject *)PTR_DAT_007e5de8;
        if ((local_78[0] != (SceneObject *)0x0) &&
           (iVar8 = *(int *)(local_78[0] + 8), *(int *)(local_78[0] + 8) = iVar8 + -1,
           pSVar17 = (SceneObject *)PTR_DAT_007e5de8, iVar8 + -1 == 0)) {
          (**(code **)(*(long *)local_78[0] + 8))();
          pSVar17 = (SceneObject *)PTR_DAT_007e5de8;
        }
      }
    }
    iVar8 = *(int *)(this_00 + 8);
    *(int *)(this_00 + 8) = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 004690b8 to 005690cb has its CatchHandler @ 00469420 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


