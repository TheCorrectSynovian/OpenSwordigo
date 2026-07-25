/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F51D0
 * Mangled: ._ZN5Caver33ModelTransformControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000022802C  `non-virtual thunk to'Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000227ECC  Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F51D8 string=0x00000000001F51DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelTransformControllerComponent::SetValueForBindedProperty(
        Caver::ModelTransformControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver33ModelTransformControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

