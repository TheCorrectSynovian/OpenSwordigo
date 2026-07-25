/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562010
 * Mangled: sub_562010
 * Demangled: sub_562010
 *
 * Callers: 21
 *   0x00000000005630F0  sub_5630F0
 *   0x00000000005631CC  sub_5631CC
 *   0x0000000000563478  sub_563478
 *   0x000000000056354C  sub_56354C
 *   0x00000000005637F4  sub_5637F4
 *   0x000000000056392C  sub_56392C
 *   0x0000000000563F40  sub_563F40
 *   0x0000000000564084  sub_564084
 *   0x00000000005641F0  sub_5641F0
 *   0x000000000056432C  sub_56432C
 *   0x0000000000564494  sub_564494
 *   0x0000000000564634  sub_564634
 *   0x00000000005647E8  sub_5647E8
 *   0x000000000056492C  sub_56492C
 *   0x0000000000564A98  sub_564A98
 *   0x0000000000564BD4  sub_564BD4
 *   0x0000000000564D3C  sub_564D3C
 *   0x0000000000564EDC  sub_564EDC
 *   0x0000000000571384  sub_571384
 *   0x00000000005713B0  sub_5713B0
 *   0x0000000000571470  sub_571470
 *
 * Callees: 8
 *   0x000000000051F45C  sub_51F45C
 *   0x000000000051F468  sub_51F468
 *   0x000000000051F654  sub_51F654
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x000000000054FD60  sub_54FD60
 *   0x00000000005516A0  sub_5516A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000562018 string=0x000000000056201C "5"
 *   insn=0x0000000000562038 string=0x000000000056203C "!@"
 *   insn=0x0000000000562040 string=0x0000000000562044 "a"
 *   insn=0x000000000056206C string=0x0000000000562070 "A"
 *   insn=0x0000000000562078 string=0x000000000056207C "_"
 *   insn=0x000000000056207C string=0x0000000000562080 "_|"
 *   insn=0x0000000000562090 string=0x0000000000562094 "aR"
 *   insn=0x0000000000562128 string=0x000000000056212C "]"
 *   insn=0x0000000000562150 string=0x0000000000562154 "`f"
 *   insn=0x0000000000562180 string=0x0000000000562184 "u"
 *   insn=0x0000000000562194 string=0x0000000000562198 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_562010(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x22
  unsigned __int64 result; // x0

  v2 = a1 + 56;
  v3 = a1 + 104;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7790;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  *(_QWORD *)a1 = off_6DB650;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  sub_51F45C(v3);
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 160) = 1024;
  *(_BYTE *)(a1 + 125) = 0;
  *(_BYTE *)(a1 + 126) = 0;
  *(_BYTE *)(a1 + 127) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 129) = 0;
  *(_BYTE *)(a1 + 130) = 0;
  *(_BYTE *)(a1 + 131) = 0;
  *(_BYTE *)(a1 + 132) = 0;
  *(_BYTE *)(a1 + 133) = 0;
  *(_BYTE *)(a1 + 134) = 0;
  *(_BYTE *)(a1 + 135) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 137) = 0;
  *(_BYTE *)(a1 + 138) = 0;
  *(_BYTE *)(a1 + 139) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_BYTE *)(a1 + 141) = 0;
  *(_BYTE *)(a1 + 142) = 0;
  *(_BYTE *)(a1 + 143) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  *(_BYTE *)(a1 + 147) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 169) = 0;
  *(_BYTE *)(a1 + 170) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_BYTE *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  result = (unsigned __int8)sub_5516A0(v2);
  if ( (_BYTE)result )
  {
    result = (unsigned __int64)sub_54FD60(v2);
    *(_QWORD *)(a1 + 200) = result;
  }
  return result;
}

