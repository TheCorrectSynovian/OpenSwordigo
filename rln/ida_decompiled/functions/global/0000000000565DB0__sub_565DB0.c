/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565DB0
 * Mangled: sub_565DB0
 * Demangled: sub_565DB0
 *
 * Callers: 1
 *   0x0000000000565D1C  sub_565D1C
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565DB0(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B8000;
  std::exception::~exception(a1);
}

