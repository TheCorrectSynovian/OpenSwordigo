/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1EE8
 * Mangled: _ZN5Caver5Proto10LevelState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::LevelState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F7050  Caver::Proto::LevelState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F70A0  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 122
 *   insn=0x00000000002F1F04 string=0x00000000002F1F08 "W"
 *   insn=0x00000000002F1F14 string=0x00000000002F1F18 "9O@"
 *   insn=0x00000000002F1F18 string=0x00000000002F1F1C ""
 *   insn=0x00000000002F1F20 string=0x00000000002F1F24 "JIA"
 *   insn=0x00000000002F1F38 string=0x00000000002F1F3C "[A"
 *   insn=0x00000000002F1F44 string=0x00000000002F1F48 "h"
 *   insn=0x00000000002F1F4C string=0x00000000002F1F50 """
 *   insn=0x00000000002F1F50 string=0x00000000002F1F54 "\t"
 *   insn=0x00000000002F1F58 string=0x00000000002F1F5C "!"
 *   insn=0x00000000002F1F5C string=0x00000000002F1F60 ""
 *   insn=0x00000000002F1F60 string=0x00000000002F1F64 "a""
 *   insn=0x00000000002F1F64 string=0x00000000002F1F68 "h"
 *   insn=0x00000000002F1F6C string=0x00000000002F1F88 "(|"
 *   insn=0x00000000002F1F78 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002F1F7C string=0x00000000002F1F80 "a""
 *   insn=0x00000000002F1F88 string=0x00000000002F1F8C ""
 *   insn=0x00000000002F1F90 string=0x00000000002F1F94 "h"
 *   insn=0x00000000002F1F94 string=0x00000000002F1F98 "{"
 *   insn=0x00000000002F1F94 string=0x00000000002F2160 "("
 *   insn=0x00000000002F1F98 string=0x00000000002F1F9C ""
 *   insn=0x00000000002F1FA0 string=0x00000000002F1FA4 "("
 *   insn=0x00000000002F1FA0 string=0x00000000002F202C "("
 *   insn=0x00000000002F1FA0 string=0x00000000002F205C "("
 *   insn=0x00000000002F1FA0 string=0x00000000002F2070 "("
 *   insn=0x00000000002F1FA0 string=0x00000000002F20A0 "("
 *   insn=0x00000000002F1FB4 string=0x00000000002F1FB8 ""
 *   insn=0x00000000002F1FB8 string=0x00000000002F1FBC "?"
 *   insn=0x00000000002F1FCC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F1FD0 string=0x00000000002F1FD4 ":"
 *   insn=0x00000000002F1FE0 string=0x00000000002F1FE4 " "
 *   insn=0x00000000002F1FE0 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002F1FE4 string=0x00000000002F1FE8 "i"
 *   insn=0x00000000002F1FE8 string=0x00000000002F1FEC "?"
 *   insn=0x00000000002F1FF0 string=0x00000000002F1FF4 "*"
 *   insn=0x00000000002F1FF4 string=0x00000000002F1FF8 "_A"
 *   insn=0x00000000002F1FF8 string=0x00000000002F1FFC "a"
 *   insn=0x00000000002F1FFC string=0x00000000002F2000 ")"
 *   insn=0x00000000002F2000 string=0x00000000002F2004 "i"
 *   insn=0x00000000002F2004 string=0x00000000002F2008 "?"
 *   insn=0x00000000002F2008 string=0x00000000002F200C "B"
 *   insn=0x00000000002F200C string=0x00000000002F2010 "*"
 *   insn=0x00000000002F2010 string=0x00000000002F2014 "\n"
 *   insn=0x00000000002F2014 string=0x00000000002F2018 "J"
 *   insn=0x00000000002F2018 string=0x00000000002F201C ")"
 *   insn=0x00000000002F2020 string=0x00000000002F2024 "i"
 *   insn=0x00000000002F2024 string=0x00000000002F2028 ")"
 *   insn=0x00000000002F2030 string=0x00000000002F2034 "i"
 *   insn=0x00000000002F2034 string=0x00000000002F2038 "?"
 *   insn=0x00000000002F203C string=0x00000000002F2040 "*"
 *   insn=0x00000000002F2044 string=0x00000000002F2048 "J"
 *   insn=0x00000000002F2048 string=0x00000000002F204C ")"
 *   insn=0x00000000002F2050 string=0x00000000002F2054 "i"
 *   insn=0x00000000002F2068 string=0x00000000002F206C "%"
 *   insn=0x00000000002F2074 string=0x00000000002F2078 "i"
 *   insn=0x00000000002F2078 string=0x00000000002F207C "?"
 *   insn=0x00000000002F207C string=0x00000000002F2080 "b"
 *   insn=0x00000000002F2080 string=0x00000000002F2084 "*"
 *   insn=0x00000000002F2084 string=0x00000000002F2088 "*"
 *   insn=0x00000000002F2088 string=0x00000000002F208C "J"
 *   insn=0x00000000002F208C string=0x00000000002F2090 ")"
 *   insn=0x00000000002F2094 string=0x00000000002F2098 "i"
 *   insn=0x00000000002F2098 string=0x00000000002F209C "b"
 *   insn=0x00000000002F20A4 string=0x00000000002F20A8 "i"
 *   insn=0x00000000002F20A8 string=0x00000000002F20AC "?"
 *   insn=0x00000000002F20BC string=0x00000000002F20C0 "@"
 *   insn=0x00000000002F20BC string=0x00000000001F9050 "0'"
 *   insn=0x00000000002F20C4 string=0x00000000002F20C8 "i"
 *   insn=0x00000000002F20CC string=0x00000000002F20D0 "_"
 *   insn=0x00000000002F20D8 string=0x00000000002F20DC "j"
 *   insn=0x00000000002F20DC string=0x00000000002F20E0 "?"
 *   insn=0x00000000002F20E8 string=0x00000000002F20EC "("
 *   insn=0x00000000002F20F4 string=0x00000000002F20F8 "("
 *   insn=0x00000000002F20F8 string=0x00000000002F20FC "h"
 *   insn=0x00000000002F2100 string=0x00000000002F2104 "H"
 *   insn=0x00000000002F2108 string=0x00000000002F210C "u"
 *   insn=0x00000000002F210C string=0x00000000002F2138 "h"
 *   insn=0x00000000002F2110 string=0x00000000002F2114 "3"
 *   insn=0x00000000002F2140 string=0x00000000002F2144 "\t"
 *   insn=0x00000000002F2148 string=0x00000000002F214C ")"
 *   insn=0x00000000002F214C string=0x00000000002F2150 ""
 *   insn=0x00000000002F2154 string=0x00000000002F2158 "h"
 *   insn=0x00000000002F215C string=0x00000000002F218C "h&G)\n"
 *   insn=0x00000000002F2170 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002F2174 string=0x00000000002F2178 "L"
 *   insn=0x00000000002F218C string=0x00000000002F2190 "\n"
 *   insn=0x00000000002F2194 string=0x00000000002F2198 "j:"
 *   insn=0x00000000002F2198 string=0x00000000002F219C "j"
 *   insn=0x00000000002F21B8 string=0x00000000002F21BC "`"
 *   insn=0x00000000002F21B8 string=0x00000000001F70A0 "0'"
 *   insn=0x00000000002F21BC string=0x00000000002F21C0 "h"
 *   insn=0x00000000002F21C0 string=0x00000000002F21C4 "("
 *   insn=0x00000000002F21D0 string=0x00000000002F21D4 "h:@"
 *   insn=0x00000000002F21D4 string=0x00000000002F21D8 ""
 *   insn=0x00000000002F21D8 string=0x00000000002F21DC "K"
 *   insn=0x00000000002F21DC string=0x00000000002F21E0 "h:"
 *   insn=0x00000000002F21DC string=0x00000000002F21E4 "i"
 *   insn=0x00000000002F21E4 string=0x00000000002F21E8 "?"
 *   insn=0x00000000002F21EC string=0x00000000002F21F0 "*"
 *   insn=0x00000000002F21F0 string=0x00000000002F21F4 "_"
 *   insn=0x00000000002F21F8 string=0x00000000002F21FC ")"
 *   insn=0x00000000002F21FC string=0x00000000002F2200 "i"
 *   insn=0x00000000002F2200 string=0x00000000002F2204 "?"
 *   insn=0x00000000002F221C string=0x00000000002F2220 "i"
 *   insn=0x00000000002F2228 string=0x00000000002F222C "?"
 *   insn=0x00000000002F222C string=0x00000000002F2230 "j"
 *   insn=0x00000000002F2238 string=0x00000000002F223C "*"
 *   insn=0x00000000002F223C string=0x00000000002F2240 "_"
 *   insn=0x00000000002F2240 string=0x00000000002F2244 "!"
 *   insn=0x00000000002F2244 string=0x00000000002F2248 ")"
 *   insn=0x00000000002F2248 string=0x00000000002F224C "i"
 *   insn=0x00000000002F224C string=0x00000000002F2250 "?"
 *   insn=0x00000000002F2250 string=0x00000000002F2254 "c"
 *   insn=0x00000000002F225C string=0x00000000002F2260 "|"
 *   insn=0x00000000002F2260 string=0x00000000002F2264 " "
 *   insn=0x00000000002F2268 string=0x00000000002F226C "i"
 *   insn=0x00000000002F2274 string=0x00000000002F2278 "?"
 *   insn=0x00000000002F2278 string=0x00000000002F227C "j"
 *   insn=0x00000000002F2280 string=0x00000000002F2284 "!"
 *   insn=0x00000000002F2284 string=0x00000000002F2288 "h.@"
 *   insn=0x00000000002F2294 string=0x00000000002F2298 "`"
 *   insn=0x00000000002F22B4 string=0x00000000002F22B8 "!"
 *   insn=0x00000000002F22DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::MergePartialFromCodedStream(
        Caver::Proto::LevelState *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  unsigned __int64 v11; // x8
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  unsigned __int64 v16; // x8
  char *v17; // x9
  unsigned int v18; // w10
  unsigned __int8 *v19; // x9
  int v20; // w10
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  int v24; // w11
  __int64 v25; // x21
  char *v26; // x8
  int v27; // w8
  int v28; // w9
  int v29; // w22
  int v30; // w8
  bool v31; // vf
  int v32; // w8
  _BYTE *v33; // x9
  int v34; // w11
  int v35; // w11
  __int64 result; // x0
  unsigned int v37; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v38; // [xsp+8h] [xbp-58h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( v8 != 2 )
          goto LABEL_40;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 12) |= 1u;
        if ( v9 == &Caver::Proto::LevelState::_default_level_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 >= v11 || *v12 != 16 )
          continue;
        v13 = v12 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v11 )
          goto LABEL_29;
        goto LABEL_15;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_40;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 >= v11 )
          goto LABEL_29;
LABEL_15:
        if ( *v13 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
          v14 = v37;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v37 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v24 = *((_DWORD *)this + 12);
        *((_BYTE *)this + 24) = v14 != 0;
        v20 = v24 | 2;
        *((_DWORD *)this + 12) = v24 | 2;
        if ( (unsigned __int64)v15 >= v11 || *v15 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_34:
        v25 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 12) = v20 | 4;
        if ( !v25 )
        {
          v25 = operator new(0x50u);
          *(_QWORD *)v25 = off_6C6E20;
          *(_QWORD *)(v25 + 16) = v25 + 40;
          *(_QWORD *)(v25 + 24) = 0;
          *(_DWORD *)(v25 + 32) = 4;
          *(_DWORD *)(v25 + 8) = 0;
          *(_DWORD *)(v25 + 72) = 0;
          *((_QWORD *)this + 4) = v25;
        }
        v26 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) || *v26 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
        }
        else
        {
          v37 = (unsigned __int8)*v26;
          *((_QWORD *)a2 + 1) = v26 + 1;
        }
        v27 = *((_DWORD *)a2 + 14);
        v28 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v27 + 1;
        if ( v27 >= v28 )
          return 0;
        v29 = google::protobuf::io::CodedInputStream::PushLimit(a2, v37);
        if ( (Caver::Proto::StateProperties::MergePartialFromCodedStream((Caver::Proto::StateProperties *)v25, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v29);
        v30 = *((_DWORD *)a2 + 14);
        v31 = __OFSUB__(v30, 1);
        v32 = v30 - 1;
        if ( v32 < 0 == v31 )
          *((_DWORD *)a2 + 14) = v32;
        v33 = (_BYTE *)*((_QWORD *)a2 + 1);
        v16 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v33 >= v16 || *v33 != 32 )
          continue;
        v21 = v33 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 >= v16 )
          goto LABEL_52;
LABEL_25:
        if ( *v21 < 0 )
        {
LABEL_52:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
          v22 = v37;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          v16 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v22 = (unsigned __int8)*v21;
          v23 = v21 + 1;
          v37 = v22;
          *((_QWORD *)a2 + 1) = v23;
        }
        v34 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 10) = v22;
        *((_DWORD *)this + 12) = v34 | 8;
        if ( (unsigned __int64)v23 >= v16 || *v23 != 40 )
          continue;
        v17 = v23 + 1;
        *((_QWORD *)a2 + 1) = v17;
        if ( (unsigned __int64)v17 >= v16 )
          goto LABEL_57;
LABEL_19:
        if ( (*v17 & 0x80000000) == 0 )
        {
          v18 = (unsigned __int8)*v17;
          v19 = (unsigned __int8 *)(v17 + 1);
          v37 = v18;
          *((_QWORD *)a2 + 1) = v19;
          goto LABEL_59;
        }
LABEL_57:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) != 0 )
        {
          v18 = v37;
          v19 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v16 = *((_QWORD *)a2 + 2);
LABEL_59:
          v35 = *((_DWORD *)this + 12);
          *((_DWORD *)this + 11) = v18;
          *((_DWORD *)this + 12) = v35 | 0x10;
          if ( v19 == (unsigned __int8 *)v16 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_40;
        v20 = *((_DWORD *)this + 12);
        goto LABEL_34;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_40;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v16 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 < v16 )
          goto LABEL_25;
        goto LABEL_52;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_40;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v16 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 < v16 )
          goto LABEL_19;
        goto LABEL_57;
      default:
        v8 = v6 & 7;
LABEL_40:
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

