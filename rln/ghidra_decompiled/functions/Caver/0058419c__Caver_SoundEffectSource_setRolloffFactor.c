/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058419c
 * Function: Caver::SoundEffectSource::setRolloffFactor
 * Signature: undefined __cdecl setRolloffFactor(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::setRolloffFactor(float) */

void Caver::SoundEffectSource::setRolloffFactor(float param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long in_x0;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00584014 with catch @ 005841c0 */
  alSourcef(*(undefined4 *)(in_x0 + 0x30),0x1021);
  FUN_00666bb8(local_38,&DAT_00696848,auStack_40);
  alGetError();
                    /* try { // try from 005841e4 to 0068434b has its CatchHandler @ 00584354 */
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
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00583f64 with catch @ 00584210 */
  return;
}


