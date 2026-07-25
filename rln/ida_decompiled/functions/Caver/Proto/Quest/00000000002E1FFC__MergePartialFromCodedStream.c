/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1FFC
 * Mangled: _ZN5Caver5Proto5Quest27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Quest::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000200430  Caver::Proto::Quest::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 71
 *   insn=0x00000000002E2024 string=0x00000000002E2028 "8 "
 *   insn=0x00000000002E202C string=0x00000000002E2030 " "
 *   insn=0x00000000002E2034 string=0x00000000002E2038 "9"
 *   insn=0x00000000002E2038 string=0x00000000002E203C "{CF"
 *   insn=0x00000000002E203C string=0x00000000002E2040 "U"
 *   insn=0x00000000002E2050 string=0x00000000002E2054 "h"
 *   insn=0x00000000002E2058 string=0x00000000002E205C """
 *   insn=0x00000000002E205C string=0x00000000002E2060 "\t"
 *   insn=0x00000000002E2064 string=0x00000000002E2068 "!"
 *   insn=0x00000000002E2068 string=0x00000000002E206C ""
 *   insn=0x00000000002E206C string=0x00000000002E2070 "a""
 *   insn=0x00000000002E2070 string=0x00000000002E2074 "h"
 *   insn=0x00000000002E2078 string=0x00000000002E207C "~"
 *   insn=0x00000000002E2078 string=0x00000000002E2094 "(|"
 *   insn=0x00000000002E2080 string=0x00000000002E2084 "oV"
 *   insn=0x00000000002E2084 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E2088 string=0x00000000002E208C "a""
 *   insn=0x00000000002E208C string=0x00000000002E2090 "!"
 *   insn=0x00000000002E2094 string=0x00000000002E2098 ""
 *   insn=0x00000000002E20A0 string=0x00000000002E2118 "("
 *   insn=0x00000000002E20A4 string=0x00000000002E20A8 ""
 *   insn=0x00000000002E20AC string=0x00000000002E20B0 "("
 *   insn=0x00000000002E20AC string=0x00000000002E2120 "("
 *   insn=0x00000000002E20AC string=0x00000000002E218C "("
 *   insn=0x00000000002E20AC string=0x00000000002E21F8 "("
 *   insn=0x00000000002E20C0 string=0x00000000002E20C4 ""
 *   insn=0x00000000002E20C4 string=0x00000000002E20C8 "?"
 *   insn=0x00000000002E20D4 string=0x00000000002E20D8 "BM"
 *   insn=0x00000000002E20D8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E20DC string=0x00000000002E20E0 ":"
 *   insn=0x00000000002E20EC string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002E20F0 string=0x00000000002E20F4 "h"
 *   insn=0x00000000002E20FC string=0x00000000002E2100 "\t"
 *   insn=0x00000000002E2100 string=0x00000000002E2104 "?I"
 *   insn=0x00000000002E2104 string=0x00000000002E2108 "a"
 *   insn=0x00000000002E2108 string=0x00000000002E210C ""
 *   insn=0x00000000002E210C string=0x00000000002E2110 "h"
 *   insn=0x00000000002E2118 string=0x00000000002E211C "O"
 *   insn=0x00000000002E2130 string=0x00000000002E2134 ""
 *   insn=0x00000000002E2134 string=0x00000000002E2138 "?"
 *   insn=0x00000000002E2144 string=0x00000000002E2148 "&M"
 *   insn=0x00000000002E2150 string=0x00000000002E2154 "("
 *   insn=0x00000000002E2160 string=0x00000000002E2164 "@"
 *   insn=0x00000000002E2164 string=0x00000000002E2168 "h"
 *   insn=0x00000000002E216C string=0x00000000002E2170 """
 *   insn=0x00000000002E2170 string=0x00000000002E2174 "\t"
 *   insn=0x00000000002E2174 string=0x00000000002E2178 "?i"
 *   insn=0x00000000002E217C string=0x00000000002E2180 ""
 *   insn=0x00000000002E2180 string=0x00000000002E2184 "h"
 *   insn=0x00000000002E2190 string=0x00000000002E2194 "!"
 *   insn=0x00000000002E219C string=0x00000000002E21A0 ""
 *   insn=0x00000000002E21A0 string=0x00000000002E21A4 "?"
 *   insn=0x00000000002E21B0 string=0x00000000002E21B4 "M"
 *   insn=0x00000000002E21BC string=0x00000000002E21C0 "("
 *   insn=0x00000000002E21D0 string=0x00000000002E21D4 "h"
 *   insn=0x00000000002E21DC string=0x00000000002E21E0 "\t"
 *   insn=0x00000000002E21E0 string=0x00000000002E21E4 "?"
 *   insn=0x00000000002E21E4 string=0x00000000002E21E8 "a"
 *   insn=0x00000000002E21E8 string=0x00000000002E21EC ""
 *   insn=0x00000000002E21EC string=0x00000000002E21F0 "h"
 *   insn=0x00000000002E2208 string=0x00000000002E220C ""
 *   insn=0x00000000002E220C string=0x00000000002E2210 "?"
 *   insn=0x00000000002E2228 string=0x00000000002E222C "("
 *   insn=0x00000000002E2234 string=0x00000000002E2238 "f]"
 *   insn=0x00000000002E223C string=0x00000000002E2240 "h"
 *   insn=0x00000000002E2244 string=0x00000000002E2248 "a"
 *   insn=0x00000000002E2248 string=0x00000000002E224C "h.@"
 *   insn=0x00000000002E224C string=0x00000000002E2250 "("
 *   insn=0x00000000002E2264 string=0x00000000002E2268 "`"
 *   insn=0x00000000002E2264 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E2298 string=0x00000000002E229C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Quest::MergePartialFromCodedStream(
        Caver::Proto::Quest *this,
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
  _BYTE *v14; // x8
  __int64 *v15; // x1
  _QWORD *v16; // x0
  _BYTE *v17; // x8
  __int64 *v18; // x1
  _QWORD *v19; // x0
  __int64 result; // x0

  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_6;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_6:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_36;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 12) |= 1u;
        if ( v9 == &Caver::Proto::Quest::_default_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_16;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_36;
LABEL_16:
        v12 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 12) |= 2u;
        if ( v12 == &Caver::Proto::Quest::_default_title_ )
        {
          v13 = (_QWORD *)operator new(8u);
          *v13 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v13;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_23:
        v15 = (__int64 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 12) |= 4u;
        if ( v15 == &Caver::Proto::Quest::_default_follow_up_quest_ )
        {
          v16 = (_QWORD *)operator new(8u);
          *v16 = &byte_6FD2F8;
          *((_QWORD *)this + 4) = v16;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v17 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_30:
        v18 = (__int64 *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 12) |= 8u;
        if ( v18 == &Caver::Proto::Quest::_default_map_location_ )
        {
          v19 = (_QWORD *)operator new(8u);
          *v19 = &byte_6FD2F8;
          *((_QWORD *)this + 5) = v19;
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
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_23;
        goto LABEL_36;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_30;
        goto LABEL_36;
      default:
        v8 = v6 & 7;
LABEL_36:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

