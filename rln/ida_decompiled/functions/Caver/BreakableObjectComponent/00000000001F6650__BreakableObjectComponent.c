/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6650
 * Mangled: ._ZN5Caver24BreakableObjectComponentC2Ev
 * Demangled: Caver::BreakableObjectComponent::BreakableObjectComponent(void)
 *
 * Callers: 1
 *   0x000000000024FE78  Caver::BreakableObjectComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000025450C  Caver::BreakableObjectComponent::BreakableObjectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6658 string=0x00000000001F665C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BreakableObjectComponent::BreakableObjectComponent(Caver::BreakableObjectComponent *this)
{
  return _ZN5Caver24BreakableObjectComponentC2Ev(this);
}

