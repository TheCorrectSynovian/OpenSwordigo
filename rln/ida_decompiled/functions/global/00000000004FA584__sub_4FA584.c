/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA584
 * Mangled: sub_4FA584
 * Demangled: sub_4FA584
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3D30  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FE3B0  lua_gc(lua_State *,int,int)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *   0x00000000001FFCB0  lua_pushnumber(lua_State *,double)
 *
 * Referenced strings: 11
 *   insn=0x00000000004FA594 string=0x000000000059A780 "collect"
 *   insn=0x00000000004FA598 string=0x00000000004FA59C "B"
 *   insn=0x00000000004FA59C string=0x00000000004FA5A0 "c"
 *   insn=0x00000000004FA5AC string=0x00000000001F3D30 "P'"
 *   insn=0x00000000004FA5C0 string=0x00000000004FA5C4 ""
 *   insn=0x00000000004FA5C0 string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FA5D8 string=0x00000000004FA5DC "u"
 *   insn=0x00000000004FA5FC string=0x00000000004FA600 "l"
 *   insn=0x00000000004FA600 string=0x00000000004FA604 ""
 *   insn=0x00000000004FA610 string=0x00000000004FA614 "@`"
 *   insn=0x00000000004FA624 string=0x00000000004FA628 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA584()
{
  int v0; // w20
  int v1; // w21

  v0 = luaL_checkoption();
  luaL_optinteger();
  v1 = dword_59AA0C[v0];
  lua_gc();
  if ( v1 == 5 )
  {
    lua_pushboolean();
  }
  else
  {
    if ( v1 == 3 )
      lua_gc();
    lua_pushnumber();
  }
  return 1;
}

