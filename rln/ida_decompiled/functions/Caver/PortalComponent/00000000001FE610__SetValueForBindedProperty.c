/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE610
 * Mangled: ._ZN5Caver15PortalComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000230314  `non-virtual thunk to'Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000230128  Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE618 string=0x00000000001FE61C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalComponent::SetValueForBindedProperty(
        Caver::PortalComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver15PortalComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

