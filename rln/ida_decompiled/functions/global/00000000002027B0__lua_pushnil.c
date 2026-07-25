/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002027B0
 * Mangled: ._Z11lua_pushnilP9lua_State
 * Demangled: lua_pushnil(lua_State *)
 *
 * Callers: 11
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000476BE8  sub_476BE8
 *   0x00000000004FA37C  sub_4FA37C
 *   0x00000000004FA3C8  sub_4FA3C8
 *   0x00000000004FA7CC  sub_4FA7CC
 *   0x00000000004FA824  sub_4FA824
 *   0x00000000004FA880  sub_4FA880
 *   0x00000000004FA914  sub_4FA914
 *   0x00000000004FAE4C  sub_4FAE4C
 *   0x00000000004FB52C  sub_4FB52C
 *   0x00000000004FCAF8  sub_4FCAF8
 *
 * Callees: 1
 *   0x00000000004E8548  lua_pushnil(lua_State *)
 *
 * Referenced strings: 2
 *   insn=0x00000000002027B4 string=0x00000000004E8548 "@"
 *   insn=0x00000000002027B8 string=0x00000000002027BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushnil()
{
  return _Z11lua_pushnilP9lua_State();
}

