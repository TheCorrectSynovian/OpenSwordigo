/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E704
 * Mangled: sub_53E704
 * Demangled: sub_53E704
 *
 * Callers: 3
 *   0x000000000052BDBC  sub_52BDBC
 *   0x000000000052C0D8  sub_52C0D8
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 48
 *   insn=0x000000000053E71C string=0x000000000053E720 " "
 *   insn=0x000000000053E728 string=0x000000000053E72C "`\n@"
 *   insn=0x000000000053E72C string=0x000000000053E730 "!"
 *   insn=0x000000000053E734 string=0x000000000053E738 "`\n@"
 *   insn=0x000000000053E748 string=0x000000000053E74C "A"
 *   insn=0x000000000053E760 string=0x000000000053E764 "!H@"
 *   insn=0x000000000053E764 string=0x000000000053E768 "!"
 *   insn=0x000000000053E76C string=0x000000000053E770 "`\n@"
 *   insn=0x000000000053E774 string=0x000000000053E778 "@"
 *   insn=0x000000000053E778 string=0x000000000053E77C "a\n@"
 *   insn=0x000000000053E784 string=0x000000000059E580 "-0123456789"
 *   insn=0x000000000053E788 string=0x000000000053E78C """
 *   insn=0x000000000053E78C string=0x000000000053E790 "a\n@"
 *   insn=0x000000000053E794 string=0x000000000053E798 """
 *   insn=0x000000000053E794 string=0x000000000059E581 "0123456789"
 *   insn=0x000000000053E798 string=0x000000000053E79C "a\n@"
 *   insn=0x000000000053E7A0 string=0x000000000053E7A4 """
 *   insn=0x000000000053E7A0 string=0x000000000059E582 "123456789"
 *   insn=0x000000000053E7A4 string=0x000000000053E7A8 "a\n@"
 *   insn=0x000000000053E7AC string=0x000000000053E7B0 """
 *   insn=0x000000000053E7AC string=0x000000000059E583 "23456789"
 *   insn=0x000000000053E7B0 string=0x000000000053E7B4 "a\n@"
 *   insn=0x000000000053E7B8 string=0x000000000053E7BC """
 *   insn=0x000000000053E7B8 string=0x000000000059E584 "3456789"
 *   insn=0x000000000053E7BC string=0x000000000053E7C0 "a\n@"
 *   insn=0x000000000053E7C4 string=0x000000000053E7C8 """
 *   insn=0x000000000053E7C4 string=0x000000000059E585 "456789"
 *   insn=0x000000000053E7C8 string=0x000000000053E7CC "a\n@"
 *   insn=0x000000000053E7D0 string=0x000000000053E7D4 """
 *   insn=0x000000000053E7D0 string=0x000000000059E586 "56789"
 *   insn=0x000000000053E7D4 string=0x000000000053E7D8 "a\n@"
 *   insn=0x000000000053E7DC string=0x000000000053E7E0 """
 *   insn=0x000000000053E7DC string=0x000000000059E587 "6789"
 *   insn=0x000000000053E7E0 string=0x000000000053E7E4 "a\n@"
 *   insn=0x000000000053E7E8 string=0x000000000053E7EC """
 *   insn=0x000000000053E7E8 string=0x000000000059E588 "789"
 *   insn=0x000000000053E7EC string=0x000000000053E7F0 "a\n@"
 *   insn=0x000000000053E7F4 string=0x000000000053E7F8 """
 *   insn=0x000000000053E7F4 string=0x000000000059E589 "89"
 *   insn=0x000000000053E7F8 string=0x000000000053E7FC "a\n@"
 *   insn=0x000000000053E800 string=0x000000000053E804 " "
 *   insn=0x000000000053E800 string=0x000000000059E58A "9"
 *   insn=0x000000000053E814 string=0x000000000053E818 "r"
 *   insn=0x000000000053E818 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000053E81C string=0x000000000053E820 "B"
 *   insn=0x000000000053E824 string=0x000000000053E828 "B\F"
 *   insn=0x000000000053E82C string=0x000000000053E830 "B@"
 *   insn=0x000000000053E884 string=0x000000000053E888 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E704(__int64 a1)
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
    *(_QWORD *)v6 = off_6B70A0;
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

