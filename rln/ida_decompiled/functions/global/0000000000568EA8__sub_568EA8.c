/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568EA8
 * Mangled: sub_568EA8
 * Demangled: sub_568EA8
 *
 * Callers: 17
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x00000000004AA758  Caver::GUITextBubble::Update(float)
 *   0x00000000004B9DBC  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004E22CC  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x00000000004E3338  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E344C  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E3C08  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *   0x00000000004E59E8  google::protobuf::io::StringOutputStream::Next(void **,int *)
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536428  sub_536428
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000568EB4 string=0x0000000000568EB8 "B"
 *   insn=0x0000000000568EBC string=0x0000000000568EC0 "$`"
 *   insn=0x0000000000568EC8 string=0x0000000000568ECC """
 *   insn=0x0000000000568ECC string=0x0000000000568ED0 "_"
 *   insn=0x0000000000568EE4 string=0x0000000000568EE8 "t"
 *   insn=0x0000000000568EE8 string=0x0000000000568EEC "a"
 *   insn=0x0000000000568EF0 string=0x0000000000568EF4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_568EA8(__int64 *result)
{
  __int64 v1; // x1
  __int64 *v2; // x19

  v1 = *result;
  if ( (__int64 *)(*result - 24) != &qword_6FD2E0 )
  {
    if ( *(int *)(v1 - 8) > 0 )
    {
      v2 = result;
      sub_568CB8(result, 0, 0, 0);
      v1 = *v2;
    }
    result = (__int64 *)0xFFFFFFFFLL;
    *(_DWORD *)(v1 - 8) = -1;
  }
  return result;
}

