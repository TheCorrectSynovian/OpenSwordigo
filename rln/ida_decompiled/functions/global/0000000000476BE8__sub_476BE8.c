/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476BE8
 * Mangled: sub_476BE8
 * Demangled: sub_476BE8
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x0000000000200A30  lua_getfenv(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *
 * Referenced strings: 13
 *   insn=0x0000000000476BF8 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476C00 string=0x0000000000476C04 "`"
 *   insn=0x0000000000476C00 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476C1C string=0x00000000001F92F0 "0'"
 *   insn=0x0000000000476C28 string=0x00000000001FCF60 "0'"
 *   insn=0x0000000000476C34 string=0x00000000001F5E90 "P'"
 *   insn=0x0000000000476C3C string=0x0000000000476C40 "X"
 *   insn=0x0000000000476C40 string=0x00000000001FB5A0 "0'"
 *   insn=0x0000000000476C44 string=0x0000000000476C48 "l"
 *   insn=0x0000000000476C50 string=0x0000000000476C54 "/)"
 *   insn=0x0000000000476C5C string=0x0000000000476C60 "t'"
 *   insn=0x0000000000476C80 string=0x0000000000476C84 "G"
 *   insn=0x0000000000476CA0 string=0x0000000000476CA4 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476BE8(void *a1)
{
  Caver::ProgramState *v1; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  lua_getmetatable();
  lua_pushvalue();
  lua_rawget();
  if ( (int)lua_type() <= 0 )
  {
    lua_settop();
    lua_getfenv();
    lua_pushlightuserdata();
    lua_rawget();
    if ( (unsigned int)lua_type() == 5 )
    {
      lua_pushvalue();
      lua_rawget();
    }
    else
    {
      lua_pushnil();
    }
  }
  return 1;
}

