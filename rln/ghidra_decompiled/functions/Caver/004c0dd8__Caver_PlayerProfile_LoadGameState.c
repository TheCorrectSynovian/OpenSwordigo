/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c0dd8
 * Function: Caver::PlayerProfile::LoadGameState
 * Signature: undefined __thiscall LoadGameState(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::LoadGameState() */

uint __thiscall Caver::PlayerProfile::LoadGameState(PlayerProfile *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  LocalFilePath(this);
  uVar4 = LoadFromPath(this,(string *)local_38,true);
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_38[0] + -8);
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
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


