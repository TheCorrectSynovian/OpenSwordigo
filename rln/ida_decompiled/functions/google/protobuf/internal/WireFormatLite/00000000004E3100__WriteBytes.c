/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3100
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite10WriteBytesEiRKSsPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001FDBB0  google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 5
 *   insn=0x00000000004E311C string=0x00000000004E3120 "Hk"
 *   insn=0x00000000004E3120 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E312C string=0x00000000004E3130 "Dk"
 *   insn=0x00000000004E313C string=0x00000000004E3140 """
 *   insn=0x00000000004E3148 string=0x00000000001FDBB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteBytes(
        int a1,
        const void **a2,
        google::protobuf::io::CodedOutputStream *this)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(this, (8 * a1) | 2);
  google::protobuf::io::CodedOutputStream::WriteVarint32(this, *((_DWORD *)*a2 - 6));
  return google::protobuf::io::CodedOutputStream::WriteRaw(this, *a2, *((_DWORD *)*a2 - 6));
}

