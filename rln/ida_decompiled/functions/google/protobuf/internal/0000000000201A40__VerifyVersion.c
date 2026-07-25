/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A40
 * Mangled: ._ZN6google8protobuf8internal13VerifyVersionEiiPKc
 * Demangled: google::protobuf::internal::VerifyVersion(int,int,char const*)
 *
 * Callers: 5
 *   0x00000000002CD4CC  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x00000000002D9E48  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Callees: 1
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A48 string=0x0000000000201A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::VerifyVersion(
        google::protobuf::internal *this,
        int a2,
        int a3,
        const char *a4)
{
  return _ZN6google8protobuf8internal13VerifyVersionEiiPKc(this, a2, a3, a4);
}

