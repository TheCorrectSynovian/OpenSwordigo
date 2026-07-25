/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAD54
 * Mangled: _ZN5Caver5Proto19FireBreathComponent16default_instanceEv
 * Demangled: Caver::Proto::FireBreathComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FD3B0  Caver::Proto::FireBreathComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAD5C string=0x00000000002FAD60 "s"
 *   insn=0x00000000002FAD60 string=0x00000000002FAD64 "s"
 *   insn=0x00000000002FAD64 string=0x00000000002FAD68 "`"
 *   insn=0x00000000002FAD68 string=0x00000000002FAD6C "`"
 *   insn=0x00000000002FAD70 string=0x00000000002FAD74 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::default_instance(Caver::Proto::FireBreathComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FireBreathComponent::default_instance_;
  if ( !Caver::Proto::FireBreathComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::FireBreathComponent::default_instance_;
  }
  return result;
}

