/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002000B0
 * Mangled: ._ZN5Caver9Rectangle18ExpandHorizontallyEf
 * Demangled: Caver::Rectangle::ExpandHorizontally(float)
 *
 * Callers: 1
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000004B1CFC  Caver::Rectangle::ExpandHorizontally(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002000B8 string=0x00000000002000BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::ExpandHorizontally(Caver::Rectangle *this, float a2)
{
  return _ZN5Caver9Rectangle18ExpandHorizontallyEf(this, a2);
}

