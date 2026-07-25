/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053ECF0
 * Mangled: sub_53ECF0
 * Demangled: sub_53ECF0
 *
 * Callers: 3
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000054DED8  sub_54DED8
 *   0x000000000054E430  sub_54E430
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 47
 *   insn=0x000000000053ED0C string=0x000000000053ED10 ""$"
 *   insn=0x000000000053ED18 string=0x000000000053ED1C " "
 *   insn=0x000000000053ED1C string=0x000000000053ED20 ""("
 *   insn=0x000000000053ED24 string=0x000000000053ED28 "  "
 *   insn=0x000000000053ED28 string=0x000000000053ED2C "B"
 *   insn=0x000000000053ED2C string=0x000000000053ED30 " ("
 *   insn=0x000000000053ED30 string=0x000000000053ED34 "@"
 *   insn=0x000000000053ED34 string=0x000000000053ED38 """
 *   insn=0x000000000053ED38 string=0x000000000053ED3C "?"
 *   insn=0x000000000053ED3C string=0x000000000053ED40 "?"
 *   insn=0x000000000053ED40 string=0x000000000053ED44 "?$"
 *   insn=0x000000000053ED44 string=0x000000000053ED48 "?,"
 *   insn=0x000000000053ED48 string=0x000000000053ED4C "?`"
 *   insn=0x000000000053ED54 string=0x000000000053ED58 " d"
 *   insn=0x000000000053ED58 string=0x000000000053ED5C "a\n@"
 *   insn=0x000000000053ED5C string=0x000000000053ED60 " h"
 *   insn=0x000000000053ED60 string=0x000000000053ED64 "A"
 *   insn=0x000000000053ED64 string=0x000000000053ED68 "`\n@"
 *   insn=0x000000000053ED68 string=0x000000000053ED6C "!HB"
 *   insn=0x000000000053ED6C string=0x000000000053ED70 "!"
 *   insn=0x000000000053ED70 string=0x000000000053ED74 """
 *   insn=0x000000000053ED70 string=0x000000000059E580 "-0123456789"
 *   insn=0x000000000053ED78 string=0x000000000053ED7C """
 *   insn=0x000000000053ED7C string=0x000000000059E581 "0123456789"
 *   insn=0x000000000053ED80 string=0x000000000053ED84 ""@9"
 *   insn=0x000000000053ED84 string=0x000000000059E582 "123456789"
 *   insn=0x000000000053ED88 string=0x000000000053ED8C """
 *   insn=0x000000000053ED8C string=0x000000000059E583 "23456789"
 *   insn=0x000000000053ED90 string=0x000000000053ED94 """
 *   insn=0x000000000053ED94 string=0x000000000059E584 "3456789"
 *   insn=0x000000000053ED98 string=0x000000000053ED9C """
 *   insn=0x000000000053ED9C string=0x000000000059E585 "456789"
 *   insn=0x000000000053EDA0 string=0x000000000053EDA4 """
 *   insn=0x000000000053EDA4 string=0x000000000059E586 "56789"
 *   insn=0x000000000053EDA8 string=0x000000000053EDAC """
 *   insn=0x000000000053EDAC string=0x000000000059E587 "6789"
 *   insn=0x000000000053EDB0 string=0x000000000053EDB4 "" @9"
 *   insn=0x000000000053EDB4 string=0x000000000059E588 "789"
 *   insn=0x000000000053EDB8 string=0x000000000053EDBC ""$@9"
 *   insn=0x000000000053EDBC string=0x000000000059E589 "89"
 *   insn=0x000000000053EDC0 string=0x000000000053EDC4 "!(@9"
 *   insn=0x000000000053EDC4 string=0x000000000059E58A "9"
 *   insn=0x000000000053EDDC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000053EDE0 string=0x000000000053EDE4 """
 *   insn=0x000000000053EDE8 string=0x000000000053EDEC "B\E"
 *   insn=0x000000000053EDF0 string=0x000000000053EDF4 "B@"
 *   insn=0x000000000053EE48 string=0x000000000053EE4C "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_53ECF0(__int64 a1)
{
  __int64 v1; // x1
  _DWORD *result; // x0
  unsigned __int8 *v4; // x1
  __int64 v5; // x0

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
  {
    v5 = operator new(0xA0u);
    *(_DWORD *)(v5 + 8) = 0;
    v1 = v5;
    *(_QWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = 0;
    *(_QWORD *)v5 = off_6B7C40;
    *(_BYTE *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 56) = 0;
    *(_QWORD *)(v5 + 64) = 0;
    *(_QWORD *)(v5 + 72) = 0;
    *(_QWORD *)(v5 + 80) = 0;
    *(_QWORD *)(v5 + 88) = 0;
    *(_DWORD *)(v5 + 96) = 0;
    *(_BYTE *)(v5 + 100) = 0;
    *(_BYTE *)(v5 + 101) = 0;
    *(_BYTE *)(v5 + 102) = 0;
    *(_BYTE *)(v5 + 103) = 0;
    *(_BYTE *)(v5 + 104) = 0;
    *(_BYTE *)(v5 + 105) = 0;
    *(_BYTE *)(v5 + 106) = 0;
    *(_BYTE *)(v5 + 107) = 0;
    *(_BYTE *)(v5 + 152) = 0;
    *(_QWORD *)(a1 + 16) = v5;
  }
  *(_DWORD *)(v1 + 36) = 46;
  *(_QWORD *)(v1 + 48) = &unk_59EA98;
  *(_DWORD *)(v1 + 40) = 44;
  *(_QWORD *)(v1 + 64) = &unk_59EA98;
  *(_QWORD *)(v1 + 80) = &unk_59EA98;
  *(_QWORD *)(v1 + 16) = "";
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  *(_DWORD *)(v1 + 100) = 67109634;
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 104LL) = 67109634;
  result = *(_DWORD **)(a1 + 16);
  v4 = (unsigned __int8 *)off_6E8940;
  result[27] = (unsigned __int8)*off_6E8940;
  result[28] = v4[1];
  result[29] = v4[2];
  result[30] = v4[3];
  result[31] = v4[4];
  result[32] = v4[5];
  result[33] = v4[6];
  result[34] = v4[7];
  result[35] = v4[8];
  result[36] = v4[9];
  result[37] = v4[10];
  return result;
}

