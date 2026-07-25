/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1DB0
 * Mangled: _ZN5Caver5Proto10LevelState16default_instanceEv
 * Demangled: Caver::Proto::LevelState::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F1DBC string=0x00000000002F1DC0 "s"A"
 *   insn=0x00000000002F1DC0 string=0x00000000002F1DC4 "`"
 *   insn=0x00000000002F1DC4 string=0x00000000002F1DC8 "`"
 *   insn=0x00000000002F1DCC string=0x00000000002F1DD0 "`"
 *   insn=0x00000000002F1DCC string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::default_instance(Caver::Proto::LevelState *this)
{
  __int64 result; // x0

  result = Caver::Proto::LevelState::default_instance_;
  if ( !Caver::Proto::LevelState::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::LevelState::default_instance_;
  }
  return result;
}

