/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8D54
 * Mangled: _ZN5Caver5Proto10MusicTrack16default_instanceEv
 * Demangled: Caver::Proto::MusicTrack::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002D8D5C string=0x00000000002D8D60 "s "
 *   insn=0x00000000002D8D60 string=0x00000000002D8D64 "srE"
 *   insn=0x00000000002D8D64 string=0x00000000002D8D68 "`"
 *   insn=0x00000000002D8D68 string=0x00000000002D8D6C "`"
 *   insn=0x00000000002D8D6C string=0x00000000002D8D70 "T"
 *   insn=0x00000000002D8D70 string=0x00000000002D8D74 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::default_instance(Caver::Proto::MusicTrack *this)
{
  __int64 result; // x0

  result = Caver::Proto::MusicTrack::default_instance_;
  if ( !Caver::Proto::MusicTrack::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::MusicTrack::default_instance_;
  }
  return result;
}

