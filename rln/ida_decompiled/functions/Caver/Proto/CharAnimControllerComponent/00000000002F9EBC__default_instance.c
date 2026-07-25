/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9EBC
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::CharAnimControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FA650  Caver::Proto::CharAnimControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9EC4 string=0x00000000002F9EC8 "s"
 *   insn=0x00000000002F9EC8 string=0x00000000002F9ECC "s"
 *   insn=0x00000000002F9ECC string=0x00000000002F9ED0 "`"
 *   insn=0x00000000002F9ED0 string=0x00000000002F9ED4 "`"
 *   insn=0x00000000002F9ED4 string=0x00000000002F9ED8 "^""
 *   insn=0x00000000002F9ED8 string=0x00000000002F9EDC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharAnimControllerComponent::default_instance(
        Caver::Proto::CharAnimControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::CharAnimControllerComponent::default_instance_;
  if ( !Caver::Proto::CharAnimControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::CharAnimControllerComponent::default_instance_;
  }
  return result;
}

