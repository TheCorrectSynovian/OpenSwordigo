/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF910
 * Mangled: ._ZN5Caver16ShatterComponentC2Ev
 * Demangled: Caver::ShatterComponent::ShatterComponent(void)
 *
 * Callers: 1
 *   0x000000000024FEB8  Caver::ShatterComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002AF064  Caver::ShatterComponent::ShatterComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF918 string=0x00000000001FF91C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShatterComponent::ShatterComponent(Caver::ShatterComponent *this)
{
  return _ZN5Caver16ShatterComponentC2Ev(this);
}

