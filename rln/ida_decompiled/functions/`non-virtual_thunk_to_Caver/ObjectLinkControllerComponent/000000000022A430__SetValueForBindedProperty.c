/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022A430
 * Mangled: _ZThn16_N5Caver29ObjectLinkControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9F20  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000022A434 string=0x00000000001F9F20 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(
        Caver::ObjectLinkControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(
           (Caver::ObjectLinkControllerComponent *)((char *)this - 16),
           a2,
           a3);
}

