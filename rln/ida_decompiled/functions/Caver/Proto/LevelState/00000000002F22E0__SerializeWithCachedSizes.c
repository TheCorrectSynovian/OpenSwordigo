/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F22E0
 * Mangled: _ZNK5Caver5Proto10LevelState24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::LevelState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 16
 *   insn=0x00000000002F22F4 string=0x00000000002F22F8 ""
 *   insn=0x00000000002F22FC string=0x00000000002F2300 "H"
 *   insn=0x00000000002F2304 string=0x00000000002F2308 "H"
 *   insn=0x00000000002F2320 string=0x00000000002F2324 ""
 *   insn=0x00000000002F2324 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002F2334 string=0x0000000000000002 "LF"
 *   insn=0x00000000002F2338 string=0x00000000002F233C "]F"
 *   insn=0x00000000002F2340 string=0x00000000002F2344 ""
 *   insn=0x00000000002F234C string=0x00000000002F2350 ")!A"
 *   insn=0x00000000002F2354 string=0x0000000000000003 "F"
 *   insn=0x00000000002F235C string=0x00000000002F2360 ")"
 *   insn=0x00000000002F2360 string=0x00000000002F2364 "("
 *   insn=0x00000000002F2368 string=0x00000000002F236C "y"
 *   insn=0x00000000002F236C string=0x00000000001F9950 "0'"
 *   insn=0x00000000002F2384 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002F2388 string=0x00000000002F238C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 48);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 48);
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
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(unsigned __int8 *)(v4 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_9:
  if ( *(_QWORD *)(v4 + 32) )
    v7 = v4;
  else
    v7 = Caver::Proto::LevelState::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 32),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 44),
             a2,
             a4);
  }
LABEL_13:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_DWORD *)(v4 + 40),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 48) & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 44),
             a2,
             a4);
  return this;
}

