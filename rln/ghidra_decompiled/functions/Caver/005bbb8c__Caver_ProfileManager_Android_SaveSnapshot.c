/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bbb8c
 * Function: Caver::ProfileManager_Android::SaveSnapshot
 * Signature: undefined __thiscall SaveSnapshot(ProfileManager_Android * this, PlayerProfile * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::SaveSnapshot(Caver::PlayerProfile*, std::string const&) */

void __thiscall
Caver::ProfileManager_Android::SaveSnapshot
          (ProfileManager_Android *this,PlayerProfile *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  long local_50;
  long local_48 [2];
  long local_38;
  
                    /* catch() { ... } // from try @ 005bbd80 with catch @ 005bbb9c
                       catch() { ... } // from try @ 005bbf04 with catch @ 005bbb9c */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_0066a528(local_48,param_1 + 0x18);
  FUN_0066a528(&local_50,param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x40);
  if (*(GameState **)(param_1 + 0x80) == (GameState *)0x0) {
    fVar7 = *(float *)(param_1 + 0x3c);
  }
  else {
    fVar7 = (float)GameState::PercentCompleted(*(GameState **)(param_1 + 0x80));
    *(float *)(param_1 + 0x3c) = fVar7;
  }
  AndroidSaveSnapshot((string *)local_48,param_2,(string *)&local_50,(long)(dVar8 * DAT_00697ae8),
                      (long)(fVar7 * DAT_00687978));
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar5 = (int *)(local_48[0] + -8);
                    /* try { // try from 005bbc9c to 006bbd17 has its CatchHandler @ 005bbeb8 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


