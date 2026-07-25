/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB920
 * Mangled: _ZNK5Caver5Proto9Component24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Component::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4E80  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x00000000002FB93C string=0x00000000002FB940 "("
 *   insn=0x00000000002FB950 string=0x00000000002FB954 "_"
 *   insn=0x00000000002FB954 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002FB96C string=0x00000000002FB970 "D"
 *   insn=0x00000000002FB970 string=0x00000000001F4E80 "P'"
 *   insn=0x00000000002FB97C string=0x00000000002FB980 "t"
 *   insn=0x00000000002FB980 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002FB990 string=0x0000000000000002 "LF"
 *   insn=0x00000000002FB994 string=0x00000000002FB998 "N"
 *   insn=0x00000000002FB99C string=0x00000000002FB9A0 "("
 *   insn=0x00000000002FB9AC string=0x00000000002FB9B0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Component::SerializeWithCachedSizes(
        Caver::Proto::Component *this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int v5; // w8

  v5 = *((_DWORD *)this + 22);
  if ( (v5 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteString(1, *((_QWORD *)this + 8), a2);
    v5 = *((_DWORD *)this + 22);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteString(3, *((_QWORD *)this + 10), a2);
      if ( (*((_DWORD *)this + 22) & 4) == 0 )
        goto LABEL_6;
      goto LABEL_5;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(
    (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
    *((_DWORD *)this + 18),
    a2,
    a4);
  v5 = *((_DWORD *)this + 22);
  if ( (v5 & 8) != 0 )
    goto LABEL_9;
LABEL_4:
  if ( (v5 & 4) != 0 )
LABEL_5:
    google::protobuf::internal::WireFormatLite::WriteInt32(
      (google::protobuf::internal::WireFormatLite *)&byte_4,
      *((_DWORD *)this + 19),
      a2,
      a4);
LABEL_6:
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes();
}

