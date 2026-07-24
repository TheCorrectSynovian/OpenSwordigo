/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445f34
 * Function: Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements
 * Signature: undefined __cdecl SettingsViewDidShowOfflineAchievements(SettingsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView*) */

void Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(SettingsView *param_1)

{
  undefined8 uVar1;
  long lVar2;
  OfflineAchievementsViewController *this;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 00445f34 to 00545f47 has its CatchHandler @ 00445f00 */
                    /* catch() { ... } // from try @ 00445f30 with catch @ 00445f44 */
                    /* catch() { ... } // from try @ 00445f7c with catch @ 00445f48 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x68);
  OfflineAchievementsViewController::OfflineAchievementsViewController(this);
  boost::shared_ptr<Caver::OfflineAchievementsViewController>::
  shared_ptr<Caver::OfflineAchievementsViewController>
            ((shared_ptr<Caver::OfflineAchievementsViewController> *)&local_48,this);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
                    /* try { // try from 00445f78 to 00545f7b has its CatchHandler @ 00445f98 */
                    /* try { // try from 00445f7c to 00545f9b has its CatchHandler @ 00445f48 */
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(local_48 + 0x50);
  *(undefined8 *)(local_48 + 0x48) = uVar1;
  *(long *)(local_48 + 0x50) = lVar3;
                    /* catch() { ... } // from try @ 00445f78 with catch @ 00445f98 */
                    /* catch() { ... } // from try @ 00445fd0 with catch @ 00445f9c */
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00445fcc to 00545fcf has its CatchHandler @ 00445fe8 */
                    /* try { // try from 00445fd0 to 00545feb has its CatchHandler @ 00445f9c */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  pcVar4 = *(code **)(*(long *)param_1 + 0x50);
  local_58 = local_48;
  local_50 = local_40;
                    /* catch() { ... } // from try @ 00445fcc with catch @ 00445fe8 */
  if (local_40 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00446020 with catch @ 00445fec */
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar4)(param_1,&local_58);
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) && (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* try { // try from 0044601c to 0054601f has its CatchHandler @ 00446030 */
                    /* try { // try from 00446020 to 00546033 has its CatchHandler @ 00445fec */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar3 = plVar5[2];
                    /* catch() { ... } // from try @ 0044601c with catch @ 00446030 */
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


