/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C258
 * Mangled: _ZThn24_N5Caver23ObjectModifierComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ObjectModifierComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE20  Caver::ObjectModifierComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x000000000028C25C string=0x00000000001FCE20 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ObjectModifierComponent::Update(
        Caver::ObjectModifierComponent *this,
        float a2)
{
  return Caver::ObjectModifierComponent::Update((Caver::ObjectModifierComponent *)((char *)this - 24), a2);
}

