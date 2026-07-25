/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3490
 * Mangled: ._ZN5Caver15AttackComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000029215C  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000029215C  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3498 string=0x00000000001F349C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttackComponent::SetValueForBindedProperty(
        Caver::AttackComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver15AttackComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

