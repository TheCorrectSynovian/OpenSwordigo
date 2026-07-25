/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A60
 * Mangled: ._ZN5Caver19PropertiesComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002335DC  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002335DC  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A68 string=0x0000000000202A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PropertiesComponent::SetValueForBindedProperty(
        Caver::PropertiesComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver19PropertiesComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

