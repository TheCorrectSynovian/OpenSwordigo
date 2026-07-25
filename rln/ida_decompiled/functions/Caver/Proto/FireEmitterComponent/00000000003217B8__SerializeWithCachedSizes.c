/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003217B8
 * Mangled: _ZNK5Caver5Proto20FireEmitterComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000321170  Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 35
 *   insn=0x00000000003217CC string=0x00000000003217D0 "h"
 *   insn=0x00000000003217D0 string=0x00000000003217D4 ""
 *   insn=0x00000000003217D4 string=0x00000000003217D8 "h"
 *   insn=0x00000000003217D4 string=0x0000000000321814 ")"
 *   insn=0x00000000003217D8 string=0x00000000003217DC ""
 *   insn=0x00000000003217DC string=0x00000000003217E0 "h"
 *   insn=0x00000000003217DC string=0x000000000032185C ")"
 *   insn=0x00000000003217E0 string=0x00000000003217E4 ""
 *   insn=0x00000000003217E8 string=0x00000000003217EC ""
 *   insn=0x00000000003217E8 string=0x00000000003218BC ")"
 *   insn=0x00000000003217EC string=0x00000000003218EC ")"
 *   insn=0x0000000000321800 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000321808 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000032180C string=0x0000000000321810 "H"
 *   insn=0x0000000000321818 string=0x000000000032181C ")"
 *   insn=0x0000000000321820 string=0x0000000000000002 "LF"
 *   insn=0x0000000000321828 string=0x000000000032182C ")"
 *   insn=0x000000000032182C string=0x0000000000321830 "("
 *   insn=0x0000000000321834 string=0x0000000000321838 "F`"
 *   insn=0x0000000000321838 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000321848 string=0x0000000000000003 "F"
 *   insn=0x0000000000321854 string=0x0000000000321858 "H"
 *   insn=0x0000000000321860 string=0x0000000000321864 ")"
 *   insn=0x0000000000321870 string=0x0000000000321874 ")"
 *   insn=0x0000000000321874 string=0x0000000000321878 "("
 *   insn=0x000000000032187C string=0x0000000000321880 "4`"
 *   insn=0x000000000032189C string=0x00000000003218A0 "H"
 *   insn=0x00000000003218C0 string=0x00000000003218C4 ")"
 *   insn=0x00000000003218D0 string=0x00000000003218D4 ")"
 *   insn=0x00000000003218D4 string=0x00000000003218D8 "("
 *   insn=0x00000000003218E4 string=0x00000000003218E8 "H"
 *   insn=0x00000000003218F0 string=0x00000000003218F4 ")"
 *   insn=0x00000000003218F8 string=0x00000000003218FC " "
 *   insn=0x0000000000321900 string=0x0000000000321904 ")"
 *   insn=0x0000000000321908 string=0x000000000032190C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(
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
  v5 = *(_DWORD *)(this + 64);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 64);
    if ( (v5 & 4) == 0 )
    {
LABEL_3:
      if ( (v5 & 2) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::FireEmitterComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 2) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20) == 0 )
      goto LABEL_6;
    goto LABEL_20;
  }
LABEL_16:
  if ( *(_QWORD *)(v4 + 40) )
    v8 = v4;
  else
    v8 = Caver::Proto::FireEmitterComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           *(_QWORD *)(v8 + 40),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_7;
    goto LABEL_21;
  }
LABEL_20:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           a2,
           *(float *)(v4 + 48),
           a3);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x80) == 0 )
      goto LABEL_8;
    goto LABEL_22;
  }
LABEL_21:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           a2,
           *(float *)(v4 + 52),
           a3);
  v5 = *(_DWORD *)(v4 + 64);
  if ( (v5 & 0x80) == 0 )
  {
LABEL_8:
    if ( (v5 & 8) == 0 )
      return this;
    goto LABEL_26;
  }
LABEL_22:
  if ( *(_QWORD *)(v4 + 56) )
    v9 = v4;
  else
    v9 = Caver::Proto::FireEmitterComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_8,
           *(_QWORD *)(v9 + 56),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 64) & 8) != 0 )
  {
LABEL_26:
    if ( *(_QWORD *)(v4 + 32) )
      v10 = v4;
    else
      v10 = Caver::Proto::FireEmitterComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)byte_9,
             *(_QWORD *)(v10 + 32),
             a2,
             a4);
  }
  return this;
}

