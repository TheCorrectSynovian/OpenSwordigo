/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CB48
 * Mangled: _ZThn24_N5Caver25EntityControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::EntityControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB880  Caver::EntityControllerComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000026CB48 string=0x000000000026CB4C "M;"
 *   insn=0x000000000026CB4C string=0x00000000001FB880 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityControllerComponent::Update(
        Caver::EntityControllerComponent *this,
        float a2)
{
  return Caver::EntityControllerComponent::Update((Caver::EntityControllerComponent *)((char *)this - 24), a2);
}

