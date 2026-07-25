/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA4C4
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent16default_instanceEv
 * Demangled: Caver::Proto::SimpleGlowComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FF120  Caver::Proto::SimpleGlowComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA4CC string=0x00000000002FA4D0 "S"
 *   insn=0x00000000002FA4D0 string=0x00000000002FA4D4 "s"
 *   insn=0x00000000002FA4D4 string=0x00000000002FA4D8 "`"
 *   insn=0x00000000002FA4D8 string=0x00000000002FA4DC "`"
 *   insn=0x00000000002FA4E0 string=0x00000000002FA4E4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::default_instance(Caver::Proto::SimpleGlowComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SimpleGlowComponent::default_instance_;
  if ( !Caver::Proto::SimpleGlowComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SimpleGlowComponent::default_instance_;
  }
  return result;
}

