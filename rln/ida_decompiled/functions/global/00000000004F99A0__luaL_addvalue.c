/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F99A0
 * Mangled: _Z13luaL_addvalueP11luaL_Buffer
 * Demangled: luaL_addvalue(luaL_Buffer *)
 *
 * Callers: 1
 *   0x0000000000203CA0  luaL_addvalue(luaL_Buffer *)
 *
 * Callees: 8
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F5A00  lua_objlen(lua_State *,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000201760  .memcpy
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *
 * Referenced strings: 34
 *   insn=0x00000000004F99B4 string=0x00000000004F99B8 "V"
 *   insn=0x00000000004F99CC string=0x00000000004F99D0 "t\n@"
 *   insn=0x00000000004F99D4 string=0x00000000004F99D8 "r"
 *   insn=0x00000000004F99D8 string=0x00000000004F99DC "h"
 *   insn=0x00000000004F99D8 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004F99E0 string=0x00000000004F99E4 "ib"
 *   insn=0x00000000004F99E8 string=0x00000000004F99EC ")"
 *   insn=0x00000000004F99EC string=0x00000000004F99F0 "_"
 *   insn=0x00000000004F99F0 string=0x00000000004F99F4 "\t"
 *   insn=0x00000000004F99F4 string=0x00000000004F99F8 "ub"
 *   insn=0x00000000004F9A00 string=0x00000000004F9A04 "`\n@"
 *   insn=0x00000000004F9A00 string=0x00000000004F9A5C "w""
 *   insn=0x00000000004F9A0C string=0x00000000004F9A10 "u"
 *   insn=0x00000000004F9A0C string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F9A20 string=0x00000000004F9A24 ""
 *   insn=0x00000000004F9A34 string=0x00000000004F9A38 "J"
 *   insn=0x00000000004F9A3C string=0x00000000004F9A40 "i"
 *   insn=0x00000000004F9A48 string=0x00000000004F9A4C "("
 *   insn=0x00000000004F9A4C string=0x00000000004F9A50 "h"
 *   insn=0x00000000004F9A54 string=0x00000000004F9A58 "&"
 *   insn=0x00000000004F9A60 string=0x00000000004F9A64 "\t"
 *   insn=0x00000000004F9A6C string=0x00000000004F9A70 ""
 *   insn=0x00000000004F9A70 string=0x00000000004F9A74 "s\n@"
 *   insn=0x00000000004F9A80 string=0x00000000001F5A00 "P'"
 *   insn=0x00000000004F9A98 string=0x00000000004F9A9C "\t"
 *   insn=0x00000000004F9A9C string=0x00000000004F9AA0 "?!"
 *   insn=0x00000000004F9AAC string=0x00000000004F9AB0 "J"
 *   insn=0x00000000004F9AB0 string=0x00000000004F9AB4 "_"
 *   insn=0x00000000004F9AB4 string=0x00000000004F9AB8 "\t"
 *   insn=0x00000000004F9AC4 string=0x00000000004F9AC8 "5"
 *   insn=0x00000000004F9AC8 string=0x00000000004F9ACC ""
 *   insn=0x00000000004F9AE0 string=0x00000000004F9AE4 ")"
 *   insn=0x00000000004F9AE4 string=0x00000000004F9AE8 "("
 *   insn=0x00000000004F9B18 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const void *__fastcall luaL_addvalue(__int64 a1)
{
  const void *result; // x0
  int *v3; // x23
  int v4; // w8
  unsigned __int64 v5; // x21
  int v6; // w20
  unsigned __int64 v7; // x0
  int v8; // w10
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // [xsp+0h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  result = (const void *)lua_tolstring();
  if ( v10 <= a1 + 1048 - *(_QWORD *)a1 )
  {
    memcpy(*(void **)a1, result, v10);
    *(_QWORD *)a1 += v10;
    return (const void *)lua_settop();
  }
  else
  {
    if ( *(_QWORD *)a1 == a1 + 24 )
    {
      v3 = (int *)(a1 + 8);
    }
    else
    {
      lua_pushlstring();
      *(_QWORD *)a1 = a1 + 24;
      v3 = (int *)(a1 + 8);
      ++*(_DWORD *)(a1 + 8);
      result = (const void *)lua_insert();
    }
    v4 = (*v3)++;
    if ( v4 >= 1 )
    {
      v5 = lua_objlen();
      v6 = 1;
      do
      {
        v7 = lua_objlen();
        v8 = v5 > v7 || *v3 - v6 > 8;
        if ( v8 )
          v9 = v7;
        else
          v9 = 0;
        v6 += v8;
        if ( !v8 )
          break;
        v5 += v9;
      }
      while ( v6 < *v3 );
      result = (const void *)lua_concat();
      *v3 += 1 - v6;
    }
  }
  return result;
}

