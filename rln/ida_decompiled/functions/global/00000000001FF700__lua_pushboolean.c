/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF700
 * Mangled: ._Z15lua_pushbooleanP9lua_Statei
 * Demangled: lua_pushboolean(lua_State *,int)
 *
 * Callers: 8
 *   0x00000000004C1A9C  Caver::ProgramState::PushBool(bool)
 *   0x00000000004C2184  Caver::ProgramTable::SetBoolForKey(std::string const&,bool)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FA584  sub_4FA584
 *   0x00000000004FA9BC  sub_4FA9BC
 *   0x00000000004FAB3C  sub_4FAB3C
 *   0x00000000004FB1D4  sub_4FB1D4
 *   0x00000000004FB484  sub_4FB484
 *
 * Callees: 1
 *   0x00000000004E88E0  lua_pushboolean(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF704 string=0x00000000004E88E0 "@"
 *   insn=0x00000000001FF708 string=0x00000000001FF70C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushboolean()
{
  return _Z15lua_pushbooleanP9lua_Statei();
}

