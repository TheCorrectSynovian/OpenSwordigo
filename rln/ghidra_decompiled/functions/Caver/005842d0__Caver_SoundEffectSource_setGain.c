/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005842d0
 * Function: Caver::SoundEffectSource::setGain
 * Signature: undefined __thiscall setGain(SoundEffectSource * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::setGain(float) */

void __thiscall Caver::SoundEffectSource::setGain(SoundEffectSource *this,float param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  *(float *)(this + 0x34) = param_1;
  if (*(long *)(this + 0x28) == 0) {
    fVar6 = 1.0;
  }
  else {
                    /* catch() { ... } // from try @ 00584118 with catch @ 00584300 */
    fVar6 = *(float *)(*(long *)(this + 0x28) + 0x38);
  }
  alSourcef(fVar6 * param_1,*(undefined4 *)(this + 0x30),0x100a);
  FUN_00666bb8(local_38,&DAT_00696848,auStack_40);
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
                    /* try { // try from 0058434c to 00684357 has its CatchHandler @ 00583dd0 */
                    /* catch() { ... } // from try @ 005841e4 with catch @ 00584354 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00584358 to 006843af has its CatchHandler @ 00584358
                       catch() { ... } // from try @ 00584358 with catch @ 00584358
                       catch() { ... } // from try @ 005843c4 with catch @ 00584358
                       catch() { ... } // from try @ 0058443c with catch @ 00584358
                       catch() { ... } // from try @ 005844e8 with catch @ 00584358
                       catch() { ... } // from try @ 0058459c with catch @ 00584358
                       catch() { ... } // from try @ 005846a4 with catch @ 00584358
                       catch() { ... } // from try @ 005848c4 with catch @ 00584358 */
  return;
}


