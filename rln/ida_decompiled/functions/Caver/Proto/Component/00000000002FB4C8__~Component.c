/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB4C8
 * Mangled: _ZN5Caver5Proto9ComponentD0Ev
 * Demangled: Caver::Proto::Component::~Component()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCAC0  Caver::Proto::Component::~Component()
 *   0x00000000002FB500  Caver::Proto::Component::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002FB4D4 string=0x00000000002FB4D8 "z"
 *   insn=0x00000000002FB4D8 string=0x00000000001FCAC0 "0'"
 *   insn=0x00000000002FB4E4 string=0x00000000002FB4E8 "r"
 *   insn=0x00000000002FB4E8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FB4F0 string=0x00000000002FB4F4 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Component::~Component(Caver::Proto::Component *this)
{
  Caver::Proto::Component::~Component(this);
  operator delete(this);
}

