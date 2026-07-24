/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044a8e4
 * Function: Caver::GameSceneController::UnequipArmor
 * Signature: undefined __thiscall UnequipArmor(GameSceneController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::UnequipArmor() */

void __thiscall Caver::GameSceneController::UnequipArmor(GameSceneController *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
                    /* try { // try from 0044a8e8 to 0054a8f7 has its CatchHandler @ 0044d768 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (long *)0x0;
  HeroEquipmentManager::EquipArmor((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)&local_38);
  plVar2 = local_30;
                    /* try { // try from 0044a910 to 0054a91f has its CatchHandler @ 0044cd78 */
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* try { // try from 0044a934 to 0054a947 has its CatchHandler @ 0044d764 */
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* try { // try from 0044a964 to 0054a973 has its CatchHandler @ 0044cd70 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


