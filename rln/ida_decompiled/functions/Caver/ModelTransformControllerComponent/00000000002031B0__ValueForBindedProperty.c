/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002031B0
 * Mangled: ._ZN5Caver33ModelTransformControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000227EC4  `non-virtual thunk to'Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000227E54  Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002031B4 string=0x0000000000227E54 ")"
 *   insn=0x00000000002031B8 string=0x00000000002031BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelTransformControllerComponent::ValueForBindedProperty(
        Caver::ModelTransformControllerComponent *this,
        int a2)
{
  return _ZN5Caver33ModelTransformControllerComponent22ValueForBindedPropertyEi(this, a2);
}

