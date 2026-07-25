/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FBF4
 * Mangled: _ZNSt10bad_typeidD2Ev
 * Demangled: std::bad_typeid::~bad_typeid()
 *
 * Callers: 3
 *   0x00000000001FE300  std::bad_typeid::~bad_typeid()
 *   0x00000000005652FC  sub_5652FC
 *   0x000000000056FC60  __cxa_bad_typeid
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 3
 *   insn=0x000000000056FBF4 string=0x000000000056FBF8 "!"
 *   insn=0x000000000056FBF8 string=0x000000000056FBFC "!@"
 *   insn=0x000000000056FC00 string=0x000000000056FC04 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  *(_QWORD *)this = off_6DBB00;
  std::exception::~exception(this);
}

