/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D500C
 * Mangled: _ZNK5Caver5Proto4Font24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Font::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 20
 *   insn=0x00000000002D5028 string=0x00000000002D5040 "h"
 *   insn=0x00000000002D5038 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002D5048 string=0x00000000002D504C ")!D"
 *   insn=0x00000000002D5050 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D5058 string=0x00000000002D505C ")"
 *   insn=0x00000000002D505C string=0x00000000002D5060 "("
 *   insn=0x00000000002D5064 string=0x00000000002D5068 ":"
 *   insn=0x00000000002D5068 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D5070 string=0x00000000002D5074 "k"
 *   insn=0x00000000002D5080 string=0x0000000000000003 "F"
 *   insn=0x00000000002D5088 string=0x00000000002D508C "1"
 *   insn=0x00000000002D5098 string=0x00000000002D509C ""
 *   insn=0x00000000002D50A8 string=0x00000000002D50AC "("
 *   insn=0x00000000002D50CC string=0x00000000001FD700 "0'"
 *   insn=0x00000000002D50E0 string=0x00000000002D50E4 "{"
 *   insn=0x00000000002D50E4 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000002D50E8 string=0x00000000002D50EC "("
 *   insn=0x00000000002D50F4 string=0x00000000002D50F8 ")!D"
 *   insn=0x00000000002D5104 string=0x00000000002D5108 ")"
 *   insn=0x00000000002D510C string=0x00000000002D5110 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::SerializeWithCachedSizes(
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

  v4 = this;
  v5 = *(_DWORD *)(this + 112);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 112);
  }
  if ( (v5 & 2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 24) )
      v7 = v4;
    else
      v7 = Caver::Proto::Font::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_QWORD *)(v7 + 24),
             a2,
             a4);
  }
  if ( *(int *)(v4 + 40) >= 1 )
  {
    v8 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v8++),
               a2,
               a4);
    while ( v8 < *(int *)(v4 + 40) );
  }
  v9 = *(_DWORD *)(v4 + 112);
  if ( (v9 & 8) == 0 )
  {
    if ( (v9 & 0x10) == 0 )
      goto LABEL_13;
LABEL_16:
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 96),
             a2,
             a4);
    if ( (*(_DWORD *)(v4 + 112) & 0x20) == 0 )
      return this;
    goto LABEL_17;
  }
  this = google::protobuf::internal::WireFormatLite::WriteBytes(4, *(_QWORD *)(v4 + 88), a2);
  v9 = *(_DWORD *)(v4 + 112);
  if ( (v9 & 0x10) != 0 )
    goto LABEL_16;
LABEL_13:
  if ( (v9 & 0x20) == 0 )
    return this;
LABEL_17:
  if ( *(_QWORD *)(v4 + 104) )
    v10 = v4;
  else
    v10 = Caver::Proto::Font::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_QWORD *)(v10 + 104),
           a2,
           a4);
}

