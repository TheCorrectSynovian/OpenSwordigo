/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283334
 * Mangled: _ZN5Caver22HookshotTrailComponent6UpdateEf
 * Demangled: Caver::HookshotTrailComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6600  Caver::HookshotTrailComponent::UpdateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000283334 string=0x00000000001F6600 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::Update(Caver::HookshotTrailComponent *this, float a2)
{
  return Caver::HookshotTrailComponent::UpdateVertices(this);
}

