/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025DC78
 * Mangled: _ZThn24_N5Caver23CharControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::CharControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61F0  Caver::CharControllerComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000025DC78 string=0x000000000025DC7C "]a"
 *   insn=0x000000000025DC7C string=0x00000000001F61F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::CharControllerComponent::Update(
        Caver::CharControllerComponent *this,
        float a2)
{
  Caver::CharControllerComponent::Update((Caver::CharControllerComponent *)((char *)this - 24), a2);
}

