/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2AB8
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite11SkipMessageEPNS0_2io16CodedInputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::SkipMessage(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 14
 *   insn=0x00000000004E2AC4 string=0x00000000004E2AC8 "h"
 *   insn=0x00000000004E2ACC string=0x00000000004E2AD0 "B"
 *   insn=0x00000000004E2AD0 string=0x00000000004E2AD4 "\t"
 *   insn=0x00000000004E2AD4 string=0x00000000004E2AD8 "\t"
 *   insn=0x00000000004E2AD8 string=0x00000000004E2ADC "!"
 *   insn=0x00000000004E2ADC string=0x00000000004E2AE0 ""
 *   insn=0x00000000004E2AE0 string=0x00000000004E2AE4 "a""
 *   insn=0x00000000004E2AE4 string=0x00000000004E2AE8 "h"
 *   insn=0x00000000004E2AF0 string=0x00000000004E2B10 "("
 *   insn=0x00000000004E2AFC string=0x00000000001F7A40 "0'"
 *   insn=0x00000000004E2B00 string=0x00000000004E2B04 "a""
 *   insn=0x00000000004E2B1C string=0x00000000004E2B20 "lk"
 *   insn=0x00000000004E2B20 string=0x00000000004E2B24 " "
 *   insn=0x00000000004E2B20 string=0x00000000001FD8D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::SkipMessage(
        google::protobuf::internal::WireFormatLite *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v4; // x8
  unsigned __int64 v5; // x1
  __int64 result; // x0
  unsigned int TagFallback; // w0

  while ( 1 )
  {
    v4 = (char *)*((_QWORD *)this + 1);
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 2) || *v4 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(this);
      v5 = TagFallback;
      *((_DWORD *)this + 8) = TagFallback;
      result = 1;
      if ( !(_DWORD)v5 )
        return result;
    }
    else
    {
      v5 = (unsigned __int8)*v4;
      *((_DWORD *)this + 8) = v5;
      *((_QWORD *)this + 1) = v4 + 1;
      result = 1;
      if ( !(_DWORD)v5 )
        return result;
    }
    if ( (v5 & 7) == 4 )
      break;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(this, (google::protobuf::io::CodedInputStream *)v5, a3)
        & 1) == 0 )
      return 0;
  }
  return result;
}

