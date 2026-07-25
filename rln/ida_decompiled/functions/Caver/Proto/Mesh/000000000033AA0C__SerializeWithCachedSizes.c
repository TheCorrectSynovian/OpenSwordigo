/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033AA0C
 * Mangled: _ZNK5Caver5Proto4Mesh24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Mesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000339D60  Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FA490  google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 62
 *   insn=0x000000000033AA24 string=0x000000000033AA28 ""
 *   insn=0x000000000033AA2C string=0x000000000033AA30 "H"
 *   insn=0x000000000033AA30 string=0x000000000033AAF8 "i"
 *   insn=0x000000000033AA34 string=0x000000000033AA38 "h"
 *   insn=0x000000000033AA34 string=0x000000000033AB28 "i"
 *   insn=0x000000000033AA38 string=0x000000000033AA3C "i"
 *   insn=0x000000000033AA40 string=0x000000000033AA44 ")qC"
 *   insn=0x000000000033AA50 string=0x000000000033AA54 ")"
 *   insn=0x000000000033AA54 string=0x000000000033AA58 "("
 *   insn=0x000000000033AA60 string=0x00000000001F9950 "0'"
 *   insn=0x000000000033AA68 string=0x000000000033AA6C "k"
 *   insn=0x000000000033AA90 string=0x000000000033AA94 ""
 *   insn=0x000000000033AA98 string=0x000000000033AA9C ""
 *   insn=0x000000000033AA9C string=0x000000000033AAA0 "h87"
 *   insn=0x000000000033AA9C string=0x000000000033AB5C "i"
 *   insn=0x000000000033AAA0 string=0x000000000033AB8C "i"
 *   insn=0x000000000033AAA4 string=0x000000000033AAA8 "(\nH7"
 *   insn=0x000000000033AAA4 string=0x000000000033ABBC "i"
 *   insn=0x000000000033AAA8 string=0x000000000033ABEC "i"
 *   insn=0x000000000033AAAC string=0x000000000033AC1C "i"
 *   insn=0x000000000033AACC string=0x0000000000000001 "ELF"
 *   insn=0x000000000033AAD0 string=0x000000000033AAD4 "o"
 *   insn=0x000000000033AAD4 string=0x00000000001FA490 "0'"
 *   insn=0x000000000033AAE4 string=0x0000000000000002 "LF"
 *   insn=0x000000000033AAE8 string=0x000000000033AAEC "i"
 *   insn=0x000000000033AAF0 string=0x000000000033AAF4 ""
 *   insn=0x000000000033AAFC string=0x000000000033AB00 ")qC"
 *   insn=0x000000000033AB04 string=0x0000000000000003 "F"
 *   insn=0x000000000033AB0C string=0x000000000033AB10 ")"
 *   insn=0x000000000033AB10 string=0x000000000033AB14 "("
 *   insn=0x000000000033AB2C string=0x000000000033AB30 ")qC"
 *   insn=0x000000000033AB3C string=0x000000000033AB40 ")"
 *   insn=0x000000000033AB40 string=0x000000000033AB44 "("
 *   insn=0x000000000033AB50 string=0x000000000033AB54 "H"
 *   insn=0x000000000033AB60 string=0x000000000033AB64 ")qC"
 *   insn=0x000000000033AB70 string=0x000000000033AB74 ")"
 *   insn=0x000000000033AB74 string=0x000000000033AB78 "("
 *   insn=0x000000000033AB7C string=0x000000000033AB80 "t"
 *   insn=0x000000000033AB90 string=0x000000000033AB94 ")qC"
 *   insn=0x000000000033ABA0 string=0x000000000033ABA4 ")"
 *   insn=0x000000000033ABA4 string=0x000000000033ABA8 "("
 *   insn=0x000000000033ABAC string=0x000000000033ABB0 "h"
 *   insn=0x000000000033ABC0 string=0x000000000033ABC4 ")qC"
 *   insn=0x000000000033ABC4 string=0x000000000033ABC8 " "
 *   insn=0x000000000033ABD0 string=0x000000000033ABD4 ")"
 *   insn=0x000000000033ABD4 string=0x000000000033ABD8 "("
 *   insn=0x000000000033ABDC string=0x000000000033ABE0 "\"
 *   insn=0x000000000033ABE4 string=0x000000000033ABE8 "("
 *   insn=0x000000000033ABF0 string=0x000000000033ABF4 ")qC"
 *   insn=0x000000000033ABF4 string=0x000000000033ABF8 "@"
 *   insn=0x000000000033AC00 string=0x000000000033AC04 ")"
 *   insn=0x000000000033AC04 string=0x000000000033AC08 "("
 *   insn=0x000000000033AC0C string=0x000000000033AC10 "P"
 *   insn=0x000000000033AC20 string=0x000000000033AC24 ")qC"
 *   insn=0x000000000033AC24 string=0x000000000033AC28 "`"
 *   insn=0x000000000033AC30 string=0x000000000033AC34 ")"
 *   insn=0x000000000033AC34 string=0x000000000033AC38 "("
 *   insn=0x000000000033AC3C string=0x000000000033AC40 "D"
 *   insn=0x000000000033AC44 string=0x000000000033AC48 "h"
 *   insn=0x000000000033AC4C string=0x000000000033AC50 "@"
 *   insn=0x000000000033AC58 string=0x00000000001FD700 "0'"
 *   insn=0x000000000033AC70 string=0x000000000033AC74 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::SerializeWithCachedSizes(
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
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 160);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteUInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 160);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_23;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteUInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 160);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_27;
  }
LABEL_23:
  if ( *(_QWORD *)(v4 + 24) )
    v10 = v4;
  else
    v10 = Caver::Proto::Mesh::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v10 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 160);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_10;
    goto LABEL_6;
  }
LABEL_27:
  if ( *(_QWORD *)(v4 + 32) )
    v11 = v4;
  else
    v11 = Caver::Proto::Mesh::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v11 + 32),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 160) & 0x10) != 0 )
  {
LABEL_6:
    if ( *(_QWORD *)(v4 + 40) )
      v7 = v4;
    else
      v7 = Caver::Proto::Mesh::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_QWORD *)(v7 + 40),
             a2,
             a4);
  }
LABEL_10:
  if ( *(int *)(v4 + 56) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)&byte_6,
               *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8 * v8++),
               a2,
               a4);
    while ( v8 < *(int *)(v4 + 56) );
  }
  v9 = *(_DWORD *)(v4 + 160);
  if ( (v9 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(v4 + 104) )
      v12 = v4;
    else
      v12 = Caver::Proto::Mesh::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             *(_QWORD *)(v12 + 104),
             a2,
             a4);
    v9 = *(_DWORD *)(v4 + 160);
    if ( (v9 & 0x80) == 0 )
    {
LABEL_15:
      if ( (v9 & 0x100) == 0 )
        goto LABEL_16;
      goto LABEL_40;
    }
  }
  else if ( (v9 & 0x80) == 0 )
  {
    goto LABEL_15;
  }
  if ( *(_QWORD *)(v4 + 112) )
    v13 = v4;
  else
    v13 = Caver::Proto::Mesh::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_QWORD *)(v13 + 112),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 160);
  if ( (v9 & 0x100) == 0 )
  {
LABEL_16:
    if ( (v9 & 0x200) == 0 )
      goto LABEL_17;
    goto LABEL_44;
  }
LABEL_40:
  if ( *(_QWORD *)(v4 + 120) )
    v14 = v4;
  else
    v14 = Caver::Proto::Mesh::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)byte_9,
           *(_QWORD *)(v14 + 120),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 160);
  if ( (v9 & 0x200) == 0 )
  {
LABEL_17:
    if ( (v9 & 0x400) == 0 )
      goto LABEL_18;
    goto LABEL_48;
  }
LABEL_44:
  if ( *(_QWORD *)(v4 + 128) )
    v15 = v4;
  else
    v15 = Caver::Proto::Mesh::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[1],
           *(_QWORD *)(v15 + 128),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 160);
  if ( (v9 & 0x400) == 0 )
  {
LABEL_18:
    if ( (v9 & 0x800) == 0 )
      goto LABEL_19;
    goto LABEL_52;
  }
LABEL_48:
  if ( *(_QWORD *)(v4 + 136) )
    v16 = v4;
  else
    v16 = Caver::Proto::Mesh::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_9[2],
           *(_QWORD *)(v16 + 136),
           a2,
           a4);
  v9 = *(_DWORD *)(v4 + 160);
  if ( (v9 & 0x800) == 0 )
  {
LABEL_19:
    if ( (v9 & 0x1000) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBytes(51, *(_QWORD *)(v4 + 152), a2);
  }
LABEL_52:
  this = google::protobuf::internal::WireFormatLite::WriteBytes(50, *(_QWORD *)(v4 + 144), a2);
  if ( (*(_DWORD *)(v4 + 160) & 0x1000) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBytes(51, *(_QWORD *)(v4 + 152), a2);
  return this;
}

