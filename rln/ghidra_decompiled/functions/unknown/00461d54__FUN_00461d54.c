/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00461d54
 * Function: FUN_00461d54
 * Signature: undefined FUN_00461d54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00461d54(lua_State *param_1)

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
  
                    /* try { // try from 00461d54 to 00561d67 has its CatchHandler @ 00462718 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00461d78 to 00561d83 has its CatchHandler @ 004626e0 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
                    /* try { // try from 00461da4 to 00561ddf has its CatchHandler @ 00462684 */
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
                    /* try { // try from 00461e54 to 00561e8f has its CatchHandler @ 004625ec */
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
    fVar8 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
  }
  this_00 = (GUIEffect *)Caver::GameSceneView::overlayEffect(*(GameSceneView **)(lVar4 + 0xd8));
  *(undefined4 *)(this_00 + 0x48) = 0xff000000;
  Caver::GUIEffect::FadeOut(this_00,fVar8);
                    /* try { // try from 00461e00 to 00561e13 has its CatchHandler @ 00462680 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00461e24 to 00561e2f has its CatchHandler @ 00462648 */
  return 0;
}


