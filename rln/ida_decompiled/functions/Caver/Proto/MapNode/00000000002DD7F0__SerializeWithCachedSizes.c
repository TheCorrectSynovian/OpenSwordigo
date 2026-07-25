/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DD7F0
 * Mangled: _ZNK5Caver5Proto7MapNode24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002DD018  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 5
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 27
 *   insn=0x00000000002DD80C string=0x00000000002DD810 "I "
 *   insn=0x00000000002DD814 string=0x00000000002DD818 ")"
 *   insn=0x00000000002DD81C string=0x0000000000000001 "ELF"
 *   insn=0x00000000002DD824 string=0x00000000002DD828 ")"
 *   insn=0x00000000002DD828 string=0x00000000002DD82C "("
 *   insn=0x00000000002DD830 string=0x00000000002DD834 "Gp"
 *   insn=0x00000000002DD834 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002DD84C string=0x00000000001F7750 "0'"
 *   insn=0x00000000002DD854 string=0x00000000002DD858 "k"
 *   insn=0x00000000002DD864 string=0x0000000000000003 "F"
 *   insn=0x00000000002DD86C string=0x00000000002DD870 "8p"
 *   insn=0x00000000002DD87C string=0x00000000002DD880 ""
 *   insn=0x00000000002DD888 string=0x00000000002DD88C "("
 *   insn=0x00000000002DD890 string=0x00000000002DD894 "h"
 *   insn=0x00000000002DD894 string=0x00000000002DD898 ""
 *   insn=0x00000000002DD89C string=0x00000000002DD8A0 "H"
 *   insn=0x00000000002DD8C4 string=0x00000000001F7400 "0'"
 *   insn=0x00000000002DD8C8 string=0x00000000002DD8CC "("
 *   insn=0x00000000002DD8F0 string=0x00000000002DD8F4 "w_"
 *   insn=0x00000000002DD8F4 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002DD910 string=0x00000000002DD914 "H"
 *   insn=0x00000000002DD930 string=0x00000000002DD934 " "
 *   insn=0x00000000002DD938 string=0x00000000002DD93C "e_"
 *   insn=0x00000000002DD940 string=0x00000000002DD944 ""
 *   insn=0x00000000002DD948 string=0x00000000002DD94C "@"
 *   insn=0x00000000002DD958 string=0x00000000002DD95C "h"
 *   insn=0x00000000002DD96C string=0x00000000002DD970 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x21
  int v9; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 132);
  if ( (v5 & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v7 = this;
    else
      v7 = Caver::Proto::MapNode::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 132);
  }
  if ( (v5 & 2) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  if ( *(int *)(v4 + 48) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * v8++),
               a2,
               a4);
    while ( v8 < *(int *)(v4 + 48) );
  }
  v9 = *(_DWORD *)(v4 + 132);
  if ( (v9 & 0x10) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 96),
             a2,
             a4);
    v9 = *(_DWORD *)(v4 + 132);
    if ( (v9 & 0x20) == 0 )
    {
LABEL_13:
      if ( (v9 & 0x40) == 0 )
        goto LABEL_14;
      goto LABEL_22;
    }
  }
  else if ( (v9 & 0x20) == 0 )
  {
    goto LABEL_13;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(unsigned __int8 *)(v4 + 100),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 132);
  if ( (v9 & 0x40) == 0 )
  {
LABEL_14:
    if ( (v9 & 0x80) == 0 )
      goto LABEL_15;
    goto LABEL_23;
  }
LABEL_22:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_DWORD *)(v4 + 104),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 132);
  if ( (v9 & 0x80) == 0 )
  {
LABEL_15:
    if ( (v9 & 0x100) == 0 )
      goto LABEL_16;
    goto LABEL_24;
  }
LABEL_23:
  this = google::protobuf::internal::WireFormatLite::WriteString(7, *(_QWORD *)(v4 + 112), a2);
  v9 = *(_DWORD *)(v4 + 132);
  if ( (v9 & 0x100) == 0 )
  {
LABEL_16:
    if ( (v9 & 0x200) == 0 )
      goto LABEL_17;
    goto LABEL_25;
  }
LABEL_24:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(unsigned __int8 *)(v4 + 120),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 132);
  if ( (v9 & 0x200) == 0 )
  {
LABEL_17:
    if ( (v9 & 4) == 0 )
      goto LABEL_18;
    goto LABEL_26;
  }
LABEL_25:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           *(_DWORD *)(v4 + 124),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 132);
  if ( (v9 & 4) == 0 )
  {
LABEL_18:
    if ( (v9 & 0x400) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[2],
             *(unsigned __int8 *)(v4 + 128),
             a2,
             a4);
  }
LABEL_26:
  this = google::protobuf::internal::WireFormatLite::WriteString(10, *(_QWORD *)(v4 + 32), a2);
  if ( (*(_DWORD *)(v4 + 132) & 0x400) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[2],
             *(unsigned __int8 *)(v4 + 128),
             a2,
             a4);
  return this;
}

