/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD360
 * Mangled: ._ZN5Caver18WaterMeshComponentC2Ev_0
 * Demangled: Caver::WaterMeshComponent::WaterMeshComponent(void)
 *
 * Callers: 1
 *   0x00000000002C330C  Caver::WaterMeshComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002C1D0C  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD368 string=0x00000000001FD36C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WaterMeshComponent::WaterMeshComponent(Caver::WaterMeshComponent *this)
{
  return _ZN5Caver18WaterMeshComponentC2Ev(this);
}

