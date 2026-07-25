/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283298
 * Mangled: _ZN5Caver22HookshotTrailComponent7PrepareEv
 * Demangled: Caver::HookshotTrailComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6A20  Caver::HookshotTrailComponent::CreateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000283298 string=0x00000000001F6A20 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::Prepare(Caver::HookshotTrailComponent *this)
{
  return Caver::HookshotTrailComponent::CreateVertices(this);
}

