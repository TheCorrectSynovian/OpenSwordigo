/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7A28
 * Mangled: _ZN5Caver5Proto11SoundEffect16default_instanceEv
 * Demangled: Caver::Proto::SoundEffect::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D7A30 string=0x00000000002D7A34 "s "
 *   insn=0x00000000002D7A34 string=0x00000000002D7A38 "s"
 *   insn=0x00000000002D7A38 string=0x00000000002D7A3C "`"
 *   insn=0x00000000002D7A3C string=0x00000000002D7A40 "`"
 *   insn=0x00000000002D7A44 string=0x00000000002D7A48 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffect::default_instance(Caver::Proto::SoundEffect *this)
{
  __int64 result; // x0

  result = Caver::Proto::SoundEffect::default_instance_;
  if ( !Caver::Proto::SoundEffect::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::SoundEffect::default_instance_;
  }
  return result;
}

