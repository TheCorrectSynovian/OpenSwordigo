/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00584ac4
 * Function: Caver::SoundEffectSource::Rewind
 * Signature: undefined __thiscall Rewind(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::Rewind() */

void __thiscall Caver::SoundEffectSource::Rewind(SoundEffectSource *this)

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
                    /* try { // try from 00584adc to 00684b03 has its CatchHandler @ 00584b6c */
  *(undefined4 *)(this + 0x48) = 0;
  alSourceRewind(*(undefined4 *)(this + 0x30));
  FUN_00666bb8(local_38,&DAT_0069681f,auStack_40);
  alGetError();
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
                    /* try { // try from 00584b4c to 00684bc7 has its CatchHandler @ 00584904 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00584b24 with catch @ 00584b64 */
      iVar5 = *piVar4;
                    /* catch() { ... } // from try @ 00584adc with catch @ 00584b6c */
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
                    /* catch() { ... } // from try @ 00584a94 with catch @ 00584b7c */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* try { // try from 00584b24 to 00684b4b has its CatchHandler @ 00584b64 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


