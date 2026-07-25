/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F995C
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent16default_instanceEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FAF20  Caver::Proto::KeyframeAnimationComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9964 string=0x00000000002F9968 "s"
 *   insn=0x00000000002F9968 string=0x00000000002F996C "s"
 *   insn=0x00000000002F996C string=0x00000000002F9970 "`"
 *   insn=0x00000000002F9970 string=0x00000000002F9974 "`"
 *   insn=0x00000000002F9978 string=0x00000000002F997C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::default_instance(
        Caver::Proto::KeyframeAnimationComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::KeyframeAnimationComponent::default_instance_;
  if ( !Caver::Proto::KeyframeAnimationComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::KeyframeAnimationComponent::default_instance_;
  }
  return result;
}

