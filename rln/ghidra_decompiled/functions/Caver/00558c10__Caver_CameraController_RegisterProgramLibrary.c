/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558c10
 * Function: Caver::CameraController::RegisterProgramLibrary
 * Signature: undefined __thiscall RegisterProgramLibrary(CameraController * this, ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState*) */

void __thiscall
Caver::CameraController::RegisterProgramLibrary(CameraController *this,ProgramState *param_1)

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
  
                    /* try { // try from 00558c14 to 00658c1f has its CatchHandler @ 005592e0 */
                    /* try { // try from 00558c20 to 00658c27 has its CatchHandler @ 005590fc */
  lVar3 = tpidr_el0;
                    /* try { // try from 00558c28 to 00658caf has its CatchHandler @ 00558a74 */
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_48,"cameraController",auStack_50);
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
  FUN_00666bb8(local_48,"Camera",auStack_50);
  ProgramState::RegisterLibrary
            (param_1,(string *)local_48,(LibFunction *)&PTR_s_ResetFocus_007d4658);
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
                    /* try { // try from 00558cf8 to 00658d7f has its CatchHandler @ 005591c0 */
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
                    /* try { // try from 00558cb0 to 00658cbb has its CatchHandler @ 005592e0 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


