/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DAE10
 * Mangled: _ZNK5Caver5Proto15EditorViewState24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::EditorViewState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002DA884  Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 23
 *   insn=0x00000000002DAE2C string=0x00000000002DAE30 "k"
 *   insn=0x00000000002DAE44 string=0x00000000002DAE48 "Br"
 *   insn=0x00000000002DAE48 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002DAE54 string=0x00000000002DAE58 ""
 *   insn=0x00000000002DAE5C string=0x00000000002DAE60 "H"
 *   insn=0x00000000002DAE68 string=0x00000000002DAE6C "("
 *   insn=0x00000000002DAE70 string=0x00000000002DAE74 "("
 *   insn=0x00000000002DAE70 string=0x00000000002DAEE8 "I "
 *   insn=0x00000000002DAE74 string=0x00000000002DAF18 "I "
 *   insn=0x00000000002DAE90 string=0x00000000002DAE94 "/r"
 *   insn=0x00000000002DAE98 string=0x00000000002DAE9C "h"
 *   insn=0x00000000002DAEA8 string=0x00000000002DAEAC ")r"
 *   insn=0x00000000002DAEC0 string=0x00000000002DAEC4 "Oq"
 *   insn=0x00000000002DAEC4 string=0x00000000001F7400 "0'"
 *   insn=0x00000000002DAEC8 string=0x00000000002DAECC "("
 *   insn=0x00000000002DAEEC string=0x00000000002DAEF0 ")eF"
 *   insn=0x00000000002DAEFC string=0x00000000002DAF00 ")"
 *   insn=0x00000000002DAF00 string=0x00000000002DAF04 "("
 *   insn=0x00000000002DAF0C string=0x00000000001F9950 "0'"
 *   insn=0x00000000002DAF10 string=0x00000000002DAF14 "("
 *   insn=0x00000000002DAF1C string=0x00000000002DAF20 ")eF"
 *   insn=0x00000000002DAF2C string=0x00000000002DAF30 ")"
 *   insn=0x00000000002DAF34 string=0x00000000002DAF38 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x8

  v4 = this;
  if ( *(int *)(this + 32) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteString(
               1,
               *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6++),
               a2);
    while ( v6 < *(int *)(v4 + 32) );
  }
  v7 = *(_DWORD *)(v4 + 120);
  if ( (v7 & 4) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 80), a2);
    v7 = *(_DWORD *)(v4 + 120);
    if ( (v7 & 8) == 0 )
    {
LABEL_6:
      if ( (v7 & 0x10) == 0 )
        goto LABEL_7;
      goto LABEL_13;
    }
  }
  else if ( (v7 & 8) == 0 )
  {
    goto LABEL_6;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 88), a2);
  v7 = *(_DWORD *)(v4 + 120);
  if ( (v7 & 0x10) == 0 )
  {
LABEL_7:
    if ( (v7 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_14;
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteEnum(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 96),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 120);
  if ( (v7 & 1) == 0 )
  {
LABEL_8:
    if ( (v7 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 16), a2);
  v7 = *(_DWORD *)(v4 + 120);
  if ( (v7 & 0x20) == 0 )
  {
LABEL_9:
    if ( (v7 & 0x40) == 0 )
      return this;
    goto LABEL_19;
  }
LABEL_15:
  if ( *(_QWORD *)(v4 + 104) )
    v8 = v4;
  else
    v8 = Caver::Proto::EditorViewState::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_QWORD *)(v8 + 104),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 120) & 0x40) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)(v4 + 112) )
      v9 = v4;
    else
      v9 = Caver::Proto::EditorViewState::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             *(_QWORD *)(v9 + 112),
             a2,
             a4);
  }
  return this;
}

