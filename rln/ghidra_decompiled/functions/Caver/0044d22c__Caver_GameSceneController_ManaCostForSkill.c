/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044d22c
 * Function: Caver::GameSceneController::ManaCostForSkill
 * Signature: undefined __thiscall ManaCostForSkill(GameSceneController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&) */

undefined4 __thiscall
Caver::GameSceneController::ManaCostForSkill(GameSceneController *this,shared_ptr *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
                    /* try { // try from 0044d23c to 0054d24b has its CatchHandler @ 0044f4b4 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0044d24c to 0054d2a3 has its CatchHandler @ 00447cc4 */
  uVar2 = *(undefined4 *)(*(long *)param_1 + 0x18);
  FUN_0066a528(local_58);
  iVar7 = FUN_006689e0(local_58,"dimension");
  puVar6 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0044b080 with catch @ 0044d284 */
                    /* catch() { ... } // from try @ 0044b034 with catch @ 0044d288 */
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0044d2b4 to 0054d30b has its CatchHandler @ 00447cc4 */
    piVar9 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 0044afe4 with catch @ 0044d2ec */
  if (iVar7 == 0) {
                    /* catch() { ... } // from try @ 0044af98 with catch @ 0044d2f0 */
    lVar11 = *(long *)(this + 0x20);
    FUN_00666bb8(local_58,"inAnotherDimension",auStack_60);
                    /* try { // try from 0044d30c to 0054d31b has its CatchHandler @ 0044f4b4 */
    uVar8 = ProgramTable::BoolForKey((ProgramTable *)(lVar11 + 0x50),(string *)local_58);
                    /* try { // try from 0044d31c to 0054d373 has its CatchHandler @ 00447cc4 */
    if ((undefined *)(local_58[0] + -0x18) != puVar6) {
                    /* catch() { ... } // from try @ 0044aefc with catch @ 0044d358 */
      piVar9 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
                    /* try { // try from 0044d384 to 0054d3db has its CatchHandler @ 00447cc4 */
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 0044d374 to 0054d383 has its CatchHandler @ 0044f4b4 */
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    uVar1 = 0;
    if ((uVar8 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
    if (*(long *)(lVar5 + 0x28) != local_48) goto LAB_0044d39c;
  }
  else if (*(long *)(lVar5 + 0x28) != local_48) {
LAB_0044d39c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0044d2a4 to 0054d2b3 has its CatchHandler @ 0044f4b4 */
                    /* catch() { ... } // from try @ 0044af48 with catch @ 0044d354 */
  return uVar2;
}


