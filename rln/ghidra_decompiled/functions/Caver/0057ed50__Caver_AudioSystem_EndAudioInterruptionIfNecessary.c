/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ed50
 * Function: Caver::AudioSystem::EndAudioInterruptionIfNecessary
 * Signature: undefined __thiscall EndAudioInterruptionIfNecessary(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::EndAudioInterruptionIfNecessary() */

void __thiscall Caver::AudioSystem::EndAudioInterruptionIfNecessary(AudioSystem *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  MusicPlayer *this_00;
  int *piVar5;
  int iVar6;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 0057ee7c with catch @ 0057ed68 */
  local_38 = *(long *)(lVar3 + 0x28);
  if (this[0x80] == (AudioSystem)0x0) goto LAB_0057ee04;
  this[0x80] = (AudioSystem)0x0;
  SetAudioSessionActive(true);
  if (*(long *)(this + 8) == 0) {
LAB_0057edf4:
    this_00 = *(MusicPlayer **)(this + 0x68);
  }
  else {
    alcMakeContextCurrent();
                    /* try { // try from 0057ed9c to 0067edaf has its CatchHandler @ 0057eec8 */
    FUN_00666bb8(local_48,"alcMakeContexCurrent",auStack_50);
    alGetError();
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_48[0] + -8);
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
                    /* try { // try from 0057ee7c to 0067ef1b has its CatchHandler @ 0057ed68 */
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
                    /* try { // try from 0057edc8 to 0067edcf has its CatchHandler @ 0057eee8 */
    alcProcessContext(*(undefined8 *)(this + 8));
    FUN_00666bb8(local_48,"alcProcessContext",auStack_50);
    alGetError();
                    /* try { // try from 0057ede8 to 0067ee0f has its CatchHandler @ 0057eeec */
    if ((undefined *)(local_48[0] + -0x18) == puVar4) goto LAB_0057edf4;
                    /* try { // try from 0057ee54 to 0067ee7b has its CatchHandler @ 0057eecc */
    piVar5 = (int *)(local_48[0] + -8);
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
    if (0 < iVar6) goto LAB_0057edf4;
    operator_delete((undefined *)(local_48[0] + -0x18));
    this_00 = *(MusicPlayer **)(this + 0x68);
  }
  if (this_00 != (MusicPlayer *)0x0) {
    MusicPlayer::SetSuspended(this_00,false);
  }
LAB_0057ee04:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


