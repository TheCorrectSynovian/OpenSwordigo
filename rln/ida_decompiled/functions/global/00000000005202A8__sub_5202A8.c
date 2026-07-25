/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005202A8
 * Mangled: sub_5202A8
 * Demangled: sub_5202A8
 *
 * Callers: 2
 *   0x0000000000520478  sub_520478
 *   0x000000000053CB20  sub_53CB20
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 15
 *   insn=0x00000000005202BC string=0x00000000005202C0 "?"
 *   insn=0x00000000005202C4 string=0x00000000005202C8 "`\n"
 *   insn=0x00000000005202CC string=0x00000000005202D0 "!"
 *   insn=0x00000000005202D0 string=0x00000000005202D4 "B"
 *   insn=0x00000000005202D4 string=0x00000000005202D8 "!"
 *   insn=0x00000000005202DC string=0x00000000005202E0 "!@"
 *   insn=0x00000000005202E0 string=0x00000000005202E4 "bb"
 *   insn=0x00000000005202E4 string=0x00000000005202E8 "a"
 *   insn=0x00000000005202F0 string=0x00000000005202F4 "`"
 *   insn=0x00000000005202F0 string=0x000000000052032C " "
 *   insn=0x00000000005202FC string=0x0000000000520300 "`"
 *   insn=0x0000000000520300 string=0x0000000000520304 "On"
 *   insn=0x0000000000520304 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000520308 string=0x000000000052030C "`"
 *   insn=0x0000000000520314 string=0x0000000000520318 "Jn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_5202A8(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // x0
  void *result; // x0

  *(_DWORD *)(a1 + 8) = a4 != 0;
  v5 = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 24) = a3 & (a2 != 0);
  *(_QWORD *)a1 = off_6D9B50;
  *(_QWORD *)(a1 + 40) = 0;
  if ( !a2 )
    v5 = ctype_ + 1LL;
  *(_QWORD *)(a1 + 48) = v5;
  memset((void *)(a1 + 57), 0, 0x100u);
  *(_BYTE *)(a1 + 56) = 0;
  result = memset((void *)(a1 + 313), 0, 0x100u);
  *(_BYTE *)(a1 + 569) = 0;
  return result;
}

