/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E880C
 * Mangled: _Z16lua_pushcclosureP9lua_StatePFiS0_Ei
 * Demangled: lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *
 * Callers: 1
 *   0x00000000002034A0  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *
 * Callees: 2
 *   0x00000000004ED3B8  sub_4ED3B8
 *   0x00000000004EDCB0  sub_4EDCB0
 *
 * Referenced strings: 25
 *   insn=0x00000000004E881C string=0x00000000004E8820 "h"
 *   insn=0x00000000004E8828 string=0x00000000004E882C "\t!G"
 *   insn=0x00000000004E8830 string=0x00000000004E8834 "c"
 *   insn=0x00000000004E8834 string=0x00000000004E8840 "h"
 *   insn=0x00000000004E8840 string=0x00000000004E8844 "i*@"
 *   insn=0x00000000004E884C string=0x00000000004E8850 ""
 *   insn=0x00000000004E884C string=0x00000000004E8860 "h"
 *   insn=0x00000000004E8850 string=0x00000000004E8854 ""
 *   insn=0x00000000004E8854 string=0x00000000004E8858 "a"
 *   insn=0x00000000004E8874 string=0x00000000004E8878 "h\n@"
 *   insn=0x00000000004E8878 string=0x00000000004E887C ""
 *   insn=0x00000000004E887C string=0x00000000004E8880 "h\n"
 *   insn=0x00000000004E8888 string=0x00000000004E888C ")"
 *   insn=0x00000000004E888C string=0x00000000004E8890 ""
 *   insn=0x00000000004E8890 string=0x00000000004E8894 "\n"
 *   insn=0x00000000004E8894 string=0x00000000004E8898 ""
 *   insn=0x00000000004E889C string=0x00000000004E88A0 ")A"
 *   insn=0x00000000004E88A0 string=0x00000000004E88A4 "j"
 *   insn=0x00000000004E88A4 string=0x00000000004E88A8 ""
 *   insn=0x00000000004E88A8 string=0x00000000004E88AC "h!"
 *   insn=0x00000000004E88AC string=0x00000000004E88B0 "h\n@"
 *   insn=0x00000000004E88BC string=0x00000000004E88C0 "\t\t"
 *   insn=0x00000000004E88C0 string=0x00000000004E88C4 "h\n@"
 *   insn=0x00000000004E88C4 string=0x00000000004E88C8 "A"
 *   insn=0x00000000004E88C8 string=0x00000000004E88CC "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushcclosure(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // x8
  _QWORD *v7; // x8
  __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x11

  if ( *(_QWORD *)(a1[4] + 120LL) >= *(_QWORD *)(a1[4] + 112LL) )
    sub_4EDCB0(a1);
  v6 = a1[5];
  if ( v6 == a1[10] )
    v7 = a1 + 15;
  else
    v7 = (_QWORD *)(**(_QWORD **)(v6 + 8) + 24LL);
  result = sub_4ED3B8(a1, a3, *v7);
  *(_QWORD *)(result + 32) = a2;
  v9 = a1[2] - 16LL * (int)a3;
  a1[2] = v9;
  if ( a3 )
  {
    v10 = 16LL * (int)a3;
    do
    {
      v11 = v9 + v10;
      v12 = result + v10;
      --a3;
      v10 -= 16;
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(v11 - 16);
      *(_DWORD *)(v12 + 32) = *(_DWORD *)(v11 - 8);
      v9 = a1[2];
    }
    while ( a3 );
  }
  *(_QWORD *)v9 = result;
  *(_DWORD *)(v9 + 8) = 6;
  a1[2] += 16LL;
  return result;
}

