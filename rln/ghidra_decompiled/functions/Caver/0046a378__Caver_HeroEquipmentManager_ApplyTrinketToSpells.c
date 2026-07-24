/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046a378
 * Function: Caver::HeroEquipmentManager::ApplyTrinketToSpells
 * Signature: undefined __thiscall ApplyTrinketToSpells(HeroEquipmentManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::ApplyTrinketToSpells(HeroEquipmentManager *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)this == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = CharacterState::ItemCount((CharacterState *)(*(long *)this + 0x10),param_1);
  }
  lVar6 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x10),(long)PTR_Interface_007e7ab0);
  if (*(long *)param_1 != 0) {
    FUN_0066a528(local_48,*(long *)param_1 + 8);
    iVar5 = FUN_006689e0(local_48,"shadowtrinket");
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    if (iVar5 == 0) {
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x78) = uVar4;
      }
      goto LAB_0046a478;
    }
  }
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x78) = 0;
  }
LAB_0046a478:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


