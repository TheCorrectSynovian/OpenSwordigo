/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C23CC
 * Mangled: _ZN5Caver12ProgramTable11FloatForKeyERKSs
 * Demangled: Caver::ProgramTable::FloatForKey(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *
 * Referenced strings: 14
 *   insn=0x00000000004C23D8 string=0x00000000004C23DC "!"
 *   insn=0x00000000004C23E0 string=0x00000000004C23E4 "`"
 *   insn=0x00000000004C23E4 string=0x00000000004C23E8 """
 *   insn=0x00000000004C23E8 string=0x00000000004C23EC "q"
 *   insn=0x00000000004C23EC string=0x00000000004C23F0 "`"
 *   insn=0x00000000004C23EC string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C23F0 string=0x00000000004C23F4 "a\n@"
 *   insn=0x00000000004C23F4 string=0x00000000004C23F8 "2"
 *   insn=0x00000000004C23F8 string=0x00000000004C23FC "`"
 *   insn=0x00000000004C2400 string=0x00000000004C2404 ""
 *   insn=0x00000000004C2404 string=0x00000000004C2408 "`"
 *   insn=0x00000000004C2404 string=0x00000000001F5030 "P'"
 *   insn=0x00000000004C240C string=0x00000000004C2410 "@b"
 *   insn=0x00000000004C2410 string=0x00000000004C2414 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double Caver::ProgramTable::FloatForKey()
{
  long double v0; // q8
  double v1; // d0

  lua_pushlstring();
  lua_gettable();
  lua_tonumber();
  *(float *)&v0 = v1;
  lua_settop();
  return v0;
}

