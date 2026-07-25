/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E50
 * Mangled: ._ZN5Caver18WaterMeshComponentC2Ev
 * Demangled: Caver::WaterMeshComponent::WaterMeshComponent(void)
 *
 * Callers: 1
 *   0x000000000024F684  Caver::WaterMeshComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002C1D0C  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E58 string=0x00000000001F5E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WaterMeshComponent::WaterMeshComponent(Caver::WaterMeshComponent *this)
{
  return _ZN5Caver18WaterMeshComponentC2Ev(this);
}

