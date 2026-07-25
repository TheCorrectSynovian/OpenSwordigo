/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A50
 * Mangled: ._ZN5Caver33ModelTransformControllerComponentC2Ev
 * Demangled: Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000002283D8  sub_2283D8
 *   0x0000000000228848  Caver::ModelTransformControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000226A04  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7A58 string=0x00000000001F7A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(
        Caver::ModelTransformControllerComponent *this)
{
  return _ZN5Caver33ModelTransformControllerComponentC2Ev(this);
}

