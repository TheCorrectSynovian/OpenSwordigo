/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003237B0
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ParticleFieldComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 14
 *   insn=0x00000000003237BC string=0x00000000003237C0 "h"
 *   insn=0x00000000003237C4 string=0x00000000003237C8 "B"
 *   insn=0x00000000003237C8 string=0x00000000003237CC "\t"
 *   insn=0x00000000003237CC string=0x00000000003237D0 "\t"
 *   insn=0x00000000003237D0 string=0x00000000003237D4 "!"
 *   insn=0x00000000003237D4 string=0x00000000003237D8 ""
 *   insn=0x00000000003237D8 string=0x00000000003237DC "a""
 *   insn=0x00000000003237DC string=0x00000000003237E0 "h"
 *   insn=0x00000000003237E8 string=0x0000000000323808 "("
 *   insn=0x00000000003237F4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003237F8 string=0x00000000003237FC "a""
 *   insn=0x0000000000323814 string=0x0000000000323818 ".h"
 *   insn=0x0000000000323818 string=0x000000000032381C " "
 *   insn=0x0000000000323818 string=0x00000000001FD8D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleFieldComponent::MergePartialFromCodedStream(
        Caver::Proto::ParticleFieldComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v4; // x8
  unsigned __int64 v5; // x1
  __int64 result; // x0
  unsigned int TagFallback; // w0

  while ( 1 )
  {
    v4 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v4 >= *((_QWORD *)a2 + 2) || *v4 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v5 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      result = 1;
      if ( !(_DWORD)v5 )
        return result;
    }
    else
    {
      v5 = (unsigned __int8)*v4;
      *((_DWORD *)a2 + 8) = v5;
      *((_QWORD *)a2 + 1) = v4 + 1;
      result = 1;
      if ( !(_DWORD)v5 )
        return result;
    }
    if ( (v5 & 7) == 4 )
      break;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v5, a3) & 1) == 0 )
      return 0;
  }
  return result;
}

