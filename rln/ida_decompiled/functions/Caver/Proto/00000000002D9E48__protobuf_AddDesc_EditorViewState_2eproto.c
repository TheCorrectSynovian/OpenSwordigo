/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9E48
 * Mangled: _ZN5Caver5Proto40protobuf_AddDesc_EditorViewState_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *
 * Callers: 1
 *   0x00000000001F4750  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x0000000000201A40  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000002D9E28  Caver::Proto::protobuf_ShutdownFile_EditorViewState_2eproto(void)
 *
 * Referenced strings: 31
 *   insn=0x00000000002D9E48 string=0x00000000002D9E4C "\t"
 *   insn=0x00000000002D9E4C string=0x00000000002D9E50 "I"
 *   insn=0x00000000002D9E64 string=0x000000000058A9AC "./../../../../Source/Caver/Content/Proto/EditorViewState.pb.cc"
 *   insn=0x00000000002D9E70 string=0x00000000002D9E74 "B"
 *   insn=0x00000000002D9E90 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D9E94 string=0x00000000002D9E98 "H "
 *   insn=0x00000000002D9E98 string=0x00000000002D9E9C "mD"
 *   insn=0x00000000002D9EA0 string=0x00000000002D9EA4 "tb"
 *   insn=0x00000000002D9EA4 string=0x00000000002D9EA8 "J "
 *   insn=0x00000000002D9EA8 string=0x00000000002D9EAC "J"
 *   insn=0x00000000002D9EAC string=0x00000000002D9EB0 "i"
 *   insn=0x00000000002D9EB0 string=0x00000000002D9EB4 "A"
 *   insn=0x00000000002D9EB4 string=0x00000000002D9EB8 "j&"
 *   insn=0x00000000002D9EBC string=0x00000000002D9EC0 "i*"
 *   insn=0x00000000002D9EC0 string=0x00000000002D9EC4 "i "
 *   insn=0x00000000002D9EC4 string=0x00000000002D9EC8 ")"
 *   insn=0x00000000002D9ECC string=0x00000000002D9ED0 " "
 *   insn=0x00000000002D9ED0 string=0x00000000002D9ED4 "I "
 *   insn=0x00000000002D9ED4 string=0x00000000002D9ED8 ")"
 *   insn=0x00000000002D9EE0 string=0x00000000002D9EE4 "h"
 *   insn=0x00000000002D9EE4 string=0x00000000002D9EE8 "H "
 *   insn=0x00000000002D9EE8 string=0x00000000002D9EEC "eF"
 *   insn=0x00000000002D9EEC string=0x00000000002D9EF0 " "
 *   insn=0x00000000002D9EF0 string=0x00000000002D9EF4 "`"
 *   insn=0x00000000002D9EFC string=0x00000000002D9F00 "`6"
 *   insn=0x00000000002D9EFC string=0x00000000001FD230 "0'"
 *   insn=0x00000000002D9F04 string=0x00000000002D9F08 "h "
 *   insn=0x00000000002D9F08 string=0x00000000002D9F0C "uG"
 *   insn=0x00000000002D9F0C string=0x00000000002D9F10 "`:"
 *   insn=0x00000000002D9F0C string=0x00000000002D9E28 "H "
 *   insn=0x00000000002D9F20 string=0x00000000001F7D70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(
        Caver::Proto *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Caver::Proto *v4; // x0
  __int64 v5; // x19
  __int128 v6; // q0
  Caver::Proto::Vector3 *v7; // x0
  void (*v8)(void); // x1

  if ( (byte_6E8D38 & 1) == 0 )
  {
    byte_6E8D38 = 1;
    v4 = (Caver::Proto *)google::protobuf::internal::VerifyVersion(
                           (google::protobuf::internal *)&stru_1E9030.r_info,
                           2003000,
                           (int)"./../../../../Source/Caver/Content/Proto/EditorViewState.pb.cc",
                           a4);
    Caver::Proto::protobuf_AddDesc_Common_2eproto(v4);
    v5 = operator new(0x80u);
    *(_QWORD *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 96) = 1;
    *(_QWORD *)(v5 + 16) = &Caver::Proto::EditorViewState::_default_file_path_;
    *(_QWORD *)(v5 + 24) = v5 + 48;
    *(_DWORD *)(v5 + 40) = 4;
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)&v6 = &Caver::Proto::EditorViewState::_default_inspected_object_identifier_;
    *(_DWORD *)(v5 + 120) = 0;
    *(_QWORD *)(v5 + 104) = 0;
    *(_QWORD *)(v5 + 112) = 0;
    *(_QWORD *)v5 = off_6C6570;
    *((_QWORD *)&v6 + 1) = &Caver::Proto::EditorViewState::_default_inspected_template_identifier_;
    *(_OWORD *)(v5 + 80) = v6;
    Caver::Proto::EditorViewState::default_instance_ = v5;
    v7 = (Caver::Proto::Vector3 *)Caver::Proto::Vector3::default_instance((Caver::Proto::Vector3 *)v5);
    *(_QWORD *)(v5 + 104) = v7;
    *(_QWORD *)(v5 + 112) = Caver::Proto::Vector3::default_instance(v7);
    google::protobuf::internal::OnShutdown(
      (google::protobuf::internal *)Caver::Proto::protobuf_ShutdownFile_EditorViewState_2eproto,
      v8);
  }
}

