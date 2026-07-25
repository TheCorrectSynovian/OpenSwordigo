/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200100
 * Mangled: ._ZN5Caver19SimpleGlowComponent16CreateVertexDataEv
 * Demangled: Caver::SimpleGlowComponent::CreateVertexData(void)
 *
 * Callers: 2
 *   0x00000000002B08BC  Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B0E90  Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000002B09B8  Caver::SimpleGlowComponent::CreateVertexData(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200108 string=0x000000000020010C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SimpleGlowComponent::CreateVertexData(Caver::SimpleGlowComponent *this)
{
  return _ZN5Caver19SimpleGlowComponent16CreateVertexDataEv(this);
}

