/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA174
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::BreakableObjectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FB0A0  Caver::Proto::BreakableObjectComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA17C string=0x00000000002FA180 "s"
 *   insn=0x00000000002FA180 string=0x00000000002FA184 "s"
 *   insn=0x00000000002FA184 string=0x00000000002FA188 "`"
 *   insn=0x00000000002FA188 string=0x00000000002FA18C "`"
 *   insn=0x00000000002FA190 string=0x00000000002FA194 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::default_instance(
        Caver::Proto::BreakableObjectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BreakableObjectComponent::default_instance_;
  if ( !Caver::Proto::BreakableObjectComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BreakableObjectComponent::default_instance_;
  }
  return result;
}

