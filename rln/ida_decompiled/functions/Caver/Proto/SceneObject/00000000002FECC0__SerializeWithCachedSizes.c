/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FECC0
 * Mangled: _ZNK5Caver5Proto11SceneObject24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 26
 *   insn=0x00000000002FECEC string=0x00000000001F7750 "0'"
 *   insn=0x00000000002FED0C string=0x00000000002FED10 "k"
 *   insn=0x00000000002FED1C string=0x0000000000000003 "F"
 *   insn=0x00000000002FED24 string=0x00000000002FED28 "\n"
 *   insn=0x00000000002FED28 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002FED34 string=0x00000000002FED38 ""
 *   insn=0x00000000002FED3C string=0x00000000002FED40 "h"
 *   insn=0x00000000002FED40 string=0x00000000002FED6C "I"
 *   insn=0x00000000002FED44 string=0x00000000002FED48 "h"
 *   insn=0x00000000002FED48 string=0x00000000002FED4C ""
 *   insn=0x00000000002FED50 string=0x00000000002FED54 ""
 *   insn=0x00000000002FED50 string=0x00000000002FEDE4 "I"
 *   insn=0x00000000002FED58 string=0x00000000002FEE2C "I"
 *   insn=0x00000000002FED70 string=0x00000000002FED74 ")"
 *   insn=0x00000000002FED80 string=0x00000000002FED84 ")"
 *   insn=0x00000000002FED84 string=0x00000000002FED88 "("
 *   insn=0x00000000002FEDC4 string=0x00000000002FEDC8 "H"
 *   insn=0x00000000002FEDE8 string=0x00000000002FEDEC ")"
 *   insn=0x00000000002FEDF8 string=0x00000000002FEDFC ")"
 *   insn=0x00000000002FEDFC string=0x00000000002FEE00 "("
 *   insn=0x00000000002FEE0C string=0x00000000002FEE10 "H"
 *   insn=0x00000000002FEE14 string=0x00000000002FEE18 " "
 *   insn=0x00000000002FEE30 string=0x00000000002FEE34 ")"
 *   insn=0x00000000002FEE40 string=0x00000000002FEE44 ")"
 *   insn=0x00000000002FEE44 string=0x00000000002FEE48 "@"
 *   insn=0x00000000002FEE48 string=0x00000000002FEE4C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x21
  int v8; // w8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 136);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 136);
  }
  if ( (v5 & 2) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  if ( *(int *)(v4 + 40) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 40) );
  }
  v8 = *(_DWORD *)(v4 + 136);
  if ( (v8 & 8) != 0 )
  {
    if ( *(_QWORD *)(v4 + 88) )
      v9 = v4;
    else
      v9 = Caver::Proto::SceneObject::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_QWORD *)(v9 + 88),
             a2,
             a4);
    v8 = *(_DWORD *)(v4 + 136);
    if ( (v8 & 0x10) == 0 )
    {
LABEL_10:
      if ( (v8 & 0x20) == 0 )
        goto LABEL_11;
      goto LABEL_21;
    }
  }
  else if ( (v8 & 0x10) == 0 )
  {
    goto LABEL_10;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 96),
           a3);
  v8 = *(_DWORD *)(v4 + 136);
  if ( (v8 & 0x20) == 0 )
  {
LABEL_11:
    if ( (v8 & 0x40) == 0 )
      goto LABEL_12;
    goto LABEL_22;
  }
LABEL_21:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 100),
           a3);
  v8 = *(_DWORD *)(v4 + 136);
  if ( (v8 & 0x40) == 0 )
  {
LABEL_12:
    if ( (v8 & 0x80) == 0 )
      goto LABEL_13;
    goto LABEL_23;
  }
LABEL_22:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 104),
           a3);
  v8 = *(_DWORD *)(v4 + 136);
  if ( (v8 & 0x80) == 0 )
  {
LABEL_13:
    if ( (v8 & 0x100) == 0 )
      goto LABEL_14;
LABEL_27:
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(unsigned __int8 *)(v4 + 120),
             a2,
             a4);
    if ( (*(_DWORD *)(v4 + 136) & 0x200) == 0 )
      return this;
    goto LABEL_28;
  }
LABEL_23:
  if ( *(_QWORD *)(v4 + 112) )
    v10 = v4;
  else
    v10 = Caver::Proto::SceneObject::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_QWORD *)(v10 + 112),
           a2,
           a4);
  v8 = *(_DWORD *)(v4 + 136);
  if ( (v8 & 0x100) != 0 )
    goto LABEL_27;
LABEL_14:
  if ( (v8 & 0x200) == 0 )
    return this;
LABEL_28:
  if ( *(_QWORD *)(v4 + 128) )
    v11 = v4;
  else
    v11 = Caver::Proto::SceneObject::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           *(_QWORD *)(v11 + 128),
           a2,
           a4);
}

