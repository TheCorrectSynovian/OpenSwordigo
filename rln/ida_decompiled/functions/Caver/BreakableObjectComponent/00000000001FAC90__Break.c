/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC90
 * Mangled: ._ZN5Caver24BreakableObjectComponent5BreakEv
 * Demangled: Caver::BreakableObjectComponent::Break(void)
 *
 * Callers: 1
 *   0x0000000000255D50  Caver::BreakableObjectComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC98 string=0x00000000001FAC9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BreakableObjectComponent::Break(Caver::BreakableObjectComponent *this)
{
  return _ZN5Caver24BreakableObjectComponent5BreakEv(this);
}

