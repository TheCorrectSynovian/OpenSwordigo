/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B0BC
 * Mangled: _ZNK5Caver5Proto34SwingableWeaponControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x000000000032B0D4 string=0x000000000032B0D8 "h"
 *   insn=0x000000000032B0D8 string=0x000000000032B0DC ""
 *   insn=0x000000000032B0F0 string=0x0000000000000001 "ELF"
 *   insn=0x000000000032B0F4 string=0x000000000032B0F8 "v)"
 *   insn=0x000000000032B0F8 string=0x00000000001F56D0 "P'"
 *   insn=0x000000000032B110 string=0x00000000001F7750 "0'"
 *   insn=0x000000000032B114 string=0x000000000032B118 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes(
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
      if ( (v5 & 4) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 24), a2);
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 16), a2);
  if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 24), a2);
  return this;
}

