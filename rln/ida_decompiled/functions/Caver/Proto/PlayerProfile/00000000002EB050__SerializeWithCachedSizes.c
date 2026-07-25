/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EB050
 * Mangled: _ZNK5Caver5Proto13PlayerProfile24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F4260  google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 36
 *   insn=0x00000000002EB068 string=0x00000000002EB06C ""
 *   insn=0x00000000002EB070 string=0x00000000002EB074 "H"
 *   insn=0x00000000002EB078 string=0x00000000002EB07C "H87"
 *   insn=0x00000000002EB084 string=0x00000000002EB088 "(\nP7"
 *   insn=0x00000000002EB08C string=0x00000000002EB090 "h7"
 *   insn=0x00000000002EB098 string=0x00000000002EB09C "`"
 *   insn=0x00000000002EB0AC string=0x00000000002EB0B0 "k"
 *   insn=0x00000000002EB0C4 string=0x00000000002EB0C8 "":"
 *   insn=0x00000000002EB0C8 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002EB0D4 string=0x00000000002EB0D8 ""
 *   insn=0x00000000002EB118 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002EB128 string=0x0000000000000002 "LF"
 *   insn=0x00000000002EB12C string=0x00000000002EB130 "h)"
 *   insn=0x00000000002EB130 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002EB134 string=0x00000000002EB138 ""
 *   insn=0x00000000002EB140 string=0x0000000000000003 "F"
 *   insn=0x00000000002EB144 string=0x00000000002EB148 "F$"
 *   insn=0x00000000002EB148 string=0x00000000001F4260 "P'"
 *   insn=0x00000000002EB14C string=0x00000000002EB150 "h"
 *   insn=0x00000000002EB158 string=0x00000000002EB15C ")"
 *   insn=0x00000000002EB168 string=0x00000000002EB16C ")"
 *   insn=0x00000000002EB16C string=0x00000000002EB170 "("
 *   insn=0x00000000002EB17C string=0x00000000002EB180 ""
 *   insn=0x00000000002EB18C string=0x00000000002EB190 "p1"
 *   insn=0x00000000002EB194 string=0x00000000002EB198 "h"
 *   insn=0x00000000002EB1A4 string=0x00000000002EB1A8 "j1"
 *   insn=0x00000000002EB1BC string=0x00000000002EB1C0 "d1"
 *   insn=0x00000000002EB1C4 string=0x00000000002EB1C8 "("
 *   insn=0x00000000002EB1D4 string=0x00000000002EB1D8 "^1"
 *   insn=0x00000000002EB1E4 string=0x00000000002EB1E8 " "
 *   insn=0x00000000002EB1EC string=0x00000000002EB1F0 "X1"
 *   insn=0x00000000002EB200 string=0x00000000002EB204 ")"
 *   insn=0x00000000002EB204 string=0x00000000002EB208 "@"
 *   insn=0x00000000002EB210 string=0x00000000002EB214 ")"
 *   insn=0x00000000002EB214 string=0x00000000002EB218 "("
 *   insn=0x00000000002EB244 string=0x00000000002EB248 "B1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile::SerializeWithCachedSizes(
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

  v4 = this;
  v5 = *(_DWORD *)(this + 168);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 168);
    if ( (v5 & 8) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x20) == 0 )
        goto LABEL_4;
      goto LABEL_22;
    }
  }
  else if ( (v5 & 8) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 40),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_5;
    goto LABEL_23;
  }
LABEL_22:
  this = google::protobuf::internal::WireFormatLite::WriteDouble(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(double *)(v4 + 48),
           a3);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_6;
    goto LABEL_27;
  }
LABEL_23:
  if ( *(_QWORD *)(v4 + 56) )
    v9 = v4;
  else
    v9 = Caver::Proto::PlayerProfile::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v9 + 56),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x100) == 0 )
      goto LABEL_7;
    goto LABEL_28;
  }
LABEL_27:
  this = google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 64), a2);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 0x100) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x200) == 0 )
      goto LABEL_8;
    goto LABEL_29;
  }
LABEL_28:
  this = google::protobuf::internal::WireFormatLite::WriteString(6, *(_QWORD *)(v4 + 72), a2);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 0x200) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x400) == 0 )
      goto LABEL_9;
    goto LABEL_30;
  }
LABEL_29:
  this = google::protobuf::internal::WireFormatLite::WriteString(7, *(_QWORD *)(v4 + 80), a2);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 0x400) == 0 )
  {
LABEL_9:
    if ( (v5 & 4) == 0 )
      goto LABEL_10;
    goto LABEL_31;
  }
LABEL_30:
  this = google::protobuf::internal::WireFormatLite::WriteString(8, *(_QWORD *)(v4 + 88), a2);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 4) == 0 )
  {
LABEL_10:
    if ( (v5 & 2) == 0 )
      goto LABEL_11;
    goto LABEL_32;
  }
LABEL_31:
  this = google::protobuf::internal::WireFormatLite::WriteString(9, *(_QWORD *)(v4 + 32), a2);
  v5 = *(_DWORD *)(v4 + 168);
  if ( (v5 & 2) == 0 )
  {
LABEL_11:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_32:
  if ( *(_QWORD *)(v4 + 24) )
    v10 = v4;
  else
    v10 = Caver::Proto::PlayerProfile::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           *(_QWORD *)(v10 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 168) & 0x10) != 0 )
LABEL_12:
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_9[2],
             a2,
             *(float *)(v4 + 44),
             a3);
LABEL_13:
  if ( *(int *)(v4 + 104) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_9[3],
               *(_QWORD *)(*(_QWORD *)(v4 + 96) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 104) );
  }
  v8 = *(_DWORD *)(v4 + 168);
  if ( (v8 & 0x1000) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[4],
             *(unsigned __int8 *)(v4 + 152),
             a2,
             a4);
    v8 = *(_DWORD *)(v4 + 168);
  }
  if ( (v8 & 0x2000) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(14, *(_QWORD *)(v4 + 160), a2);
  return this;
}

