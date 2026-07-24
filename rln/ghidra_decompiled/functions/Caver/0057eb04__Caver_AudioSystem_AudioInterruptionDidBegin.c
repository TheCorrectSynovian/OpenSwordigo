/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057eb04
 * Function: Caver::AudioSystem::AudioInterruptionDidBegin
 * Signature: undefined __thiscall AudioInterruptionDidBegin(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::AudioInterruptionDidBegin() */

void __thiscall Caver::AudioSystem::AudioInterruptionDidBegin(AudioSystem *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(MusicPlayer **)(this + 0x68) != (MusicPlayer *)0x0) {
    MusicPlayer::SetSuspended(*(MusicPlayer **)(this + 0x68),true);
  }
  if (*(long *)(this + 8) != 0) {
    alcSuspendContext();
    FUN_00666bb8(local_38,"alcSuspendContext",auStack_40);
    alGetError();
    puVar4 = PTR_DAT_007e5de8;
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
    alcMakeContextCurrent(0);
    FUN_00666bb8(local_38,"alcMakeContexCurrent",auStack_40);
    alGetError();
                    /* try { // try from 0057eb98 to 0067eca7 has its CatchHandler @ 0057ea40 */
    if ((undefined *)(local_38[0] + -0x18) != puVar4) {
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
  }
  SetAudioSessionActive(false);
  alcSuspend();
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


