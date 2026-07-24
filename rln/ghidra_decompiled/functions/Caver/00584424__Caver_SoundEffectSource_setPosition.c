/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00584424
 * Function: Caver::SoundEffectSource::setPosition
 * Signature: undefined __thiscall setPosition(SoundEffectSource * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::setPosition(Caver::Vector3 const&) */

void __thiscall Caver::SoundEffectSource::setPosition(SoundEffectSource *this,Vector3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00584428 to 0068443b has its CatchHandler @ 005847d8 */
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 0058443c to 006844d3 has its CatchHandler @ 00584358 */
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x38) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x3c) = uVar2;
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x40) = uVar3;
  alSource3f(uVar1,uVar2,uVar3,*(undefined4 *)(this + 0x30),0x1004);
  FUN_00666bb8(local_38,0x696852,auStack_40);
  alGetError();
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005844e8 to 00684587 has its CatchHandler @ 00584358 */
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 005844d4 to 006844e7 has its CatchHandler @ 00584788 */
        iVar8 = *piVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


