/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9EF0
 * Mangled: _ZN5Caver5Proto23CharControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::CharControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FBCB0  Caver::Proto::CharControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9EF8 string=0x00000000002F9EFC "s"
 *   insn=0x00000000002F9EFC string=0x00000000002F9F00 "s"
 *   insn=0x00000000002F9F00 string=0x00000000002F9F04 "`"
 *   insn=0x00000000002F9F04 string=0x00000000002F9F08 "`"
 *   insn=0x00000000002F9F08 string=0x00000000002F9F0C "Q""
 *   insn=0x00000000002F9F0C string=0x00000000002F9F10 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::default_instance(Caver::Proto::CharControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::CharControllerComponent::default_instance_;
  if ( !Caver::Proto::CharControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::CharControllerComponent::default_instance_;
  }
  return result;
}

