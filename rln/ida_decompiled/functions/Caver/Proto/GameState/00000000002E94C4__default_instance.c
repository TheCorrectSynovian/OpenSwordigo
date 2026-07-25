/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E94C4
 * Mangled: _ZN5Caver5Proto9GameState16default_instanceEv
 * Demangled: Caver::Proto::GameState::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002E94D0 string=0x00000000002E94D4 "s"
 *   insn=0x00000000002E94D4 string=0x00000000002E94D8 "`"
 *   insn=0x00000000002E94D8 string=0x00000000002E94DC "`"
 *   insn=0x00000000002E94DC string=0x00000000002E94E0 "X="
 *   insn=0x00000000002E94E0 string=0x00000000002E94E4 "`"
 *   insn=0x00000000002E94E0 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameState::default_instance(Caver::Proto::GameState *this)
{
  __int64 result; // x0

  result = Caver::Proto::GameState::default_instance_;
  if ( !Caver::Proto::GameState::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::GameState::default_instance_;
  }
  return result;
}

