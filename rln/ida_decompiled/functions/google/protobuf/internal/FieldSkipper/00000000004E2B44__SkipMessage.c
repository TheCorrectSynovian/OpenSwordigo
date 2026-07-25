/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2B44
 * Mangled: _ZN6google8protobuf8internal12FieldSkipper11SkipMessageEPNS0_2io16CodedInputStreamE
 * Demangled: google::protobuf::internal::FieldSkipper::SkipMessage(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 14
 *   insn=0x00000000004E2B50 string=0x00000000004E2B54 "h"
 *   insn=0x00000000004E2B58 string=0x00000000004E2B5C "B"
 *   insn=0x00000000004E2B5C string=0x00000000004E2B60 "\t"
 *   insn=0x00000000004E2B60 string=0x00000000004E2B64 "\t"
 *   insn=0x00000000004E2B64 string=0x00000000004E2B68 "!"
 *   insn=0x00000000004E2B68 string=0x00000000004E2B6C ""
 *   insn=0x00000000004E2B6C string=0x00000000004E2B70 "a""
 *   insn=0x00000000004E2B70 string=0x00000000004E2B74 "h"
 *   insn=0x00000000004E2B7C string=0x00000000004E2B9C "("
 *   insn=0x00000000004E2B88 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000004E2B8C string=0x00000000004E2B90 "a""
 *   insn=0x00000000004E2BA8 string=0x00000000004E2BAC "Ik"
 *   insn=0x00000000004E2BAC string=0x00000000004E2BB0 " "
 *   insn=0x00000000004E2BAC string=0x00000000001FD8D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::FieldSkipper::SkipMessage(
        google::protobuf::internal::FieldSkipper *this,
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

