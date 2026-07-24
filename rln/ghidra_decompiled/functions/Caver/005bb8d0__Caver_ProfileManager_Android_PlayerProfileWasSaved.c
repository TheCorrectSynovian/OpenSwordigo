/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb8d0
 * Function: Caver::ProfileManager_Android::PlayerProfileWasSaved
 * Signature: undefined __thiscall PlayerProfileWasSaved(ProfileManager_Android * this, PlayerProfile * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile*, bool) */

void __thiscall
Caver::ProfileManager_Android::PlayerProfileWasSaved
          (ProfileManager_Android *this,PlayerProfile *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  PlayerProfile *this_00;
  ProfileManager_Android *this_01;
  long lVar6;
  int *piVar7;
  int iVar8;
  MessageLite *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  ProfileManager::PlayerProfileWasSaved((ProfileManager *)this,param_1,param_2);
  plVar4 = (long *)OnlineController::SharedController();
  uVar5 = (**(code **)(*plVar4 + 0xf0))();
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 005bb914 to 006bb93b has its CatchHandler @ 005bb9f8 */
    FUN_00666a7c(&local_40,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),&local_50);
    this_00 = operator_new(0xb0);
    Proto::PlayerProfile::PlayerProfile(this_00);
                    /* try { // try from 005bb93c to 006bba97 has its CatchHandler @ 005bb758 */
    boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>
              ((shared_ptr<Caver::Proto::PlayerProfile> *)&local_50,this_00);
    this_01 = (ProfileManager_Android *)
              google::protobuf::MessageLite::ParseFromString(local_50,(string *)&local_40);
    if (((ulong)this_01 & 1) != 0) {
      SaveSnapshot(this_01,param_1,(string *)&local_40);
    }
    if ((local_48 != (long *)0x0) &&
       (lVar6 = local_48[1], local_48[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar6 = local_48[2];
      local_48[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
    if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 005bb914 with catch @ 005bb9f8 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


