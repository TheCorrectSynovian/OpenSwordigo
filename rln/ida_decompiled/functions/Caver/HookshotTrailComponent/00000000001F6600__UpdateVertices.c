/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6600
 * Mangled: ._ZN5Caver22HookshotTrailComponent14UpdateVerticesEv
 * Demangled: Caver::HookshotTrailComponent::UpdateVertices(void)
 *
 * Callers: 2
 *   0x0000000000283334  Caver::HookshotTrailComponent::Update(float)
 *   0x00000000002835DC  `non-virtual thunk to'Caver::HookshotTrailComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000283338  Caver::HookshotTrailComponent::UpdateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6608 string=0x00000000001F660C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::UpdateVertices(Caver::HookshotTrailComponent *this)
{
  return _ZN5Caver22HookshotTrailComponent14UpdateVerticesEv(this);
}

