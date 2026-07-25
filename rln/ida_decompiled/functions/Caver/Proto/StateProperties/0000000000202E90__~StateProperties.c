/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202E90
 * Mangled: ._ZN5Caver5Proto15StatePropertiesD2Ev
 * Demangled: Caver::Proto::StateProperties::~StateProperties()
 *
 * Callers: 1
 *   0x00000000002EC154  Caver::Proto::StateProperties::~StateProperties()
 *
 * Callees: 1
 *   0x00000000002EBF5C  Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202E98 string=0x0000000000202E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::StateProperties::~StateProperties(Caver::Proto::StateProperties *this)
{
  JUMPOUT(0x2EC0C4);
}

