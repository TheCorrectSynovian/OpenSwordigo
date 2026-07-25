/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3148
 * Mangled: _ZThn24_N5Caver20FireEmitterComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::FireEmitterComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC710  Caver::FireEmitterComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A3148 string=0x00000000002A314C "qe"
 *   insn=0x00000000002A314C string=0x00000000001FC710 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::FireEmitterComponent::Update(
        Caver::FireEmitterComponent *this,
        float a2)
{
  return Caver::FireEmitterComponent::Update((Caver::FireEmitterComponent *)((char *)this - 24), a2);
}

