/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF880
 * Mangled: ._ZN5Caver5Proto33ModelTransformControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000226D64  Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F99EC  Caver::Proto::ModelTransformControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF888 string=0x00000000001FF88C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::default_instance(
        Caver::Proto::ModelTransformControllerComponent *this)
{
  return _ZN5Caver5Proto33ModelTransformControllerComponent16default_instanceEv(this);
}

