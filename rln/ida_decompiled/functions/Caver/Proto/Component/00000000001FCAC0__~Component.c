/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCAC0
 * Mangled: ._ZN5Caver5Proto9ComponentD2Ev
 * Demangled: Caver::Proto::Component::~Component()
 *
 * Callers: 1
 *   0x00000000002FB4C8  Caver::Proto::Component::~Component()
 *
 * Callees: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCAC8 string=0x00000000001FCACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Component::~Component(Caver::Proto::Component *this)
{
  JUMPOUT(0x2FB320);
}

