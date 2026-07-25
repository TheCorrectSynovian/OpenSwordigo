/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1F6C
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfo27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FEC40  Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 92
 *   insn=0x00000000002D1F7C string=0x00000000002D1F80 "U"
 *   insn=0x00000000002D1F98 string=0x00000000002D1F9C "h"
 *   insn=0x00000000002D1FA0 string=0x00000000002D1FA4 """
 *   insn=0x00000000002D1FA4 string=0x00000000002D1FA8 "\t"
 *   insn=0x00000000002D1FAC string=0x00000000002D1FB0 "!"
 *   insn=0x00000000002D1FB0 string=0x00000000002D1FB4 ""
 *   insn=0x00000000002D1FB4 string=0x00000000002D1FB8 "a""
 *   insn=0x00000000002D1FB8 string=0x00000000002D1FBC "h"
 *   insn=0x00000000002D1FC0 string=0x00000000002D1FDC "(|"
 *   insn=0x00000000002D1FCC string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D1FD0 string=0x00000000002D1FD4 "a""
 *   insn=0x00000000002D1FDC string=0x00000000002D1FE0 ""
 *   insn=0x00000000002D1FE8 string=0x00000000002D213C "("
 *   insn=0x00000000002D1FEC string=0x00000000002D1FF0 ""
 *   insn=0x00000000002D1FF4 string=0x00000000002D1FF8 "("
 *   insn=0x00000000002D1FF4 string=0x00000000002D2028 "("
 *   insn=0x00000000002D1FF4 string=0x00000000002D20D8 "("
 *   insn=0x00000000002D1FF4 string=0x00000000002D210C "("
 *   insn=0x00000000002D1FF8 string=0x00000000002D1FFC "!\n"
 *   insn=0x00000000002D1FFC string=0x00000000002D2000 "i"
 *   insn=0x00000000002D2000 string=0x00000000002D2004 "?"
 *   insn=0x00000000002D2008 string=0x00000000002D200C "*"
 *   insn=0x00000000002D200C string=0x00000000002D2010 "J\n"
 *   insn=0x00000000002D2010 string=0x00000000002D2014 "J"
 *   insn=0x00000000002D2014 string=0x00000000002D2018 ")"
 *   insn=0x00000000002D201C string=0x00000000002D2020 "i"
 *   insn=0x00000000002D2020 string=0x00000000002D2024 "S"
 *   insn=0x00000000002D202C string=0x00000000002D2030 "i"
 *   insn=0x00000000002D2030 string=0x00000000002D2034 "?"
 *   insn=0x00000000002D2038 string=0x00000000002D203C "("
 *   insn=0x00000000002D2040 string=0x00000000002D2044 ""
 *   insn=0x00000000002D2044 string=0x00000000002D2048 ")"
 *   insn=0x00000000002D204C string=0x00000000002D2050 "i"
 *   insn=0x00000000002D2058 string=0x00000000002D2068 "h"
 *   insn=0x00000000002D205C string=0x00000000002D2060 ")"
 *   insn=0x00000000002D206C string=0x00000000002D2070 "b"
 *   insn=0x00000000002D2070 string=0x00000000002D2074 "\n"
 *   insn=0x00000000002D2074 string=0x00000000002D2078 "_"
 *   insn=0x00000000002D207C string=0x00000000002D2080 ""
 *   insn=0x00000000002D2080 string=0x00000000002D2084 "h"
 *   insn=0x00000000002D208C string=0x00000000002D2090 "\t"
 *   insn=0x00000000002D2094 string=0x00000000002D2098 ")"
 *   insn=0x00000000002D2098 string=0x00000000002D209C ""
 *   insn=0x00000000002D20A0 string=0x00000000002D20A4 "h"
 *   insn=0x00000000002D20A4 string=0x00000000002D20A8 "?"
 *   insn=0x00000000002D20AC string=0x00000000002D20C0 "h"
 *   insn=0x00000000002D20B4 string=0x00000000002D20B8 ""
 *   insn=0x00000000002D20C8 string=0x00000000002D20CC "h.@"
 *   insn=0x00000000002D20CC string=0x00000000002D20D0 "h"
 *   insn=0x00000000002D20D0 string=0x00000000002D20D4 "["
 *   insn=0x00000000002D20D8 string=0x00000000002D20DC "!"
 *   insn=0x00000000002D20DC string=0x00000000002D20E0 "h"
 *   insn=0x00000000002D20E4 string=0x00000000002D20E8 "C"
 *   insn=0x00000000002D20F4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D20FC string=0x00000000002D2100 "?"
 *   insn=0x00000000002D2100 string=0x00000000002D2104 "i"
 *   insn=0x00000000002D2110 string=0x00000000002D2114 "i"
 *   insn=0x00000000002D2114 string=0x00000000002D2118 "?"
 *   insn=0x00000000002D2118 string=0x00000000002D211C "B"
 *   insn=0x00000000002D211C string=0x00000000002D2120 "*"
 *   insn=0x00000000002D2120 string=0x00000000002D2124 "\n"
 *   insn=0x00000000002D2124 string=0x00000000002D2128 "J"
 *   insn=0x00000000002D2128 string=0x00000000002D212C ")"
 *   insn=0x00000000002D2130 string=0x00000000002D2134 "i"
 *   insn=0x00000000002D2134 string=0x00000000002D2138 "!"
 *   insn=0x00000000002D2140 string=0x00000000002D2144 "`"
 *   insn=0x00000000002D214C string=0x00000000002D2150 "`"
 *   insn=0x00000000002D214C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D2150 string=0x00000000002D2154 "1"
 *   insn=0x00000000002D2168 string=0x00000000002D216C "i"
 *   insn=0x00000000002D2174 string=0x00000000002D2178 "?"
 *   insn=0x00000000002D2178 string=0x00000000002D217C "j"
 *   insn=0x00000000002D2184 string=0x00000000002D2188 "*"
 *   insn=0x00000000002D2188 string=0x00000000002D218C "_A"
 *   insn=0x00000000002D218C string=0x00000000002D2190 "a"
 *   insn=0x00000000002D2190 string=0x00000000002D2194 ")"
 *   insn=0x00000000002D2194 string=0x00000000002D2198 "i"
 *   insn=0x00000000002D2198 string=0x00000000002D219C "?"
 *   insn=0x00000000002D21AC string=0x00000000002D21B0 "@"
 *   insn=0x00000000002D21B4 string=0x00000000002D21B8 "i"
 *   insn=0x00000000002D21C0 string=0x00000000002D21C4 "?"
 *   insn=0x00000000002D21C4 string=0x00000000002D21C8 "j"
 *   insn=0x00000000002D21CC string=0x00000000002D21D0 "b"
 *   insn=0x00000000002D21D0 string=0x00000000002D21D4 "*"
 *   insn=0x00000000002D21D4 string=0x00000000002D21D8 "_a"
 *   insn=0x00000000002D21DC string=0x00000000002D21E0 ")"
 *   insn=0x00000000002D21E0 string=0x00000000002D21E4 "i"
 *   insn=0x00000000002D21E4 string=0x00000000002D21E8 "?"
 *   insn=0x00000000002D2224 string=0x00000000002D2228 "A"
 *   insn=0x00000000002D2228 string=0x00000000002D2250 " "
 *   insn=0x00000000002D2244 string=0x00000000002D2248 "`"
 *   insn=0x00000000002D2250 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream(
        Caver::Proto::Texture_ConversionInfo *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w8
  int v15; // w9
  _BYTE *v16; // x8
  unsigned __int64 v17; // x9
  char *v18; // x8
  unsigned int v19; // w9
  int v20; // w8
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  int v24; // w11
  int v25; // w11
  __int64 result; // x0
  unsigned int v27; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v28; // [xsp+8h] [xbp-28h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
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
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_36;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v11 = v27;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v27 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v24 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 7) = v24 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v21 = v12 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 < v9 )
          goto LABEL_33;
        goto LABEL_44;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_36;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 >= v9 )
          goto LABEL_44;
LABEL_33:
        if ( *v21 < 0 )
        {
LABEL_44:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v22 = v27;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v22 = (unsigned __int8)*v21;
          v23 = v21 + 1;
          v27 = v22;
          *((_QWORD *)a2 + 1) = v23;
        }
        v25 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v22;
        *((_DWORD *)this + 7) = v25 | 2;
        if ( (unsigned __int64)v23 >= v9 || *v23 != 24 )
          continue;
        v13 = v23 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_49;
LABEL_14:
        if ( (*v13 & 0x80000000) == 0 )
        {
          v14 = (unsigned __int8)*v13;
          v27 = v14;
          *((_QWORD *)a2 + 1) = v13 + 1;
          if ( v14 > 8 )
            goto LABEL_17;
LABEL_16:
          v15 = *((_DWORD *)this + 7) | 8;
          *((_DWORD *)this + 6) = v14;
          *((_DWORD *)this + 7) = v15;
          goto LABEL_17;
        }
LABEL_49:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) != 0 )
        {
          v14 = v27;
          if ( v27 <= 8 )
            goto LABEL_16;
LABEL_17:
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v17 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v16 < v17 && *v16 == 32 )
          {
            v18 = v16 + 1;
            *((_QWORD *)a2 + 1) = v18;
            if ( (unsigned __int64)v18 < v17 )
            {
LABEL_20:
              if ( (*v18 & 0x80000000) == 0 )
              {
                v19 = (unsigned __int8)*v18;
                v27 = v19;
                *((_QWORD *)a2 + 1) = v18 + 1;
                if ( v19 > 3 )
                  goto LABEL_23;
                goto LABEL_22;
              }
            }
LABEL_28:
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
              return 0;
            v19 = v27;
            if ( v27 > 3 )
              goto LABEL_23;
LABEL_22:
            v20 = *((_DWORD *)this + 7);
            *((_DWORD *)this + 5) = v19;
            *((_DWORD *)this + 7) = v20 | 4;
LABEL_23:
            if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
            {
              result = 1;
              *((_DWORD *)a2 + 8) = 0;
              *((_BYTE *)a2 + 36) = 1;
              return result;
            }
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_36;
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) )
          goto LABEL_14;
        goto LABEL_49;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_36;
        v18 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v18 >= *((_QWORD *)a2 + 2) )
          goto LABEL_28;
        goto LABEL_20;
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

