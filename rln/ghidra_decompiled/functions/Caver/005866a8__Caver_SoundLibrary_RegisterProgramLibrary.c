/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005866a8
 * Function: Caver::SoundLibrary::RegisterProgramLibrary
 * Signature: undefined __thiscall RegisterProgramLibrary(SoundLibrary * this, ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState*) */

void __thiscall
Caver::SoundLibrary::RegisterProgramLibrary(SoundLibrary *this,ProgramState *param_1)

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
  FUN_00666bb8(local_48,"soundLibrary",auStack_50);
  ProgramTable::SetPointerForKey((ProgramTable *)(param_1 + 0x28),(string *)local_48,this);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
                    /* try { // try from 0058677c to 00686787 has its CatchHandler @ 005871d8 */
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
                    /* try { // try from 00586714 to 00686753 has its CatchHandler @ 005873bc */
  FUN_00666bb8(local_48,&DAT_0068a59c,auStack_50);
  ProgramState::RegisterLibrary
            (param_1,(string *)local_48,(LibFunction *)&PTR_s_PlayEffect_007d53f8);
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005867d0 to 006867db has its CatchHandler @ 005873bc */
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
                    /* try { // try from 005867a8 to 006867cf has its CatchHandler @ 00587030 */
      } while (cVar1 != '\0');
    }
                    /* try { // try from 005867dc to 006867e3 has its CatchHandler @ 005871d4 */
    if (iVar6 < 1) {
                    /* try { // try from 005867e4 to 0068685f has its CatchHandler @ 005873bc */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


