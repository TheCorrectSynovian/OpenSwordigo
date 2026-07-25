/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FAF74
 * Mangled: sub_4FAF74
 * Demangled: sub_4FAF74
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F6AF0  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FB6A0  lua_topointer(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 27
 *   insn=0x00000000004FAF84 string=0x00000000004FAF88 "f"
 *   insn=0x00000000004FAF88 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FAF8C string=0x000000000059A913 "__tostring"
 *   insn=0x00000000004FAF9C string=0x00000000001F6AF0 "0'"
 *   insn=0x00000000004FAFB8 string=0x00000000004FAFBC "y"
 *   insn=0x00000000004FAFBC string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FAFC4 string=0x00000000004FAFC8 "\t"
 *   insn=0x00000000004FAFC8 string=0x000000000059A690 "P\t"
 *   insn=0x00000000004FAFCC string=0x00000000004FAFD0 ")A"
 *   insn=0x00000000004FAFD0 string=0x00000000004FAFD4 "(y"
 *   insn=0x00000000004FAFD4 string=0x00000000004FAFD8 ""
 *   insn=0x00000000004FAFE0 string=0x000000000059A2D7 "nil"
 *   insn=0x00000000004FAFEC string=0x00000000004FAFF0 "p"
 *   insn=0x00000000004FAFF0 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004FB000 string=0x00000000001F4010 "P'"
 *   insn=0x00000000004FB004 string=0x000000000059A91E "true"
 *   insn=0x00000000004FB008 string=0x00000000004FB00C "y$"
 *   insn=0x00000000004FB008 string=0x000000000059A923 "false"
 *   insn=0x00000000004FB00C string=0x00000000004FB010 ")"
 *   insn=0x00000000004FB014 string=0x00000000004FB018 "!"
 *   insn=0x00000000004FB024 string=0x00000000004FB028 "^"
 *   insn=0x00000000004FB044 string=0x00000000001FB6A0 "0'"
 *   insn=0x00000000004FB048 string=0x000000000059A929 "%s: %p"
 *   insn=0x00000000004FB04C string=0x00000000004FB050 "!"
 *   insn=0x00000000004FB058 string=0x00000000004FB05C "U!"
 *   insn=0x00000000004FB070 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FB08C string=0x00000000001FCF60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FAF74(int a1)
{
  char *v3; // x1

  luaL_checkany();
  if ( !(unsigned int)luaL_callmeta() )
  {
    switch ( (unsigned int)lua_type() )
    {
      case 0u:
        lua_pushlstring();
        break;
      case 1u:
        if ( (unsigned int)lua_toboolean() )
          v3 = "true";
        else
          v3 = "false";
        goto LABEL_10;
      case 3u:
        v3 = (char *)lua_tolstring();
LABEL_10:
        lua_pushstring(a1, v3);
        break;
      case 4u:
        lua_pushvalue();
        break;
      default:
        lua_type();
        lua_typename();
        lua_topointer();
        lua_pushfstring();
        break;
    }
  }
  return 1;
}

