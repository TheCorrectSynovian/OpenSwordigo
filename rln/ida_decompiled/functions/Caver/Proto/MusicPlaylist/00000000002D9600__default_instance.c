/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9600
 * Mangled: _ZN5Caver5Proto13MusicPlaylist16default_instanceEv
 * Demangled: Caver::Proto::MusicPlaylist::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002D9608 string=0x00000000002D960C "s "
 *   insn=0x00000000002D960C string=0x00000000002D9610 "s"
 *   insn=0x00000000002D9610 string=0x00000000002D9614 "`"
 *   insn=0x00000000002D9614 string=0x00000000002D9618 "`"
 *   insn=0x00000000002D9618 string=0x00000000002D961C ")"
 *   insn=0x00000000002D961C string=0x00000000002D9620 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::default_instance(Caver::Proto::MusicPlaylist *this)
{
  __int64 result; // x0

  result = Caver::Proto::MusicPlaylist::default_instance_;
  if ( !Caver::Proto::MusicPlaylist::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::MusicPlaylist::default_instance_;
  }
  return result;
}

