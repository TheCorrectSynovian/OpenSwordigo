/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E30B4
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite11WriteStringEiRKSsPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001FDBB0  google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 5
 *   insn=0x00000000004E30D0 string=0x00000000004E30D4 "[k"
 *   insn=0x00000000004E30D4 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E30E0 string=0x00000000004E30E4 "Wk"
 *   insn=0x00000000004E30F0 string=0x00000000004E30F4 """
 *   insn=0x00000000004E30FC string=0x00000000001FDBB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteString(
        int a1,
        const void **a2,
        google::protobuf::io::CodedOutputStream *this)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(this, (8 * a1) | 2);
  google::protobuf::io::CodedOutputStream::WriteVarint32(this, *((_DWORD *)*a2 - 6));
  return google::protobuf::io::CodedOutputStream::WriteRaw(this, *a2, *((_DWORD *)*a2 - 6));
}

