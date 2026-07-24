/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046a318
 * Function: Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell
 * Signature: undefined __thiscall ApplyCharacterStatsToSpell(HeroEquipmentManager * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject*) */

void __thiscall
Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell
          (HeroEquipmentManager *this,SceneObject *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e6cd0);
  if ((lVar2 != 0) && (*(long *)this != 0)) {
    uVar3 = CharacterState::SkillDamageRange((CharacterState *)(*(long *)this + 0x10));
    uVar1 = DAT_006840e0;
    *(int *)(lVar2 + 0xa4) = (int)uVar3;
    *(int *)(lVar2 + 0xa8) = (int)((ulong)uVar3 >> 0x20) - (int)uVar3;
    *(undefined8 *)(lVar2 + 200) = uVar1;
  }
  return;
}


