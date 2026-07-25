/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323DF8
 * Mangled: _ZNK5Caver5Proto26MonsterControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x0000000000323E14 string=0x0000000000323E18 "("
 *   insn=0x0000000000323E30 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000323E48 string=0x0000000000000002 "LF"
 *   insn=0x0000000000323E4C string=0x0000000000323E50 " F"
 *   insn=0x0000000000323E50 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000323E54 string=0x0000000000323E58 "("
 *   insn=0x0000000000323E60 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int *v4; // x20
  int v5; // w8

  v4 = (int *)this;
  v5 = *(_DWORD *)(this + 28);
  if ( (v5 & 8) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 24),
             a3);
    v5 = v4[7];
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 1) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           v4[4],
           a2,
           a4);
  v5 = v4[7];
  if ( (v5 & 1) == 0 )
  {
LABEL_4:
    if ( (v5 & 4) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             v4[5],
             a2,
             a4);
  }
LABEL_8:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           v4[3],
           a2,
           a4);
  if ( (v4[7] & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             v4[5],
             a2,
             a4);
  return this;
}

