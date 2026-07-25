/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFCB0
 * Mangled: ._Z14lua_pushnumberP9lua_Stated
 * Demangled: lua_pushnumber(lua_State *,double)
 *
 * Callers: 4
 *   0x00000000004C1A90  Caver::ProgramState::PushFloat(float)
 *   0x00000000004C242C  Caver::ProgramTable::SetFloatForKey(std::string const&,float)
 *   0x00000000004FA584  sub_4FA584
 *   0x00000000004FAE4C  sub_4FAE4C
 *
 * Callees: 1
 *   0x00000000004E855C  lua_pushnumber(lua_State *,double)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFCB4 string=0x00000000004E855C "@"
 *   insn=0x00000000001FFCB8 string=0x00000000001FFCBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushnumber()
{
  return _Z14lua_pushnumberP9lua_Stated();
}

