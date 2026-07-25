/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A20
 * Mangled: ._ZN5Caver22HookshotTrailComponent14CreateVerticesEv
 * Demangled: Caver::HookshotTrailComponent::CreateVertices(void)
 *
 * Callers: 1
 *   0x0000000000283298  Caver::HookshotTrailComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000028329C  Caver::HookshotTrailComponent::CreateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A28 string=0x00000000001F6A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::CreateVertices(Caver::HookshotTrailComponent *this)
{
  return _ZN5Caver22HookshotTrailComponent14CreateVerticesEv(this);
}

