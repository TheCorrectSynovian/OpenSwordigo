/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044d490
 * Function: Caver::GameSceneController::RegisterTreasureCollection
 * Signature: undefined __thiscall RegisterTreasureCollection(GameSceneController * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject>
   const&) */

void __thiscall
Caver::GameSceneController::RegisterTreasureCollection
          (GameSceneController *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  GameEvent *pGVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_48 [8];
  long local_40;
  long local_38 [2];
  long local_28;
  
                    /* catch() { ... } // from try @ 0044ad28 with catch @ 0044d490 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0044d4ac to 0054d4bb has its CatchHandler @ 0044f4b4 */
                    /* try { // try from 0044d4bc to 0054d513 has its CatchHandler @ 00447cc4 */
  FUN_0035a030(local_38,"chest_",*(long *)param_1 + 0x50);
  uVar4 = StateProperties::HasFlag
                    ((StateProperties *)(*(long *)(this + 0x18) + 0x10),(string *)local_38);
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(this + 0x18);
    *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + 1;
                    /* catch() { ... } // from try @ 0044acd8 with catch @ 0044d4f4 */
    StateProperties::AddFlag((string *)(lVar6 + 0x10));
                    /* catch() { ... } // from try @ 0044ac8c with catch @ 0044d4f8 */
    FUN_00666bb8(&local_40,"treasures",auStack_48);
                    /* try { // try from 0044d514 to 0054d523 has its CatchHandler @ 0044f4b4 */
    pGVar5 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_40,1);
    GameEvent::SendEvent(pGVar5);
                    /* try { // try from 0044d524 to 0054d57b has its CatchHandler @ 00447cc4 */
    if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 0044abb0 with catch @ 0044d5c4 */
                    /* catch() { ... } // from try @ 0044ab64 with catch @ 0044d5c8 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* try { // try from 0044d5e4 to 0054d5f3 has its CatchHandler @ 0044f4b4 */
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
  }
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 0044d57c to 0054d58b has its CatchHandler @ 0044f4b4 */
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0044d5f4 to 0054d64b has its CatchHandler @ 00447cc4 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0044ac3c with catch @ 0044d55c */
                    /* catch() { ... } // from try @ 0044abf0 with catch @ 0044d560 */
  return;
}


