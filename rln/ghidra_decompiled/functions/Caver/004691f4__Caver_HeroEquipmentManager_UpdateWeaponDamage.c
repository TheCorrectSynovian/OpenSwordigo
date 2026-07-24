/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004691f4
 * Function: Caver::HeroEquipmentManager::UpdateWeaponDamage
 * Signature: undefined __thiscall UpdateWeaponDamage(HeroEquipmentManager * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::UpdateWeaponDamage(boost::intrusive_ptr<Caver::SceneObject> const&)
    */

void __thiscall
Caver::HeroEquipmentManager::UpdateWeaponDamage(HeroEquipmentManager *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = SceneObject::ComponentWithInterface(*(SceneObject **)param_1,(long)PTR_Interface_007e6cd0)
  ;
  if ((lVar2 != 0) && (*(long *)this != 0)) {
    uVar3 = CharacterState::WeaponDamageRange((CharacterState *)(*(long *)this + 0x10));
    iVar1 = (int)uVar3;
                    /* try { // try from 00469230 to 00569237 has its CatchHandler @ 00469364 */
    *(int *)(lVar2 + 0xa4) = iVar1;
    *(int *)(lVar2 + 0xa8) = (int)((ulong)uVar3 >> 0x20) - iVar1;
    *(int *)(lVar2 + 0xac) = iVar1;
    *(int *)(lVar2 + 0xb0) = iVar1;
  }
  return;
}


