/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F4298
 * Mangled: _ZNK5Caver5Proto14CharacterState24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::CharacterState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 25
 *   insn=0x00000000002F42B0 string=0x00000000002F42B4 "h"
 *   insn=0x00000000002F42B4 string=0x00000000002F42B8 "7"
 *   insn=0x00000000002F42BC string=0x00000000002F42C0 "H\t"
 *   insn=0x00000000002F42D4 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002F42DC string=0x00000000002F42E0 "k"
 *   insn=0x00000000002F42E8 string=0x00000000002F42EC "`"
 *   insn=0x00000000002F42F8 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002F4304 string=0x00000000002F4308 ""
 *   insn=0x00000000002F4320 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002F4340 string=0x00000000002F4344 "k"
 *   insn=0x00000000002F4368 string=0x00000000002F436C ""
 *   insn=0x00000000002F4374 string=0x00000000002F4378 "("
 *   insn=0x00000000002F437C string=0x00000000002F4380 "h"
 *   insn=0x00000000002F4380 string=0x00000000002F4384 "h7"
 *   insn=0x00000000002F4388 string=0x00000000002F438C "Hx7"
 *   insn=0x00000000002F43A4 string=0x0000000000000002 "LF"
 *   insn=0x00000000002F43B0 string=0x00000000002F43B4 "H"
 *   insn=0x00000000002F43E0 string=0x00000000002F43E4 ""
 *   insn=0x00000000002F43F8 string=0x00000000002F43FC "h"
 *   insn=0x00000000002F4414 string=0x00000000002F4418 "("
 *   insn=0x00000000002F441C string=0x00000000002F4420 " "
 *   insn=0x00000000002F4434 string=0x00000000002F4438 "@"
 *   insn=0x00000000002F444C string=0x00000000002F4450 "`"
 *   insn=0x00000000002F445C string=0x00000000002F4460 "H"
 *   insn=0x00000000002F448C string=0x00000000002F4490 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x21
  int v8; // w8
  __int64 v9; // x21
  int v10; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 204);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 204);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_27;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 204);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_28;
  }
LABEL_27:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 204);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_28:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_DWORD *)(v4 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 204) & 0x10) != 0 )
LABEL_6:
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             *(_DWORD *)(v4 + 28),
             a2,
             a4);
LABEL_7:
  if ( *(int *)(v4 + 40) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_9[2],
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 40) );
  }
  v8 = *(_DWORD *)(v4 + 204);
  if ( (v8 & 0x40) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(12, *(_QWORD *)(v4 + 88), a2);
    v8 = *(_DWORD *)(v4 + 204);
  }
  if ( (v8 & 0x80) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(13, *(_QWORD *)(v4 + 96), a2);
  if ( *(int *)(v4 + 112) >= 1 )
  {
    v9 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteString(
               15,
               *(_QWORD *)(*(_QWORD *)(v4 + 104) + 8 * v9++),
               a2);
    while ( v9 < *(int *)(v4 + 112) );
  }
  v10 = *(_DWORD *)(v4 + 204);
  if ( (v10 & 0x200) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(16, *(_QWORD *)(v4 + 160), a2);
    v10 = *(_DWORD *)(v4 + 204);
    if ( (v10 & 0x400) == 0 )
    {
LABEL_19:
      if ( (v10 & 0x800) == 0 )
        goto LABEL_20;
      goto LABEL_32;
    }
  }
  else if ( (v10 & 0x400) == 0 )
  {
    goto LABEL_19;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(17, *(_QWORD *)(v4 + 168), a2);
  v10 = *(_DWORD *)(v4 + 204);
  if ( (v10 & 0x800) == 0 )
  {
LABEL_20:
    if ( (v10 & 0x1000) == 0 )
      goto LABEL_21;
    goto LABEL_33;
  }
LABEL_32:
  this = google::protobuf::internal::WireFormatLite::WriteString(18, *(_QWORD *)(v4 + 176), a2);
  v10 = *(_DWORD *)(v4 + 204);
  if ( (v10 & 0x1000) == 0 )
  {
LABEL_21:
    if ( (v10 & 0x2000) == 0 )
      goto LABEL_22;
    goto LABEL_34;
  }
LABEL_33:
  this = google::protobuf::internal::WireFormatLite::WriteString(19, *(_QWORD *)(v4 + 184), a2);
  v10 = *(_DWORD *)(v4 + 204);
  if ( (v10 & 0x2000) == 0 )
  {
LABEL_22:
    if ( (v10 & 0x4000) == 0 )
      goto LABEL_23;
    goto LABEL_35;
  }
LABEL_34:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&dword_14,
           *(_DWORD *)(v4 + 192),
           a2,
           a4);
  v10 = *(_DWORD *)(v4 + 204);
  if ( (v10 & 0x4000) == 0 )
  {
LABEL_23:
    if ( (v10 & 0x8000) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_14 + 2),
             *(_DWORD *)(v4 + 200),
             a2,
             a4);
  }
LABEL_35:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_14 + 1),
           *(_DWORD *)(v4 + 196),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 204) & 0x8000) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_14 + 2),
             *(_DWORD *)(v4 + 200),
             a2,
             a4);
  return this;
}

