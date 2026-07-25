/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B138
 * Mangled: sub_56B138
 * Demangled: sub_56B138
 *
 * Callers: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56B138(std::exception *this)
{
  *(_QWORD *)this = off_6DBA30;
  sub_54A024(this);
}

