/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058472c
 * Function: Caver::SoundEffectSource::Play
 * Signature: undefined __thiscall Play(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::Play() */

void __thiscall Caver::SoundEffectSource::Play(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* catch() { ... } // from try @ 00584588 with catch @ 00584738 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  alSourcePlay(*(undefined4 *)(this + 0x30));
                    /* try { // try from 0058475c to 006848c3 has its CatchHandler @ 005848cc */
  FUN_00666bb8(local_38,"alSourcePlay",auStack_40);
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
    if (iVar5 < 1) {
                    /* catch() { ... } // from try @ 00584428 with catch @ 005847d8 */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005844d4 with catch @ 00584788 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


