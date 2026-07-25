/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203010
 * Mangled: ._ZN5Caver5Proto20FireEmitterComponentD2Ev
 * Demangled: Caver::Proto::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callers: 1
 *   0x0000000000321078  Caver::Proto::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callees: 1
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203018 string=0x000000000020301C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::FireEmitterComponent::~FireEmitterComponent(Caver::Proto::FireEmitterComponent *this)
{
  JUMPOUT(0x31FF44);
}

