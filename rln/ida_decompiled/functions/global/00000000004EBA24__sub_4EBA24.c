/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EBA24
 * Mangled: sub_4EBA24
 * Demangled: sub_4EBA24
 *
 * Callers: 7
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EBBD4  sub_4EBBD4
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC3A4  sub_4EC3A4
 *   0x00000000004EC700  lua_resume(lua_State *,int)
 *   0x00000000004ECC2C  sub_4ECC2C
 *   0x00000000004EE534  sub_4EE534
 *
 * Callees: 2
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *
 * Referenced strings: 40
 *   insn=0x00000000004EBA34 string=0x00000000004EBA38 "t"@"
 *   insn=0x00000000004EBA44 string=0x00000000004EBA48 ""
 *   insn=0x00000000004EBA48 string=0x00000000004EBA4C "hZ"
 *   insn=0x00000000004EBA64 string=0x00000000004EBA70 "j\n@"
 *   insn=0x00000000004EBA70 string=0x00000000004EBA74 "iN@"
 *   insn=0x00000000004EBA74 string=0x00000000004EBA78 ""
 *   insn=0x00000000004EBA78 string=0x00000000004EBA7C "h"
 *   insn=0x00000000004EBA7C string=0x00000000004EBA80 "H"
 *   insn=0x00000000004EBA80 string=0x00000000004EBA84 ""
 *   insn=0x00000000004EBA84 string=0x00000000004EBA88 "vZ"
 *   insn=0x00000000004EBA88 string=0x00000000004EBA8C "h\n"
 *   insn=0x00000000004EBA90 string=0x00000000004EBA94 "*\t@"
 *   insn=0x00000000004EBA90 string=0x00000000004EBAC8 "i*@"
 *   insn=0x00000000004EBA94 string=0x00000000004EBA98 "("
 *   insn=0x00000000004EBA98 string=0x00000000004EBA9C "J"
 *   insn=0x00000000004EBA9C string=0x00000000004EBAA0 "\n"
 *   insn=0x00000000004EBAA0 string=0x00000000004EBAA4 "*\t"
 *   insn=0x00000000004EBAA4 string=0x00000000004EBAA8 ""
 *   insn=0x00000000004EBAA8 string=0x00000000004EBAAC "\t\t@"
 *   insn=0x00000000004EBAAC string=0x00000000004EBAB0 "j"@"
 *   insn=0x00000000004EBAB0 string=0x00000000004EBAB4 ")"
 *   insn=0x00000000004EBAB4 string=0x00000000004EBAB8 "I"
 *   insn=0x00000000004EBAB8 string=0x00000000004EBABC "\t\t"
 *   insn=0x00000000004EBABC string=0x00000000004EBAC0 ""
 *   insn=0x00000000004EBAC0 string=0x00000000004EBAC4 "H"
 *   insn=0x00000000004EBAC8 string=0x00000000004EBACC "j"
 *   insn=0x00000000004EBACC string=0x00000000004EBAD0 "h"@"
 *   insn=0x00000000004EBAD0 string=0x00000000004EBAD4 "?"
 *   insn=0x00000000004EBAD8 string=0x00000000004EBADC "-"
 *   insn=0x00000000004EBAD8 string=0x00000000004EBB0C "i"
 *   insn=0x00000000004EBADC string=0x00000000004EBAE0 ","
 *   insn=0x00000000004EBAE0 string=0x00000000004EBAE4 "k"
 *   insn=0x00000000004EBAEC string=0x00000000004EBAF0 ""
 *   insn=0x00000000004EBAF4 string=0x00000000004EBAF8 ""
 *   insn=0x00000000004EBAF8 string=0x00000000004EBAFC "-"
 *   insn=0x00000000004EBAFC string=0x00000000004EBB00 ","
 *   insn=0x00000000004EBB00 string=0x00000000004EBB04 "?"
 *   insn=0x00000000004EBB0C string=0x00000000004EBB10 ")"
 *   insn=0x00000000004EBB10 string=0x00000000004EBB14 ""
 *   insn=0x00000000004EBB14 string=0x00000000004EBB18 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EBA24(__int64 a1, int a2)
{
  __int64 v3; // x20
  int v5; // w22
  __int64 result; // x0
  __int64 v7; // x10
  __int64 v8; // x9
  _QWORD *v9; // x8
  _QWORD *v10; // x9
  unsigned __int64 v11; // x10
  __int64 i; // x8
  __int64 v13; // x11
  __int64 v14; // x12

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2 + 6;
  if ( a2 < -7 )
    sub_4EEDE0(a1);
  result = sub_4EED74(a1, *(_QWORD *)(a1 + 64), 16LL * *(int *)(a1 + 88), 16LL * v5);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 56) = result + 16LL * a2;
  *(_QWORD *)(a1 + 64) = result;
  *(_DWORD *)(a1 + 88) = v5;
  *(_QWORD *)(a1 + 16) = result + v7 - v3;
  if ( v8 )
  {
    v9 = *(_QWORD **)v8;
    for ( *(_QWORD *)(v8 + 16) = result + *(_QWORD *)(v8 + 16) - v3; v9; v9 = (_QWORD *)*v9 )
      v9[2] = *(_QWORD *)(a1 + 64) + v9[2] - v3;
  }
  v10 = *(_QWORD **)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 40);
  for ( i = *(_QWORD *)(a1 + 64); (unsigned __int64)v10 <= v11; v10 += 5 )
  {
    v13 = i + v10[2] - v3;
    v14 = i + *v10 - v3;
    v10[1] = i + v10[1] - v3;
    v10[2] = v13;
    *v10 = v14;
  }
  *(_QWORD *)(a1 + 24) = i + *(_QWORD *)(a1 + 24) - v3;
  return result;
}

