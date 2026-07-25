/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9C98
 * Mangled: _Z13luaL_loadfileP9lua_StatePKc
 * Demangled: luaL_loadfile(lua_State *,char const*)
 *
 * Callers: 1
 *   0x00000000001F5B50  luaL_loadfile(lua_State *,char const*)
 *
 * Callees: 17
 *   0x00000000001F4000  .ungetc
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F7D80  .getc
 *   0x00000000001F8110  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *   0x00000000001F9C10  .__errno
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FDDC0  .fclose
 *   0x00000000001FE340  .ferror
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000201180  .fopen
 *   0x00000000002025F0  .freopen
 *   0x00000000002031D0  .strerror
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *   0x0000000000203DC0  lua_remove(lua_State *,int)
 *   0x00000000004F9F24  sub_4F9F24
 *
 * Referenced strings: 51
 *   insn=0x00000000004F9CB0 string=0x00000000004F9CB4 "X"
 *   insn=0x00000000004F9CB4 string=0x00000000004F9CB8 ""
 *   insn=0x00000000004F9CC4 string=0x00000000004F9CC8 "~"
 *   insn=0x00000000004F9CC8 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004F9CD0 string=0x00000000004F9CD4 "v"
 *   insn=0x00000000004F9CD8 string=0x000000000059A634 "@%s"
 *   insn=0x00000000004F9CE4 string=0x00000000004F9CE8 "2&"
 *   insn=0x00000000004F9CEC string=0x000000000059AEB0 "r"
 *   insn=0x00000000004F9CF4 string=0x00000000004F9CF8 """
 *   insn=0x00000000004F9D08 string=0x00000000001F9C10 "0'"
 *   insn=0x00000000004F9D0C string=0x00000000004F9D10 "0%"
 *   insn=0x00000000004F9D24 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004F9D28 string=0x000000000059A63F "cannot %s %s: %s"
 *   insn=0x00000000004F9D2C string=0x000000000059A63A "open"
 *   insn=0x00000000004F9D30 string=0x00000000004F9D34 "!"
 *   insn=0x00000000004F9D34 string=0x00000000004F9D38 "B"
 *   insn=0x00000000004F9D38 string=0x00000000004F9D3C "f"
 *   insn=0x00000000004F9D40 string=0x000000000059A62D "=stdin"
 *   insn=0x00000000004F9D50 string=0x00000000004F9D54 "u"
 *   insn=0x00000000004F9D50 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F9D60 string=0x00000000004F9D64 ""
 *   insn=0x00000000004F9D64 string=0x00000000001F7D80 "0'"
 *   insn=0x00000000004F9D88 string=0x00000000004F9D8C "a"
 *   insn=0x00000000004F9DA8 string=0x00000000004F9DAC "v"
 *   insn=0x00000000004F9DB0 string=0x00000000004F9DB4 "!"
 *   insn=0x00000000004F9DB8 string=0x00000000005969E5 "rb"
 *   insn=0x00000000004F9DC4 string=0x00000000004F9DC8 "\n""
 *   insn=0x00000000004F9DD0 string=0x00000000004F9DD4 "u"
 *   insn=0x00000000004F9DD4 string=0x00000000004F9EA0 "\"
 *   insn=0x00000000004F9DE0 string=0x00000000004F9DE4 "`"
 *   insn=0x00000000004F9DE8 string=0x00000000004F9DEC "a"
 *   insn=0x00000000004F9DFC string=0x00000000001F4000 "P'"
 *   insn=0x00000000004F9E08 string=0x00000000004F9E0C "e"
 *   insn=0x00000000004F9E14 string=0x00000000004F9E18 "!"
 *   insn=0x00000000004F9E24 string=0x00000000001F8110 "0'"
 *   insn=0x00000000004F9E30 string=0x00000000004F9E34 "C"
 *   insn=0x00000000004F9E38 string=0x00000000004F9E3C "y"
 *   insn=0x00000000004F9E3C string=0x00000000004F9E48 "W"
 *   insn=0x00000000004F9E44 string=0x00000000001FDDC0 "0'"
 *   insn=0x00000000004F9E54 string=0x00000000004F9E58 "n"
 *   insn=0x00000000004F9E70 string=0x00000000004F9E74 "K"
 *   insn=0x00000000004F9E7C string=0x000000000059A317 "read"
 *   insn=0x00000000004F9E80 string=0x00000000004F9E84 "!"
 *   insn=0x00000000004F9E84 string=0x00000000004F9E88 "B\"
 *   insn=0x00000000004F9E9C string=0x00000000004F9EF0 ""
 *   insn=0x00000000004F9EB8 string=0x00000000004F9EBC "9"
 *   insn=0x00000000004F9EC4 string=0x000000000059A638 "reopen"
 *   insn=0x00000000004F9EC8 string=0x00000000004F9ECC "!"
 *   insn=0x00000000004F9ECC string=0x00000000004F9ED0 "B"
 *   insn=0x00000000004F9EF8 string=0x00000000004F9EFC "!"
 *   insn=0x00000000004F9F20 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_loadfile(__int64 a1, const char *a2)
{
  FILE *v3; // x21
  int v4; // w0
  _BOOL4 v5; // w25
  unsigned int v6; // w21
  int v7; // w23
  int *v8; // x0
  int *v9; // x0
  FILE *stream; // [xsp+10h] [xbp-450h]

  _ReadStatusReg(TPIDR_EL0);
  lua_gettop();
  if ( a2 )
  {
    lua_pushfstring();
    v3 = fopen(a2, "r");
    stream = v3;
    if ( !v3 )
      goto LABEL_21;
  }
  else
  {
    lua_pushlstring();
    v3 = (FILE *)&_sF;
    stream = (FILE *)&_sF;
  }
  v4 = getc(v3);
  if ( v4 == 35 )
  {
    while ( 1 )
    {
      v4 = getc(v3);
      if ( v4 == 10 )
        break;
      if ( v4 == -1 )
      {
        v5 = a2 != 0;
        goto LABEL_16;
      }
    }
    v4 = getc(v3);
  }
  v5 = a2 != 0;
  if ( a2 && v4 == 27 )
  {
    v3 = freopen(a2, "rb", v3);
    stream = v3;
    if ( !v3 )
    {
LABEL_21:
      v9 = (int *)__errno();
      strerror(*v9);
      lua_tolstring();
      goto LABEL_22;
    }
    do
      v4 = getc(v3);
    while ( v4 != 27 && v4 != -1 );
    v5 = 1;
  }
LABEL_16:
  ungetc(v4, v3);
  lua_tolstring();
  v6 = lua_load();
  v7 = ferror(stream);
  if ( v5 )
    fclose(stream);
  if ( v7 )
  {
    lua_settop();
    v8 = (int *)__errno();
    strerror(*v8);
    lua_tolstring();
LABEL_22:
    lua_pushfstring();
    lua_remove();
    return 6;
  }
  lua_remove();
  return v6;
}

