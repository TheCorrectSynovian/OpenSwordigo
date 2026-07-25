/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005632D0
 * Mangled: sub_5632D0
 * Demangled: sub_5632D0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 17
 *   insn=0x00000000005632DC string=0x00000000005632E0 """
 *   insn=0x00000000005632E8 string=0x00000000005632EC "b"
 *   insn=0x00000000005632EC string=0x00000000005632F0 "B"
 *   insn=0x00000000005632F0 string=0x00000000005632F4 "#"
 *   insn=0x00000000005632F4 string=0x00000000005632F8 "cj""
 *   insn=0x00000000005632FC string=0x0000000000563304 "b\n"
 *   insn=0x0000000000563308 string=0x000000000056330C "`"
 *   insn=0x000000000056330C string=0x0000000000563310 "V"
 *   insn=0x0000000000563314 string=0x0000000000563318 "`""
 *   insn=0x0000000000563318 string=0x000000000056331C "B"
 *   insn=0x000000000056331C string=0x0000000000563320 "B@"
 *   insn=0x0000000000563320 string=0x0000000000563324 "b\n"
 *   insn=0x0000000000563324 string=0x0000000000563328 "hc"
 *   insn=0x000000000056332C string=0x0000000000563330 " "
 *   insn=0x0000000000563330 string=0x0000000000563334 "`"
 *   insn=0x0000000000563338 string=0x000000000056333C "!@"
 *   insn=0x000000000056333C string=0x0000000000563340 "aj "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5632D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  __int64 v4; // x0
  __int64 result; // x0

  v3 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + *(_QWORD *)(v3 - 24)) = a2[3];
  *(_QWORD *)(a1 + 16) = off_6DB650;
  sub_562F10(a1 + 16);
  sub_51F468(a1 + 120);
  *(_QWORD *)(a1 + 16) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 72));
  v4 = a2[1];
  *(_QWORD *)a1 = v4;
  result = *(_QWORD *)(v4 - 24);
  *(_QWORD *)(a1 + result) = a2[2];
  return result;
}

