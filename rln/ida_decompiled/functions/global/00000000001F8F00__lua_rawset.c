/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F00
 * Mangled: ._Z10lua_rawsetP9lua_Statei
 * Demangled: lua_rawset(lua_State *,int)
 *
 * Callers: 4
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FABDC  sub_4FABDC
 *
 * Callees: 1
 *   0x00000000004E92F8  lua_rawset(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F08 string=0x00000000001F8F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_rawset()
{
  return _Z10lua_rawsetP9lua_Statei();
}

