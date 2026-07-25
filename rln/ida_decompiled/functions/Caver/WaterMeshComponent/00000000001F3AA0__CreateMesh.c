/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3AA0
 * Mangled: ._ZN5Caver18WaterMeshComponent10CreateMeshEv
 * Demangled: Caver::WaterMeshComponent::CreateMesh(void)
 *
 * Callers: 3
 *   0x00000000002C278C  Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C2B80  `non-virtual thunk to'Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000002C2838  Caver::WaterMeshComponent::CreateMesh(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3AA8 string=0x00000000001F3AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WaterMeshComponent::CreateMesh(Caver::WaterMeshComponent *this)
{
  return _ZN5Caver18WaterMeshComponent10CreateMeshEv(this);
}

