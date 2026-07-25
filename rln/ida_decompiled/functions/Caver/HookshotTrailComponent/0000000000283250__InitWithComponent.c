/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283250
 * Mangled: _ZN5Caver22HookshotTrailComponent17InitWithComponentEPKS0_
 * Demangled: Caver::HookshotTrailComponent::InitWithComponent(Caver::HookshotTrailComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::InitWithComponent(
        Caver::HookshotTrailComponent *this,
        const Caver::HookshotTrailComponent *a2)
{
  return Caver::GlowComponent::InitWithComponent(this, a2);
}

