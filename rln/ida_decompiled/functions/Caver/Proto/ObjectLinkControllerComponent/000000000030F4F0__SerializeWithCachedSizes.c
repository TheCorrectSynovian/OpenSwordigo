/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F4F0
 * Mangled: _ZNK5Caver5Proto29ObjectLinkControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000030F038  Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 17
 *   insn=0x000000000030F504 string=0x000000000030F508 ""
 *   insn=0x000000000030F50C string=0x000000000030F510 "H"
 *   insn=0x000000000030F514 string=0x000000000030F518 ""
 *   insn=0x000000000030F534 string=0x00000000001F7750 "0'"
 *   insn=0x000000000030F550 string=0x000000000030F554 ""
 *   insn=0x000000000030F55C string=0x000000000030F560 ")"
 *   insn=0x000000000030F564 string=0x0000000000000003 "F"
 *   insn=0x000000000030F56C string=0x000000000030F570 ")"
 *   insn=0x000000000030F570 string=0x000000000030F574 "("
 *   insn=0x000000000030F57C string=0x00000000001F9950 "0'"
 *   insn=0x000000000030F58C string=0x000000000030F590 ")"
 *   insn=0x000000000030F59C string=0x000000000030F5A0 ")"
 *   insn=0x000000000030F5A0 string=0x000000000030F5A4 "("
 *   insn=0x000000000030F5B0 string=0x000000000030F5B4 "H"
 *   insn=0x000000000030F5BC string=0x000000000030F5C0 ")"
 *   insn=0x000000000030F5CC string=0x000000000030F5D0 ")"
 *   insn=0x000000000030F5D4 string=0x000000000030F5D8 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 56);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 56);
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
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_9:
  if ( *(_QWORD *)(v4 + 32) )
    v7 = v4;
  else
    v7 = Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 32),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 8) == 0 )
      return this;
    goto LABEL_17;
  }
LABEL_13:
  if ( *(_QWORD *)(v4 + 48) )
    v8 = v4;
  else
    v8 = Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v8 + 48),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 56) & 8) != 0 )
  {
LABEL_17:
    if ( *(_QWORD *)(v4 + 40) )
      v9 = v4;
    else
      v9 = Caver::Proto::ObjectLinkControllerComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_QWORD *)(v9 + 40),
             a2,
             a4);
  }
  return this;
}

