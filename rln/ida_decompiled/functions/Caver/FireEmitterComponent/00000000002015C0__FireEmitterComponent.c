/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002015C0
 * Mangled: ._ZN5Caver20FireEmitterComponentC2Ev_0
 * Demangled: Caver::FireEmitterComponent::FireEmitterComponent(void)
 *
 * Callers: 1
 *   0x0000000000250338  Caver::FireEmitterComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A1A00  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002015C8 string=0x00000000002015CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireEmitterComponent::FireEmitterComponent(Caver::FireEmitterComponent *this)
{
  return _ZN5Caver20FireEmitterComponentC2Ev(this);
}

