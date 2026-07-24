/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578178
 * Function: Java_com_touchfoo_swordigo_Native_setupApplication
 * Signature: undefined Java_com_touchfoo_swordigo_Native_setupApplication(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_setupApplication(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  AudioSystem *this;
  FWKeyboard *this_00;
  FWMouse *this_01;
  OnlineController_Android *this_02;
  ProfileManager_Android *pPVar10;
  StoreController_Android *this_03;
  FWShell *this_04;
  RenderingContext *pRVar11;
  long lVar12;
  int iVar13;
  undefined1 auStack_58 [8];
  RenderingContext *local_50;
  long *local_48 [2];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (DAT_007e9c78 == '\x01') {
    DAT_007e9c79 = 0;
    DAT_007e9c7a = 0;
    uVar9 = Caver::AudioSystem::hasSharedSystem();
    if ((uVar9 & 1) != 0) {
      this = (AudioSystem *)Caver::AudioSystem::sharedSystem();
      Caver::AudioSystem::Shutdown(this);
    }
    Caver::FontLibrary::SetSharedLibrary((FontLibrary *)0x0);
    Caver::ModelLibrary::SetSharedLibrary((ModelLibrary *)0x0);
    Caver::TextureLibrary::SetSharedLibrary((TextureLibrary *)0x0);
    Caver::AudioSystem::SetSharedSystem((AudioSystem *)0x0);
    Caver::SoundLibrary::SetSharedLibrary((SoundLibrary *)0x0);
    this_00 = (FWKeyboard *)Caver::FWKeyboard::sharedKeyboard();
    Caver::FWKeyboard::RemoveAllListeners(this_00);
    this_01 = (FWMouse *)Caver::FWMouse::sharedMouse();
    Caver::FWMouse::RemoveAllListeners(this_01);
    this_02 = operator_new(0x30);
    Caver::OnlineController_Android::OnlineController_Android(this_02);
    boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>
              ((shared_ptr<Caver::OnlineController_Android> *)&local_50,this_02);
    plVar8 = local_48[0];
    pRVar11 = local_50;
    plVar7 = DAT_007e9c38;
    local_50 = DAT_007e9c30;
    local_48[0] = DAT_007e9c38;
    DAT_007e9c30 = pRVar11;
    DAT_007e9c38 = plVar8;
    if ((plVar7 != (long *)0x0) && (lVar12 = plVar7[1], plVar7[1] = lVar12 + -1, lVar12 + -1 == 0))
    {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    local_50 = DAT_007e9c30;
    local_48[0] = DAT_007e9c38;
    if (DAT_007e9c38 != (long *)0x0) {
      DAT_007e9c38[1] = DAT_007e9c38[1] + 1;
    }
    Caver::OnlineController::SetSharedController((shared_ptr *)&local_50);
    plVar7 = local_48[0];
    if ((local_48[0] != (long *)0x0) &&
       (lVar12 = local_48[0][1], local_48[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_48[0] + 0x10))(local_48[0]);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    pPVar10 = operator_new(0xa8);
    Caver::ProfileManager_Android::ProfileManager_Android(pPVar10);
    local_50 = (RenderingContext *)pPVar10;
    boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>
              ((shared_count *)local_48,pPVar10);
    boost::detail::sp_enable_shared_from_this(&local_50,pPVar10,pPVar10);
    plVar8 = local_48[0];
    pRVar11 = local_50;
    plVar7 = DAT_007e9c48;
    local_50 = (RenderingContext *)DAT_007e9c40;
    local_48[0] = DAT_007e9c48;
    DAT_007e9c40 = (ProfileManager_Android *)pRVar11;
    DAT_007e9c48 = plVar8;
    if ((plVar7 != (long *)0x0) && (lVar12 = plVar7[1], plVar7[1] = lVar12 + -1, lVar12 + -1 == 0))
    {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    local_50 = (RenderingContext *)DAT_007e9c40;
    local_48[0] = DAT_007e9c48;
    if (DAT_007e9c48 != (long *)0x0) {
      DAT_007e9c48[1] = DAT_007e9c48[1] + 1;
    }
    Caver::ProfileManager::SetSharedManager((shared_ptr *)&local_50);
    plVar7 = local_48[0];
    if ((local_48[0] != (long *)0x0) &&
       (lVar12 = local_48[0][1], local_48[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_48[0] + 0x10))(local_48[0]);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    this_03 = operator_new(0xa8);
    Caver::StoreController_Android::StoreController_Android(this_03);
    boost::shared_ptr<Caver::StoreController_Android>::shared_ptr<Caver::StoreController_Android>
              ((shared_ptr<Caver::StoreController_Android> *)&local_50,this_03);
    plVar8 = local_48[0];
    pRVar11 = local_50;
    plVar7 = DAT_007e9c58;
    local_50 = (RenderingContext *)DAT_007e9c50;
    local_48[0] = DAT_007e9c58;
    DAT_007e9c50 = (ProfileManager_Android *)pRVar11;
    DAT_007e9c58 = plVar8;
    if ((plVar7 != (long *)0x0) && (lVar12 = plVar7[1], plVar7[1] = lVar12 + -1, lVar12 + -1 == 0))
    {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    local_50 = (RenderingContext *)DAT_007e9c50;
    local_48[0] = DAT_007e9c58;
    if (DAT_007e9c58 != (long *)0x0) {
      DAT_007e9c58[1] = DAT_007e9c58[1] + 1;
    }
    Caver::StoreController::SetSharedController((shared_ptr *)&local_50);
    plVar7 = local_48[0];
    if ((local_48[0] != (long *)0x0) &&
       (lVar12 = local_48[0][1], local_48[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_48[0] + 0x10))(local_48[0]);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    this_04 = operator_new(0xb0);
    Caver::FWShell::FWShell(this_04);
    puVar6 = PTR_DAT_007e5de8;
    puVar1 = PTR_vtable_007e76a0 + 0x10;
    puVar2 = PTR_DAT_007e5de8 + 0x18;
    *(undefined8 *)(this_04 + 0x98) = 0;
    *(undefined8 *)(this_04 + 0xa0) = 0;
    *(undefined8 *)(this_04 + 0x88) = 0;
    *(undefined8 *)(this_04 + 0x90) = 0;
    *(undefined **)this_04 = puVar1;
    *(undefined **)(this_04 + 0x80) = puVar2;
    this_04[0xa8] = (FWShell)0x0;
    boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>
              ((shared_ptr<Caver::CaverShell> *)&local_50,(CaverShell *)this_04);
    plVar8 = local_48[0];
    pRVar11 = local_50;
    plVar7 = DAT_007e9c28;
    local_50 = (RenderingContext *)DAT_007e9c20;
    local_48[0] = DAT_007e9c28;
    DAT_007e9c20 = (ProfileManager_Android *)pRVar11;
    DAT_007e9c28 = plVar8;
    if ((plVar7 != (long *)0x0) && (lVar12 = plVar7[1], plVar7[1] = lVar12 + -1, lVar12 + -1 == 0))
    {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    (**(code **)(*(long *)DAT_007e9c20 + 0x30))();
    pPVar10 = DAT_007e9c20;
    FUN_00666bb8(&local_50,"menu",auStack_58);
    FUN_0066a6a8(pPVar10 + 0x80,&local_50);
    if ((ProfileManager_Android *)(local_50 + -0x18) != (ProfileManager_Android *)puVar6) {
      pPVar10 = (ProfileManager_Android *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *(int *)pPVar10;
        *(int *)pPVar10 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *(int *)pPVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar10,0x10);
          if (bVar4) {
            *(int *)pPVar10 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar13 < 1) {
        operator_delete((ProfileManager_Android *)(local_50 + -0x18));
      }
    }
    pRVar11 = operator_new(0x140);
    Caver::RenderingContext::RenderingContext(pRVar11,0);
    local_50 = pRVar11;
    boost::detail::shared_count::shared_count<Caver::RenderingContext>
              ((shared_count *)local_48,pRVar11);
    boost::detail::sp_enable_shared_from_this(&local_50,pRVar11,pRVar11);
    plVar8 = local_48[0];
    pRVar11 = local_50;
    plVar7 = DAT_007e9c18;
    local_50 = DAT_007e9c10;
    local_48[0] = DAT_007e9c18;
    DAT_007e9c10 = pRVar11;
    DAT_007e9c18 = plVar8;
    if ((plVar7 != (long *)0x0) && (lVar12 = plVar7[1], plVar7[1] = lVar12 + -1, lVar12 + -1 == 0))
    {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar12 = plVar7[2];
      plVar7[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    Caver::RenderingContext::SetCurrentContext(DAT_007e9c10);
    Caver::FWShellPreferences::Set((FWShellPreferences *)0x0,DAT_007e9c20 + 0x20,0);
    Caver::FWShellPreferences::Set((FWShellPreferences *)0x3f800000,DAT_007e9c20 + 0x20,1);
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


