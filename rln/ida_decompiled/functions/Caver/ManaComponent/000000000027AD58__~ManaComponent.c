/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AD58
 * Mangled: _ZN5Caver13ManaComponentD0Ev
 * Demangled: Caver::ManaComponent::~ManaComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000027AD90  Caver::ManaComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000027AD68 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000027AD74 string=0x000000000027AD78 "N"
 *   insn=0x000000000027AD78 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027AD80 string=0x000000000027AD84 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ManaComponent::~ManaComponent(Caver::ManaComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

