/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266860
 * Mangled: _ZN5Caver15DamageComponentD0Ev
 * Demangled: Caver::DamageComponent::~DamageComponent()
 *
 * Callers: 1
 *   0x00000000002666C8  Caver::DamageComponent::~DamageComponent()
 *
 * Callees: 4
 *   0x00000000001F40C0  Caver::DamageComponent::~DamageComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000266898  Caver::DamageComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x0000000000266870 string=0x00000000001F40C0 "P'"
 *   insn=0x0000000000266880 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DamageComponent::~DamageComponent(Caver::DamageComponent *this)
{
  Caver::DamageComponent::~DamageComponent(this);
  operator delete(this);
}

