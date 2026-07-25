/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD5D0
 * Mangled: ._ZN5Caver24BreakableObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000255538  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000255538  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD5D8 string=0x00000000001FD5DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BreakableObjectComponent::SetValueForBindedProperty(
        Caver::BreakableObjectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver24BreakableObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

