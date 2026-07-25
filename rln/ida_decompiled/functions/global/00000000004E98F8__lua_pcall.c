/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E98F8
 * Mangled: _Z9lua_pcallP9lua_Stateiii
 * Demangled: lua_pcall(lua_State *,int,int,int)
 *
 * Callers: 1
 *   0x00000000001F6090  lua_pcall(lua_State *,int,int,int)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004E9A78  sub_4E9A78
 *   0x00000000004EC9BC  sub_4EC9BC
 *
 * Referenced strings: 51
 *   insn=0x00000000004E9908 string=0x00000000004E990C "U"
 *   insn=0x00000000004E991C string=0x00000000004E9920 "c"
 *   insn=0x00000000004E9920 string=0x00000000004E994C "i"@"
 *   insn=0x00000000004E9928 string=0x00000000004E992C "i"A"
 *   insn=0x00000000004E9930 string=0x00000000004E9938 ""
 *   insn=0x00000000004E9938 string=0x00000000004E993C "A"
 *   insn=0x00000000004E9940 string=0x00000000004E9944 "1"
 *   insn=0x00000000004E9944 string=0x00000000004E9948 "\t"
 *   insn=0x00000000004E9948 string=0x00000000004E996C "i"@"
 *   insn=0x00000000004E9950 string=0x00000000004E9954 ""
 *   insn=0x00000000004E9954 string=0x00000000004E9974 "h\n@"
 *   insn=0x00000000004E995C string=0x00000000004E9960 "+"
 *   insn=0x00000000004E9960 string=0x00000000004E9964 "h\n@"
 *   insn=0x00000000004E9960 string=0x00000000004E99E4 "("
 *   insn=0x00000000004E9964 string=0x00000000004E9968 ""
 *   insn=0x00000000004E9974 string=0x00000000004E9978 "*"
 *   insn=0x00000000004E997C string=0x00000000004E9984 ""
 *   insn=0x00000000004E997C string=0x00000000004E9A78 "("
 *   insn=0x00000000004E9998 string=0x00000000004E999C ""
 *   insn=0x00000000004E99A4 string=0x00000000004E99A8 "h"
 *   insn=0x00000000004E99A8 string=0x00000000004E99AC "i\n@"
 *   insn=0x00000000004E99AC string=0x00000000004E99B0 "\n\t@"
 *   insn=0x00000000004E99B0 string=0x00000000004E99B4 "?"
 *   insn=0x00000000004E99B4 string=0x00000000004E99B8 "C"
 *   insn=0x00000000004E99B8 string=0x00000000004E99BC "\t\t"
 *   insn=0x00000000004E99C8 string=0x00000000004E99CC "A"
 *   insn=0x00000000004E99E8 string=0x00000000004E99EC "@"
 *   insn=0x00000000004E99EC string=0x00000000004E99F0 ""
 *   insn=0x00000000004E99EC string=0x00000000004E9A14 "h"
 *   insn=0x00000000004E99F4 string=0x00000000004E99F8 " "
 *   insn=0x00000000004E99F8 string=0x00000000004E9A1C "h"
 *   insn=0x00000000004E9A04 string=0x00000000004E9A08 "h"
 *   insn=0x00000000004E9A04 string=0x00000000004E9A40 "h"
 *   insn=0x00000000004E9A08 string=0x00000000004E9A0C ""
 *   insn=0x00000000004E9A20 string=0x00000000004E9A24 ""
 *   insn=0x00000000004E9A24 string=0x00000000004E9A28 ""
 *   insn=0x00000000004E9A28 string=0x00000000004E9A2C "\t@"
 *   insn=0x00000000004E9A2C string=0x00000000004E9A30 "h""
 *   insn=0x00000000004E9A30 string=0x00000000004E9A34 "j"
 *   insn=0x00000000004E9A34 string=0x00000000004E9A38 "iF"
 *   insn=0x00000000004E9A40 string=0x00000000004E9A44 ")"
 *   insn=0x00000000004E9A44 string=0x00000000004E9A48 ")"
 *   insn=0x00000000004E9A4C string=0x00000000004E9A50 ""
 *   insn=0x00000000004E9A50 string=0x00000000004E9A54 "k!/"
 *   insn=0x00000000004E9A54 string=0x00000000004E9A58 ""
 *   insn=0x00000000004E9A58 string=0x00000000004E9A5C "\n-@9"
 *   insn=0x00000000004E9A5C string=0x00000000004E9A60 ""
 *   insn=0x00000000004E9A60 string=0x00000000004E9A64 "a"
 *   insn=0x00000000004E9A64 string=0x00000000004E9A68 "?"
 *   insn=0x00000000004E9A68 string=0x00000000004E9A6C "h"
 *   insn=0x00000000004E9A74 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pcall(__int64 a1, int a2, int a3, int a4)
{
  __int64 *v6; // x8
  __int64 v7; // x9
  char *v8; // x4
  __int64 v9; // x3
  __int64 result; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x9
  __int64 v14; // x9
  __int64 v15; // x8
  int v16; // w10
  __int64 v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+10h] [xbp-30h]
  __int64 v19; // [xsp+18h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a4 )
  {
    if ( a4 < 1 )
    {
      if ( a4 < -9999 )
      {
        switch ( a4 )
        {
          case -10002:
            v6 = (__int64 *)(a1 + 120);
            break;
          case -10001:
            v13 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
            v6 = (__int64 *)(a1 + 136);
            *(_DWORD *)(a1 + 144) = 5;
            *(_QWORD *)(a1 + 136) = v13;
            break;
          case -10000:
            v6 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
            break;
          default:
            v14 = -10002LL - a4;
            v15 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
            v16 = *(unsigned __int8 *)(v15 + 11);
            v6 = (__int64 *)(v15 + 16 * v14 + 24);
            if ( (int)v14 > v16 )
              v6 = &qword_599BC8;
            break;
        }
      }
      else
      {
        v6 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a4);
      }
    }
    else
    {
      v6 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a4 - 16);
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 16) )
        v6 = &qword_599BC8;
    }
    v7 = *(_QWORD *)(a1 + 64);
    v8 = (char *)v6 - v7;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 64);
    v8 = 0;
  }
  v9 = *(_QWORD *)(a1 + 16) - 16LL * (a2 + 1) - v7;
  v17 = *(_QWORD *)(a1 + 16) - 16LL * (a2 + 1);
  v18 = a3;
  result = sub_4EC9BC(a1, sub_4E9A78, &v17, v9, v8);
  if ( a3 == -1 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(_QWORD *)(a1 + 16);
    if ( v12 >= *(_QWORD *)(v11 + 16) )
      *(_QWORD *)(v11 + 16) = v12;
  }
  return result;
}

