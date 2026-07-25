/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F99EC
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FF880  Caver::Proto::ModelTransformControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F99F4 string=0x00000000002F99F8 "s"
 *   insn=0x00000000002F99F8 string=0x00000000002F99FC "s2A"
 *   insn=0x00000000002F99FC string=0x00000000002F9A00 "`"
 *   insn=0x00000000002F9A00 string=0x00000000002F9A04 "`"
 *   insn=0x00000000002F9A08 string=0x00000000002F9A0C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::default_instance(
        Caver::Proto::ModelTransformControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ModelTransformControllerComponent::default_instance_;
  if ( !Caver::Proto::ModelTransformControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ModelTransformControllerComponent::default_instance_;
  }
  return result;
}

