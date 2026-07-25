/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C21CC
 * Mangled: _ZN5Caver12ProgramTable12StringForKeyERKSs
 * Demangled: Caver::ProgramTable::StringForKey(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *   0x00000000004C22E0  Caver::ProgramTable::SetStringForKey(std::string const&,std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x00000000004C21DC string=0x00000000004C21E0 "U"
 *   insn=0x00000000004C21F0 string=0x00000000004C21F4 "!"
 *   insn=0x00000000004C21F8 string=0x00000000004C21FC """
 *   insn=0x00000000004C2200 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C2218 string=0x00000000004C221C "a"
 *   insn=0x00000000004C221C string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004C2228 string=0x00000000004C222C "c"
 *   insn=0x00000000004C2260 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C2264 string=0x00000000004C2268 "\n"
 *   insn=0x00000000004C2268 string=0x00000000004C226C "J"
 *   insn=0x00000000004C2270 string=0x00000000004C2274 "(a"
 *   insn=0x00000000004C227C string=0x00000000004C2280 "\n"
 *   insn=0x00000000004C2280 string=0x00000000004C2284 "J=G"
 *   insn=0x00000000004C2284 string=0x00000000004C2288 ")!"
 *   insn=0x00000000004C228C string=0x00000000004C2290 "*"
 *   insn=0x00000000004C228C string=0x00000000004C22BC "*"
 *   insn=0x00000000004C2290 string=0x00000000004C2294 "K"
 *   insn=0x00000000004C2294 string=0x00000000004C2298 "+"
 *   insn=0x00000000004C229C string=0x00000000004C22A0 "_"
 *   insn=0x00000000004C22AC string=0x00000000004C22B0 "="
 *   insn=0x00000000004C22BC string=0x00000000004C22C0 "K"
 *   insn=0x00000000004C22C0 string=0x00000000004C22C4 "+"
 *   insn=0x00000000004C22C4 string=0x00000000004C22C8 "_"
 *   insn=0x00000000004C22D8 string=0x00000000004C22DC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ProgramTable::StringForKey@<X0>(int a1@<W8>)
{
  char *v2; // x0

  _ReadStatusReg(TPIDR_EL0);
  lua_pushlstring();
  lua_gettable();
  v2 = (char *)lua_tolstring();
  sub_566BB8(a1, v2);
  return lua_settop();
}

