/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002038B0
 * Mangled: ._ZN5Caver9Rectangle9TransformERKNS_7Matrix4E
 * Demangled: Caver::Rectangle::Transform(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004B2358  Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004B21D0  Caver::Rectangle::Transform(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002038B8 string=0x00000000002038BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Transform(Caver::Rectangle *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver9Rectangle9TransformERKNS_7Matrix4E(this, a2);
}

