/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283284
 * Mangled: _ZThn16_N5Caver22HookshotTrailComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::HookshotTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000283288 string=0x00000000001FC4E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HookshotTrailComponent::SetValueForBindedProperty(
        Caver::HookshotTrailComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::GlowComponent::SetValueForBindedProperty((Caver::HookshotTrailComponent *)((char *)this - 16), a2, a3);
}

