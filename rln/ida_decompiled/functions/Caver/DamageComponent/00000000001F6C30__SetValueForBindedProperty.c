/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C30
 * Mangled: ._ZN5Caver15DamageComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000265D54  `non-virtual thunk to'Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000265C94  Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6C34 string=0x0000000000265C94 "? "
 *   insn=0x00000000001F6C38 string=0x00000000001F6C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DamageComponent::SetValueForBindedProperty(
        Caver::DamageComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver15DamageComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

