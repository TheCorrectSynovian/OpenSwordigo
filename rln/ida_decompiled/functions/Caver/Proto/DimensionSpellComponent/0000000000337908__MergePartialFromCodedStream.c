/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337908
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::DimensionSpellComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 14
 *   insn=0x0000000000337914 string=0x0000000000337918 "h"
 *   insn=0x000000000033791C string=0x0000000000337920 "B"
 *   insn=0x0000000000337920 string=0x0000000000337924 "\t"
 *   insn=0x0000000000337924 string=0x0000000000337928 "\t"
 *   insn=0x0000000000337928 string=0x000000000033792C "!"
 *   insn=0x000000000033792C string=0x0000000000337930 ""
 *   insn=0x0000000000337930 string=0x0000000000337934 "a""
 *   insn=0x0000000000337934 string=0x0000000000337938 "h"
 *   insn=0x0000000000337940 string=0x0000000000337960 "("
 *   insn=0x0000000000337948 string=0x000000000033794C "="
 *   insn=0x000000000033794C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000337950 string=0x0000000000337954 "a""
 *   insn=0x0000000000337970 string=0x0000000000337974 " "
 *   insn=0x0000000000337970 string=0x00000000001FD8D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DimensionSpellComponent::MergePartialFromCodedStream(
        Caver::Proto::DimensionSpellComponent *this,
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

