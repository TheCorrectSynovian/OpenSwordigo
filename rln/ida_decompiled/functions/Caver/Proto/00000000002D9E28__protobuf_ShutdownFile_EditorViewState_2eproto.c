/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9E28
 * Mangled: _ZN5Caver5Proto45protobuf_ShutdownFile_EditorViewState_2eprotoEv
 * Demangled: Caver::Proto::protobuf_ShutdownFile_EditorViewState_2eproto(void)
 *
 * Callers: 1
 *   0x00000000002D9E48  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002D9E28 string=0x00000000002D9E2C "eF"
 *   insn=0x00000000002D9E34 string=0x00000000002D9E38 ""
 *   insn=0x00000000002D9E3C string=0x00000000002D9E40 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::protobuf_ShutdownFile_EditorViewState_2eproto(Caver::Proto *this)
{
  __int64 result; // x0

  result = Caver::Proto::EditorViewState::default_instance_;
  if ( Caver::Proto::EditorViewState::default_instance_ )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::EditorViewState::default_instance_ + 8LL))(Caver::Proto::EditorViewState::default_instance_);
  return result;
}

