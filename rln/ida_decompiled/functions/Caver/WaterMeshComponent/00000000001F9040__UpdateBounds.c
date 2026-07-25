/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9040
 * Mangled: ._ZN5Caver18WaterMeshComponent12UpdateBoundsEv
 * Demangled: Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Callers: 3
 *   0x00000000002C2C34  Caver::WaterMeshComponent::Prepare(void)
 *   0x00000000002C2D34  Caver::WaterMeshComponent::Update(float)
 *   0x00000000002C2D94  `non-virtual thunk to'Caver::WaterMeshComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002C2C38  Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9048 string=0x00000000001F904C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WaterMeshComponent::UpdateBounds(Caver::WaterMeshComponent *this)
{
  return _ZN5Caver18WaterMeshComponent12UpdateBoundsEv(this);
}

