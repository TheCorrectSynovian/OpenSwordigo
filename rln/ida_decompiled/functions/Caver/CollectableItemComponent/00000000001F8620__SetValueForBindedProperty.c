/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8620
 * Mangled: ._ZN5Caver24CollectableItemComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000262B50  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000262B50  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8628 string=0x00000000001F862C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollectableItemComponent::SetValueForBindedProperty(
        Caver::CollectableItemComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver24CollectableItemComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

