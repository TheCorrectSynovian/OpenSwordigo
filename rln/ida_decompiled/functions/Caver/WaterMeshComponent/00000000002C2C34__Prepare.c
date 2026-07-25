/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2C34
 * Mangled: _ZN5Caver18WaterMeshComponent7PrepareEv
 * Demangled: Caver::WaterMeshComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9040  Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002C2C34 string=0x00000000001F9040 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WaterMeshComponent::Prepare(Caver::WaterMeshComponent *this)
{
  return Caver::WaterMeshComponent::UpdateBounds(this);
}

