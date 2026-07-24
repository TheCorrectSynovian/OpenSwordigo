/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058485c
 * Function: Caver::SoundEffectSource::Pause
 * Signature: undefined __thiscall Pause(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::Pause() */

void __thiscall Caver::SoundEffectSource::Pause(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00584690 with catch @ 00584878 */
  alSourcePause(*(undefined4 *)(this + 0x30));
  FUN_00666bb8(local_38,"alSourcePause",auStack_40);
  alGetError();
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 00584b4c with catch @ 00584904
                       catch() { ... } // from try @ 00584dc4 with catch @ 00584904 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005848c4 to 006848cf has its CatchHandler @ 00584358 */
                    /* catch() { ... } // from try @ 0058475c with catch @ 005848cc */
  return;
}


