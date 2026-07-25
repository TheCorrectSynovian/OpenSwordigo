/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD110
 * Mangled: ._ZN5Caver17ItemDropComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000277E94  `non-virtual thunk to'Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000277BEC  Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD118 string=0x00000000001FD11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::SetValueForBindedProperty(
        Caver::ItemDropComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver17ItemDropComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

