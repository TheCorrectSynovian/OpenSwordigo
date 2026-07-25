/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000321078
 * Mangled: _ZN5Caver5Proto20FireEmitterComponentD0Ev
 * Demangled: Caver::Proto::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callers: 1
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203010  Caver::Proto::FireEmitterComponent::~FireEmitterComponent()
 *   0x00000000003210B0  Caver::Proto::FireEmitterComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x0000000000321098 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FireEmitterComponent::~FireEmitterComponent(Caver::Proto::FireEmitterComponent *this)
{
  Caver::Proto::FireEmitterComponent::~FireEmitterComponent(this);
  operator delete(this);
}

