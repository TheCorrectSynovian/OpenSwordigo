/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00562dac
 * Function: Caver::Scene::RegisterLibrary
 * Signature: undefined __thiscall RegisterLibrary(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RegisterLibrary() */

void __thiscall Caver::Scene::RegisterLibrary(Scene *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00562c98 with catch @ 00562dd0 */
  FUN_00666bb8(local_48,"scene",auStack_50);
  ProgramTable::SetPointerForKey((ProgramTable *)(this + 0x50),(string *)local_48,this);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00562e6c to 00662e7f has its CatchHandler @ 00563030 */
    piVar5 = (int *)(local_48[0] + -8);
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
                    /* try { // try from 00562e84 to 00662e8f has its CatchHandler @ 00562fc0 */
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00562ebc to 00662ec3 has its CatchHandler @ 00562f88 */
    if (iVar6 < 1) {
                    /* try { // try from 00562ec4 to 00663033 has its CatchHandler @ 00562e44 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  FUN_00666bb8(local_48,"Scene",auStack_50);
  ProgramState::RegisterLibrary
            ((ProgramState *)(this + 0x28),(string *)local_48,(LibFunction *)&PTR_DAT_007d4998);
                    /* catch() { ... } // from try @ 00562c80 with catch @ 00562e40 */
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
                    /* try { // try from 00562e90 to 00662ebb has its CatchHandler @ 00562e44 */
    piVar5 = (int *)(local_48[0] + -8);
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
                    /* try { // try from 00562e44 to 00662e6b has its CatchHandler @ 00562e44
                       catch() { ... } // from try @ 00562e44 with catch @ 00562e44
                       catch() { ... } // from try @ 00562e90 with catch @ 00562e44
                       catch() { ... } // from try @ 00562ec4 with catch @ 00562e44 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


