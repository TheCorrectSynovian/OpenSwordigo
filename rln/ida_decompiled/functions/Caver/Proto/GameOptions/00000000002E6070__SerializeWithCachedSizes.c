/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6070
 * Mangled: _ZNK5Caver5Proto11GameOptions24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GameOptions::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002E5908  Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 25
 *   insn=0x00000000002E608C string=0x00000000002E6090 "k"
 *   insn=0x00000000002E609C string=0x0000000000000001 "ELF"
 *   insn=0x00000000002E60A4 string=0x00000000002E60A8 "*N"
 *   insn=0x00000000002E60A8 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002E60B4 string=0x00000000002E60B8 ""
 *   insn=0x00000000002E60C0 string=0x00000000002E60C4 "H"
 *   insn=0x00000000002E60CC string=0x00000000002E60D0 "("
 *   insn=0x00000000002E60D0 string=0x00000000002E6154 "\t "
 *   insn=0x00000000002E60D4 string=0x00000000002E6184 "\t "
 *   insn=0x00000000002E60DC string=0x00000000002E60E0 "(H7"
 *   insn=0x00000000002E60F8 string=0x0000000000000002 "LF"
 *   insn=0x00000000002E6104 string=0x00000000002E6108 ""
 *   insn=0x00000000002E6110 string=0x0000000000000003 "F"
 *   insn=0x00000000002E611C string=0x00000000002E6120 "h"
 *   insn=0x00000000002E614C string=0x00000000002E6150 "("
 *   insn=0x00000000002E6158 string=0x00000000002E615C ")"
 *   insn=0x00000000002E6168 string=0x00000000002E616C ")"
 *   insn=0x00000000002E616C string=0x00000000002E6170 "("
 *   insn=0x00000000002E6188 string=0x00000000002E618C ")"
 *   insn=0x00000000002E6198 string=0x00000000002E619C ")"
 *   insn=0x00000000002E619C string=0x00000000002E61A0 "("
 *   insn=0x00000000002E61AC string=0x00000000002E61B0 "h"
 *   insn=0x00000000002E61CC string=0x00000000002E61D0 " "
 *   insn=0x00000000002E61DC string=0x00000000002E61E0 "("
 *   insn=0x00000000002E61F0 string=0x00000000002E61F4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x8

  v4 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
               *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 24) );
  }
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(unsigned __int8 *)(v4 + 72),
             a2,
             a4);
    v7 = *(_DWORD *)(v4 + 108);
    if ( (v7 & 4) == 0 )
    {
LABEL_6:
      if ( (v7 & 8) == 0 )
        goto LABEL_7;
      goto LABEL_16;
    }
  }
  else if ( (v7 & 4) == 0 )
  {
    goto LABEL_6;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 73),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 8) == 0 )
  {
LABEL_7:
    if ( (v7 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 76),
           a3);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x10) == 0 )
  {
LABEL_8:
    if ( (v7 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
LABEL_17:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 80),
           a3);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x20) == 0 )
  {
LABEL_9:
    if ( (v7 & 0x40) == 0 )
      goto LABEL_10;
    goto LABEL_22;
  }
LABEL_18:
  if ( *(_QWORD *)(v4 + 88) )
    v8 = v4;
  else
    v8 = Caver::Proto::GameOptions::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_QWORD *)(v8 + 88),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x40) == 0 )
  {
LABEL_10:
    if ( (v7 & 0x80) == 0 )
      goto LABEL_11;
    goto LABEL_26;
  }
LABEL_22:
  if ( *(_QWORD *)(v4 + 96) )
    v9 = v4;
  else
    v9 = Caver::Proto::GameOptions::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(_QWORD *)(v9 + 96),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x80) == 0 )
  {
LABEL_11:
    if ( (v7 & 0x100) == 0 )
      goto LABEL_12;
    goto LABEL_27;
  }
LABEL_26:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(unsigned __int8 *)(v4 + 104),
           a2,
           a4);
  v7 = *(_DWORD *)(v4 + 108);
  if ( (v7 & 0x100) == 0 )
  {
LABEL_12:
    if ( (v7 & 0x200) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[1],
             *(unsigned __int8 *)(v4 + 106),
             a2,
             a4);
  }
LABEL_27:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           *(unsigned __int8 *)(v4 + 105),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 108) & 0x200) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_9[1],
             *(unsigned __int8 *)(v4 + 106),
             a2,
             a4);
  return this;
}

