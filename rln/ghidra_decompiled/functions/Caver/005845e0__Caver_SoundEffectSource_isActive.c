/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005845e0
 * Function: Caver::SoundEffectSource::isActive
 * Signature: undefined __thiscall isActive(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::isActive() const */

void __thiscall Caver::SoundEffectSource::isActive(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_48 [8];
  long local_40;
  uint local_34 [3];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  alGetSourcei(*(undefined4 *)(this + 0x30),0x1010,local_34);
  FUN_00666bb8(&local_40,0x69682e,auStack_48);
  alGetError();
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
                    /* try { // try from 005846a4 to 0068475b has its CatchHandler @ 00584358 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((local_34[0] | 1) == 0x1013);
  }
  return;
}


