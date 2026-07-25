/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566134
 * Mangled: sub_566134
 * Demangled: sub_566134
 *
 * Callers: 1
 *   0x0000000000565D50  sub_565D50
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_566134(std::exception *this)
{
  *(_QWORD *)this = off_6DB980;
  sub_54A024(this);
}

