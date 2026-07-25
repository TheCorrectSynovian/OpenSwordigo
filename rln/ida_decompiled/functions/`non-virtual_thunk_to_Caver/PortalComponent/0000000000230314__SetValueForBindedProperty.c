/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230314
 * Mangled: _ZThn16_N5Caver15PortalComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE610  Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PortalComponent::SetValueForBindedProperty(
        Caver::PortalComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::PortalComponent::SetValueForBindedProperty((Caver::PortalComponent *)((char *)this - 16), a2, a3);
}

