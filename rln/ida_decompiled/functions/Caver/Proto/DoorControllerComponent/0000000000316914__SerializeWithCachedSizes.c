/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316914
 * Mangled: _ZNK5Caver5Proto23DoorControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x0000000000316928 string=0x000000000031692C ""
 *   insn=0x0000000000316930 string=0x0000000000316934 "H"
 *   insn=0x0000000000316950 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000316954 string=0x0000000000316958 "^{"
 *   insn=0x0000000000316958 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000316968 string=0x0000000000000002 "LF"
 *   insn=0x000000000031696C string=0x0000000000316970 "X{"
 *   insn=0x0000000000316974 string=0x0000000000316978 ""
 *   insn=0x000000000031698C string=0x0000000000316990 "h"
 *   insn=0x000000000031699C string=0x00000000003169A0 "L{"
 *   insn=0x00000000003169BC string=0x00000000003169C0 "D{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 32);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x10) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_4:
    if ( (v5 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(unsigned __int8 *)(v4 + 28),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 4) == 0 )
  {
LABEL_5:
    if ( (v5 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(_DWORD *)(v4 + 24),
             a2,
             a4);
  }
LABEL_10:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 32) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             *(_DWORD *)(v4 + 24),
             a2,
             a4);
  return this;
}

