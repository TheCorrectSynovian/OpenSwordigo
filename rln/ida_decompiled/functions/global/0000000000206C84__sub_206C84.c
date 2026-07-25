/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206C84
 * Mangled: sub_206C84
 * Demangled: sub_206C84
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4750  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000566F50  sub_566F50
 *
 * Referenced strings: 10
 *   insn=0x0000000000206C94 string=0x00000000001F4750 "P'"
 *   insn=0x0000000000206C98 string=0x0000000000206C9C ""
 *   insn=0x0000000000206CA0 string=0x0000000000206CA4 "!"
 *   insn=0x0000000000206CB0 string=0x0000000000206CB4 "5"
 *   insn=0x0000000000206CB4 string=0x0000000000206CB8 "sfF"
 *   insn=0x0000000000206CC8 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000206CCC string=0x0000000000206CD0 "!"
 *   insn=0x0000000000206CD8 string=0x0000000000206CDC "5"
 *   insn=0x0000000000206CE4 string=0x0000000000206CE8 "!"
 *   insn=0x0000000000206CF0 string=0x0000000000206CF4 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_206C84(Caver::Proto *a1)
{
  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(a1);
  Caver::Proto::EditorViewState::_default_file_path_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::EditorViewState::_default_file_path_, &off_6E8000);
  Caver::Proto::EditorViewState::_default_inspected_object_identifier_ = (__int64)&byte_6FD2F8;
  __cxa_atexit(
    (void (*)(void *))sub_566F50,
    &Caver::Proto::EditorViewState::_default_inspected_object_identifier_,
    &off_6E8000);
  Caver::Proto::EditorViewState::_default_inspected_template_identifier_ = (__int64)&byte_6FD2F8;
  return __cxa_atexit(
           (void (*)(void *))sub_566F50,
           &Caver::Proto::EditorViewState::_default_inspected_template_identifier_,
           &off_6E8000);
}

