/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DA6BC
 * Mangled: _ZN5Caver5Proto15EditorViewState16default_instanceEv
 * Demangled: Caver::Proto::EditorViewState::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4750  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002DA6C4 string=0x00000000002DA6C8 "S "
 *   insn=0x00000000002DA6C8 string=0x00000000002DA6CC "sfF"
 *   insn=0x00000000002DA6CC string=0x00000000002DA6D0 "`"
 *   insn=0x00000000002DA6D0 string=0x00000000002DA6D4 "`"
 *   insn=0x00000000002DA6D8 string=0x00000000002DA6DC "`"
 *   insn=0x00000000002DA6D8 string=0x00000000001F4750 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::default_instance(Caver::Proto::EditorViewState *this)
{
  __int64 result; // x0

  result = Caver::Proto::EditorViewState::default_instance_;
  if ( !Caver::Proto::EditorViewState::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(0);
    return Caver::Proto::EditorViewState::default_instance_;
  }
  return result;
}

