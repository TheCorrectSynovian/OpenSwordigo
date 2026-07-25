/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337FF0
 * Mangled: _ZNK5Caver5Proto8MeshData24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MeshData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x000000000033800C string=0x0000000000338010 "("
 *   insn=0x0000000000338028 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000338030 string=0x00000000001F7400 "0'"
 *   insn=0x0000000000338040 string=0x0000000000000002 "LF"
 *   insn=0x0000000000338048 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000033804C string=0x0000000000338050 "("
 *   insn=0x0000000000338058 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::Proto::MeshData::SerializeWithCachedSizes(
        int *this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int *v4; // x20
  int v5; // w8

  v4 = this;
  v5 = this[7];
  if ( (v5 & 1) != 0 )
  {
    this = (int *)google::protobuf::internal::WireFormatLite::WriteEnum(
                    (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
                    this[3],
                    a2,
                    a4);
    v5 = v4[7];
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_8;
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
  v5 = v4[7];
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      return this;
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)&byte_4,
                    v4[6],
                    a2,
                    a4);
  }
LABEL_8:
  this = (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                  (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
                  v4[5],
                  a2,
                  a4);
  if ( (v4[7] & 8) != 0 )
    return (int *)google::protobuf::internal::WireFormatLite::WriteInt32(
                    (google::protobuf::internal::WireFormatLite *)&byte_4,
                    v4[6],
                    a2,
                    a4);
  return this;
}

