/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5630
 * Mangled: ._ZN5Caver22HookshotTrailComponentC2Ev
 * Demangled: Caver::HookshotTrailComponent::HookshotTrailComponent(void)
 *
 * Callers: 1
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002831FC  Caver::HookshotTrailComponent::HookshotTrailComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5638 string=0x00000000001F563C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::HookshotTrailComponent(Caver::HookshotTrailComponent *this)
{
  return _ZN5Caver22HookshotTrailComponentC2Ev(this);
}

