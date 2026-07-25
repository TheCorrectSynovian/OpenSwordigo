/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CE20
 * Mangled: sub_51CE20
 * Demangled: sub_51CE20
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000051CE2C string=0x000000000051CE30 "!"
 *   insn=0x000000000051CE4C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51CE20(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B6AC0;
  std::exception::~exception(a1);
  operator delete(a1);
}

