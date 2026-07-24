/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005769f4
 * Function: Caver::SceneObjectLib::RegisterLibrary
 * Signature: undefined __cdecl RegisterLibrary(ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState*) */

void Caver::SceneObjectLib::RegisterLibrary(ProgramState *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00576a00 to 00676a13 has its CatchHandler @ 0057c304 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00576a14 to 00676a27 has its CatchHandler @ 0057c2fc */
  FUN_00666bb8(local_38,"SceneObject",auStack_40);
                    /* try { // try from 00576a28 to 00676a3b has its CatchHandler @ 0057c2f4 */
                    /* try { // try from 00576a3c to 00676a5b has its CatchHandler @ 0057c2ec */
  ProgramState::RegisterClass
            (param_1,(string *)local_38,(LibFunction *)&DAT_00695fc8,
             (LibFunction *)&PTR_DAT_007d4e78);
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00576aa0 to 00676ab3 has its CatchHandler @ 0057c2cc */
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
                    /* try { // try from 00576a8c to 00676a9f has its CatchHandler @ 0057c2d4 */
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
                    /* try { // try from 00576ab4 to 00676ad3 has its CatchHandler @ 0057c2c4 */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* try { // try from 00576a64 to 00676a77 has its CatchHandler @ 0057c2e4 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00576a78 to 00676a8b has its CatchHandler @ 0057c2dc */
  return;
}


