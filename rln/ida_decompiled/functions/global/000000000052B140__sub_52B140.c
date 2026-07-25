/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B140
 * Mangled: sub_52B140
 * Demangled: sub_52B140
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000052B184  sub_52B184
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000052B140 string=0x000000000052B144 "a"
 *   insn=0x000000000052B14C string=0x000000000052B150 "!"
 *   insn=0x000000000052B158 string=0x000000000052B15C "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52B140(_QWORD *a1)
{
  *a1 = off_6DA260;
  sub_570744(a1 + 2);
  return nullsub_2(a1);
}

