/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FC08
 * Mangled: _ZNSt10bad_typeidD0Ev
 * Demangled: std::bad_typeid::~bad_typeid()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE300  std::bad_typeid::~bad_typeid()
 *
 * Referenced strings: 1
 *   insn=0x000000000056FC28 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::bad_typeid::~bad_typeid(this);
  operator delete(this);
}

