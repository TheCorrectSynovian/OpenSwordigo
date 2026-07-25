/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565E44
 * Mangled: sub_565E44
 * Demangled: sub_565E44
 *
 * Callers: 1
 *   0x0000000000565C40  sub_565C40
 *
 * Callees: 1
 *   0x0000000000549F98  sub_549F98
 *
 * Referenced strings: 1
 *   insn=0x0000000000565E4C string=0x0000000000565E50 "R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565E44(std::exception *this)
{
  *(_QWORD *)this = off_6B8030;
  sub_549F98(this);
}

