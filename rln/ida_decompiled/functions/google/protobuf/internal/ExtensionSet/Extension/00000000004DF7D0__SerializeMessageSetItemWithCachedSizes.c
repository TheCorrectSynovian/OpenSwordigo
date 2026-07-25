/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DF7D0
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9Extension38SerializeMessageSetItemWithCachedSizesEiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FA490  google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FBE90  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *   0x00000000001FEF00  google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 9
 *   insn=0x00000000004DF7F0 string=0x00000000004DF7F4 "a"
 *   insn=0x00000000004DF7F8 string=0x00000000004DF7FC ""
 *   insn=0x00000000004DF818 string=0x00000000001FBE90 "0'"
 *   insn=0x00000000004DF820 string=0x00000000004DF834 "a"
 *   insn=0x00000000004DF83C string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004DF840 string=0x0000000000000002 "LF"
 *   insn=0x00000000004DF84C string=0x00000000001FA490 "0'"
 *   insn=0x00000000004DF854 string=0x0000000000000003 "F"
 *   insn=0x00000000004DF870 string=0x00000000004DF874 "sy"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(
        _BYTE *this,
        google::protobuf::internal::WireFormatLite *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  _QWORD *v3; // x20
  int v5; // w21
  google::protobuf::io::CodedOutputStream *v6; // x3
  google::protobuf::io::CodedOutputStream *v7; // x3

  v3 = this;
  v5 = (int)a2;
  if ( this[8] != 11 || this[9] )
    return (_BYTE *)google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(
                      (google::protobuf::internal::ExtensionSet::Extension *)this,
                      (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
                      a3);
  if ( !this[10] )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 0xBu);
    google::protobuf::internal::WireFormatLite::WriteUInt32(
      (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
      v5,
      a3,
      v6);
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
      *v3,
      a3,
      v7);
    return (_BYTE *)google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 0xCu);
  }
  return this;
}

