/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F98C0
 * Mangled: _Z15luaL_prepbufferP11luaL_Buffer
 * Demangled: luaL_prepbuffer(luaL_Buffer *)
 *
 * Callers: 1
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *
 * Callees: 3
 *   0x00000000001F5A00  lua_objlen(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *
 * Referenced strings: 19
 *   insn=0x00000000004F98D8 string=0x00000000004F98DC "h"
 *   insn=0x00000000004F98E0 string=0x00000000004F98E4 " "
 *   insn=0x00000000004F98EC string=0x00000000004F98F0 "0"
 *   insn=0x00000000004F98F0 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F98F8 string=0x00000000004F98FC "\t"
 *   insn=0x00000000004F9904 string=0x00000000004F9908 ""
 *   insn=0x00000000004F9914 string=0x00000000004F9918 ":"
 *   insn=0x00000000004F9918 string=0x00000000001F5A00 "P'"
 *   insn=0x00000000004F9928 string=0x00000000004F992C "5"
 *   insn=0x00000000004F9930 string=0x00000000004F9934 "\t"
 *   insn=0x00000000004F9934 string=0x00000000004F9938 "?!"
 *   insn=0x00000000004F9944 string=0x00000000004F9948 "J"
 *   insn=0x00000000004F9948 string=0x00000000004F994C "_"
 *   insn=0x00000000004F994C string=0x00000000004F9950 "\t"
 *   insn=0x00000000004F995C string=0x00000000004F9960 "7"
 *   insn=0x00000000004F9960 string=0x00000000004F9964 ""
 *   insn=0x00000000004F996C string=0x00000000004F9970 " $"
 *   insn=0x00000000004F9978 string=0x00000000004F997C ")"
 *   insn=0x00000000004F997C string=0x00000000004F9980 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_prepbuffer(__int64 a1)
{
  __int64 v2; // x19
  int v3; // w8
  unsigned __int64 v4; // x23
  int v5; // w22
  unsigned __int64 v6; // x0
  int v7; // w8
  int v8; // w10
  unsigned __int64 v9; // x9

  v2 = a1 + 24;
  if ( *(_QWORD *)a1 != a1 + 24 )
  {
    lua_pushlstring();
    v3 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v2;
    *(_DWORD *)(a1 + 8) = v3 + 1;
    if ( v3 >= 1 )
    {
      v4 = lua_objlen();
      v5 = 1;
      do
      {
        v6 = lua_objlen();
        v7 = *(_DWORD *)(a1 + 8);
        v8 = v4 > v6 || v7 - v5 > 8;
        if ( v8 )
          v9 = v6;
        else
          v9 = 0;
        v5 += v8;
        if ( !v8 )
          break;
        v4 += v9;
      }
      while ( v5 < v7 );
      lua_concat();
      *(_DWORD *)(a1 + 8) += 1 - v5;
    }
  }
  return v2;
}

