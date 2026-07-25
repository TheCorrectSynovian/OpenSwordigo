/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000227EC4
 * Mangled: _ZThn16_N5Caver33ModelTransformControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002031B0  Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ModelTransformControllerComponent::ValueForBindedProperty(
        Caver::ModelTransformControllerComponent *this,
        int a2)
{
  return Caver::ModelTransformControllerComponent::ValueForBindedProperty(
           (Caver::ModelTransformControllerComponent *)((char *)this - 16),
           a2);
}

