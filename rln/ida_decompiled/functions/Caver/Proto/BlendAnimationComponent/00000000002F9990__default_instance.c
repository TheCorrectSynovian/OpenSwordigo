/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9990
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponent16default_instanceEv
 * Demangled: Caver::Proto::BlendAnimationComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F8C20  Caver::Proto::BlendAnimationComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9998 string=0x00000000002F999C "s"
 *   insn=0x00000000002F999C string=0x00000000002F99A0 "s"
 *   insn=0x00000000002F99A0 string=0x00000000002F99A4 "`"
 *   insn=0x00000000002F99A4 string=0x00000000002F99A8 "`"
 *   insn=0x00000000002F99AC string=0x00000000002F99B0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BlendAnimationComponent::default_instance(Caver::Proto::BlendAnimationComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BlendAnimationComponent::default_instance_;
  if ( !Caver::Proto::BlendAnimationComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BlendAnimationComponent::default_instance_;
  }
  return result;
}

