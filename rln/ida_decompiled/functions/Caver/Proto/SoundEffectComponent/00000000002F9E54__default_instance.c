/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9E54
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent16default_instanceEv
 * Demangled: Caver::Proto::SoundEffectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FD6F0  Caver::Proto::SoundEffectComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9E5C string=0x00000000002F9E60 "s"
 *   insn=0x00000000002F9E60 string=0x00000000002F9E64 "s"
 *   insn=0x00000000002F9E64 string=0x00000000002F9E68 "`"
 *   insn=0x00000000002F9E68 string=0x00000000002F9E6C "`"
 *   insn=0x00000000002F9E6C string=0x00000000002F9E70 "x""
 *   insn=0x00000000002F9E70 string=0x00000000002F9E74 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::default_instance(Caver::Proto::SoundEffectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SoundEffectComponent::default_instance_;
  if ( !Caver::Proto::SoundEffectComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SoundEffectComponent::default_instance_;
  }
  return result;
}

