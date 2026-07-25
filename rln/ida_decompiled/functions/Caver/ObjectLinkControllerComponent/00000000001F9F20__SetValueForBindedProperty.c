/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F20
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000022A430  `non-virtual thunk to'Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F28 string=0x00000000001F9F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(
        Caver::ObjectLinkControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver29ObjectLinkControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

