/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5a10
 * Function: Caver::ProgramMath::RegisterRectangleLibrary
 * Signature: undefined __cdecl RegisterRectangleLibrary(ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramMath::RegisterRectangleLibrary(Caver::ProgramState*) */

void Caver::ProgramMath::RegisterRectangleLibrary(ProgramState *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_38,"Rectangle",auStack_40);
                    /* try { // try from 005d5a50 to 006d5a77 has its CatchHandler @ 005d5e50 */
  ProgramState::RegisterClass
            (param_1,(string *)local_38,(LibFunction *)&PTR_DAT_007d8158,
             (LibFunction *)&PTR_s_left_00692570_0xc_007d8178);
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 005d5a98 to 006d5abf has its CatchHandler @ 005d5e40 */
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
  return;
}


