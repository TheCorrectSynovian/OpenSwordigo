/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E38E0
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FE6E0  Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 39
 *   insn=0x00000000002E3900 string=0x00000000002E3904 "8 "
 *   insn=0x00000000002E3914 string=0x00000000002E3918 "h"
 *   insn=0x00000000002E391C string=0x00000000002E3920 """
 *   insn=0x00000000002E3920 string=0x00000000002E3924 "\t"
 *   insn=0x00000000002E3928 string=0x00000000002E392C "!"
 *   insn=0x00000000002E392C string=0x00000000002E3930 ""
 *   insn=0x00000000002E3930 string=0x00000000002E3934 "a""
 *   insn=0x00000000002E3934 string=0x00000000002E3938 "h"
 *   insn=0x00000000002E393C string=0x00000000002E3940 "E"
 *   insn=0x00000000002E393C string=0x00000000002E3958 "(|"
 *   insn=0x00000000002E3944 string=0x00000000002E3948 ">P"
 *   insn=0x00000000002E3948 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E394C string=0x00000000002E3950 "a""
 *   insn=0x00000000002E3960 string=0x00000000002E397C "("
 *   insn=0x00000000002E3964 string=0x00000000002E3968 "a"
 *   insn=0x00000000002E3968 string=0x00000000002E396C "("
 *   insn=0x00000000002E3968 string=0x00000000002E3A34 "("
 *   insn=0x00000000002E3970 string=0x00000000002E3974 "`"
 *   insn=0x00000000002E3974 string=0x00000000002E3978 "0"
 *   insn=0x00000000002E398C string=0x00000000002E3990 ""
 *   insn=0x00000000002E3990 string=0x00000000002E3994 "?"
 *   insn=0x00000000002E39A4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E39A8 string=0x00000000002E39AC "7"
 *   insn=0x00000000002E39B8 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002E39BC string=0x00000000002E39C0 "h"
 *   insn=0x00000000002E39C8 string=0x00000000002E39CC "\t"
 *   insn=0x00000000002E39CC string=0x00000000002E39D0 "?I"
 *   insn=0x00000000002E39D0 string=0x00000000002E39D4 "!"
 *   insn=0x00000000002E39D4 string=0x00000000002E39D8 ""
 *   insn=0x00000000002E39D8 string=0x00000000002E39DC "h"
 *   insn=0x00000000002E39E4 string=0x00000000002E39E8 ""
 *   insn=0x00000000002E39E8 string=0x00000000002E39EC "?"
 *   insn=0x00000000002E3A04 string=0x00000000002E3A08 "("
 *   insn=0x00000000002E3A10 string=0x00000000002E3A14 "oW"
 *   insn=0x00000000002E3A18 string=0x00000000002E3A1C "h"
 *   insn=0x00000000002E3A24 string=0x00000000002E3A28 "h.@"
 *   insn=0x00000000002E3A28 string=0x00000000002E3A2C "h"
 *   insn=0x00000000002E3A44 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E3A70 string=0x00000000002E3A74 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(
        Caver::Proto::GuideTarget_LevelObject *this,
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
  __int64 *v12; // x1
  _QWORD *v13; // x0
  __int64 result; // x0

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
          goto LABEL_24;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 8) |= 1u;
        if ( v9 == &Caver::Proto::GuideTarget_LevelObject::_default_level_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) && *v11 == 18 )
        {
          *((_QWORD *)a2 + 1) = v11 + 1;
          goto LABEL_17;
        }
      }
      if ( (unsigned int)v6 >> 3 != 2 )
      {
        v8 = v6 & 7;
        break;
      }
      v8 = v6 & 7;
      if ( v8 != 2 )
        break;
LABEL_17:
      v12 = (__int64 *)*((_QWORD *)this + 3);
      *((_DWORD *)this + 8) |= 2u;
      if ( v12 == &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_ )
      {
        v13 = (_QWORD *)operator new(8u);
        *v13 = &byte_6FD2F8;
        *((_QWORD *)this + 3) = v13;
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
LABEL_24:
    if ( v8 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

