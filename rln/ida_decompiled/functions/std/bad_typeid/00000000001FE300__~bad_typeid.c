/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE300
 * Mangled: ._ZNSt10bad_typeidD2Ev
 * Demangled: std::bad_typeid::~bad_typeid()
 *
 * Callers: 1
 *   0x000000000056FC08  std::bad_typeid::~bad_typeid()
 *
 * Callees: 1
 *   0x000000000056FBF4  std::bad_typeid::~bad_typeid()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE308 string=0x00000000001FE30C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  _ZNSt10bad_typeidD2Ev(this);
}

