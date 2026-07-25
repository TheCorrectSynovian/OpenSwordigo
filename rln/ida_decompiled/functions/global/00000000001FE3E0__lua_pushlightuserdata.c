/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE3E0
 * Mangled: ._Z21lua_pushlightuserdataP9lua_StatePv
 * Demangled: lua_pushlightuserdata(lua_State *,void *)
 *
 * Callers: 8
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000476BE8  sub_476BE8
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004C1A7C  Caver::ProgramState::PushPointer(void *)
 *   0x00000000004C1FF0  Caver::ProgramTable::PointerForPointerKey(void *)
 *   0x00000000004C2044  Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *   0x00000000004C20DC  Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *
 * Callees: 1
 *   0x00000000004E8908  lua_pushlightuserdata(lua_State *,void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE3E4 string=0x00000000004E8908 "@"
 *   insn=0x00000000001FE3E8 string=0x00000000001FE3EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushlightuserdata()
{
  return _Z21lua_pushlightuserdataP9lua_StatePv();
}

