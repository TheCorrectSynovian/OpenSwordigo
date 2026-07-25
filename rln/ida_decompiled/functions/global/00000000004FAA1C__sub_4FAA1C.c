/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FAA1C
 * Mangled: sub_4FAA1C
 * Demangled: sub_4FAA1C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F5B20  .fputs
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F8DD0  .fputc
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *
 * Referenced strings: 26
 *   insn=0x00000000004FAA34 string=0x00000000004FAA38 """
 *   insn=0x00000000004FAA38 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FAA3C string=0x000000000059A915 "tostring"
 *   insn=0x00000000004FAA40 string=0x00000000004FAA44 "BT$"
 *   insn=0x00000000004FAA44 string=0x00000000004FAA48 "!"
 *   insn=0x00000000004FAA4C string=0x00000000004FAA50 "$"
 *   insn=0x00000000004FAA50 string=0x00000000001F9EE0 "0'"
 *   insn=0x00000000004FAA58 string=0x00000000004FAA5C "Y"
 *   insn=0x00000000004FAA58 string=0x00000000004FAAE8 "H"
 *   insn=0x00000000004FAA5C string=0x00000000004FAA60 "9kF"
 *   insn=0x00000000004FAA64 string=0x00000000004FAA68 "5c"
 *   insn=0x00000000004FAA74 string=0x00000000004FAA78 ":\t"
 *   insn=0x00000000004FAA78 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FAA80 string=0x00000000004FAA84 "7\t"
 *   insn=0x00000000004FAAA0 string=0x00000000004FAAA4 "?"
 *   insn=0x00000000004FAAA4 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FAAA8 string=0x00000000004FAAAC "w"
 *   insn=0x00000000004FAAB4 string=0x00000000004FAAB8 " "
 *   insn=0x00000000004FAAB4 string=0x00000000004FAAC4 "!c"
 *   insn=0x00000000004FAAC0 string=0x00000000001F8DD0 "0'"
 *   insn=0x00000000004FAACC string=0x00000000001F5B20 "P'"
 *   insn=0x00000000004FAAE0 string=0x00000000004FAAE4 "K"
 *   insn=0x00000000004FAAE8 string=0x00000000004FAAEC "iF"
 *   insn=0x00000000004FAAEC string=0x00000000004FAAF0 "@"
 *   insn=0x00000000004FAB2C string=0x000000000059A855 "'tostring' must return a string to 'print'"
 *   insn=0x00000000004FAB38 string=0x00000000001FADF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FAA1C(int a1)
{
  int v2; // w20
  int i; // w24
  const char *v4; // x23

  v2 = lua_gettop();
  lua_getfield(a1, -10002, "tostring");
  if ( v2 >= 1 )
  {
    for ( i = 0; i < v2; ++i )
    {
      lua_pushvalue();
      lua_pushvalue();
      lua_call();
      v4 = (const char *)lua_tolstring();
      if ( !v4 )
        luaL_error();
      if ( (unsigned int)(i + 1) >= 2 )
        fputc(9, (FILE *)((char *)&_sF + 152));
      fputs(v4, (FILE *)((char *)&_sF + 152));
      lua_settop();
    }
  }
  fputc(10, (FILE *)((char *)&_sF + 152));
  return 0;
}

