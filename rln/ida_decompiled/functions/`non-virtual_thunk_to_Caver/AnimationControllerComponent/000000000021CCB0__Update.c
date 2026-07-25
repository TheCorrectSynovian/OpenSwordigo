/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021CCB0
 * Mangled: _ZThn24_N5Caver28AnimationControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::AnimationControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72A0  Caver::AnimationControllerComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000021CCB0 string=0x000000000021CCB4 "{i"
 *   insn=0x000000000021CCB4 string=0x00000000001F72A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::AnimationControllerComponent::Update(
        Caver::AnimationControllerComponent *this,
        float a2)
{
  Caver::AnimationControllerComponent::Update((Caver::AnimationControllerComponent *)((char *)this - 24), a2);
}

