/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E22A4
 * Mangled: _ZNK5Caver5Proto5Quest24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Quest::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E22C0 string=0x00000000002E22C4 "("
 *   insn=0x00000000002E22E0 string=0x00000000002E22E4 "U"
 *   insn=0x00000000002E22E4 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002E2300 string=0x00000000002E2304 "("
 *   insn=0x00000000002E2330 string=0x00000000002E2334 "U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Quest::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  __int64 v2; // x20
  int v3; // w8

  v2 = this;
  v3 = *(_DWORD *)(this + 48);
  if ( (v3 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v3 = *(_DWORD *)(v2 + 48);
    if ( (v3 & 2) == 0 )
    {
LABEL_3:
      if ( (v3 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (v3 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v2 + 24), a2);
  v3 = *(_DWORD *)(v2 + 48);
  if ( (v3 & 4) == 0 )
  {
LABEL_4:
    if ( (v3 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteString(4, *(_QWORD *)(v2 + 40), a2);
  }
LABEL_8:
  this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v2 + 32), a2);
  if ( (*(_DWORD *)(v2 + 48) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(4, *(_QWORD *)(v2 + 40), a2);
  return this;
}

