/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053EB8C
 * Mangled: sub_53EB8C
 * Demangled: sub_53EB8C
 *
 * Callers: 4
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053EAD4  sub_53EAD4
 *   0x000000000054E114  sub_54E114
 *   0x000000000054E430  sub_54E430
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 48
 *   insn=0x000000000053EBA8 string=0x000000000053EBAC ""$"
 *   insn=0x000000000053EBB4 string=0x000000000053EBB8 " "
 *   insn=0x000000000053EBB8 string=0x000000000053EBBC ""("
 *   insn=0x000000000053EBC0 string=0x000000000053EBC4 "  "
 *   insn=0x000000000053EBC4 string=0x000000000053EBC8 "B"
 *   insn=0x000000000053EBC8 string=0x000000000053EBCC " ("
 *   insn=0x000000000053EBCC string=0x000000000053EBD0 "@"
 *   insn=0x000000000053EBD0 string=0x000000000053EBD4 """
 *   insn=0x000000000053EBD4 string=0x000000000053EBD8 "?"
 *   insn=0x000000000053EBD8 string=0x000000000053EBDC "?"
 *   insn=0x000000000053EBDC string=0x000000000053EBE0 "?$"
 *   insn=0x000000000053EBE0 string=0x000000000053EBE4 "?,"
 *   insn=0x000000000053EBE4 string=0x000000000053EBE8 "?`"
 *   insn=0x000000000053EBF0 string=0x000000000053EBF4 " d"
 *   insn=0x000000000053EBF4 string=0x000000000053EBF8 "a\n@"
 *   insn=0x000000000053EBF8 string=0x000000000053EBFC " h"
 *   insn=0x000000000053EBFC string=0x000000000053EC00 "A"
 *   insn=0x000000000053EC00 string=0x000000000053EC04 "`\n@"
 *   insn=0x000000000053EC04 string=0x000000000053EC08 "!HB"
 *   insn=0x000000000053EC08 string=0x000000000053EC0C "!"
 *   insn=0x000000000053EC0C string=0x000000000053EC10 """
 *   insn=0x000000000053EC0C string=0x000000000059E580 "-0123456789"
 *   insn=0x000000000053EC14 string=0x000000000053EC18 """
 *   insn=0x000000000053EC18 string=0x000000000059E581 "0123456789"
 *   insn=0x000000000053EC1C string=0x000000000053EC20 ""@9"
 *   insn=0x000000000053EC20 string=0x000000000059E582 "123456789"
 *   insn=0x000000000053EC24 string=0x000000000053EC28 """
 *   insn=0x000000000053EC28 string=0x000000000059E583 "23456789"
 *   insn=0x000000000053EC2C string=0x000000000053EC30 """
 *   insn=0x000000000053EC30 string=0x000000000059E584 "3456789"
 *   insn=0x000000000053EC34 string=0x000000000053EC38 """
 *   insn=0x000000000053EC38 string=0x000000000059E585 "456789"
 *   insn=0x000000000053EC3C string=0x000000000053EC40 """
 *   insn=0x000000000053EC40 string=0x000000000059E586 "56789"
 *   insn=0x000000000053EC44 string=0x000000000053EC48 """
 *   insn=0x000000000053EC48 string=0x000000000059E587 "6789"
 *   insn=0x000000000053EC4C string=0x000000000053EC50 "" @9"
 *   insn=0x000000000053EC50 string=0x000000000059E588 "789"
 *   insn=0x000000000053EC54 string=0x000000000053EC58 ""$@9"
 *   insn=0x000000000053EC58 string=0x000000000059E589 "89"
 *   insn=0x000000000053EC5C string=0x000000000053EC60 "!(@9"
 *   insn=0x000000000053EC60 string=0x000000000059E58A "9"
 *   insn=0x000000000053EC74 string=0x000000000053EC78 "Z"
 *   insn=0x000000000053EC78 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000053EC7C string=0x000000000053EC80 """
 *   insn=0x000000000053EC84 string=0x000000000053EC88 "B"
 *   insn=0x000000000053EC8C string=0x000000000053EC90 "B@"
 *   insn=0x000000000053ECE4 string=0x000000000053ECE8 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_53EB8C(__int64 a1)
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
    *(_QWORD *)v5 = off_6B7C60;
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

