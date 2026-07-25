/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D4B4
 * Mangled: _ZNK5Caver5Proto15PortalComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PortalComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 6
 *   insn=0x000000000032D4D0 string=0x000000000032D4D4 "("
 *   insn=0x000000000032D4F4 string=0x00000000001F7750 "0'"
 *   insn=0x000000000032D510 string=0x000000000032D514 "("
 *   insn=0x000000000032D51C string=0x0000000000000003 "F"
 *   insn=0x000000000032D540 string=0x000000000032D544 "c "
 *   insn=0x000000000032D544 string=0x00000000001F56D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 36);
  if ( (v5 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 36);
    if ( (v5 & 4) == 0 )
    {
LABEL_3:
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 8) == 0 )
  {
LABEL_4:
    if ( (v5 & 1) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 12),
             a2,
             a4);
  }
LABEL_8:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 32),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 12),
             a2,
             a4);
  return this;
}

