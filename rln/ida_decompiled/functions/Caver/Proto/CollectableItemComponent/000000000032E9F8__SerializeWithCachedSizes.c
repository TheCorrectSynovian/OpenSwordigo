/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032E9F8
 * Mangled: _ZNK5Caver5Proto24CollectableItemComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000032E58C  Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 5
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 19
 *   insn=0x000000000032EA0C string=0x000000000032EA10 "("
 *   insn=0x000000000032EA14 string=0x000000000032EA18 "h"
 *   insn=0x000000000032EA1C string=0x000000000032EA20 "h"
 *   insn=0x000000000032EA20 string=0x000000000032EA24 ""
 *   insn=0x000000000032EA38 string=0x0000000000000001 "ELF"
 *   insn=0x000000000032EA3C string=0x000000000032EA40 "p""
 *   insn=0x000000000032EA40 string=0x00000000001F7400 "0'"
 *   insn=0x000000000032EA50 string=0x0000000000000002 "LF"
 *   insn=0x000000000032EA58 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000032EA68 string=0x000000000032EA6C ")"
 *   insn=0x000000000032EA70 string=0x0000000000000003 "F"
 *   insn=0x000000000032EA78 string=0x000000000032EA7C ")"
 *   insn=0x000000000032EA7C string=0x000000000032EA80 "("
 *   insn=0x000000000032EA88 string=0x00000000001F9950 "0'"
 *   insn=0x000000000032EA9C string=0x000000000032EAA0 ",#"
 *   insn=0x000000000032EAA0 string=0x00000000001F7750 "0'"
 *   insn=0x000000000032EAB4 string=0x000000000032EAB8 "&#"
 *   insn=0x000000000032EABC string=0x000000000032EAC0 "H"
 *   insn=0x000000000032EAD4 string=0x000000000032EAD8 "vT"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 56);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 56);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x20) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_10:
  if ( *(_QWORD *)(v4 + 48) )
    v7 = v4;
  else
    v7 = Caver::Proto::CollectableItemComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 48),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 4) == 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteString(4, *(_QWORD *)(v4 + 32), a2);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x10) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(unsigned __int8 *)(v4 + 40),
             a2,
             a4);
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 24), a2);
  if ( (*(_DWORD *)(v4 + 56) & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(unsigned __int8 *)(v4 + 40),
             a2,
             a4);
  return this;
}

