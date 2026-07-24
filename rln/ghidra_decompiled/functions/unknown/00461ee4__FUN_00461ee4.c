/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00461ee4
 * Function: FUN_00461ee4
 * Signature: undefined FUN_00461ee4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00461ee4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long lVar4;
  ulong uVar5;
  GUIEffect *this_00;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00461f00 to 00561f3b has its CatchHandler @ 00462554 */
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  uVar5 = Caver::ProgramState::IsFloatAtStackIndex(this,1);
  if ((uVar5 & 1) == 0) {
    fVar8 = 0.5;
  }
  else {
                    /* try { // try from 00461f5c to 00561f6f has its CatchHandler @ 00462550 */
    fVar8 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
  }
  this_00 = (GUIEffect *)Caver::GameSceneView::overlayEffect(*(GameSceneView **)(lVar4 + 0xd8));
                    /* try { // try from 00461f80 to 00561f8b has its CatchHandler @ 00462518 */
  *(undefined4 *)(this_00 + 0x48) = 0xff000000;
  Caver::GUIEffect::FadeIn(this_00,fVar8);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00461fb4 to 00561fef has its CatchHandler @ 004624bc */
  return 0;
}


