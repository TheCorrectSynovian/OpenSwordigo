/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC794
 * Mangled: _ZN5Caver22ParticleFieldComponentD0Ev
 * Demangled: Caver::ParticleFieldComponent::~ParticleFieldComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000002AC7CC  Caver::ParticleFieldComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002AC7A0 string=0x00000000002AC7A4 "K7"
 *   insn=0x00000000002AC7A4 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002AC7B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AC7C4 string=0x00000000002AC7C8 "?T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleFieldComponent::~ParticleFieldComponent(Caver::ParticleFieldComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

