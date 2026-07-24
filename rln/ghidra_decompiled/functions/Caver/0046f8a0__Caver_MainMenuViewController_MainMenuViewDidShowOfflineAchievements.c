/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046f8a0
 * Function: Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements
 * Signature: undefined __cdecl MainMenuViewDidShowOfflineAchievements(MainMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView*) */

void Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(MainMenuView *param_1)

{
  long lVar1;
  long *plVar2;
  OfflineAchievementsViewController *this;
  code *pcVar3;
  long lVar4;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x68);
  OfflineAchievementsViewController::OfflineAchievementsViewController(this);
  boost::shared_ptr<Caver::OfflineAchievementsViewController>::
  shared_ptr<Caver::OfflineAchievementsViewController>
            ((shared_ptr<Caver::OfflineAchievementsViewController> *)&local_48,this);
  pcVar3 = *(code **)(*(long *)param_1 + 0x50);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar3)(param_1,&local_58);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = plVar2[2];
    plVar2[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


