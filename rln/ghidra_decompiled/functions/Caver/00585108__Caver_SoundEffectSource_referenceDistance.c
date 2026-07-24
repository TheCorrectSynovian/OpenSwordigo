/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585108
 * Function: Caver::SoundEffectSource::referenceDistance
 * Signature: undefined __thiscall referenceDistance(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::referenceDistance() const */

void __thiscall Caver::SoundEffectSource::referenceDistance(SoundEffectSource *this)

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
  
                    /* try { // try from 00585118 to 0068511b has its CatchHandler @ 00585178 */
  lVar3 = tpidr_el0;
                    /* try { // try from 0058511c to 00685197 has its CatchHandler @ 005850ac */
  local_28 = *(long *)(lVar3 + 0x28);
  alGetSourcef(*(undefined4 *)(this + 0x30),0x1020,local_34);
  FUN_00666bb8(&local_40,"alGetSourcef",auStack_48);
  alGetError();
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
                    /* try { // try from 00585198 to 006851bf has its CatchHandler @ 005851c8 */
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
                    /* try { // try from 005851c0 to 006851cb has its CatchHandler @ 005850ac */
      operator_delete((undefined *)(local_40 + -0x18));
                    /* catch() { ... } // from try @ 00585198 with catch @ 005851c8 */
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00585320 with catch @ 005851cc
                       catch(type#1 @ 00000000) { ... } // from try @ 0058559c with catch @ 005851cc
                        */
    __stack_chk_fail(local_34[0]);
  }
                    /* catch() { ... } // from try @ 00585118 with catch @ 00585178 */
  return;
}


