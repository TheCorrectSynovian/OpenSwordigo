/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB0E0
 * Mangled: sub_4FB0E0
 * Demangled: sub_4FB0E0
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F5A00  lua_objlen(lua_State *,int)
 *   0x00000000001F6640  lua_rawgeti(lua_State *,int,int)
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x0000000000202C30  lua_checkstack(lua_State *,int)
 *
 * Referenced strings: 17
 *   insn=0x00000000004FB0F8 string=0x00000000004FB0FC "9"
 *   insn=0x00000000004FB0FC string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FB108 string=0x00000000004FB10C "%"
 *   insn=0x00000000004FB10C string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FB118 string=0x00000000004FB11C "!"
 *   insn=0x00000000004FB11C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FB130 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FB13C string=0x00000000004FB140 "0"
 *   insn=0x00000000004FB140 string=0x00000000001F5A00 "P'"
 *   insn=0x00000000004FB188 string=0x00000000004FB18C "-"
 *   insn=0x00000000004FB18C string=0x00000000001F6640 "0'"
 *   insn=0x00000000004FB190 string=0x00000000004FB194 ""
 *   insn=0x00000000004FB1A4 string=0x00000000004FB1A8 "&"
 *   insn=0x00000000004FB1AC string=0x00000000004FB1B0 "A"
 *   insn=0x00000000004FB1C4 string=0x000000000059A930 "too many results to unpack"
 *   insn=0x00000000004FB1CC string=0x00000000004FB1D0 ""
 *   insn=0x00000000004FB1D0 string=0x00000000001FADF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB0E0()
{
  int v0; // w20
  int v1; // w0
  int v2; // w21
  unsigned int v3; // w22

  luaL_checktype();
  v0 = luaL_optinteger();
  if ( (int)lua_type() <= 0 )
    v1 = lua_objlen();
  else
    v1 = luaL_checkinteger();
  v2 = v1;
  if ( v1 >= v0 )
  {
    if ( v1 - v0 < 0 || (v3 = v1 - v0 + 1, !(unsigned int)lua_checkstack()) )
      luaL_error();
    lua_rawgeti();
    if ( v2 > v0 )
    {
      do
      {
        ++v0;
        lua_rawgeti();
      }
      while ( v2 != v0 );
    }
  }
  else
  {
    return 0;
  }
  return v3;
}

