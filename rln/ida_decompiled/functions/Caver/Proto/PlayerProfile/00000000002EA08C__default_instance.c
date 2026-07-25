/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA08C
 * Mangled: _ZN5Caver5Proto13PlayerProfile16default_instanceEv
 * Demangled: Caver::Proto::PlayerProfile::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002EA098 string=0x00000000002EA09C "s"
 *   insn=0x00000000002EA09C string=0x00000000002EA0A0 "`"
 *   insn=0x00000000002EA0A0 string=0x00000000002EA0A4 "`"
 *   insn=0x00000000002EA0A4 string=0x00000000002EA0A8 "f:"
 *   insn=0x00000000002EA0A8 string=0x00000000002EA0AC "`"
 *   insn=0x00000000002EA0A8 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile::default_instance(Caver::Proto::PlayerProfile *this)
{
  __int64 result; // x0

  result = Caver::Proto::PlayerProfile::default_instance_;
  if ( !Caver::Proto::PlayerProfile::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::PlayerProfile::default_instance_;
  }
  return result;
}

