/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bc740
 * Function: Caver::ProfileStats::ProfileStats
 * Signature: undefined __thiscall ProfileStats(ProfileStats * this, PlayerProfile * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileStats::ProfileStats(Caver::PlayerProfile*) */

void __thiscall Caver::ProfileStats::ProfileStats(ProfileStats *this,PlayerProfile *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  ProfileStats *pPVar7;
  undefined4 uVar8;
  long local_58 [2];
  long local_48;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005bc774 to 006bc77f has its CatchHandler @ 005bcfac */
  pPVar7 = this + 0x10;
  *(undefined **)pPVar7 = PTR_DAT_007e5de8 + 0x18;
  *this = (ProfileStats)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  FUN_0066918c(pPVar7,&DAT_0068fbeb,0);
  if (param_1 != (PlayerProfile *)0x0) {
    *this = (ProfileStats)0x1;
    if (*(GameState **)(param_1 + 0x80) == (GameState *)0x0) {
      uVar8 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      uVar8 = GameState::PercentCompleted(*(GameState **)(param_1 + 0x80));
      *(undefined4 *)(param_1 + 0x3c) = uVar8;
    }
    *(undefined4 *)(this + 4) = uVar8;
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x40);
    FUN_0066a528(local_58,param_1 + 0x20);
    FUN_0066a6a8(pPVar7,local_58);
    if ((undefined *)(local_58[0] + -0x18) != puVar4) {
      piVar5 = (int *)(local_58[0] + -8);
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
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005bc818 to 006bc88f has its CatchHandler @ 005bce54 */
  return;
}


