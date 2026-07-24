/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1574
 * Function: Caver::AudioListener::UpdateOrientation
 * Signature: undefined __thiscall UpdateOrientation(AudioListener * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioListener::UpdateOrientation() */

void __thiscall Caver::AudioListener::UpdateOrientation(AudioListener *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_58 [8];
  long local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uStack_38 = *(undefined8 *)(this + 0x18);
  local_40 = *(undefined8 *)(this + 0x10);
  local_30 = *(undefined4 *)(this + 0x20);
                    /* try { // try from 005d15a4 to 006d15af has its CatchHandler @ 005d2ae8 */
  local_2c = *(undefined4 *)(this + 0x24);
  alListenerfv(0x100f,&local_40);
  FUN_00666bb8(local_50,"alListenerfv",auStack_58);
  alGetError();
                    /* try { // try from 005d15d0 to 006d15f7 has its CatchHandler @ 005d293c */
  if ((undefined *)(local_50[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_50[0] + -8);
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
                    /* try { // try from 005d1634 to 006d165b has its CatchHandler @ 005d28f0 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_50[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


