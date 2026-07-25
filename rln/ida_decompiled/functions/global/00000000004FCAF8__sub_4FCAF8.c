/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FCAF8
 * Mangled: sub_4FCAF8
 * Demangled: sub_4FCAF8
 *
 * Callers: 2
 *   0x00000000004FBC88  sub_4FBC88
 *   0x00000000004FC7A0  sub_4FC7A0
 *
 * Callees: 12
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001F4800  .strpbrk
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000002004E0  luaL_checkstack(lua_State *,int,char const*)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *   0x0000000000203020  .memchr
 *   0x00000000004FCDB4  sub_4FCDB4
 *   0x00000000004FD8D8  sub_4FD8D8
 *
 * Referenced strings: 39
 *   insn=0x00000000004FCB14 string=0x00000000004FCB18 "\"
 *   insn=0x00000000004FCB34 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FCB5C string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FCB60 string=0x00000000004FCB64 "\t"
 *   insn=0x00000000004FCB64 string=0x00000000004FCB68 ")"
 *   insn=0x00000000004FCB68 string=0x00000000004FCB6C ")"
 *   insn=0x00000000004FCB6C string=0x00000000004FCB70 ")"
 *   insn=0x00000000004FCB70 string=0x00000000004FCB74 "*"
 *   insn=0x00000000004FCB74 string=0x00000000004FCB78 "_"
 *   insn=0x00000000004FCB78 string=0x00000000004FCB7C "\n"
 *   insn=0x00000000004FCB7C string=0x00000000004FCB80 "?"
 *   insn=0x00000000004FCB94 string=0x00000000001F4010 "P'"
 *   insn=0x00000000004FCBA4 string=0x00000000004FCC7C "v"
 *   insn=0x00000000004FCBA8 string=0x00000000004FCBAC ")"
 *   insn=0x00000000004FCBB0 string=0x00000000004FCBB4 "h"
 *   insn=0x00000000004FCBB8 string=0x00000000004FCBBC "8"
 *   insn=0x00000000004FCBD8 string=0x00000000004FCBDC ":"
 *   insn=0x00000000004FCBDC string=0x00000000004FCBE0 "["
 *   insn=0x00000000004FCBEC string=0x00000000004FCBF0 "h"
 *   insn=0x00000000004FCBF0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004FCBF4 string=0x00000000004FCBF8 ""
 *   insn=0x00000000004FCC00 string=0x00000000004FCC04 "!"
 *   insn=0x00000000004FCC0C string=0x000000000059AD69 "^$*+?.([%-"
 *   insn=0x00000000004FCC18 string=0x00000000001F4800 "P'"
 *   insn=0x00000000004FCC24 string=0x00000000004FCC28 "9"
 *   insn=0x00000000004FCC34 string=0x00000000004FCC38 "?{"
 *   insn=0x00000000004FCC38 string=0x00000000004FCC3C "8"
 *   insn=0x00000000004FCC50 string=0x00000000004FCC54 "X"
 *   insn=0x00000000004FCC58 string=0x00000000004FCC5C "5"
 *   insn=0x00000000004FCC68 string=0x00000000004FCC6C "?{"
 *   insn=0x00000000004FCC98 string=0x00000000004FCDB0 "H"
 *   insn=0x00000000004FCCC4 string=0x00000000004FCCC8 ""
 *   insn=0x00000000004FCCD4 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FCCEC string=0x000000000059AD97 "too many captures"
 *   insn=0x00000000004FCCFC string=0x00000000004FCD00 "K"
 *   insn=0x00000000004FCD00 string=0x00000000004FCD28 "s\n"
 *   insn=0x00000000004FCD20 string=0x00000000004FCD24 "!"
 *   insn=0x00000000004FCD78 string=0x00000000004FCD7C "!"
 *   insn=0x00000000004FCDB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FCAF8(__int64 a1, int a2)
{
  __int64 v4; // x20
  const char *v5; // x21
  __int64 v6; // x0
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 v9; // x10
  unsigned __int64 v10; // x23
  const void *v11; // x22
  unsigned __int64 v12; // x9
  size_t v13; // x24
  const void *v14; // x21
  int v15; // w25
  int v16; // t1
  char *v17; // x0
  char *v18; // x26
  char *v19; // x27
  int v20; // w25
  unsigned __int64 v21; // x23
  const char *v22; // x24
  __int64 v23; // x21
  int v24; // w19
  int v26; // w19
  unsigned int i; // w20
  bool v28; // zf
  unsigned int j; // w20
  unsigned __int64 v30; // [xsp+8h] [xbp-288h]
  unsigned __int64 v31; // [xsp+10h] [xbp-280h]
  __int64 v32; // [xsp+18h] [xbp-278h] BYREF
  unsigned __int64 v33; // [xsp+20h] [xbp-270h]
  __int64 v34; // [xsp+28h] [xbp-268h]
  int v35; // [xsp+30h] [xbp-260h]
  __int64 v36; // [xsp+238h] [xbp-58h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = luaL_checklstring();
  v5 = (const char *)luaL_checklstring();
  v6 = luaL_optinteger();
  v7 = v31;
  v8 = (((v31 + 1) & (v6 >> 63)) + v6) & ~((__int64)(((v31 + 1) & (v6 >> 63)) + v6) >> 63);
  v9 = v8 - 1;
  if ( v8 - 1 > v31 )
    v9 = v31;
  if ( v8 >= 1 )
    v10 = v9;
  else
    v10 = 0;
  if ( !a2 )
  {
LABEL_18:
    v20 = *(unsigned __int8 *)v5;
    v21 = v4 + v10;
    v33 = v4 + v7;
    v34 = a1;
    if ( v20 == 94 )
      v22 = v5 + 1;
    else
      v22 = v5;
    v32 = v4;
    while ( 1 )
    {
      v35 = 0;
      v23 = sub_4FCDB4(&v32, v21, v22);
      if ( v23 )
        break;
      if ( v21 < v33 )
      {
        ++v21;
        if ( v20 != 94 )
          continue;
      }
      goto LABEL_27;
    }
    if ( a2 )
    {
      lua_pushinteger();
      lua_pushinteger();
      v26 = v35;
      luaL_checkstack();
      if ( v26 >= 1 )
      {
        for ( i = 0; i != v26; ++i )
          sub_4FD8D8(&v32, i, 0, 0);
      }
      return (unsigned int)(v26 + 2);
    }
    else
    {
      if ( v35 )
        v28 = 1;
      else
        v28 = v21 == 0;
      if ( v28 )
        v24 = v35;
      else
        v24 = 1;
      luaL_checkstack();
      if ( v24 >= 1 )
      {
        for ( j = 0; j != v24; ++j )
          sub_4FD8D8(&v32, j, v21, v23);
      }
    }
    return (unsigned int)v24;
  }
  if ( !(unsigned int)lua_toboolean() && strpbrk(v5, "^$*+?.([%-") )
  {
    v7 = v31;
    goto LABEL_18;
  }
  v11 = (const void *)(v4 + v10);
  if ( v30 )
  {
    v12 = v31 - v10;
    if ( v30 <= v31 - v10 )
    {
      v13 = v12 - (v30 - 1);
      if ( v12 != v30 - 1 )
      {
        v16 = *v5;
        v14 = v5 + 1;
        v15 = v16;
        do
        {
          v17 = (char *)memchr(v11, v15, v13);
          v18 = v17;
          if ( !v17 )
            break;
          v19 = v17 + 1;
          if ( !memcmp(v17 + 1, v14, v30 - 1) )
            goto LABEL_44;
          v13 = (_BYTE *)v11 + v13 - v19;
          v11 = v18 + 1;
        }
        while ( v13 );
      }
    }
  }
  else if ( v11 )
  {
LABEL_44:
    lua_pushinteger();
    lua_pushinteger();
    return 2;
  }
LABEL_27:
  lua_pushnil();
  return 1;
}

