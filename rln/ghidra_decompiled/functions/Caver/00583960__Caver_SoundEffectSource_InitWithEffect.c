/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583960
 * Function: Caver::SoundEffectSource::InitWithEffect
 * Signature: undefined __thiscall InitWithEffect(SoundEffectSource * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SoundEffectSource::InitWithEffect(boost::intrusive_ptr<Caver::SoundEffect> const&) */

void __thiscall
Caver::SoundEffectSource::InitWithEffect(SoundEffectSource *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_58 [8];
  long local_50;
  undefined4 local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0058398c to 006839c7 has its CatchHandler @ 00580d28 */
  alGenSources(1,this + 0x30);
                    /* catch() { ... } // from try @ 00582690 with catch @ 00583994
                       catch() { ... } // from try @ 00583884 with catch @ 00583994 */
                    /* catch() { ... } // from try @ 0058381c with catch @ 005839a0 */
  FUN_00666bb8(&local_50,"alGenSources",auStack_58);
  iVar4 = alGetError();
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_50 + -8);
                    /* try { // try from 005839e0 to 006839e7 has its CatchHandler @ 00583a84 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
                    /* try { // try from 00583a14 to 00683a1f has its CatchHandler @ 00583a2c */
  if (iVar4 == 0) {
    SetEffect(this,param_1);
                    /* catch() { ... } // from try @ 00583a14 with catch @ 00583a2c */
    setReferenceDistance(_DAT_006967cc);
    setRolloffFactor(0.0);
    setGain(this,1.0);
                    /* try { // try from 00583a50 to 00683a77 has its CatchHandler @ 00583a80 */
    local_50 = 0;
    local_48 = 0;
    setPosition(this,(Vector3 *)&local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00583a78 to 00683a93 has its CatchHandler @ 005839c8 */
                    /* catch() { ... } // from try @ 00583a50 with catch @ 00583a80 */
                    /* catch() { ... } // from try @ 005839e0 with catch @ 00583a84 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4 == 0);
}


