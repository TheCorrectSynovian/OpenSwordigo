/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559bb8
 * Function: FUN_00559bb8
 * Signature: undefined FUN_00559bb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00559bb8(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  ProgramState *this;
  Vector3 *pVVar5;
  int *piVar6;
  int iVar7;
  Vector2 aVStack_58 [8];
  long local_50 [2];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* catch() { ... } // from try @ 00559714 with catch @ 00559be8 */
  FUN_00666bb8(local_50,"cameraController",auStack_40);
  Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_50);
                    /* try { // try from 00559c0c to 00659c33 has its CatchHandler @ 00559e68 */
  if ((undefined *)(local_50[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_50[0] + -8);
                    /* try { // try from 00559c98 to 00659def has its CatchHandler @ 00559334 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 005593a0 with catch @ 00559c9c */
        iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 00559834 with catch @ 00559ca4 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_50[0] + -0x18));
    }
  }
  pVVar5 = (Vector3 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  bVar4 = 0;
  if (pVVar5 != (Vector3 *)0x0) {
                    /* try { // try from 00559c34 to 00659c6f has its CatchHandler @ 00559334 */
                    /* catch() { ... } // from try @ 00559388 with catch @ 00559c38 */
                    /* catch() { ... } // from try @ 00559544 with catch @ 00559c3c */
    Caver::Camera::AABBOnZPlane(*(float *)(pVVar5 + 8));
                    /* catch() { ... } // from try @ 005593e0 with catch @ 00559c40 */
    Caver::Vector2::Vector2(aVStack_58,pVVar5);
                    /* catch() { ... } // from try @ 0055961c with catch @ 00559c4c
                       catch() { ... } // from try @ 00559678 with catch @ 00559c4c */
    bVar4 = Caver::Rectangle::PointInside((Rectangle *)local_50,aVStack_58);
  }
  Caver::ProgramState::PushBool(this,(bool)(bVar4 & 1));
                    /* try { // try from 00559c70 to 00659c97 has its CatchHandler @ 00559e68 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


