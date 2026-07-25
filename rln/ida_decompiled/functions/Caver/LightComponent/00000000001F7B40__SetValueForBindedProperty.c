/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B40
 * Mangled: ._ZN5Caver14LightComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000222E60  `non-virtual thunk to'Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000222C50  Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B48 string=0x00000000001F7B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightComponent::SetValueForBindedProperty(
        Caver::LightComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14LightComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

