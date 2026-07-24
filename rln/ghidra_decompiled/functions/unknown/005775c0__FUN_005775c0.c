/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005775c0
 * Function: FUN_005775c0
 * Signature: undefined FUN_005775c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005775c0(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  Vector3 *pVVar3;
  SceneObject *this_00;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar2;
  }
  pVVar3 = (Vector3 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if ((this_00 != (SceneObject *)0x0) && (pVVar3 != (Vector3 *)0x0)) {
    Caver::Vector2::Vector2((Vector2 *)&local_40,pVVar3);
    if ((DAT_00683488 < ABS(local_40 - *(float *)(this_00 + 0x70))) ||
       (DAT_00683488 < ABS(local_3c - *(float *)(this_00 + 0x74)))) {
                    /* try { // try from 00577670 to 0067767b has its CatchHandler @ 0057cb40 */
      *(float *)(this_00 + 0x70) = local_40;
      *(float *)(this_00 + 0x74) = local_3c;
      if (this_00[0xb4] == (SceneObject)0x0) {
                    /* try { // try from 00577680 to 0067768b has its CatchHandler @ 0057ca40 */
        Caver::SceneObject::RegisterForWorldBoundsUpdate(this_00);
        this_00[0xb4] = (SceneObject)0x1;
      }
    }
                    /* try { // try from 00577690 to 0067769b has its CatchHandler @ 0057cb40 */
    *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(pVVar3 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


