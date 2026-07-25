/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C24C
 * Mangled: _ZN5Caver5Proto19BackgroundComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BackgroundComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 28
 *   insn=0x000000000031C258 string=0x000000000031C25C "U"
 *   insn=0x000000000031C25C string=0x000000000031C260 "H"
 *   insn=0x000000000031C264 string=0x000000000031C268 ""
 *   insn=0x000000000031C274 string=0x000000000031C278 "h"
 *   insn=0x000000000031C27C string=0x000000000031C280 """
 *   insn=0x000000000031C280 string=0x000000000031C284 "\t"
 *   insn=0x000000000031C288 string=0x000000000031C28C "!"
 *   insn=0x000000000031C28C string=0x000000000031C290 ""
 *   insn=0x000000000031C290 string=0x000000000031C294 "a""
 *   insn=0x000000000031C294 string=0x000000000031C298 "h"
 *   insn=0x000000000031C298 string=0x000000000031C29C "?("
 *   insn=0x000000000031C2A4 string=0x000000000031C2A8 "("
 *   insn=0x000000000031C2AC string=0x000000000031C2B0 "@"
 *   insn=0x000000000031C2B8 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031C2BC string=0x000000000031C2C0 " "
 *   insn=0x000000000031C2C8 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031C2CC string=0x000000000031C2D0 "a""
 *   insn=0x000000000031C2D0 string=0x000000000031C2D4 "?("
 *   insn=0x000000000031C2D4 string=0x000000000031C2D8 "a"
 *   insn=0x000000000031C2E0 string=0x000000000031C2E4 ""
 *   insn=0x000000000031C2E4 string=0x000000000031C2E8 "?"
 *   insn=0x000000000031C2F8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031C2FC string=0x000000000031C300 "6"
 *   insn=0x000000000031C308 string=0x000000000031C30C "1u"
 *   insn=0x000000000031C30C string=0x00000000001F97D0 "0'"
 *   insn=0x000000000031C310 string=0x000000000031C314 "h"
 *   insn=0x000000000031C31C string=0x000000000031C320 "h.@"
 *   insn=0x000000000031C32C string=0x000000000031C330 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::MergePartialFromCodedStream(
        Caver::Proto::BackgroundComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  __int64 *v8; // x1
  _QWORD *v9; // x0
  __int64 result; // x0

  do
  {
    while ( 1 )
    {
      v5 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && ((char)*v5 & 0x80000000) == 0 )
        break;
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback != 10 )
        goto LABEL_4;
LABEL_9:
      v8 = (__int64 *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 6) |= 1u;
      if ( v8 == &Caver::Proto::BackgroundComponent::_default_texture_name_ )
      {
        v9 = (_QWORD *)operator new(8u);
        *v9 = &byte_6FD2F8;
        *((_QWORD *)this + 2) = v9;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v6 = *v5;
    *((_DWORD *)a2 + 8) = v6;
    *((_QWORD *)a2 + 1) = v5 + 1;
    if ( (_DWORD)v6 == 10 )
      goto LABEL_9;
LABEL_4:
    if ( !(_DWORD)v6 || (v6 & 7) == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}

