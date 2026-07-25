/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338D0C
 * Mangled: _ZNK5Caver5Proto12MeshMaterial24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MeshMaterial::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000338814  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 24
 *   insn=0x0000000000338D20 string=0x0000000000338D24 ""
 *   insn=0x0000000000338D24 string=0x0000000000338D28 "h"
 *   insn=0x0000000000338D24 string=0x0000000000338D44 "i"
 *   insn=0x0000000000338D28 string=0x0000000000338D74 "i"
 *   insn=0x0000000000338D2C string=0x0000000000338D30 "("
 *   insn=0x0000000000338D2C string=0x0000000000338DA4 "i"
 *   insn=0x0000000000338D34 string=0x0000000000338DEC "i"
 *   insn=0x0000000000338D48 string=0x0000000000338D4C ")"
 *   insn=0x0000000000338D50 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000338D58 string=0x0000000000338D5C ")"
 *   insn=0x0000000000338D5C string=0x0000000000338D60 "("
 *   insn=0x0000000000338D68 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000338D78 string=0x0000000000338D7C ")"
 *   insn=0x0000000000338D80 string=0x0000000000000002 "LF"
 *   insn=0x0000000000338D88 string=0x0000000000338D8C ")"
 *   insn=0x0000000000338D8C string=0x0000000000338D90 "("
 *   insn=0x0000000000338DA8 string=0x0000000000338DAC ")"
 *   insn=0x0000000000338DB0 string=0x0000000000000003 "F"
 *   insn=0x0000000000338DB8 string=0x0000000000338DBC ")"
 *   insn=0x0000000000338DBC string=0x0000000000338DC0 "("
 *   insn=0x0000000000338DCC string=0x0000000000338DD0 "("
 *   insn=0x0000000000338DF0 string=0x0000000000338DF4 ")"
 *   insn=0x0000000000338E00 string=0x0000000000338E04 ")"
 *   insn=0x0000000000338E08 string=0x0000000000338E0C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 56);
  if ( (v5 & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v7 = this;
    else
      v7 = Caver::Proto::MeshMaterial::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 56);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v8 = v4;
  else
    v8 = Caver::Proto::MeshMaterial::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v8 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
LABEL_19:
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             a2,
             *(float *)(v4 + 40),
             a3);
    if ( (*(_DWORD *)(v4 + 56) & 0x10) == 0 )
      return this;
    goto LABEL_20;
  }
LABEL_15:
  if ( *(_QWORD *)(v4 + 32) )
    v9 = v4;
  else
    v9 = Caver::Proto::MeshMaterial::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v9 + 32),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 8) != 0 )
    goto LABEL_19;
LABEL_5:
  if ( (v5 & 0x10) == 0 )
    return this;
LABEL_20:
  if ( *(_QWORD *)(v4 + 48) )
    v10 = v4;
  else
    v10 = Caver::Proto::MeshMaterial::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_QWORD *)(v10 + 48),
           a2,
           a4);
}

