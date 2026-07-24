/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044965c
 * Function: Caver::GameSceneController::AddHeroObjectToScene
 * Signature: undefined __thiscall AddHeroObjectToScene(GameSceneController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::AddHeroObjectToScene() */

void __thiscall Caver::GameSceneController::AddHeroObjectToScene(GameSceneController *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *plStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00449680 to 0054968f has its CatchHandler @ 0044ce68 */
  (**(code **)(**(long **)(this + 0x20) + 0x28))
            (*(long **)(this + 0x20),(intrusive_ptr *)(this + 0xd8));
                    /* try { // try from 004496a4 to 005496b7 has its CatchHandler @ 0044e3c0 */
  HeroEquipmentManager::Init
            ((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)(this + 8),
             (intrusive_ptr *)(this + 0xd8));
  CharacterState::HighestLevelItemOfType(&local_58,*(long *)(this + 8) + 0x10,1);
                    /* try { // try from 004496d4 to 005496e3 has its CatchHandler @ 0044ce60 */
  if ((plStack_50 != (long *)0x0) &&
     (lVar3 = plStack_50[1], plStack_50[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plStack_50 + 0x10))(plStack_50);
    lVar3 = plStack_50[2];
    plStack_50[2] = lVar3 + -1;
                    /* try { // try from 004496f8 to 00549707 has its CatchHandler @ 0044e35c */
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00449774 to 00549783 has its CatchHandler @ 0044ce58 */
      (**(code **)(*plStack_50 + 0x18))(plStack_50);
    }
  }
  if (local_58 != 0) {
    CharacterState::HighestLevelItemOfType(&local_68,*(long *)(this + 8) + 0x10,1);
    EquipItem(this,(shared_ptr *)&local_68);
    plVar2 = local_60;
                    /* try { // try from 00449720 to 0054972f has its CatchHandler @ 0044ce60 */
    if ((local_60 != (long *)0x0) &&
       (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00449744 to 00549757 has its CatchHandler @ 0044e358 */
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  CharacterState::HighestLevelItemOfType(&local_78,*(long *)(this + 8) + 0x10,2);
                    /* try { // try from 00449798 to 005497a7 has its CatchHandler @ 0044e2f4 */
  if ((plStack_70 != (long *)0x0) &&
     (lVar3 = plStack_70[1], plStack_70[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plStack_70 + 0x10))(plStack_70);
    lVar3 = plStack_70[2];
                    /* try { // try from 004497c0 to 005497cf has its CatchHandler @ 0044ce58 */
    plStack_70[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plStack_70 + 0x18))(plStack_70);
    }
  }
  if (local_78 != 0) {
    CharacterState::HighestLevelItemOfType(&local_68,*(long *)(this + 8) + 0x10,2);
                    /* try { // try from 004497e4 to 005497f7 has its CatchHandler @ 0044e2f0 */
    EquipItem(this,(shared_ptr *)&local_68);
    if ((local_60 != (long *)0x0) &&
       (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00449814 to 00549823 has its CatchHandler @ 0044ce50 */
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar3 = local_60[2];
      local_60[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
                    /* try { // try from 00449838 to 00549847 has its CatchHandler @ 0044e28c */
      }
    }
  }
  local_68 = *(undefined8 *)(*(long *)(this + 8) + 0x98);
  local_60 = *(long **)(*(long *)(this + 8) + 0xa0);
  if (local_60 != (long *)0x0) {
                    /* try { // try from 00449860 to 0054986f has its CatchHandler @ 0044ce50 */
    local_60[1] = local_60[1] + 1;
  }
  HeroEquipmentManager::ApplyTrinketToSpells
            ((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)&local_68);
  plVar2 = local_60;
                    /* try { // try from 00449884 to 00549897 has its CatchHandler @ 0044e288 */
  if ((local_60 != (long *)0x0) && (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 004498b4 to 005498c3 has its CatchHandler @ 0044ce48 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004498d8 to 005498e7 has its CatchHandler @ 0044e224 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


