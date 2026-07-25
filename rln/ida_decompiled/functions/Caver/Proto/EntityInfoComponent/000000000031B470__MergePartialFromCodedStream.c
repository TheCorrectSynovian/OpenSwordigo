/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B470
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::EntityInfoComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 29
 *   insn=0x000000000031B47C string=0x000000000031B480 "U"
 *   insn=0x000000000031B480 string=0x000000000031B484 "H"
 *   insn=0x000000000031B488 string=0x000000000031B48C ""
 *   insn=0x000000000031B498 string=0x000000000031B49C "h"
 *   insn=0x000000000031B4A0 string=0x000000000031B4A4 """
 *   insn=0x000000000031B4A4 string=0x000000000031B4A8 "\t"
 *   insn=0x000000000031B4AC string=0x000000000031B4B0 "!"
 *   insn=0x000000000031B4B0 string=0x000000000031B4B4 ""
 *   insn=0x000000000031B4B4 string=0x000000000031B4B8 "a""
 *   insn=0x000000000031B4B8 string=0x000000000031B4BC "h"
 *   insn=0x000000000031B4BC string=0x000000000031B4C0 "?("
 *   insn=0x000000000031B4C8 string=0x000000000031B4CC "("
 *   insn=0x000000000031B4D0 string=0x000000000031B4D4 "@"
 *   insn=0x000000000031B4DC string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031B4E0 string=0x000000000031B4E4 " "
 *   insn=0x000000000031B4E8 string=0x000000000031B4EC "Uq"
 *   insn=0x000000000031B4EC string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031B4F0 string=0x000000000031B4F4 "a""
 *   insn=0x000000000031B4F4 string=0x000000000031B4F8 "?("
 *   insn=0x000000000031B4F8 string=0x000000000031B4FC "a"
 *   insn=0x000000000031B504 string=0x000000000031B508 ""
 *   insn=0x000000000031B508 string=0x000000000031B50C "?"
 *   insn=0x000000000031B518 string=0x000000000031B51C "1h"
 *   insn=0x000000000031B51C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031B520 string=0x000000000031B524 "6"
 *   insn=0x000000000031B530 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000031B534 string=0x000000000031B538 "h"
 *   insn=0x000000000031B540 string=0x000000000031B544 "h.@"
 *   insn=0x000000000031B550 string=0x000000000031B554 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::MergePartialFromCodedStream(
        Caver::Proto::EntityInfoComponent *this,
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
      if ( v8 == &Caver::Proto::EntityInfoComponent::_default_entity_class_ )
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

