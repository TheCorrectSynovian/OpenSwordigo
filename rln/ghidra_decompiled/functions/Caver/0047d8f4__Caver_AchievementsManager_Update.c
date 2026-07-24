/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047d8f4
 * Function: Caver::AchievementsManager::Update
 * Signature: undefined __thiscall Update(AchievementsManager * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::Update(float) */

void __thiscall Caver::AchievementsManager::Update(AchievementsManager *this,float param_1)

{
  AchievementsManager *pAVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  AchievementNotificationView *this_00;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0047d908 to 0057d92b has its CatchHandler @ 0047c118 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pAVar1 = this + 0x128;
                    /* catch() { ... } // from try @ 0047d33c with catch @ 0047d928
                       catch() { ... } // from try @ 0047d8e0 with catch @ 0047d928 */
  if ((*(long *)(this + 0x128) != 0) && (*(long *)(*(long *)(this + 0x128) + 0x58) == 0)) {
    plVar7 = *(long **)(this + 0x130);
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x130) = 0;
    if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* try { // try from 0047d9cc to 0057d9cf has its CatchHandler @ 0047da7c */
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  puVar5 = *(undefined8 **)(this + 0xe8);
  if (*(undefined8 **)(this + 0x108) != puVar5) {
    if (*(float *)(this + 0x138) <= 0.0) {
      if (*(long *)pAVar1 == 0) {
        local_68 = *puVar5;
        local_60 = (long *)puVar5[1];
        if (local_60 != (long *)0x0) {
                    /* try { // try from 0047d9f0 to 0057d9f3 has its CatchHandler @ 0047da74 */
                    /* try { // try from 0047d9f8 to 0057d9fb has its CatchHandler @ 0047dad0 */
          local_60[1] = local_60[1] + 1;
        }
                    /* try { // try from 0047da00 to 0057da03 has its CatchHandler @ 0047dac8 */
        if (puVar5 == (undefined8 *)(*(long *)(this + 0xf8) + -0x10)) {
                    /* catch() { ... } // from try @ 0047da48 with catch @ 0047da64 */
          plVar7 = (long *)puVar5[1];
                    /* try { // try from 0047da6c to 0057da6f has its CatchHandler @ 0047dac4 */
                    /* catch() { ... } // from try @ 0047d9f0 with catch @ 0047da74 */
          if ((plVar7 != (long *)0x0) &&
             (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0047d9cc with catch @ 0047da7c */
            (**(code **)(*plVar7 + 0x10))(plVar7);
            lVar6 = plVar7[2];
            plVar7[2] = lVar6 + -1;
            if (lVar6 + -1 == 0) {
                    /* try { // try from 0047daa0 to 0057daaf has its CatchHandler @ 0047db60 */
              (**(code **)(*plVar7 + 0x18))(plVar7);
            }
          }
          operator_delete(*(void **)(this + 0xf0));
                    /* catch() { ... } // from try @ 0047da50 with catch @ 0047dab4 */
          lVar6 = *(long *)(this + 0x100);
                    /* try { // try from 0047dab8 to 0057dabf has its CatchHandler @ 0047dac4 */
          *(long *)(this + 0x100) = lVar6 + 8;
          lVar6 = *(long *)(lVar6 + 8);
                    /* catch() { ... } // from try @ 0047da6c with catch @ 0047dac4
                       catch() { ... } // from try @ 0047dab8 with catch @ 0047dac4 */
          *(long *)(this + 0xe8) = lVar6;
          *(long *)(this + 0xf0) = lVar6;
                    /* catch() { ... } // from try @ 0047da00 with catch @ 0047dac8 */
          *(long *)(this + 0xf8) = lVar6 + 0x200;
        }
        else {
          plVar7 = (long *)puVar5[1];
          if ((plVar7 != (long *)0x0) &&
             (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            lVar6 = plVar7[2];
            plVar7[2] = lVar6 + -1;
            if (lVar6 + -1 == 0) {
                    /* try { // try from 0047da48 to 0057da4b has its CatchHandler @ 0047da64 */
                    /* try { // try from 0047da50 to 0057da53 has its CatchHandler @ 0047dab4 */
              (**(code **)(*plVar7 + 0x18))(plVar7);
            }
          }
                    /* try { // try from 0047da54 to 0057da6b has its CatchHandler @ 0047d978 */
          *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 0x10;
        }
                    /* catch() { ... } // from try @ 0047d9f8 with catch @ 0047dad0 */
        plVar7 = (long *)OnlineController::SharedController();
                    /* try { // try from 0047dad8 to 0057dadb has its CatchHandler @ 0047db60 */
        uVar4 = (**(code **)(*plVar7 + 0x18))();
        if ((uVar4 & 1) != 0) {
          this_00 = operator_new(0x180);
          AchievementNotificationView::AchievementNotificationView(this_00);
          boost::shared_ptr<Caver::AchievementNotificationView>::
          shared_ptr<Caver::AchievementNotificationView>
                    ((shared_ptr<Caver::AchievementNotificationView> *)&local_58,this_00);
          uVar2 = *(undefined8 *)(this + 0x128);
          plVar7 = *(long **)(this + 0x130);
          *(undefined8 *)(this + 0x128) = local_58;
          *(long **)(this + 0x130) = local_50;
          local_58 = uVar2;
          local_50 = plVar7;
                    /* try { // try from 0047db20 to 0057db23 has its CatchHandler @ 0047db3c */
                    /* try { // try from 0047db28 to 0057db2b has its CatchHandler @ 0047db4c */
                    /* try { // try from 0047db2c to 0057db33 has its CatchHandler @ 0047db60 */
          if ((plVar7 != (long *)0x0) &&
             (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0047db34 to 0057db43 has its CatchHandler @ 0047d978 */
                    /* catch() { ... } // from try @ 0047db20 with catch @ 0047db3c */
            (**(code **)(*plVar7 + 0x10))(plVar7);
            lVar6 = plVar7[2];
                    /* try { // try from 0047db44 to 0057db57 has its CatchHandler @ 0047db5c */
            plVar7[2] = lVar6 + -1;
                    /* catch() { ... } // from try @ 0047db28 with catch @ 0047db4c */
            if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 0047db44 with catch @ 0047db5c */
              (**(code **)(*plVar7 + 0x18))(plVar7);
            }
          }
                    /* catch() { ... } // from try @ 0047daa0 with catch @ 0047db60
                       catch() { ... } // from try @ 0047dad8 with catch @ 0047db60
                       catch() { ... } // from try @ 0047db2c with catch @ 0047db60 */
          AchievementNotificationView::SetAchievement
                    (*(AchievementNotificationView **)pAVar1,(shared_ptr *)&local_68);
                    /* catch() { ... } // from try @ 0047db80 with catch @ 0047db6c */
          if (*(GUIView **)(this + 200) != (GUIView *)0x0) {
            AchievementNotificationView::PresentInView
                      (*(AchievementNotificationView **)pAVar1,*(GUIView **)(this + 200));
          }
        }
                    /* try { // try from 0047db7c to 0057db7f has its CatchHandler @ 0047db90 */
        plVar7 = local_60;
                    /* try { // try from 0047db80 to 0057dba3 has its CatchHandler @ 0047db6c */
                    /* catch() { ... } // from try @ 0047db7c with catch @ 0047db90 */
        if ((local_60 != (long *)0x0) &&
           (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0)) {
          (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 0047dba4 to 0057dbbf has its CatchHandler @ 0047dba4
                       catch() { ... } // from try @ 0047dba4 with catch @ 0047dba4
                       catch() { ... } // from try @ 0047dbc4 with catch @ 0047dba4 */
          lVar6 = plVar7[2];
          plVar7[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
                    /* try { // try from 0047dbc0 to 0057dbc3 has its CatchHandler @ 0047dc44 */
            (**(code **)(*plVar7 + 0x18))(plVar7);
                    /* try { // try from 0047dbc4 to 0057dc57 has its CatchHandler @ 0047dba4 */
          }
        }
      }
    }
    else {
      *(float *)(this + 0x138) = *(float *)(this + 0x138) - param_1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 0047da54 with catch @ 0047d978
                       catch() { ... } // from try @ 0047db34 with catch @ 0047d978 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


