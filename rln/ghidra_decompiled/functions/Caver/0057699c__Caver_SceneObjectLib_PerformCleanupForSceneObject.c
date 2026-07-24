/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057699c
 * Function: Caver::SceneObjectLib::PerformCleanupForSceneObject
 * Signature: undefined __cdecl PerformCleanupForSceneObject(ProgramState * param_1, SceneObject * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectLib::PerformCleanupForSceneObject(Caver::ProgramState*, Caver::SceneObject*) */

void Caver::SceneObjectLib::PerformCleanupForSceneObject(ProgramState *param_1,SceneObject *param_2)

{
                    /* try { // try from 0057699c to 006769af has its CatchHandler @ 0057c324 */
                    /* try { // try from 005769b0 to 006769c3 has its CatchHandler @ 0057c31c */
  PushSceneObject(param_1,param_2);
  lua_getfenv(*(lua_State **)param_1,-1);
                    /* try { // try from 005769c4 to 006769e3 has its CatchHandler @ 0057c314 */
  lua_pushlightuserdata(*(lua_State **)param_1,param_2);
  lua_pushnil(*(lua_State **)param_1);
  lua_rawset(*(lua_State **)param_1,-3);
                    /* try { // try from 005769ec to 006769ff has its CatchHandler @ 0057c30c */
  ProgramState::Pop(param_1,2);
  return;
}


