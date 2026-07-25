/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B260
 * Mangled: sub_52B260
 * Demangled: sub_52B260
 *
 * Callers: 1
 *   0x000000000052B184  sub_52B184
 *
 * Callees: 4
 *   0x000000000052B2A4  sub_52B2A4
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000052B260 string=0x000000000052B264 "A"
 *   insn=0x000000000052B26C string=0x000000000052B270 "!@1"
 *   insn=0x000000000052B278 string=0x000000000052B27C "2"
 *   insn=0x000000000052B288 string=0x000000000052B28C "LA"
 *   insn=0x000000000052B294 string=0x000000000052B298 "IA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52B260(_QWORD *a1)
{
  *a1 = off_6B6C50;
  sub_570744(a1 + 2);
  return nullsub_2(a1);
}

