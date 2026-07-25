/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565DC0
 * Mangled: sub_565DC0
 * Demangled: sub_565DC0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 3
 *   insn=0x0000000000565DCC string=0x0000000000565DD0 "!"
 *   insn=0x0000000000565DE8 string=0x0000000000565DEC "1E"
 *   insn=0x0000000000565DEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565DC0(std::exception *a1)
{
  *(_QWORD *)a1 = off_6B8000;
  std::exception::~exception(a1);
  operator delete(a1);
}

