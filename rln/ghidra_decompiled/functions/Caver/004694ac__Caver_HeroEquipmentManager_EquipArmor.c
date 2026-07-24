/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004694ac
 * Function: Caver::HeroEquipmentManager::EquipArmor
 * Signature: undefined __thiscall EquipArmor(HeroEquipmentManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::EquipArmor(HeroEquipmentManager *this,shared_ptr *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x10),(long)PTR_Interface_007e7450);
  if (lVar2 != 0) {
    lVar5 = *(long *)this;
    plVar4 = *(long **)(lVar5 + 0x90);
    if (plVar4 != (long *)0x0) {
      plVar4[1] = plVar4[1] + 1;
    }
    uVar6 = CharacterState::ArmorDamageMultiplierWithItem((shared_ptr *)(lVar5 + 0x10),param_1);
    *(undefined4 *)(lVar2 + 0x98) = uVar6;
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


