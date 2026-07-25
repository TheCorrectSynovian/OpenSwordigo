/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A49E8
 * Mangled: _ZThn24_N5Caver24OrbitControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::OrbitControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002037C0  Caver::OrbitControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A49E8 string=0x00000000002A49EC "u{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OrbitControllerComponent::Update(
        Caver::OrbitControllerComponent *this,
        float a2)
{
  return Caver::OrbitControllerComponent::Update((Caver::OrbitControllerComponent *)((char *)this - 24), a2);
}

