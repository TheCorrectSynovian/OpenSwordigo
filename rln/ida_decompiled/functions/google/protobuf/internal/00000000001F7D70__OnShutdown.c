/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D70
 * Mangled: ._ZN6google8protobuf8internal10OnShutdownEPFvvE
 * Demangled: google::protobuf::internal::OnShutdown(void (*)(void))
 *
 * Callers: 7
 *   0x00000000002CD4CC  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x00000000002D9E48  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x00000000004E03C4  sub_4E03C4
 *
 * Callees: 1
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D78 string=0x00000000001F7D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::OnShutdown(google::protobuf::internal *this, void (*a2)(void))
{
  return _ZN6google8protobuf8internal10OnShutdownEPFvvE(this, a2);
}

