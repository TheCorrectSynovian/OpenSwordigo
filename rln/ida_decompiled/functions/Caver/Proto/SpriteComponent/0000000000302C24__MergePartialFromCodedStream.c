/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302C24
 * Mangled: _ZN5Caver5Proto15SpriteComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SpriteComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   insn=0x0000000000302C34 string=0x0000000000302C38 ""
 *   insn=0x0000000000302C3C string=0x0000000000302C40 ""
 *   insn=0x0000000000302C4C string=0x0000000000302C50 "h"
 *   insn=0x0000000000302C54 string=0x0000000000302C58 """
 *   insn=0x0000000000302C58 string=0x0000000000302C5C "\t"
 *   insn=0x0000000000302C60 string=0x0000000000302C64 "!"
 *   insn=0x0000000000302C64 string=0x0000000000302C68 ""
 *   insn=0x0000000000302C68 string=0x0000000000302C6C "a""
 *   insn=0x0000000000302C6C string=0x0000000000302C70 "h"
 *   insn=0x0000000000302C70 string=0x0000000000302C74 "?("
 *   insn=0x0000000000302C7C string=0x0000000000302C80 "("
 *   insn=0x0000000000302C84 string=0x0000000000302C88 "@"
 *   insn=0x0000000000302C90 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000302C94 string=0x0000000000302C98 " "
 *   insn=0x0000000000302C9C string=0x0000000000302CA0 "h"
 *   insn=0x0000000000302CA0 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000302CA4 string=0x0000000000302CA8 "a""
 *   insn=0x0000000000302CA8 string=0x0000000000302CAC "?("
 *   insn=0x0000000000302CAC string=0x0000000000302CB0 "a"
 *   insn=0x0000000000302CB8 string=0x0000000000302CBC ""
 *   insn=0x0000000000302CBC string=0x0000000000302CC0 "?"
 *   insn=0x0000000000302CCC string=0x0000000000302CD0 "D"
 *   insn=0x0000000000302CD0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000302CD4 string=0x0000000000302CD8 "6"
 *   insn=0x0000000000302CE4 string=0x00000000001F97D0 "0'"
 *   insn=0x0000000000302CE8 string=0x0000000000302CEC "h"
 *   insn=0x0000000000302CF4 string=0x0000000000302CF8 "h.@"
 *   insn=0x0000000000302D04 string=0x0000000000302D08 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::MergePartialFromCodedStream(
        Caver::Proto::SpriteComponent *this,
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
      if ( v8 == &Caver::Proto::SpriteComponent::_default_texture_name_ )
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

