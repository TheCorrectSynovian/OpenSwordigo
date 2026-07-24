/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044a9d4
 * Function: Caver::GameSceneController::ApplyTrinketToItemType
 * Signature: undefined __thiscall ApplyTrinketToItemType(GameSceneController * this, ItemType param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::ApplyTrinketToItemType(Caver::ItemType,
   boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::GameSceneController::ApplyTrinketToItemType
          (GameSceneController *this,int param_2,shared_ptr *param_3)

{
                    /* try { // try from 0044a9d4 to 0054a9e7 has its CatchHandler @ 0044d6fc */
  if (param_2 == 2) {
    HeroEquipmentManager::ApplyArmorTrinket((HeroEquipmentManager *)(this + 0x100),param_3);
    return;
  }
  if (param_2 == 1) {
    HeroEquipmentManager::ApplyWeaponTrinket((HeroEquipmentManager *)(this + 0x100),param_3);
    return;
  }
  return;
}


