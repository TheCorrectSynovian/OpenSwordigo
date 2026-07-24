/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00584e8c
 * Function: Caver::SoundEffectSource::isLooping
 * Signature: undefined __thiscall isLooping(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::isLooping() const */

void __thiscall Caver::SoundEffectSource::isLooping(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_48 [8];
  long local_40;
  int local_34 [3];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00584ea8 to 00684eb3 has its CatchHandler @ 00584ec0 */
  alGetSourcei(*(undefined4 *)(this + 0x30),0x1007,local_34);
                    /* catch() { ... } // from try @ 00584ea8 with catch @ 00584ec0 */
  FUN_00666bb8(&local_40,0x69682e,auStack_48);
  alGetError();
                    /* try { // try from 00584ee4 to 00684f0b has its CatchHandler @ 00584f14 */
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00584ee4 with catch @ 00584f14 */
                    /* catch() { ... } // from try @ 00584e74 with catch @ 00584f18 */
    piVar4 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00584f38 to 00684f3b has its CatchHandler @ 00584f40 */
      iVar5 = *piVar4;
                    /* catch() { ... } // from try @ 00584f38 with catch @ 00584f40 */
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
                    /* try { // try from 00584f28 to 00684f33 has its CatchHandler @ 00584f34 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_34[0] != 0);
  }
                    /* try { // try from 00584f0c to 00684f27 has its CatchHandler @ 00584e5c */
  return;
}


