/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571130
 * Mangled: sub_571130
 * Demangled: sub_571130
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000055EDEC  sub_55EDEC
 *
 * Referenced strings: 3
 *   insn=0x000000000057113C string=0x0000000000571140 "+"
 *   insn=0x0000000000571140 string=0x0000000000571144 "@"
 *   insn=0x0000000000571144 string=0x000000000057114C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_571130(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // x0

  sub_55EDEC((__int64)a1);
  result = off_6DBC60;
  *a1 = off_6DBC60;
  return result;
}

