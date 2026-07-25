/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA00
 * Mangled: ._ZN5Caver24BreakableObjectComponent17InitWithComponentEPKS0_
 * Demangled: Caver::BreakableObjectComponent::InitWithComponent(Caver::BreakableObjectComponent const*)
 *
 * Callers: 1
 *   0x0000000000255EA4  Caver::BreakableObjectComponent::~BreakableObjectComponent()
 *
 * Callees: 1
 *   0x000000000025457C  Caver::BreakableObjectComponent::InitWithComponent(Caver::BreakableObjectComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA08 string=0x00000000001FAA0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BreakableObjectComponent::InitWithComponent(
        Caver::BreakableObjectComponent *this,
        const Caver::BreakableObjectComponent *a2)
{
  return _ZN5Caver24BreakableObjectComponent17InitWithComponentEPKS0_(this, a2);
}

