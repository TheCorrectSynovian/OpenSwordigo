/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D82D0
 * Mangled: _ZN5Caver5Proto12SoundLibrary16default_instanceEv
 * Demangled: Caver::Proto::SoundLibrary::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D82D8 string=0x00000000002D82DC "s "
 *   insn=0x00000000002D82DC string=0x00000000002D82E0 "s2G"
 *   insn=0x00000000002D82E0 string=0x00000000002D82E4 "`"
 *   insn=0x00000000002D82E4 string=0x00000000002D82E8 "`"
 *   insn=0x00000000002D82EC string=0x00000000002D82F0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::default_instance(Caver::Proto::SoundLibrary *this)
{
  __int64 result; // x0

  result = Caver::Proto::SoundLibrary::default_instance_;
  if ( !Caver::Proto::SoundLibrary::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::SoundLibrary::default_instance_;
  }
  return result;
}

