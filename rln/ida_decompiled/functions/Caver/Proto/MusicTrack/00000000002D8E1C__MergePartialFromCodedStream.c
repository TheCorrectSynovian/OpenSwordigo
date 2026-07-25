/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8E1C
 * Mangled: _ZN5Caver5Proto10MusicTrack27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FF370  Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 48
 *   insn=0x00000000002D8E30 string=0x00000000002D8E34 "U"
 *   insn=0x00000000002D8E34 string=0x00000000002D8E38 "v "
 *   insn=0x00000000002D8E38 string=0x00000000002D8E3C "i "
 *   insn=0x00000000002D8E44 string=0x00000000002D8E48 ")"
 *   insn=0x00000000002D8E54 string=0x00000000002D8E58 "7a"
 *   insn=0x00000000002D8E58 string=0x00000000002D8E5C "h"
 *   insn=0x00000000002D8E60 string=0x00000000002D8E64 """
 *   insn=0x00000000002D8E64 string=0x00000000002D8E68 "\t"
 *   insn=0x00000000002D8E6C string=0x00000000002D8E70 "!"
 *   insn=0x00000000002D8E70 string=0x00000000002D8E74 ""
 *   insn=0x00000000002D8E74 string=0x00000000002D8E78 "a""
 *   insn=0x00000000002D8E78 string=0x00000000002D8E7C "h"
 *   insn=0x00000000002D8E80 string=0x00000000002D8E84 "?"
 *   insn=0x00000000002D8E80 string=0x00000000002D8E9C "(|"
 *   insn=0x00000000002D8E8C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D8E90 string=0x00000000002D8E94 "a""
 *   insn=0x00000000002D8E94 string=0x00000000002D8E98 "A"
 *   insn=0x00000000002D8EA4 string=0x00000000002D8EC0 "("
 *   insn=0x00000000002D8EAC string=0x00000000002D8EB0 "("
 *   insn=0x00000000002D8EAC string=0x00000000002D8F60 "("
 *   insn=0x00000000002D8EB4 string=0x00000000002D8EB8 "`"
 *   insn=0x00000000002D8EB8 string=0x00000000002D8EBC "*"
 *   insn=0x00000000002D8ED0 string=0x00000000002D8ED4 ""
 *   insn=0x00000000002D8ED4 string=0x00000000002D8ED8 "?"
 *   insn=0x00000000002D8EE8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D8EEC string=0x00000000002D8EF0 "7"
 *   insn=0x00000000002D8EF8 string=0x00000000002D8EFC "5"
 *   insn=0x00000000002D8EFC string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D8F00 string=0x00000000002D8F04 "h"
 *   insn=0x00000000002D8F0C string=0x00000000002D8F10 "\t"
 *   insn=0x00000000002D8F10 string=0x00000000002D8F14 "?U"
 *   insn=0x00000000002D8F14 string=0x00000000002D8F18 "!"
 *   insn=0x00000000002D8F18 string=0x00000000002D8F1C ""
 *   insn=0x00000000002D8F1C string=0x00000000002D8F20 "h"
 *   insn=0x00000000002D8F28 string=0x00000000002D8F2C "\t"
 *   insn=0x00000000002D8F2C string=0x00000000002D8F30 "@"
 *   insn=0x00000000002D8F2C string=0x00000000001FA750 "0'"
 *   insn=0x00000000002D8F3C string=0x00000000002D8F40 "("
 *   insn=0x00000000002D8F44 string=0x00000000002D8F48 "h"
 *   insn=0x00000000002D8F4C string=0x00000000002D8F50 "a"
 *   insn=0x00000000002D8F50 string=0x00000000002D8F54 "h.@"
 *   insn=0x00000000002D8F54 string=0x00000000002D8F58 "("
 *   insn=0x00000000002D8F6C string=0x00000000002D8F70 "X"
 *   insn=0x00000000002D8F70 string=0x00000000002D8F74 "@"
 *   insn=0x00000000002D8F70 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D8F8C string=0x00000000002D8F90 "a"
 *   insn=0x00000000002D8FB0 string=0x00000000002D8FB4 "`"
 *   insn=0x00000000002D8FBC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::MergePartialFromCodedStream(
        Caver::Proto::MusicTrack *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  int v12; // w9
  __int64 result; // x0
  unsigned int v14; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v15; // [xsp+8h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v6 = TagFallback;
          *((_DWORD *)a2 + 8) = TagFallback;
          if ( !TagFallback )
            return 1;
        }
        else
        {
          v6 = (unsigned __int8)*v5;
          *((_DWORD *)a2 + 8) = v6;
          *((_QWORD *)a2 + 1) = v5 + 1;
          if ( !(_DWORD)v6 )
            return 1;
        }
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_23;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 7) |= 1u;
        if ( v9 == &Caver::Proto::MusicTrack::_default_resource_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) && *v11 == 21 )
        {
          *((_QWORD *)a2 + 1) = v11 + 1;
          goto LABEL_18;
        }
      }
      if ( (unsigned int)v6 >> 3 != 2 )
      {
        v8 = v6 & 7;
        break;
      }
      v8 = v6 & 7;
      if ( v8 != 5 )
        break;
LABEL_18:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v14) & 1) == 0 )
        return 0;
      v12 = *((_DWORD *)this + 7);
      *((_DWORD *)this + 6) = v14;
      *((_DWORD *)this + 7) = v12 | 2;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
LABEL_23:
    if ( v8 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

