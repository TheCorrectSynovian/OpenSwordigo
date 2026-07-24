/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1418
 * Function: Caver::AudioListener::setPosition
 * Signature: undefined __thiscall setPosition(AudioListener * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioListener::setPosition(Caver::Vector3 const&) */

void __thiscall Caver::AudioListener::setPosition(AudioListener *this,Vector3 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 005d1418 to 006d147f has its CatchHandler @ 005d34dc */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 4) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
  alListener3f(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               0x1004);
  FUN_00666bb8(local_38,"alListener3f",auStack_40);
  alGetError();
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 005d14ac to 006d14b3 has its CatchHandler @ 005d2b3c */
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
                    /* try { // try from 005d14d4 to 006d14fb has its CatchHandler @ 005d2940 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


