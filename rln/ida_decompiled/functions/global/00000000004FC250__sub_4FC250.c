/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC250
 * Mangled: sub_4FC250
 * Demangled: sub_4FC250
 *
 * Callers: 0
 *
 * Callees: 24
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AA0  lua_isstring(lua_State *,int)
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x00000000002004E0  luaL_checkstack(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *   0x0000000000203790  luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *   0x0000000000203CA0  luaL_addvalue(luaL_Buffer *)
 *   0x00000000004FCDB4  sub_4FCDB4
 *   0x00000000004FD8D8  sub_4FD8D8
 *
 * Referenced strings: 73
 *   insn=0x00000000004FC26C string=0x00000000004FC270 "X"
 *   insn=0x00000000004FC270 string=0x00000000004FC274 ""
 *   insn=0x00000000004FC288 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FC298 string=0x00000000004FC29C "\t"
 *   insn=0x00000000004FC2AC string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FC2C4 string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FC2DC string=0x00000000004FC2E0 "?"
 *   insn=0x00000000004FC2E8 string=0x000000000059AEE5 "string/function/table expected"
 *   insn=0x00000000004FC2F8 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FC308 string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FC350 string=0x00000000004FC354 ":"
 *   insn=0x00000000004FC35C string=0x00000000004FC360 "9"
 *   insn=0x00000000004FC368 string=0x00000000004FC36C ""
 *   insn=0x00000000004FC370 string=0x00000000004FC374 "#"
 *   insn=0x00000000004FC378 string=0x00000000004FC37C "@\n"
 *   insn=0x00000000004FC390 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FC39C string=0x000000000059AD97 "too many captures"
 *   insn=0x00000000004FC3B0 string=0x00000000004FC3B4 "K"
 *   insn=0x00000000004FC3B8 string=0x00000000004FC3BC "K"
 *   insn=0x00000000004FC3D0 string=0x00000000004FC3D4 "A"
 *   insn=0x00000000004FC3DC string=0x00000000004FC3E0 "!"
 *   insn=0x00000000004FC3F0 string=0x00000000004FC3F4 "R"
 *   insn=0x00000000004FC404 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FC40C string=0x00000000004FC410 "H"
 *   insn=0x00000000004FC410 string=0x00000000004FC4B8 "_"
 *   insn=0x00000000004FC414 string=0x00000000004FC418 "\"
 *   insn=0x00000000004FC418 string=0x00000000004FC41C "\t"
 *   insn=0x00000000004FC41C string=0x00000000004FC440 "hkw8"
 *   insn=0x00000000004FC42C string=0x00000000004FC430 "*"
 *   insn=0x00000000004FC438 string=0x00000000004FC43C ""
 *   insn=0x00000000004FC44C string=0x00000000004FC450 "ik"
 *   insn=0x00000000004FC450 string=0x00000000004FC454 "("
 *   insn=0x00000000004FC454 string=0x00000000004FC458 "\n"
 *   insn=0x00000000004FC458 string=0x00000000004FC45C "_)"
 *   insn=0x00000000004FC468 string=0x00000000004FC420 "!"
 *   insn=0x00000000004FC478 string=0x00000000004FC47C ""
 *   insn=0x00000000004FC480 string=0x00000000004FC484 "?"
 *   insn=0x00000000004FC488 string=0x00000000004FC49C "*"
 *   insn=0x00000000004FC48C string=0x00000000004FC490 "`"
 *   insn=0x00000000004FC490 string=0x00000000004FC494 "hkw8"
 *   insn=0x00000000004FC4A0 string=0x00000000004FC4A4 "("
 *   insn=0x00000000004FC4B0 string=0x00000000004FC4B4 "c"
 *   insn=0x00000000004FC4BC string=0x00000000004FC4C0 "L"
 *   insn=0x00000000004FC4C0 string=0x00000000004FC5F0 "?"
 *   insn=0x00000000004FC4EC string=0x00000000004FC4F0 ")"
 *   insn=0x00000000004FC4F0 string=0x00000000004FC4F4 "!"
 *   insn=0x00000000004FC4F8 string=0x00000000004FC4FC ""
 *   insn=0x00000000004FC4F8 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FC500 string=0x00000000004FC504 "B"
 *   insn=0x00000000004FC508 string=0x00000000004FC50C ""
 *   insn=0x00000000004FC50C string=0x00000000004FC52C "!"
 *   insn=0x00000000004FC514 string=0x00000000004FC51C "5"
 *   insn=0x00000000004FC514 string=0x000000000059AE2D "unfinished capture"
 *   insn=0x00000000004FC51C string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FC52C string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004FC544 string=0x00000000004FC548 " "
 *   insn=0x00000000004FC544 string=0x00000000001F4010 "P'"
 *   insn=0x00000000004FC550 string=0x00000000004FC554 "S"
 *   insn=0x00000000004FC554 string=0x00000000001F7AA0 "0'"
 *   insn=0x00000000004FC574 string=0x000000000059AF04 "invalid replacement value (a %s)"
 *   insn=0x00000000004FC57C string=0x00000000004FC580 "!"
 *   insn=0x00000000004FC580 string=0x00000000004FC584 ""
 *   insn=0x00000000004FC594 string=0x00000000004FC598 "B"
 *   insn=0x00000000004FC5AC string=0x00000000004FC5B0 "_"
 *   insn=0x00000000004FC5BC string=0x00000000004FC5C0 "b"
 *   insn=0x00000000004FC5DC string=0x00000000004FC5E0 "\n"
 *   insn=0x00000000004FC5E8 string=0x00000000004FC5EC "\t"
 *   insn=0x00000000004FC5F4 string=0x00000000004FC5F8 ""
 *   insn=0x00000000004FC620 string=0x00000000004FC624 "["
 *   insn=0x00000000004FC62C string=0x00000000004FC630 "!"
 *   insn=0x00000000004FC638 string=0x00000000004FC63C ""
 *   insn=0x00000000004FC644 string=0x00000000004FC648 "A"
 *   insn=0x00000000004FC670 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FC250(__int64 a1)
{
  _BYTE *v2; // x20
  unsigned __int8 *v3; // x21
  int v4; // w22
  int v5; // w0
  int v6; // w19
  unsigned int v7; // w9
  int v8; // w22
  int v9; // w25
  bool v10; // w19
  unsigned __int64 v11; // x26
  int v12; // w0
  bool v13; // zf
  int v14; // w28
  unsigned int j; // w23
  __int64 v16; // x27
  unsigned __int64 i; // x23
  int v18; // w8
  _BYTE *v19; // x9
  _BYTE *v20; // x8
  __int64 v22; // [xsp+20h] [xbp-6A0h]
  unsigned __int64 v23; // [xsp+28h] [xbp-698h]
  _BYTE *v24; // [xsp+30h] [xbp-690h]
  _BYTE *v25; // [xsp+448h] [xbp-278h] BYREF
  _BYTE *v26; // [xsp+450h] [xbp-270h]
  __int64 v27; // [xsp+458h] [xbp-268h]
  int v28; // [xsp+460h] [xbp-260h]
  __int64 v29; // [xsp+470h] [xbp-250h]
  __int64 v30; // [xsp+668h] [xbp-58h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (_BYTE *)luaL_checklstring();
  v3 = (unsigned __int8 *)luaL_checklstring();
  v4 = lua_type();
  v5 = luaL_optinteger();
  v6 = *v3;
  v7 = v4 - 3;
  v8 = v5;
  if ( v6 == 94 )
    ++v3;
  if ( v7 >= 4 )
    luaL_argerror();
  luaL_buffinit();
  v27 = a1;
  v25 = v2;
  v26 = &v2[v22];
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = v6 != 94;
    while ( 1 )
    {
      v28 = 0;
      v11 = sub_4FCDB4(&v25, v2, v3);
      if ( !v11 )
        break;
      ++v9;
      v12 = lua_type();
      if ( (unsigned int)(v12 - 3) < 2 )
      {
        v16 = lua_tolstring();
        if ( v23 )
        {
          for ( i = 0; i < v23; ++i )
          {
            v18 = *(unsigned __int8 *)(v16 + i);
            if ( v18 == 37 && (++i, v18 = *(unsigned __int8 *)(v16 + i), (unsigned int)(v18 - 48) < 0xA) )
            {
              if ( v18 == 48 )
              {
                luaL_addlstring();
              }
              else
              {
                sub_4FD8D8(&v25, (unsigned int)(*(char *)(v16 + i) - 49), v2, v11);
                luaL_addvalue();
              }
            }
            else
            {
              v19 = v24;
              if ( v24 >= (_BYTE *)&v25 )
              {
                luaL_prepbuffer();
                LOBYTE(v18) = *(_BYTE *)(v16 + i);
                v19 = v24;
              }
              v24 = v19 + 1;
              *v19 = v18;
            }
          }
        }
        if ( v11 <= (unsigned __int64)v2 )
          break;
      }
      else
      {
        if ( v12 == 5 )
        {
          if ( v28 <= 0 )
            goto LABEL_40;
          if ( v29 == -1 )
            luaL_error();
          if ( v29 == -2 )
            lua_pushinteger();
          else
LABEL_40:
            lua_pushlstring();
          lua_gettable();
        }
        else if ( v12 == 6 )
        {
          lua_pushvalue();
          if ( v28 )
            v13 = 1;
          else
            v13 = v2 == 0;
          if ( v13 )
            v14 = v28;
          else
            v14 = 1;
          luaL_checkstack();
          if ( v14 >= 1 )
          {
            for ( j = 0; j != v14; ++j )
              sub_4FD8D8(&v25, j, v2, v11);
          }
          lua_call();
        }
        if ( (unsigned int)lua_toboolean() )
        {
          if ( !(unsigned int)lua_isstring() )
          {
            lua_type();
            lua_typename();
            luaL_error();
          }
        }
        else
        {
          lua_settop();
          lua_pushlstring();
        }
        luaL_addvalue();
        if ( v11 <= (unsigned __int64)v2 )
          break;
      }
LABEL_51:
      v2 = (_BYTE *)v11;
      if ( v9 >= v8 || !v10 )
        goto LABEL_52;
    }
    if ( v2 >= v26 )
      goto LABEL_52;
    v20 = v24;
    if ( v24 >= (_BYTE *)&v25 )
    {
      luaL_prepbuffer();
      v20 = v24;
    }
    v24 = v20 + 1;
    v11 = (unsigned __int64)(v2 + 1);
    *v20 = *v2;
    goto LABEL_51;
  }
LABEL_52:
  luaL_addlstring();
  luaL_pushresult();
  lua_pushinteger();
  return 2;
}

