/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CDE0
 * Mangled: sub_51CDE0
 * Demangled: sub_51CDE0
 *
 * Callers: 1
 *   0x000000000051CE80  sub_51CE80
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51CDE0(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B6AC0;
  std::exception::~exception(a1);
}

