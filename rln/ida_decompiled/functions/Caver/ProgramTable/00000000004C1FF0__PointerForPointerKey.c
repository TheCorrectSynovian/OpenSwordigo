/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1FF0
 * Mangled: _ZN5Caver12ProgramTable20PointerForPointerKeyEPv
 * Demangled: Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Callers: 1
 *   0x0000000000200BC0  Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Callees: 4
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *   0x0000000000203D20  lua_touserdata(lua_State *,int)
 *
 * Referenced strings: 8
 *   insn=0x00000000004C1FFC string=0x00000000004C2000 "`"
 *   insn=0x00000000004C2004 string=0x00000000004C2008 "`"
 *   insn=0x00000000004C2008 string=0x00000000004C200C "a\n@"
 *   insn=0x00000000004C200C string=0x00000000004C2010 ","
 *   insn=0x00000000004C2010 string=0x00000000004C2014 "`"
 *   insn=0x00000000004C2018 string=0x00000000004C201C "A"
 *   insn=0x00000000004C201C string=0x00000000004C2020 "h"
 *   insn=0x00000000004C202C string=0x00000000004C2030 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramTable::PointerForPointerKey(Caver::ProgramTable *this, void *a2)
{
  __int64 v2; // x19

  lua_pushlightuserdata();
  lua_gettable();
  v2 = lua_touserdata();
  lua_settop();
  return v2;
}

