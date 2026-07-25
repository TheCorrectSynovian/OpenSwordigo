/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9CF0
 * Mangled: ._ZNK5Caver7Matrix46EqualsERKS0_f
 * Demangled: Caver::Matrix4::Equals(Caver::Matrix4 const&,float)
 *
 * Callers: 1
 *   0x000000000044AE48  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004AE530  Caver::Matrix4::Equals(Caver::Matrix4 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9CF8 string=0x00000000001F9CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::Equals(Caver::Matrix4 *this, const Caver::Matrix4 *a2, float a3)
{
  return _ZNK5Caver7Matrix46EqualsERKS0_f(this, a2, a3);
}

