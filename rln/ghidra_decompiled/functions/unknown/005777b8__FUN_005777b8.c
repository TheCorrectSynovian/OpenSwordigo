/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005777b8
 * Function: FUN_005777b8
 * Signature: undefined FUN_005777b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005777b8(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  SceneObject *this_00;
  float fVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 00577838 to 0067783f has its CatchHandler @ 0057c778 */
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar1;
    fVar2 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
                    /* try { // try from 005777ec to 006777f3 has its CatchHandler @ 0057ca24 */
                    /* try { // try from 005777f4 to 00677803 has its CatchHandler @ 0057c9c0 */
    if (((this_00 != (SceneObject *)0x0) &&
        (DAT_00683488 < ABS(fVar2 * DAT_00684004 - *(float *)(this_00 + 0x80)))) &&
       (*(float *)(this_00 + 0x80) = fVar2 * DAT_00684004, this_00[0xb4] == (SceneObject)0x0)) {
      Caver::SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
                    /* try { // try from 0057784c to 00677877 has its CatchHandler @ 0057c740 */
  return 0;
}


