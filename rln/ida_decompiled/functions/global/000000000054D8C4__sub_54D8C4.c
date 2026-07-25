/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D8C4
 * Mangled: sub_54D8C4
 * Demangled: sub_54D8C4
 *
 * Callers: 12
 *   0x0000000000554B9C  sub_554B9C
 *   0x0000000000554F18  sub_554F18
 *   0x0000000000555830  sub_555830
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000054D8CC string=0x000000000054D8D0 "!(@"
 *   insn=0x000000000054D8D0 string=0x000000000054D8D4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54D8C4(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
}

