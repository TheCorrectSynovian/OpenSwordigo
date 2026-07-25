/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9980
 * Mangled: ._ZN5Caver18TouchableComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000023FADC  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000023FADC  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9988 string=0x00000000001F998C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TouchableComponent::SetValueForBindedProperty(
        Caver::TouchableComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver18TouchableComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

