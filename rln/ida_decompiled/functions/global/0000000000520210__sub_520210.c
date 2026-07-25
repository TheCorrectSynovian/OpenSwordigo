/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520210
 * Mangled: sub_520210
 * Demangled: sub_520210
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 15
 *   insn=0x0000000000520224 string=0x0000000000520228 "_"
 *   insn=0x000000000052022C string=0x0000000000520230 "`\n"
 *   insn=0x0000000000520234 string=0x0000000000520238 """
 *   insn=0x0000000000520238 string=0x000000000052023C "c"
 *   insn=0x000000000052023C string=0x0000000000520240 "B"
 *   insn=0x0000000000520244 string=0x0000000000520248 "B@"
 *   insn=0x0000000000520248 string=0x000000000052024C "cb"
 *   insn=0x000000000052024C string=0x0000000000520250 "b"
 *   insn=0x0000000000520258 string=0x000000000052025C "`"
 *   insn=0x0000000000520258 string=0x0000000000520294 " "
 *   insn=0x0000000000520264 string=0x0000000000520268 "`"
 *   insn=0x0000000000520268 string=0x000000000052026C "un"
 *   insn=0x000000000052026C string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000520270 string=0x0000000000520274 "`"
 *   insn=0x000000000052027C string=0x0000000000520280 "pn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_520210(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v6; // x0
  void *result; // x0

  *(_DWORD *)(a1 + 8) = a5 != 0;
  v6 = a3;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 24) = a4 & (a3 != 0);
  *(_QWORD *)a1 = off_6D9B50;
  *(_QWORD *)(a1 + 40) = 0;
  if ( !a3 )
    v6 = ctype_ + 1LL;
  *(_QWORD *)(a1 + 48) = v6;
  memset((void *)(a1 + 57), 0, 0x100u);
  *(_BYTE *)(a1 + 56) = 0;
  result = memset((void *)(a1 + 313), 0, 0x100u);
  *(_BYTE *)(a1 + 569) = 0;
  return result;
}

