/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053EFC4
 * Mangled: sub_53EFC4
 * Demangled: sub_53EFC4
 *
 * Callers: 4
 *   0x000000000052C378  sub_52C378
 *   0x000000000052C570  sub_52C570
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053EF0C  sub_53EF0C
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 33
 *   insn=0x000000000053EFDC string=0x000000000053EFE0 "  "
 *   insn=0x000000000053EFE4 string=0x000000000053EFE8 "?"
 *   insn=0x000000000053EFE8 string=0x000000000053EFEC "b\n@"
 *   insn=0x000000000053EFF0 string=0x000000000053EFF4 "?"
 *   insn=0x000000000053EFF4 string=0x000000000053EFF8 " "
 *   insn=0x000000000053EFF8 string=0x000000000053EFFC "!"
 *   insn=0x000000000053F000 string=0x000000000053F004 "@$"
 *   insn=0x000000000053F008 string=0x000000000053F00C "!"
 *   insn=0x000000000053F00C string=0x000000000053F010 "#"
 *   insn=0x000000000053F010 string=0x000000000053F014 "a\n@"
 *   insn=0x000000000053F010 string=0x000000000059E538 "-+xX0123456789abcdef0123456789ABCDEF"
 *   insn=0x000000000053F014 string=0x000000000053F018 "bh`8!"
 *   insn=0x000000000053F018 string=0x000000000053F01C "!"
 *   insn=0x000000000053F024 string=0x000000000053F028 ""("
 *   insn=0x000000000053F028 string=0x000000000053F02C "A"
 *   insn=0x000000000053F02C string=0x000000000053F030 "!"
 *   insn=0x000000000053F034 string=0x000000000053F038 "!"
 *   insn=0x000000000053F038 string=0x000000000053F03C "#"
 *   insn=0x000000000053F03C string=0x000000000053F040 "a\n@"
 *   insn=0x000000000053F03C string=0x000000000059E560 "-+xX0123456789abcdefABCDEF"
 *   insn=0x000000000053F040 string=0x000000000053F044 "bh`8!"
 *   insn=0x000000000053F044 string=0x000000000053F048 "!"
 *   insn=0x000000000053F050 string=0x000000000053F054 """
 *   insn=0x000000000053F054 string=0x000000000053F058 "A"
 *   insn=0x000000000053F058 string=0x000000000053F05C "`\n@"
 *   insn=0x000000000053F060 string=0x000000000059E6B0 "true"
 *   insn=0x000000000053F078 string=0x000000000059E6B8 "false"
 *   insn=0x000000000053F094 string=0x000000000053F098 "R"
 *   insn=0x000000000053F098 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000053F09C string=0x000000000053F0A0 """
 *   insn=0x000000000053F0A4 string=0x000000000053F0A8 "BDF"
 *   insn=0x000000000053F0AC string=0x000000000053F0B0 "B@"
 *   insn=0x000000000053F0D8 string=0x000000000053F0DC "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53EFC4(__int64 a1)
{
  __int64 v1; // x1
  __int64 v3; // x2
  __int64 v4; // x0
  char *v5; // x3
  char v6; // w2
  __int64 v7; // x1
  __int64 v8; // x0
  char *v9; // x3
  char v10; // w2
  __int64 v11; // x1
  _QWORD *result; // x0
  __int64 v13; // x0

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
  {
    v13 = operator new(0x90u);
    *(_DWORD *)(v13 + 8) = 0;
    v1 = v13;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)v13 = off_6B70C0;
    *(_BYTE *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 64) = 0;
    *(_BYTE *)(v13 + 72) = 0;
    *(_BYTE *)(v13 + 73) = 0;
    *(_BYTE *)(v13 + 136) = 0;
    *(_QWORD *)(a1 + 16) = v13;
  }
  *(_BYTE *)(v1 + 72) = 46;
  *(_QWORD *)(v1 + 24) = 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 16) = "";
  *(_BYTE *)(v3 + 73) = 44;
  v4 = 0;
  v5 = off_6E8938[0];
  do
  {
    v6 = v5[v4];
    v7 = *(_QWORD *)(a1 + 16) + v4++;
    *(_BYTE *)(v7 + 74) = v6;
  }
  while ( v4 != 36 );
  v8 = 0;
  v9 = off_6E8930[0];
  do
  {
    v10 = v9[v8];
    v11 = *(_QWORD *)(a1 + 16) + v8++;
    *(_BYTE *)(v11 + 110) = v10;
  }
  while ( v8 != 26 );
  result = *(_QWORD **)(a1 + 16);
  result[5] = "true";
  result[6] = 4;
  result[7] = "false";
  result[8] = 5;
  return result;
}

