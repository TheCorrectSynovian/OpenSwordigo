/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202750
 * Mangled: ._Z14lua_pushstringP9lua_StatePKc
 * Demangled: lua_pushstring(lua_State *,char const*)
 *
 * Callers: 7
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004C22E0  Caver::ProgramTable::SetStringForKey(std::string const&,std::string const&)
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB094  sub_4FB094
 *   0x00000000004FB55C  sub_4FB55C
 *
 * Callees: 1
 *   0x00000000004E8610  lua_pushstring(lua_State *,char const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202758 string=0x000000000020275C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall lua_pushstring(int a1, char *a2)
{
  return _Z14lua_pushstringP9lua_StatePKc(a1, a2);
}

