/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d173c
 * Function: Caver::AudioPlayerImpl::InitWithFile
 * Signature: undefined __thiscall InitWithFile(AudioPlayerImpl * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioPlayerImpl::InitWithFile(std::string const&) */

undefined8 __thiscall Caver::AudioPlayerImpl::InitWithFile(AudioPlayerImpl *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *extraout_x1;
  int *piVar5;
  int iVar6;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  LastPathComponent((Caver *)param_1,param_1);
  StringByRemovingPathExtension((Caver *)&local_40,extraout_x1);
  MusicPlayerJNI::LoadFile((string *)local_38);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_38[0] + -8);
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
                    /* try { // try from 005d17e0 to 006d17eb has its CatchHandler @ 005d34e0 */
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* try { // try from 005d1790 to 006d1797 has its CatchHandler @ 005d2a90 */
  if ((undefined *)(local_40 + -0x18) != puVar4) {
                    /* try { // try from 005d17ec to 006d17f3 has its CatchHandler @ 005d2a8c */
    piVar5 = (int *)(local_40 + -8);
                    /* try { // try from 005d17f4 to 006d1863 has its CatchHandler @ 005d34e0 */
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
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005d17b8 to 006d17df has its CatchHandler @ 005d28e8 */
  return 1;
}


