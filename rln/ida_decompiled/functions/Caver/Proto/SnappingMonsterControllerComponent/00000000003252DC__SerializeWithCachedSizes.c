/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003252DC
 * Mangled: _ZNK5Caver5Proto34SnappingMonsterControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 8
 *   insn=0x00000000003252F0 string=0x00000000003252F4 ""
 *   insn=0x00000000003252F8 string=0x00000000003252FC "H"
 *   insn=0x0000000000325318 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000325320 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000325330 string=0x0000000000000002 "LF"
 *   insn=0x000000000032533C string=0x0000000000325340 ""
 *   insn=0x0000000000325348 string=0x0000000000000003 "F"
 *   insn=0x0000000000325354 string=0x0000000000325358 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::Proto::SnappingMonsterControllerComponent::SerializeWithCachedSizes(
        int *this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int *v4; // x20
  int v5; // w8

  v4 = this;
  v5 = this[8];
  if ( (v5 & 1) != 0 )
  {
    this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
                    this[3],
                    a2,
                    a4);
    v5 = v4[8];
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
                  v4[4],
                  a2,
                  a4);
  v5 = v4[8];
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
                  v4[5],
                  a2,
                  a4);
  v5 = v4[8];
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      return this;
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)&byte_5,
                    v4[7],
                    a2,
                    a4);
  }
LABEL_10:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)&byte_4,
                  v4[6],
                  a2,
                  a4);
  if ( (v4[8] & 0x10) != 0 )
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)&byte_5,
                    v4[7],
                    a2,
                    a4);
  return this;
}

