/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576844
 * Function: Caver::SceneObjectLib::PushSceneObject
 * Signature: undefined __cdecl PushSceneObject(ProgramState * param_1, SceneObject * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState*, Caver::SceneObject*) */

void Caver::SceneObjectLib::PushSceneObject(ProgramState *param_1,SceneObject *param_2)

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
  
                    /* try { // try from 00576848 to 0067685b has its CatchHandler @ 0057c394 */
  lVar3 = tpidr_el0;
                    /* try { // try from 0057685c to 0067687b has its CatchHandler @ 0057c38c */
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_2 != (SceneObject *)0x0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
                    /* try { // try from 00576884 to 00676897 has its CatchHandler @ 0057c384 */
  FUN_00666bb8(local_48,"SceneObject",auStack_50);
                    /* try { // try from 00576898 to 006768ab has its CatchHandler @ 0057c37c */
  puVar4 = (undefined8 *)ProgramState::NewUserData(param_1,8,(string *)local_48);
  *puVar4 = param_2;
                    /* try { // try from 005768ac to 006768bf has its CatchHandler @ 0057c374 */
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
                    /* try { // try from 005768fc to 0067690f has its CatchHandler @ 0057c35c */
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00576910 to 00676923 has its CatchHandler @ 0057c354 */
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
                    /* try { // try from 005768c0 to 006768d3 has its CatchHandler @ 0057c36c */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00576924 to 00676937 has its CatchHandler @ 0057c34c */
    __stack_chk_fail();
  }
                    /* try { // try from 005768d4 to 006768f3 has its CatchHandler @ 0057c364 */
  return;
}


