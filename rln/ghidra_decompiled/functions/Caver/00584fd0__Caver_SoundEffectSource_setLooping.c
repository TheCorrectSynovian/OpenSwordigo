/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00584fd0
 * Function: Caver::SoundEffectSource::setLooping
 * Signature: undefined __thiscall setLooping(SoundEffectSource * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::setLooping(bool) */

void __thiscall Caver::SoundEffectSource::setLooping(SoundEffectSource *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00584fd4 to 00684fd7 has its CatchHandler @ 00585034 */
                    /* try { // try from 00584fd8 to 00685053 has its CatchHandler @ 00584f68 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  alSourcei(*(undefined4 *)(this + 0x30),0x1007,param_1);
  FUN_00666bb8(local_38,"alSourcei",auStack_40);
  alGetError();
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00585054 to 0068507b has its CatchHandler @ 00585084 */
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
                    /* try { // try from 0058507c to 00685087 has its CatchHandler @ 00584f68 */
    if (iVar5 < 1) {
                    /* catch() { ... } // from try @ 00585054 with catch @ 00585084 */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00584fd4 with catch @ 00585034 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


