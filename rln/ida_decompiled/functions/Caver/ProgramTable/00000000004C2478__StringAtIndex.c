/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2478
 * Mangled: _ZN5Caver12ProgramTable13StringAtIndexEi
 * Demangled: Caver::ProgramTable::StringAtIndex(int)
 *
 * Callers: 1
 *   0x00000000001F7B70  Caver::ProgramTable::StringAtIndex(int)
 *
 * Callees: 10
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *   0x0000000000203230  .strlen
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 21
 *   insn=0x00000000004C248C string=0x00000000004C2490 "V"
 *   insn=0x00000000004C249C string=0x00000000004C24A0 "!|@"
 *   insn=0x00000000004C24AC string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004C24C4 string=0x00000000004C24C8 "h"
 *   insn=0x00000000004C24D8 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004C24E4 string=0x00000000004C24E8 "R"
 *   insn=0x00000000004C24F4 string=0x00000000004C24F8 "%"
 *   insn=0x00000000004C2514 string=0x00000000004C2530 "h"
 *   insn=0x00000000004C2530 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C2538 string=0x00000000004C253C "(a"
 *   insn=0x00000000004C2544 string=0x00000000004C2548 "\n"
 *   insn=0x00000000004C2548 string=0x00000000004C254C "J=G"
 *   insn=0x00000000004C254C string=0x00000000004C2550 ")!"
 *   insn=0x00000000004C2554 string=0x00000000004C2558 "*"
 *   insn=0x00000000004C2554 string=0x00000000004C2584 "*"
 *   insn=0x00000000004C2558 string=0x00000000004C255C "K"
 *   insn=0x00000000004C255C string=0x00000000004C2560 "+"
 *   insn=0x00000000004C2564 string=0x00000000004C2568 "_"
 *   insn=0x00000000004C2584 string=0x00000000004C2588 "K"
 *   insn=0x00000000004C2588 string=0x00000000004C258C "+"
 *   insn=0x00000000004C258C string=0x00000000004C2590 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ProgramTable::StringAtIndex@<X0>(_QWORD *a1@<X8>)
{
  const char *v3; // x0
  const char *v4; // x21
  size_t v5; // x0

  _ReadStatusReg(TPIDR_EL0);
  lua_pushinteger();
  lua_gettable();
  *a1 = &byte_6FD2F8;
  v3 = (const char *)lua_tolstring();
  v4 = v3;
  if ( v3 )
  {
    v5 = strlen(v3);
    sub_56918C(a1, v4, v5);
  }
  return lua_settop();
}

