/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002030F0
 * Mangled: ._ZN5Caver19WeaponGlowComponent16CreateVertexDataEv
 * Demangled: Caver::WeaponGlowComponent::CreateVertexData(void)
 *
 * Callers: 1
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000002CB9AC  Caver::WeaponGlowComponent::CreateVertexData(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002030F8 string=0x00000000002030FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponGlowComponent::CreateVertexData(Caver::WeaponGlowComponent *this)
{
  return _ZN5Caver19WeaponGlowComponent16CreateVertexDataEv(this);
}

