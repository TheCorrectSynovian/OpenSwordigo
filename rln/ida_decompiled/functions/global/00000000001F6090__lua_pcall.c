/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6090
 * Mangled: ._Z9lua_pcallP9lua_Stateiii
 * Demangled: lua_pcall(lua_State *,int,int,int)
 *
 * Callers: 3
 *   0x00000000004C182C  Caver::ProgramState::Execute(int)
 *   0x00000000004FA9BC  sub_4FA9BC
 *   0x00000000004FB1D4  sub_4FB1D4
 *
 * Callees: 1
 *   0x00000000004E98F8  lua_pcall(lua_State *,int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6098 string=0x00000000001F609C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pcall()
{
  return _Z9lua_pcallP9lua_Stateiii();
}

