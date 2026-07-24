/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047dc80
 * Function: Caver::AchievementsManager::SetAchievementCompleted
 * Signature: undefined __thiscall SetAchievementCompleted(AchievementsManager * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,
   bool) */

void __thiscall
Caver::AchievementsManager::SetAchievementCompleted
          (AchievementsManager *this,shared_ptr *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  AchievementsManager *pAVar7;
  char *pcVar8;
  long *plVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar12;
  undefined *local_80;
  undefined1 auStack_78 [8];
  long local_70 [2];
  long local_60 [2];
  char acStack_4c [4];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(long *)param_1 != 0) {
    FUN_0066a528(local_60);
    pAVar7 = (AchievementsManager *)
             std::
             _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
             ::find((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                     *)(this + 0x90),(string *)local_60);
    puVar6 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0047dd10 with catch @ 0047dce0 */
    if ((undefined *)(local_60[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_60[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 0047decc with catch @ 0047de30 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_60[0] + -0x18));
      }
    }
    if (this + 0x98 == pAVar7) {
                    /* try { // try from 0047dcfc to 0057dd0f has its CatchHandler @ 0047dd34 */
      FUN_0066a528(local_60,*(undefined8 *)param_1);
                    /* try { // try from 0047dd10 to 0057dd37 has its CatchHandler @ 0047dce0 */
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                 (this + 0x90),(string *)local_60);
      if ((undefined *)(local_60[0] + -0x18) != puVar6) {
        piVar10 = (int *)(local_60[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_60[0] + -0x18));
        }
      }
                    /* catch() { ... } // from try @ 0047dcfc with catch @ 0047dd34 */
      *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + *(int *)(*(long *)param_1 + 0x18);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047dd60 with catch @ 0047dd40
                       catch(type#1 @ 00000000) { ... } // from try @ 0047ddc4 with catch @ 0047dd40
                        */
    if ((param_2) && (*(long *)(this + 0x140) < (long)*(int *)(this + 0xc0))) {
                    /* try { // try from 0047dd58 to 0057dd5f has its CatchHandler @ 0047dd90 */
      FUN_00666bb8(local_70,"achievementpoints",auStack_78);
                    /* try { // try from 0047dd60 to 0057ddb7 has its CatchHandler @ 0047dd40 */
      uVar2 = *(uint *)(this + 0xc0);
      uVar1 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      local_80 = puVar6 + 0x18;
      pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar1,acStack_4c);
      puVar12 = puVar6 + 0x18;
      if ((int)uVar2 < 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047dd58 with catch @ 0047dd90
                        */
        pcVar8 = pcVar8 + -1;
        *pcVar8 = '-';
        puVar12 = local_80;
      }
      FUN_00669e1c(&local_80,0,*(undefined8 *)(puVar12 + -0x18),pcVar8,
                   (long)acStack_4c - (long)pcVar8);
      plVar9 = (long *)OnlineController::SharedController();
                    /* try { // try from 0047ddb8 to 0057ddbb has its CatchHandler @ 0047ddbc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047ddb8 with catch @ 0047ddbc
                        */
                    /* try { // try from 0047ddc0 to 0057ddc3 has its CatchHandler @ 0047ddcc */
                    /* try { // try from 0047ddc4 to 0057ddcf has its CatchHandler @ 0047dd40 */
      (**(code **)(*plVar9 + 0xe0))(plVar9,local_70,(long)(int)uVar2,&local_80);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047ddc0 with catch @ 0047ddcc
                        */
      if (local_80 + -0x18 != puVar6) {
        piVar10 = (int *)(local_80 + -8);
                    /* try { // try from 0047de9c to 0057de9f has its CatchHandler @ 0047dec0 */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete(local_80 + -0x18);
        }
      }
      if ((undefined *)(local_70[0] + -0x18) != puVar6) {
        piVar10 = (int *)(local_70[0] + -8);
                    /* catch() { ... } // from try @ 0047de9c with catch @ 0047dec0 */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
                    /* try { // try from 0047dec4 to 0057decb has its CatchHandler @ 0047ded4 */
            iVar11 = *piVar10;
                    /* try { // try from 0047decc to 0057ded7 has its CatchHandler @ 0047de30 */
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_70[0] + -0x18));
        }
      }
      *(long *)(this + 0x140) = (long)*(int *)(this + 0xc0);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


