/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF7F0
 * Mangled: ._Z14luaopen_stringP9lua_State
 * Demangled: luaopen_string(lua_State *)
 *
 * Callers: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callees: 1
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF7F8 string=0x00000000001FF7FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaopen_string()
{
  return _Z14luaopen_stringP9lua_State();
}

