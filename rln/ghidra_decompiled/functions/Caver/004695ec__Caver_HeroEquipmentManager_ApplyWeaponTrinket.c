/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004695ec
 * Function: Caver::HeroEquipmentManager::ApplyWeaponTrinket
 * Signature: undefined __thiscall ApplyWeaponTrinket(HeroEquipmentManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ApplyWeaponTrinket(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::ApplyWeaponTrinket(HeroEquipmentManager *this,shared_ptr *param_1)

{
  intrusive_ptr *piVar1;
  intrusive_ptr *piVar2;
  
  piVar2 = *(intrusive_ptr **)(this + 0x20);
  for (piVar1 = *(intrusive_ptr **)(this + 0x18); piVar1 != piVar2; piVar1 = piVar1 + 8) {
    ApplyTrinketToWeapon(this,piVar1,param_1);
  }
  return;
}


