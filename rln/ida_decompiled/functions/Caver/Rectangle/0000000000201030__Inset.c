/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201030
 * Mangled: ._ZN5Caver9Rectangle5InsetEf
 * Demangled: Caver::Rectangle::Inset(float)
 *
 * Callers: 1
 *   0x00000000004A9B68  Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *
 * Callees: 1
 *   0x00000000004B1CBC  Caver::Rectangle::Inset(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201038 string=0x000000000020103C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Inset(Caver::Rectangle *this, float a2)
{
  return _ZN5Caver9Rectangle5InsetEf(this, a2);
}

