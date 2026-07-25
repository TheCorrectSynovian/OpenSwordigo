/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032FDBC
 * Mangled: _ZNK5Caver5Proto31ItemDropComponent_ItemDropEntry24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x000000000032FDD0 string=0x000000000032FDD4 ""
 *   insn=0x000000000032FDD8 string=0x000000000032FDDC "H"
 *   insn=0x000000000032FDFC string=0x000000000032FE00 "T"
 *   insn=0x000000000032FE00 string=0x00000000001F7750 "0'"
 *   insn=0x000000000032FE14 string=0x000000000032FE18 "N"
 *   insn=0x000000000032FE1C string=0x000000000032FE20 ""
 *   insn=0x000000000032FE28 string=0x0000000000000003 "F"
 *   insn=0x000000000032FE34 string=0x000000000032FE38 "h"
 *   insn=0x000000000032FE44 string=0x000000000032FE48 """
 *   insn=0x000000000032FE48 string=0x00000000001F56D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 44);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 44);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(float *)(v4 + 32),
           a3);
  v5 = *(_DWORD *)(v4 + 44);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 40),
             a2,
             a4);
  }
LABEL_10:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 36),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 44) & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 40),
             a2,
             a4);
  return this;
}

