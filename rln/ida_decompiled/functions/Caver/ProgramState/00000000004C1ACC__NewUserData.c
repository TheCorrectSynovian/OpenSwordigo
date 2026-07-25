/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1ACC
 * Mangled: _ZN5Caver12ProgramState11NewUserDataEmRKSs
 * Demangled: Caver::ProgramState::NewUserData(ulong,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE9A0  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *
 * Callees: 3
 *   0x00000000001F5CA0  lua_newuserdata(lua_State *,ulong)
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *   0x00000000001FD620  lua_setmetatable(lua_State *,int)
 *
 * Referenced strings: 8
 *   insn=0x00000000004C1AD8 string=0x00000000004C1ADC "`"
 *   insn=0x00000000004C1AE0 string=0x00000000004C1AE4 "o"
 *   insn=0x00000000004C1AE4 string=0x00000000001F5CA0 "P'"
 *   insn=0x00000000004C1AEC string=0x00000000004C1AF0 "H"
 *   insn=0x00000000004C1AF4 string=0x00000000004C1AF8 "`"
 *   insn=0x00000000004C1B00 string=0x00000000004C1B04 "`"
 *   insn=0x00000000004C1B00 string=0x00000000001F9EE0 "0'"
 *   insn=0x00000000004C1B0C string=0x00000000001FD620 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::NewUserData(_QWORD *a1, __int64 a2, char **a3)
{
  __int64 v5; // x0
  char *v6; // x2
  __int64 v7; // x20

  v5 = lua_newuserdata();
  v6 = *a3;
  v7 = v5;
  if ( *((_QWORD *)v6 - 3) )
  {
    lua_getfield(*a1, -10000, v6);
    lua_setmetatable();
  }
  return v7;
}

