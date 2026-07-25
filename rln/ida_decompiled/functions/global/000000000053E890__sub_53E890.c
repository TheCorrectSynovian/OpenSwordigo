/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E890
 * Mangled: sub_53E890
 * Demangled: sub_53E890
 *
 * Callers: 3
 *   0x000000000052BB80  sub_52BB80
 *   0x000000000052C0D8  sub_52C0D8
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 47
 *   insn=0x000000000053E8A8 string=0x000000000053E8AC " "
 *   insn=0x000000000053E8B4 string=0x000000000053E8B8 "`\n@"
 *   insn=0x000000000053E8B8 string=0x000000000053E8BC "!"
 *   insn=0x000000000053E8C0 string=0x000000000053E8C4 "`\n@"
 *   insn=0x000000000053E8D4 string=0x000000000053E8D8 "A"
 *   insn=0x000000000053E8EC string=0x000000000053E8F0 "!H@"
 *   insn=0x000000000053E8F0 string=0x000000000053E8F4 "!"
 *   insn=0x000000000053E8F8 string=0x000000000053E8FC "`\n@"
 *   insn=0x000000000053E900 string=0x000000000053E904 "@"
 *   insn=0x000000000053E904 string=0x000000000053E908 "a\n@"
 *   insn=0x000000000053E910 string=0x000000000059E580 "-0123456789"
 *   insn=0x000000000053E914 string=0x000000000053E918 """
 *   insn=0x000000000053E918 string=0x000000000053E91C "a\n@"
 *   insn=0x000000000053E920 string=0x000000000053E924 """
 *   insn=0x000000000053E920 string=0x000000000059E581 "0123456789"
 *   insn=0x000000000053E924 string=0x000000000053E928 "a\n@"
 *   insn=0x000000000053E92C string=0x000000000053E930 """
 *   insn=0x000000000053E92C string=0x000000000059E582 "123456789"
 *   insn=0x000000000053E930 string=0x000000000053E934 "a\n@"
 *   insn=0x000000000053E938 string=0x000000000053E93C """
 *   insn=0x000000000053E938 string=0x000000000059E583 "23456789"
 *   insn=0x000000000053E93C string=0x000000000053E940 "a\n@"
 *   insn=0x000000000053E944 string=0x000000000053E948 """
 *   insn=0x000000000053E944 string=0x000000000059E584 "3456789"
 *   insn=0x000000000053E948 string=0x000000000053E94C "a\n@"
 *   insn=0x000000000053E950 string=0x000000000053E954 """
 *   insn=0x000000000053E950 string=0x000000000059E585 "456789"
 *   insn=0x000000000053E954 string=0x000000000053E958 "a\n@"
 *   insn=0x000000000053E95C string=0x000000000053E960 """
 *   insn=0x000000000053E95C string=0x000000000059E586 "56789"
 *   insn=0x000000000053E960 string=0x000000000053E964 "a\n@"
 *   insn=0x000000000053E968 string=0x000000000053E96C """
 *   insn=0x000000000053E968 string=0x000000000059E587 "6789"
 *   insn=0x000000000053E96C string=0x000000000053E970 "a\n@"
 *   insn=0x000000000053E974 string=0x000000000053E978 """
 *   insn=0x000000000053E974 string=0x000000000059E588 "789"
 *   insn=0x000000000053E978 string=0x000000000053E97C "a\n@"
 *   insn=0x000000000053E980 string=0x000000000053E984 """
 *   insn=0x000000000053E980 string=0x000000000059E589 "89"
 *   insn=0x000000000053E984 string=0x000000000053E988 "a\n@"
 *   insn=0x000000000053E98C string=0x000000000053E990 " "
 *   insn=0x000000000053E98C string=0x000000000059E58A "9"
 *   insn=0x000000000053E9A4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000053E9A8 string=0x000000000053E9AC """
 *   insn=0x000000000053E9B0 string=0x000000000053E9B4 "B0F"
 *   insn=0x000000000053E9B8 string=0x000000000053E9BC "B@"
 *   insn=0x000000000053EA10 string=0x000000000053EA14 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E890(__int64 a1)
{
  __int64 v1; // x1
  __int64 v3; // x0
  char *v4; // x0
  __int64 result; // x0
  __int64 v6; // x0

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
  {
    v6 = operator new(0x70u);
    *(_DWORD *)(v6 + 8) = 0;
    v1 = v6;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)v6 = off_6B7080;
    *(_BYTE *)(v6 + 32) = 0;
    *(_BYTE *)(v6 + 33) = 0;
    *(_BYTE *)(v6 + 34) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *(_QWORD *)(v6 + 72) = 0;
    *(_QWORD *)(v6 + 80) = 0;
    *(_DWORD *)(v6 + 88) = 0;
    *(_BYTE *)(v6 + 92) = 0;
    *(_BYTE *)(v6 + 93) = 0;
    *(_BYTE *)(v6 + 94) = 0;
    *(_BYTE *)(v6 + 95) = 0;
    *(_BYTE *)(v6 + 96) = 0;
    *(_BYTE *)(v6 + 97) = 0;
    *(_BYTE *)(v6 + 98) = 0;
    *(_BYTE *)(v6 + 99) = 0;
    *(_BYTE *)(v6 + 111) = 0;
    *(_QWORD *)(a1 + 16) = v6;
  }
  *(_BYTE *)(v1 + 33) = 46;
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 34LL) = 44;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v3 + 16) = "";
  *(_QWORD *)(v3 + 40) = "";
  *(_QWORD *)(v3 + 56) = "";
  *(_QWORD *)(v3 + 72) = "";
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 92) = 67109634;
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = 67109634;
  v4 = off_6E8940;
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 100LL) = *off_6E8940;
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 101LL) = v4[1];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 102LL) = v4[2];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 103LL) = v4[3];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 104LL) = v4[4];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 105LL) = v4[5];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 106LL) = v4[6];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 107LL) = v4[7];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 108LL) = v4[8];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 109LL) = v4[9];
  result = (unsigned __int8)v4[10];
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 110LL) = result;
  return result;
}

