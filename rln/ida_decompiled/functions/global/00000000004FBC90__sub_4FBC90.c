/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FBC90
 * Mangled: sub_4FBC90
 * Demangled: sub_4FBC90
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F4100  .strncpy
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FA030  .strchr
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x00000000001FF230  luaL_checknumber(lua_State *,int)
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *   0x0000000000203230  .strlen
 *   0x0000000000203240  .sprintf
 *   0x0000000000203790  luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *   0x0000000000203CA0  luaL_addvalue(luaL_Buffer *)
 *
 * Referenced strings: 115
 *   insn=0x00000000004FBCAC string=0x00000000004FBCB0 "H"
 *   insn=0x00000000004FBCB4 string=0x00000000004FBCB8 ""
 *   insn=0x00000000004FBCC4 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FBCD4 string=0x00000000004FBCD8 "z"
 *   insn=0x00000000004FBCD8 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FBCF0 string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FBCF4 string=0x00000000004FBCF8 "k$"
 *   insn=0x00000000004FBCF8 string=0x00000000004FBCFC "v"
 *   insn=0x00000000004FBD10 string=0x00000000004FBD14 "4"
 *   insn=0x00000000004FBD20 string=0x00000000004FC120 "h"
 *   insn=0x00000000004FBD34 string=0x00000000005997D3 "no value"
 *   insn=0x00000000004FBD3C string=0x00000000004FBD40 "BL"
 *   insn=0x00000000004FBD44 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FBD50 string=0x00000000004FBD54 "\t"
 *   insn=0x00000000004FBD54 string=0x00000000004FBD58 ")}@"
 *   insn=0x00000000004FBD58 string=0x00000000004FBD5C "?"
 *   insn=0x00000000004FBD5C string=0x00000000004FBD60 "h"
 *   insn=0x00000000004FBD60 string=0x00000000004FBDAC "\t"
 *   insn=0x00000000004FBD64 string=0x00000000004FBD68 ")"
 *   insn=0x00000000004FBD68 string=0x00000000004FBD6C "\t"
 *   insn=0x00000000004FBD6C string=0x00000000004FBD70 ""
 *   insn=0x00000000004FBD70 string=0x00000000004FBD74 ""
 *   insn=0x00000000004FBD74 string=0x00000000004FBD78 ""
 *   insn=0x00000000004FBD7C string=0x00000000004FBD80 "$"
 *   insn=0x00000000004FBD88 string=0x00000000004FBD8C "\n"
 *   insn=0x00000000004FBD8C string=0x00000000004FBD90 "{"
 *   insn=0x00000000004FBD94 string=0x00000000004FBD98 "\t"
 *   insn=0x00000000004FBDAC string=0x00000000004FBDB0 "?"
 *   insn=0x00000000004FBDB4 string=0x00000000004FBDCC ""
 *   insn=0x00000000004FBDB8 string=0x000000000059AE62 "invalid format (repeated flags)"
 *   insn=0x00000000004FBDBC string=0x00000000004FBDC0 "!"
 *   insn=0x00000000004FBDC0 string=0x00000000004FBDC4 ""
 *   insn=0x00000000004FBDC4 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FBDCC string=0x00000000004FBDD0 ""
 *   insn=0x00000000004FBDD4 string=0x00000000004FBDD8 "'"
 *   insn=0x00000000004FBDDC string=0x00000000004FBDE0 "*"
 *   insn=0x00000000004FBDE0 string=0x00000000004FBDE4 "J"
 *   insn=0x00000000004FBDE4 string=0x00000000004FBDE8 "_)"
 *   insn=0x00000000004FBDE8 string=0x00000000004FBDEC ";1"
 *   insn=0x00000000004FBDEC string=0x00000000004FBDF0 "h"
 *   insn=0x00000000004FBDF4 string=0x00000000004FBDF8 "a"
 *   insn=0x00000000004FBDF8 string=0x00000000004FBDFC "h"
 *   insn=0x00000000004FBDF8 string=0x00000000004FBE24 ""
 *   insn=0x00000000004FBDFC string=0x00000000004FBE00 ""
 *   insn=0x00000000004FBE04 string=0x00000000004FBE08 "h'"
 *   insn=0x00000000004FBE0C string=0x00000000004FBE10 "*"
 *   insn=0x00000000004FBE10 string=0x00000000004FBE14 "J"
 *   insn=0x00000000004FBE14 string=0x00000000004FBE18 "_)"
 *   insn=0x00000000004FBE18 string=0x00000000004FBE1C ";1"
 *   insn=0x00000000004FBE1C string=0x00000000004FBE20 "h"
 *   insn=0x00000000004FBE30 string=0x000000000059AE82 "invalid format (width or precision too long)"
 *   insn=0x00000000004FBE34 string=0x00000000004FBE38 "!:"
 *   insn=0x00000000004FBE44 string=0x00000000004FBE48 "h"
 *   insn=0x00000000004FBE5C string=0x00000000004FBE60 "_k88b"
 *   insn=0x00000000004FBE5C string=0x00000000001F4100 "P'"
 *   insn=0x00000000004FBE60 string=0x00000000004FBE64 "b"
 *   insn=0x00000000004FBE64 string=0x00000000004FBE68 "H"
 *   insn=0x00000000004FBE74 string=0x00000000004FBE7C "(y"
 *   insn=0x00000000004FBE74 string=0x000000000059AA28 "`"
 *   insn=0x00000000004FBE7C string=0x00000000004FBE80 ""
 *   insn=0x00000000004FBEAC string=0x00000000004FBEB0 ""
 *   insn=0x00000000004FBEB0 string=0x00000000004FBEB4 "\t"
 *   insn=0x00000000004FBEC0 string=0x00000000004FBEC4 "\n"
 *   insn=0x00000000004FBEC4 string=0x00000000004FBEC8 "\t"
 *   insn=0x00000000004FBEE4 string=0x00000000004FBEE8 ""
 *   insn=0x00000000004FBEE8 string=0x00000000004FBEEC "\t"
 *   insn=0x00000000004FBEF8 string=0x00000000004FBEFC "\n"
 *   insn=0x00000000004FBEFC string=0x00000000004FBF00 "\t"
 *   insn=0x00000000004FBF34 string=0x00000000004FBF38 "C"
 *   insn=0x00000000004FBF58 string=0x00000000004FBF5C "5"
 *   insn=0x00000000004FBF5C string=0x00000000001FA030 "0'"
 *   insn=0x00000000004FBF68 string=0x00000000004FBF6C ")"
 *   insn=0x00000000004FBF78 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FBF7C string=0x00000000004FBF80 "H"
 *   insn=0x00000000004FBF88 string=0x00000000004FBF8C "~"
 *   insn=0x00000000004FBFCC string=0x00000000004FBFDC "\t"
 *   insn=0x00000000004FBFE0 string=0x00000000004FBFE4 "I"
 *   insn=0x00000000004FBFE4 string=0x00000000004FBFE8 "\t"
 *   insn=0x00000000004FBFF0 string=0x00000000004FBFFC "\t"
 *   insn=0x00000000004FC008 string=0x00000000004FC00C "?"
 *   insn=0x00000000004FC010 string=0x00000000004FC040 "?q"
 *   insn=0x00000000004FC014 string=0x000000000059AAF8 "4"
 *   insn=0x00000000004FC01C string=0x00000000004FC020 "Hy"
 *   insn=0x00000000004FC020 string=0x00000000004FC024 ""
 *   insn=0x00000000004FC02C string=0x000000000059AEB2 "\000"
 *   insn=0x00000000004FC034 string=0x00000000004FC038 "!"
 *   insn=0x00000000004FC038 string=0x00000000004FC03C "!"
 *   insn=0x00000000004FC050 string=0x00000000004FC060 "\t"
 *   insn=0x00000000004FC054 string=0x00000000004FC058 "n"
 *   insn=0x00000000004FC068 string=0x00000000004FC06C "\t"
 *   insn=0x00000000004FC07C string=0x00000000004FC080 "d"
 *   insn=0x00000000004FC088 string=0x00000000004FC08C "\n"
 *   insn=0x00000000004FC090 string=0x00000000004FC094 "\t"
 *   insn=0x00000000004FC0A0 string=0x00000000004FC0A4 """
 *   insn=0x00000000004FC0A4 string=0x00000000004FC0A8 ")"
 *   insn=0x00000000004FC0B0 string=0x000000000059AEAF "\r"
 *   insn=0x00000000004FC0B8 string=0x00000000004FC0BC "!"
 *   insn=0x00000000004FC0C8 string=0x00000000004FC0CC "Q"
 *   insn=0x00000000004FC0E4 string=0x00000000004FC0F4 "\t"
 *   insn=0x00000000004FC0E8 string=0x00000000004FC0EC "I"
 *   insn=0x00000000004FC0F8 string=0x00000000004FC0FC "I"
 *   insn=0x00000000004FC0FC string=0x00000000004FC100 "\t"
 *   insn=0x00000000004FC124 string=0x00000000004FC128 "A"
 *   insn=0x00000000004FC134 string=0x00000000004FC138 "a"
 *   insn=0x00000000004FC150 string=0x00000000004FC154 "?"
 *   insn=0x00000000004FC158 string=0x00000000004FC16C "*"
 *   insn=0x00000000004FC15C string=0x00000000004FC160 ","
 *   insn=0x00000000004FC160 string=0x00000000004FC164 "h"
 *   insn=0x00000000004FC16C string=0x00000000004FC170 "{"
 *   insn=0x00000000004FC174 string=0x00000000004FC178 "("
 *   insn=0x00000000004FC190 string=0x00000000004FC194 ""
 *   insn=0x00000000004FC1A0 string=0x00000000004FC1D8 ">"
 *   insn=0x00000000004FC1C4 string=0x000000000059AE40 "invalid option '%%%c' to 'format'"
 *   insn=0x00000000004FC1CC string=0x00000000004FC1D0 ""
 *   insn=0x00000000004FC1D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FBC90()
{
  unsigned __int8 *v0; // x27
  unsigned __int8 *v1; // x22
  int v2; // w28
  unsigned __int8 *v4; // x24
  int v5; // w8
  int v6; // t1
  char v7; // w9
  char *v8; // x8
  unsigned __int8 *v9; // x8
  unsigned __int8 *v10; // x27
  int v11; // w8
  unsigned __int8 *v12; // x27
  int v13; // t1
  unsigned __int8 *v14; // x8
  int v15; // t1
  char *v16; // x8
  unsigned __int8 v17; // w9
  double v18; // d0
  __int64 v19; // x2
  char *v20; // x8
  unsigned __int8 v21; // w9
  double v22; // d0
  __int64 v23; // x23
  double v24; // d0
  __int64 v25; // x0
  char *v26; // x8
  _BYTE *v27; // x23
  unsigned __int64 v28; // x8
  int v29; // w9
  char *v30; // x8
  char *v31; // x8
  char *v32; // x8
  int v33; // w8
  const char *v34; // x23
  char *v35; // x9
  int v37; // [xsp+14h] [xbp-69Ch]
  __int64 v38; // [xsp+18h] [xbp-698h]
  unsigned __int64 v39; // [xsp+20h] [xbp-690h]
  char s[512]; // [xsp+2Ch] [xbp-684h] BYREF
  char format; // [xsp+22Ch] [xbp-484h] BYREF
  char v42[19]; // [xsp+22Dh] [xbp-483h] BYREF
  char *v43; // [xsp+240h] [xbp-470h]
  __int64 v44; // [xsp+658h] [xbp-58h] BYREF

  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v37 = lua_gettop();
  v0 = (unsigned __int8 *)luaL_checklstring();
  luaL_buffinit();
  if ( v38 >= 1 )
  {
    v1 = &v0[v38];
    v2 = 1;
    do
    {
      while ( 1 )
      {
        v33 = *v0;
        if ( v33 != 37 )
          break;
        v34 = (const char *)(v0 + 1);
        v5 = v0[1];
        if ( v5 == 37 )
        {
          v8 = v43;
          if ( v43 >= (char *)&v44 )
          {
            luaL_prepbuffer();
            v7 = *v34;
            v8 = v43;
          }
          else
          {
            v7 = 37;
          }
          v0 += 2;
          v43 = v8 + 1;
          *v8 = v7;
          if ( v0 >= v1 )
            goto LABEL_74;
        }
        else
        {
          if ( v2++ >= v37 )
            luaL_argerror();
          if ( v0[1] )
          {
            v4 = v0 + 1;
            do
            {
              if ( (unsigned int)(char)v5 > 0x3FuLL )
                break;
              if ( ((1LL << v5) & 0x1280900000001LL) == 0 )
                break;
              v6 = *++v4;
              LOBYTE(v5) = v6;
            }
            while ( v6 );
          }
          else
          {
            v4 = v0 + 1;
          }
          if ( (unsigned __int64)(v4 - (unsigned __int8 *)v34) >= 6 )
            luaL_error();
          if ( (unsigned int)(unsigned __int8)v5 - 48 >= 0xA )
            v9 = v4;
          else
            v9 = v4 + 1;
          if ( (unsigned int)*v9 - 48 >= 0xA )
            v10 = v9;
          else
            v10 = v9 + 1;
          v11 = *v10;
          if ( v11 == 46 )
          {
            v13 = v10[1];
            v12 = v10 + 1;
            if ( (unsigned int)(v13 - 48) >= 0xA )
              v14 = v12;
            else
              v14 = v12 + 1;
            if ( (unsigned int)*v14 - 48 >= 0xA )
              v10 = v14;
            else
              v10 = v14 + 1;
            v11 = *v10;
          }
          if ( (unsigned int)(v11 - 48) <= 9 )
            luaL_error();
          format = 37;
          strncpy(v42, v34, v10 - (unsigned __int8 *)v34 + 1);
          v42[v10 - (unsigned __int8 *)v34 + 1] = 0;
          v15 = (char)*v10;
          v0 = v10 + 1;
          switch ( v15 )
          {
            case 'E':
            case 'G':
            case 'e':
            case 'f':
            case 'g':
              luaL_checknumber();
              sprintf(s, &format);
              goto LABEL_38;
            case 'X':
            case 'o':
            case 'u':
            case 'x':
              v16 = &v42[strlen(&format) - 1];
              v17 = *(v16 - 1);
              *(_WORD *)(v16 - 1) = 108;
              *(_WORD *)v16 = v17;
              luaL_checknumber();
              v19 = (unsigned __int64)v18;
              goto LABEL_37;
            case 'c':
              luaL_checknumber();
              sprintf(s, &format, (unsigned int)(int)v24);
              goto LABEL_38;
            case 'd':
            case 'i':
              v20 = &v42[strlen(&format) - 1];
              v21 = *(v20 - 1);
              *(_WORD *)(v20 - 1) = 108;
              *(_WORD *)v20 = v21;
              luaL_checknumber();
              v19 = (__int64)v22;
LABEL_37:
              sprintf(s, &format, v19);
              goto LABEL_38;
            case 'q':
              v25 = luaL_checklstring();
              v26 = v43;
              v27 = (_BYTE *)v25;
              if ( v43 >= (char *)&v44 )
              {
                luaL_prepbuffer();
                v26 = v43;
              }
              v43 = v26 + 1;
              *v26 = 34;
              v28 = v39;
              while ( 1 )
              {
                v39 = v28 - 1;
                if ( !v28 )
                  break;
                v29 = (char)*v27;
                switch ( *v27 )
                {
                  case 0:
                  case 0xD:
                    luaL_addlstring();
                    goto LABEL_48;
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 0xB:
                  case 0xC:
                  case 0xE:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1A:
                  case 0x1B:
                  case 0x1C:
                  case 0x1D:
                  case 0x1E:
                  case 0x1F:
                  case 0x20:
                  case 0x21:
                    goto LABEL_58;
                  case 0xA:
                  case 0x22:
                    goto LABEL_52;
                  default:
                    if ( v29 == 92 )
                    {
LABEL_52:
                      v30 = v43;
                      if ( v43 >= (char *)&v44 )
                      {
                        luaL_prepbuffer();
                        v30 = v43;
                      }
                      v43 = v30 + 1;
                      *v30 = 92;
                      v31 = v43;
                      if ( v43 >= (char *)&v44 )
                      {
                        luaL_prepbuffer();
                        v31 = v43;
                      }
                      LOBYTE(v29) = *v27;
                    }
                    else
                    {
LABEL_58:
                      v31 = v43;
                      if ( v43 >= (char *)&v44 )
                      {
                        luaL_prepbuffer();
                        LOBYTE(v29) = *v27;
                        v31 = v43;
                      }
                    }
                    v43 = v31 + 1;
                    *v31 = v29;
LABEL_48:
                    v28 = v39;
                    ++v27;
                    break;
                }
              }
              v32 = v43;
              if ( v43 >= (char *)&v44 )
              {
                luaL_prepbuffer();
                v32 = v43;
              }
              v43 = v32 + 1;
              *v32 = 34;
              if ( v0 >= v1 )
                goto LABEL_74;
              continue;
            case 's':
              v23 = luaL_checklstring();
              if ( strchr(&format, 46) || v39 <= 0x63 )
              {
                sprintf(s, &format, v23);
LABEL_38:
                strlen(s);
                luaL_addlstring();
                if ( v0 >= v1 )
                  goto LABEL_74;
              }
              else
              {
                lua_pushvalue();
                luaL_addvalue();
                if ( v0 >= v1 )
                  goto LABEL_74;
              }
              break;
            default:
              luaL_error();
          }
        }
      }
      v35 = v43;
      if ( v43 >= (char *)&v44 )
      {
        luaL_prepbuffer();
        LOBYTE(v33) = *v0;
        v35 = v43;
      }
      ++v0;
      v43 = v35 + 1;
      *v35 = v33;
    }
    while ( v0 < v1 );
  }
LABEL_74:
  luaL_pushresult();
  return 1;
}

