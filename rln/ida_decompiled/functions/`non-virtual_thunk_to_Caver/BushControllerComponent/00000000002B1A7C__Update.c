/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1A7C
 * Mangled: _ZThn24_N5Caver23BushControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::BushControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F80C0  Caver::BushControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B1A80 string=0x00000000001F80C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BushControllerComponent::Update(
        Caver::BushControllerComponent *this,
        float a2)
{
  return Caver::BushControllerComponent::Update((Caver::BushControllerComponent *)((char *)this - 24), a2);
}

