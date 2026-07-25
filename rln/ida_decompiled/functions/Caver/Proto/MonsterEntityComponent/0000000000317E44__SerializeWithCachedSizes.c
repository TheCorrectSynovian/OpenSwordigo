/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317E44
 * Mangled: _ZNK5Caver5Proto22MonsterEntityComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000317A70  Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 18
 *   insn=0x0000000000317E5C string=0x0000000000317E60 "H"
 *   insn=0x0000000000317E5C string=0x0000000000317E78 "i"
 *   insn=0x0000000000317E60 string=0x0000000000317EA8 "i"
 *   insn=0x0000000000317E64 string=0x0000000000317E68 "H"
 *   insn=0x0000000000317E7C string=0x0000000000317E80 ")"
 *   insn=0x0000000000317E84 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000317E8C string=0x0000000000317E90 ")"
 *   insn=0x0000000000317E90 string=0x0000000000317E94 "("
 *   insn=0x0000000000317E9C string=0x00000000001F9950 "0'"
 *   insn=0x0000000000317EA0 string=0x0000000000317EA4 ""
 *   insn=0x0000000000317EAC string=0x0000000000317EB0 ")"
 *   insn=0x0000000000317EB4 string=0x0000000000000002 "LF"
 *   insn=0x0000000000317EBC string=0x0000000000317EC0 ")"
 *   insn=0x0000000000317EC0 string=0x0000000000317EC4 "("
 *   insn=0x0000000000317EDC string=0x0000000000000003 "F"
 *   insn=0x0000000000317EE0 string=0x0000000000317EE4 "s"
 *   insn=0x0000000000317EE8 string=0x0000000000317EEC ""
 *   insn=0x0000000000317F00 string=0x0000000000317F04 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 36);
  if ( (v5 & 2) != 0 )
  {
    if ( *(_QWORD *)(this + 24) )
      v7 = this;
    else
      v7 = Caver::Proto::MonsterEntityComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 24),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 36);
    if ( (v5 & 1) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_14;
    }
  }
  else if ( (v5 & 1) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 16) )
    v8 = v4;
  else
    v8 = Caver::Proto::MonsterEntityComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v8 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 36);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(unsigned __int8 *)(v4 + 33),
             a2,
             a4);
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 32),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 36) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(unsigned __int8 *)(v4 + 33),
             a2,
             a4);
  return this;
}

