/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559d48
 * Function: FUN_00559d48
 * Signature: undefined FUN_00559d48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00559d48(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  ProgramState *this;
  long *plVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long local_58 [2];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"cameraController",auStack_48);
  Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_58[0] + -8);
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
                    /* try { // try from 00559e60 to 00659e6b has its CatchHandler @ 00559334 */
    if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 00559b0c with catch @ 00559e68
                       catch() { ... } // from try @ 00559c0c with catch @ 00559e68
                       catch() { ... } // from try @ 00559c70 with catch @ 00559e68
                       catch() { ... } // from try @ 00559df0 with catch @ 00559e68 */
      operator_delete((undefined *)(local_58[0] + -0x18));
                    /* try { // try from 00559e6c to 00659ed7 has its CatchHandler @ 00559e6c
                       catch() { ... } // from try @ 00559e6c with catch @ 00559e6c
                       catch() { ... } // from try @ 00559f40 with catch @ 00559e6c
                       catch() { ... } // from try @ 00559fb0 with catch @ 00559e6c
                       catch() { ... } // from try @ 00559fd8 with catch @ 00559e6c
                       catch() { ... } // from try @ 0055a060 with catch @ 00559e6c
                       catch() { ... } // from try @ 0055a074 with catch @ 00559e6c
                       catch() { ... } // from try @ 0055a160 with catch @ 00559e6c
                       catch() { ... } // from try @ 0055a4dc with catch @ 00559e6c */
    }
  }
  plVar5 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  bVar4 = 0;
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      bVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 005594c4 with catch @ 00559dcc */
      Caver::Camera::AABBForZRange(*(float *)(lVar8 + 0x78) + -10.0,*(float *)(lVar8 + 0x78) + 10.0)
      ;
      bVar4 = Caver::Rectangle::IntersectsWithRect
                        ((Rectangle *)(lVar8 + 0xa4),(Rectangle *)local_58);
                    /* try { // try from 00559df0 to 00659e5f has its CatchHandler @ 00559e68 */
    }
  }
  Caver::ProgramState::PushBool(this,(bool)(bVar4 & 1));
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


