/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F068C
 * Mangled: _ZNK5Caver5Proto9GameState24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::GameState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 41
 *   insn=0x00000000002F06A4 string=0x00000000002F06A8 "h"
 *   insn=0x00000000002F06B0 string=0x00000000002F06B4 ")"
 *   insn=0x00000000002F06B8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002F06C0 string=0x00000000002F06C4 ")"
 *   insn=0x00000000002F06C4 string=0x00000000002F06C8 "("
 *   insn=0x00000000002F06D0 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002F06D8 string=0x00000000002F06DC "k"
 *   insn=0x00000000002F06E8 string=0x0000000000000002 "LF"
 *   insn=0x00000000002F0700 string=0x00000000002F0704 ""
 *   insn=0x00000000002F0708 string=0x00000000002F070C ""
 *   insn=0x00000000002F0720 string=0x00000000002F0724 ""
 *   insn=0x00000000002F0724 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002F072C string=0x00000000002F0730 "k"
 *   insn=0x00000000002F0754 string=0x00000000002F0758 ""
 *   insn=0x00000000002F075C string=0x00000000002F0760 ""
 *   insn=0x00000000002F0760 string=0x00000000002F0764 "hP707"
 *   insn=0x00000000002F0764 string=0x00000000002F0768 "07"
 *   insn=0x00000000002F0770 string=0x00000000002F0774 "`"
 *   insn=0x00000000002F0784 string=0x00000000002F0788 "k"
 *   insn=0x00000000002F079C string=0x00000000002F07A0 "l$"
 *   insn=0x00000000002F07AC string=0x00000000002F07B0 ""
 *   insn=0x00000000002F07B4 string=0x00000000002F07B8 "h"
 *   insn=0x00000000002F07B8 string=0x00000000002F07BC "X7"
 *   insn=0x00000000002F07C0 string=0x00000000002F07C4 "Hh7"
 *   insn=0x00000000002F07CC string=0x00000000002F07D0 "(\n"
 *   insn=0x00000000002F07D4 string=0x00000000002F07D8 "h"
 *   insn=0x00000000002F0814 string=0x00000000002F0818 ""
 *   insn=0x00000000002F0824 string=0x00000000002F0828 ")"
 *   insn=0x00000000002F0834 string=0x00000000002F0838 ")"
 *   insn=0x00000000002F0838 string=0x00000000002F083C "("
 *   insn=0x00000000002F0840 string=0x00000000002F0844 "C$"
 *   insn=0x00000000002F0850 string=0x00000000002F0854 " "
 *   insn=0x00000000002F0860 string=0x00000000002F0864 "H"
 *   insn=0x00000000002F0868 string=0x00000000002F086C "@"
 *   insn=0x00000000002F0894 string=0x00000000002F0898 "H"
 *   insn=0x00000000002F08C4 string=0x00000000002F08C8 ""
 *   insn=0x00000000002F08DC string=0x00000000002F08E0 "h"
 *   insn=0x00000000002F08E4 string=0x00000000002F08E8 " "
 *   insn=0x00000000002F08FC string=0x00000000002F0900 "@"
 *   insn=0x00000000002F090C string=0x00000000002F0910 "("
 *   insn=0x00000000002F0914 string=0x00000000002F0918 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameState::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x8
  __int64 v7; // x21
  int v8; // w8
  __int64 v9; // x21
  int v10; // w8
  __int64 v11; // x21
  int v12; // w8
  __int64 v13; // x8

  v4 = this;
  if ( (*(_BYTE *)(this + 284) & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v6 = this;
    else
      v6 = Caver::Proto::GameState::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v6 + 16),
             a2,
             a4);
  }
  if ( *(int *)(v4 + 32) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 32) );
  }
  v8 = *(_DWORD *)(v4 + 284);
  if ( (v8 & 4) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 80), a2);
    v8 = *(_DWORD *)(v4 + 284);
    if ( (v8 & 8) == 0 )
    {
LABEL_11:
      if ( (v8 & 0x20) == 0 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  else if ( (v8 & 8) == 0 )
  {
    goto LABEL_11;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(4, *(_QWORD *)(v4 + 88), a2);
  if ( (*(_DWORD *)(v4 + 284) & 0x20) != 0 )
LABEL_12:
    this = google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 104), a2);
LABEL_13:
  if ( *(int *)(v4 + 136) >= 1 )
  {
    v9 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_7,
               *(_QWORD *)(*(_QWORD *)(v4 + 128) + 8 * v9++),
               a2,
               a4);
    while ( v9 < *(int *)(v4 + 136) );
  }
  v10 = *(_DWORD *)(v4 + 284);
  if ( (v10 & 0x200) != 0 )
  {
    if ( *(_QWORD *)(v4 + 184) )
      v13 = v4;
    else
      v13 = Caver::Proto::GameState::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_8,
             *(_QWORD *)(v13 + 184),
             a2,
             a4);
    v10 = *(_DWORD *)(v4 + 284);
    if ( (v10 & 0x400) == 0 )
    {
LABEL_18:
      if ( (v10 & 0x40) == 0 )
        goto LABEL_19;
      goto LABEL_42;
    }
  }
  else if ( (v10 & 0x400) == 0 )
  {
    goto LABEL_18;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(9, *(_QWORD *)(v4 + 192), a2);
  v10 = *(_DWORD *)(v4 + 284);
  if ( (v10 & 0x40) == 0 )
  {
LABEL_19:
    if ( (v10 & 0x80) == 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_42:
  this = google::protobuf::internal::WireFormatLite::WriteString(10, *(_QWORD *)(v4 + 112), a2);
  if ( (*(_DWORD *)(v4 + 284) & 0x80) != 0 )
LABEL_20:
    this = google::protobuf::internal::WireFormatLite::WriteString(11, *(_QWORD *)(v4 + 120), a2);
LABEL_21:
  if ( *(int *)(v4 + 232) >= 1 )
  {
    v11 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_9[3],
               *(_QWORD *)(*(_QWORD *)(v4 + 224) + 8 * v11++),
               a2,
               a4);
    while ( v11 < *(int *)(v4 + 232) );
  }
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x10) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(13, *(_QWORD *)(v4 + 96), a2);
    v12 = *(_DWORD *)(v4 + 284);
    if ( (v12 & 0x800) == 0 )
    {
LABEL_26:
      if ( (v12 & 0x1000) == 0 )
        goto LABEL_27;
      goto LABEL_46;
    }
  }
  else if ( (v12 & 0x800) == 0 )
  {
    goto LABEL_26;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_9[5],
           *(unsigned __int8 *)(v4 + 200),
           a2,
           a4);
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x1000) == 0 )
  {
LABEL_27:
    if ( (v12 & 0x2000) == 0 )
      goto LABEL_28;
    goto LABEL_47;
  }
LABEL_46:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_9[6],
           *(unsigned __int8 *)(v4 + 201),
           a2,
           a4);
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x2000) == 0 )
  {
LABEL_28:
    if ( (v12 & 0x4000) == 0 )
      goto LABEL_29;
    goto LABEL_48;
  }
LABEL_47:
  this = google::protobuf::internal::WireFormatLite::WriteString(16, *(_QWORD *)(v4 + 208), a2);
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x4000) == 0 )
  {
LABEL_29:
    if ( (v12 & 0x10000) == 0 )
      goto LABEL_30;
    goto LABEL_49;
  }
LABEL_48:
  this = google::protobuf::internal::WireFormatLite::WriteString(17, *(_QWORD *)(v4 + 216), a2);
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x10000) == 0 )
  {
LABEL_30:
    if ( (v12 & 0x20000) == 0 )
      goto LABEL_31;
    goto LABEL_50;
  }
LABEL_49:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&word_12,
           *(unsigned __int8 *)(v4 + 280),
           a2,
           a4);
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x20000) == 0 )
  {
LABEL_31:
    if ( (v12 & 0x40000) == 0 )
      goto LABEL_32;
    goto LABEL_51;
  }
LABEL_50:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&word_12 + 1),
           *(unsigned __int8 *)(v4 + 281),
           a2,
           a4);
  v12 = *(_DWORD *)(v4 + 284);
  if ( (v12 & 0x40000) == 0 )
  {
LABEL_32:
    if ( (v12 & 0x80000) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_14 + 1),
             *(unsigned __int8 *)(v4 + 283),
             a2,
             a4);
  }
LABEL_51:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&dword_14,
           *(unsigned __int8 *)(v4 + 282),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 284) & 0x80000) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_14 + 1),
             *(unsigned __int8 *)(v4 + 283),
             a2,
             a4);
  return this;
}

