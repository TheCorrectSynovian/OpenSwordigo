/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569650
 * Mangled: sub_569650
 * Demangled: sub_569650
 *
 * Callers: 9
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x00000000004E22CC  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x00000000004E3338  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E344C  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E3C08  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *   0x00000000004E59E8  google::protobuf::io::StringOutputStream::Next(void **,int *)
 *   0x00000000004E5AA0  google::protobuf::io::StringOutputStream::BackUp(int)
 *   0x0000000000536428  sub_536428
 *   0x00000000005696B4  sub_5696B4
 *
 * Callees: 3
 *   0x000000000056554C  sub_56554C
 *   0x000000000056739C  sub_56739C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000569654 string=0x0000000000569658 "B"
 *   insn=0x0000000000569658 string=0x000000000056965C "$"
 *   insn=0x0000000000569664 string=0x0000000000569668 "?"
 *   insn=0x0000000000569670 string=0x0000000000569674 "?"
 *   insn=0x0000000000569678 string=0x0000000000569688 "!"
 *   insn=0x0000000000569690 string=0x0000000000569694 "B"
 *   insn=0x00000000005696A8 string=0x000000000059FA90 "basic_string::resize"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_569650(int **result, size_t a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // x4
  size_t v4; // x1

  v3 = *((_QWORD *)*result - 3);
  if ( a2 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::resize");
  if ( a2 > v3 )
  {
    v4 = a2 - v3;
    if ( v4 )
      return (int **)sub_56739C(result, v4, a3);
  }
  else if ( a2 < v3 )
  {
    return (int **)sub_568CB8((__int64 *)result, a2, v3 - a2, 0);
  }
  return result;
}

