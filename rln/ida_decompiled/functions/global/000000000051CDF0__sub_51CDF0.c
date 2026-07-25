/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CDF0
 * Mangled: sub_51CDF0
 * Demangled: sub_51CDF0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 3
 *   insn=0x000000000051CDFC string=0x000000000051CE00 "!@*"
 *   insn=0x000000000051CE18 string=0x000000000051CE1C "%i"
 *   insn=0x000000000051CE1C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51CDF0(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B6A90;
  std::exception::~exception(a1);
  operator delete(a1);
}

