/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476CC4
 * Mangled: sub_476CC4
 * Demangled: sub_476CC4
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x00000000001F8F00  lua_rawset(lua_State *,int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x0000000000200A30  lua_getfenv(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *
 * Referenced strings: 16
 *   insn=0x0000000000476CD4 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476CDC string=0x0000000000476CE0 "`"
 *   insn=0x0000000000476CDC string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476CF4 string=0x0000000000476CF8 "N'"
 *   insn=0x0000000000476D0C string=0x0000000000476D10 "`"
 *   insn=0x0000000000476D10 string=0x00000000001F5E90 "P'"
 *   insn=0x0000000000476D18 string=0x0000000000476D1C "!"
 *   insn=0x0000000000476D1C string=0x00000000001FB5A0 "0'"
 *   insn=0x0000000000476D20 string=0x0000000000476D24 " "
 *   insn=0x0000000000476D3C string=0x0000000000476D40 "03"
 *   insn=0x0000000000476D58 string=0x00000000001FCF60 "0'"
 *   insn=0x0000000000476D60 string=0x0000000000476D64 "g"
 *   insn=0x0000000000476D64 string=0x00000000001F8F00 "0'"
 *   insn=0x0000000000476D6C string=0x0000000000476D70 "|"
 *   insn=0x0000000000476D78 string=0x0000000000476D7C "y"
 *   insn=0x0000000000476D84 string=0x0000000000476D88 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476CC4(void *a1)
{
  Caver::ProgramState *v1; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  lua_getfenv();
  lua_pushlightuserdata();
  lua_rawget();
  if ( (unsigned int)lua_type() != 5 )
  {
    lua_settop();
    lua_createtable();
    lua_pushlightuserdata();
    lua_pushvalue();
    lua_rawset();
  }
  lua_pushvalue();
  lua_pushvalue();
  lua_rawset();
  return 0;
}

