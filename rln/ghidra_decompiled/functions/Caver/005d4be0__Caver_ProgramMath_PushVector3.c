/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4be0
 * Function: Caver::ProgramMath::PushVector3
 * Signature: undefined __cdecl PushVector3(ProgramState * param_1, Vector3 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramMath::PushVector3(Caver::ProgramState*, Caver::Vector3 const&) */

void Caver::ProgramMath::PushVector3(ProgramState *param_1,Vector3 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005d4c10 to 006d4cb3 has its CatchHandler @ 005d4c10
                       catch() { ... } // from try @ 005d4c10 with catch @ 005d4c10
                       catch() { ... } // from try @ 005d53e0 with catch @ 005d4c10
                       catch() { ... } // from try @ 005d5760 with catch @ 005d4c10 */
  FUN_00666bb8(local_48,"Vector3",auStack_50);
  puVar4 = (undefined8 *)ProgramState::NewUserData(param_1,0xc,(string *)local_48);
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
                    /* try { // try from 005d4cb4 to 006d4cb7 has its CatchHandler @ 005d5714 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  *puVar4 = *(undefined8 *)param_2;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 8);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


