/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2D7C
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite10WriteInt32EiiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001F6D10  google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 4
 *   insn=0x00000000004E2D94 string=0x00000000004E2D98 "*l"
 *   insn=0x00000000004E2D98 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E2DAC string=0x00000000004E2DB0 "$l"
 *   insn=0x00000000004E2DC4 string=0x00000000001F6D10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteInt32(
        google::protobuf::internal::WireFormatLite *this,
        signed int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 8 * (_DWORD)this);
  if ( a2 < 0 )
    return google::protobuf::io::CodedOutputStream::WriteVarint64(a3, a2);
  else
    return google::protobuf::io::CodedOutputStream::WriteVarint32(a3, a2);
}

