/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222E60
 * Mangled: _ZThn16_N5Caver14LightComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7B40  Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000222E60 string=0x0000000000222E64 "7S"
 *   insn=0x0000000000222E64 string=0x00000000001F7B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::LightComponent::SetValueForBindedProperty(
        Caver::LightComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::LightComponent::SetValueForBindedProperty((Caver::LightComponent *)((char *)this - 16), a2, a3);
}

