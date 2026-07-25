/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283274
 * Mangled: _ZN5Caver22HookshotTrailComponent22ValueForBindedPropertyEi
 * Demangled: Caver::HookshotTrailComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000283274 string=0x00000000001FD7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::ValueForBindedProperty(Caver::HookshotTrailComponent *this, int a2)
{
  return Caver::GlowComponent::ValueForBindedProperty(this, a2);
}

