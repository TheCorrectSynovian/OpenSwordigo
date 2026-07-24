/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046a298
 * Function: Caver::HeroEquipmentManager::ApplyLevelUp
 * Signature: undefined __thiscall ApplyLevelUp(HeroEquipmentManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ApplyLevelUp() */

void __thiscall Caver::HeroEquipmentManager::ApplyLevelUp(HeroEquipmentManager *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_Interface_007e6cd0;
  puVar2 = *(undefined8 **)(this + 0x20);
  for (puVar1 = *(undefined8 **)(this + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    lVar5 = SceneObject::ComponentWithInterface((SceneObject *)*puVar1,(long)puVar3);
    if ((lVar5 != 0) && (*(long *)this != 0)) {
      uVar6 = CharacterState::WeaponDamageRange((CharacterState *)(*(long *)this + 0x10));
      iVar4 = (int)uVar6;
      *(int *)(lVar5 + 0xa4) = iVar4;
      *(int *)(lVar5 + 0xa8) = (int)((ulong)uVar6 >> 0x20) - iVar4;
      *(int *)(lVar5 + 0xac) = iVar4;
      *(int *)(lVar5 + 0xb0) = iVar4;
    }
  }
  return;
}


