/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CDD0
 * Mangled: sub_51CDD0
 * Demangled: sub_51CDD0
 *
 * Callers: 2
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000053C340  sub_53C340
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51CDD0(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B6A90;
  std::exception::~exception(a1);
}

