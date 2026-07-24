/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a6e14
 * Function: Caver::ProfileManager::AddProfile
 * Signature: undefined __thiscall AddProfile(ProfileManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&) */

void __thiscall Caver::ProfileManager::AddProfile(ProfileManager *this,shared_ptr *param_1)

{
  map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *this_00;
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 004a6e38 to 005a6ecf has its CatchHandler @ 004a6c2c */
  this_00 = (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
             *)(this + 0x48);
  FUN_0066a528(local_58,*(long *)param_1 + 0x18);
  plVar6 = (long *)std::
                   map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                   ::operator[](this_00,(string *)local_58);
  puVar5 = PTR_DAT_007e5de8;
  lVar10 = *plVar6;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (lVar10 != 0) {
    FUN_0066a528(local_58,*(long *)param_1 + 0x18);
    puVar7 = (undefined8 *)
             std::
             map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
             ::operator[](this_00,(string *)local_58);
    *(undefined8 *)*puVar7 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a6e10 with catch @ 004a6eac
                        */
    if ((undefined *)(local_58[0] + -0x18) != puVar5) {
      piVar8 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
  }
  FUN_0066a528(local_58,*(long *)param_1 + 0x18);
  puVar7 = (undefined8 *)
           std::
           map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
           ::operator[](this_00,(string *)local_58);
                    /* try { // try from 004a6ed0 to 005a6ef7 has its CatchHandler @ 004a6f00 */
  uVar1 = *(undefined8 *)param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
  }
  plVar6 = (long *)puVar7[1];
  *puVar7 = uVar1;
  puVar7[1] = lVar10;
                    /* try { // try from 004a6ef8 to 005a6f03 has its CatchHandler @ 004a6c2c */
  if ((plVar6 != (long *)0x0) && (lVar10 = plVar6[1], plVar6[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a6ed0 with catch @ 004a6f00
                        */
                    /* try { // try from 004a6f04 to 005a7003 has its CatchHandler @ 004a6f04
                       catch() { ... } // from try @ 004a6f04 with catch @ 004a6f04
                       catch() { ... } // from try @ 004a7008 with catch @ 004a6f04
                       catch() { ... } // from try @ 004a7084 with catch @ 004a6f04
                       catch() { ... } // from try @ 004a71f4 with catch @ 004a6f04 */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar10 = plVar6[2];
    plVar6[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  if ((undefined *)(local_58[0] + -0x18) != puVar5) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* try { // try from 004a7004 to 005a7007 has its CatchHandler @ 004a7234 */
                    /* try { // try from 004a7008 to 005a707f has its CatchHandler @ 004a6f04 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  **(undefined8 **)param_1 = this;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


