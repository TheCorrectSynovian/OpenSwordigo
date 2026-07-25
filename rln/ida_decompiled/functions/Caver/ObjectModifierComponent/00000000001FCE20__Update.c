/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE20
 * Mangled: ._ZN5Caver23ObjectModifierComponent6UpdateEf
 * Demangled: Caver::ObjectModifierComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000028C258  `non-virtual thunk to'Caver::ObjectModifierComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000028C120  Caver::ObjectModifierComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCE24 string=0x000000000028C120 "\tp@"
 *   insn=0x00000000001FCE28 string=0x00000000001FCE2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectModifierComponent::Update(Caver::ObjectModifierComponent *this, float a2)
{
  return _ZN5Caver23ObjectModifierComponent6UpdateEf(this, a2);
}

