/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002410B4
 * Mangled: _ZThn24_N5Caver28TransformControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::TransformControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF9B0  Caver::TransformControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002410B4 string=0x00000000002410B8 ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::TransformControllerComponent::Update(
        Caver::TransformControllerComponent *this,
        float a2)
{
  Caver::TransformControllerComponent::Update((Caver::TransformControllerComponent *)((char *)this - 24), a2);
}

