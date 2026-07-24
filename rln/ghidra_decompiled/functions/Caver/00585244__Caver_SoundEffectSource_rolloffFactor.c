/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585244
 * Function: Caver::SoundEffectSource::rolloffFactor
 * Signature: undefined __thiscall rolloffFactor(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::rolloffFactor() const */

void __thiscall Caver::SoundEffectSource::rolloffFactor(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_48 [8];
  long local_40;
  undefined4 local_34 [3];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  alGetSourcef(*(undefined4 *)(this + 0x30),0x1021,local_34);
  FUN_00666bb8(&local_40,"alGetSourcef",auStack_48);
  alGetError();
                    /* try { // try from 0058528c to 006852b3 has its CatchHandler @ 00585554 */
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_40 + -8);
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
                    /* try { // try from 005852f8 to 0068531f has its CatchHandler @ 00585548 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_34[0]);
  }
  return;
}


