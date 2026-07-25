/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022802C
 * Mangled: _ZThn16_N5Caver33ModelTransformControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F51D0  Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000022802C string=0x0000000000228030 "h4"
 *   insn=0x0000000000228030 string=0x00000000001F51D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ModelTransformControllerComponent::SetValueForBindedProperty(
        Caver::ModelTransformControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ModelTransformControllerComponent::SetValueForBindedProperty(
           (Caver::ModelTransformControllerComponent *)((char *)this - 16),
           a2,
           a3);
}

