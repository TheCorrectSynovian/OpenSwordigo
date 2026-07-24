/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00310efc
 * Function: Caver::CaverShell::Update
 * Signature: undefined __thiscall Update(CaverShell * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::Update(float) */

void __thiscall Caver::CaverShell::Update(CaverShell *this,float param_1)

{
  FWShellPreferences *pFVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  AchievementsManager *this_00;
  AudioSystem *this_01;
  GUIView *this_02;
  GUIApplication *this_03;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0xa8] != (CaverShell)0x0) {
    param_1 = 0.0;
  }
  this_00 = (AchievementsManager *)AchievementsManager::sharedManager();
  AchievementsManager::Update(this_00,param_1);
  this_01 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::Update(this_01,param_1);
  lVar5 = *(long *)(this + 0x88);
  pFVar1 = (FWShellPreferences *)(this + 0x20);
  uVar6 = FWShellPreferences::Get(pFVar1,0);
  *(undefined4 *)(lVar5 + 0x200) = uVar6;
  iVar3 = FWShellPreferences::Get(pFVar1,2);
  iVar4 = FWShellPreferences::Get(pFVar1,3);
  this_02 = *(GUIView **)(this + 0x88);
  if ((DAT_00683488 < ABS(*(float *)(this_02 + 0x7c) - (float)iVar3)) ||
     (DAT_00683488 < ABS(*(float *)(this_02 + 0x80) - (float)iVar4))) {
    local_58 = 0;
    local_50 = (float)iVar3;
    fStack_4c = (float)iVar4;
    GUIView::SetFrame(this_02,(Rectangle *)&local_58);
    this_02 = *(GUIView **)(this + 0x88);
  }
  (**(code **)(*(long *)this_02 + 0x48))(param_1);
  this_03 = (GUIApplication *)GUIApplication::sharedApplication();
  GUIApplication::DispatchEvents(this_03);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


