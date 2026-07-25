/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A30
 * Mangled: ._Z11lua_getfenvP9lua_Statei
 * Demangled: lua_getfenv(lua_State *,int)
 *
 * Callers: 4
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000476BE8  sub_476BE8
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004FA778  sub_4FA778
 *
 * Callees: 1
 *   0x00000000004E8F58  lua_getfenv(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200A34 string=0x00000000004E8F58 "?"
 *   insn=0x0000000000200A38 string=0x0000000000200A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_getfenv()
{
  return _Z11lua_getfenvP9lua_Statei();
}

