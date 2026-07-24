/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058498c
 * Function: Caver::SoundEffectSource::Stop
 * Signature: undefined __thiscall Stop(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::Stop() */

void __thiscall Caver::SoundEffectSource::Stop(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00584994 to 006849bb has its CatchHandler @ 00584b9c */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0x48) = 0;
  alSourceStop(*(undefined4 *)(this + 0x30));
  FUN_00666bb8(local_38,"alSourceStop",auStack_40);
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
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* try { // try from 005849e8 to 00684a0f has its CatchHandler @ 00584c88 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00584a4c to 00684a73 has its CatchHandler @ 00584b8c */
    __stack_chk_fail();
  }
  return;
}


