/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AF94
 * Mangled: _ZN5Caver5Proto14ShapeComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6030  Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73B0  Caver::Proto::Polygon::Polygon(void)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F98A0  Caver::Proto::Circle::Circle(void)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201B20  Caver::Proto::Circle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000030B344  Caver::Proto::ShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 101
 *   insn=0x000000000030AFA8 string=0x000000000030AFAC "W"
 *   insn=0x000000000030AFBC string=0x000000000030AFC0 "h"
 *   insn=0x000000000030AFC4 string=0x000000000030AFC8 """
 *   insn=0x000000000030AFC8 string=0x000000000030AFCC "\t"
 *   insn=0x000000000030AFD0 string=0x000000000030AFD4 "!"
 *   insn=0x000000000030AFD4 string=0x000000000030AFD8 ""
 *   insn=0x000000000030AFD8 string=0x000000000030AFDC "a""
 *   insn=0x000000000030AFDC string=0x000000000030AFE0 "h"
 *   insn=0x000000000030AFE4 string=0x000000000030B000 "(|"
 *   insn=0x000000000030AFF0 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030AFF4 string=0x000000000030AFF8 "a""
 *   insn=0x000000000030B008 string=0x000000000030B03C "("
 *   insn=0x000000000030B010 string=0x000000000030B02C "("
 *   insn=0x000000000030B018 string=0x000000000030B01C "("
 *   insn=0x000000000030B018 string=0x000000000030B098 "("
 *   insn=0x000000000030B024 string=0x000000000030B028 "{"
 *   insn=0x000000000030B030 string=0x000000000030B034 "A"
 *   insn=0x000000000030B034 string=0x000000000030B038 "A"
 *   insn=0x000000000030B04C string=0x000000000030B050 ""
 *   insn=0x000000000030B058 string=0x000000000030B070 "h"
 *   insn=0x000000000030B05C string=0x000000000030B060 "`"
 *   insn=0x000000000030B060 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030B068 string=0x00000000001FB070 "0'"
 *   insn=0x000000000030B078 string=0x000000000030B07C "\t"
 *   insn=0x000000000030B080 string=0x000000000030B084 ")"
 *   insn=0x000000000030B084 string=0x000000000030B088 ""
 *   insn=0x000000000030B08C string=0x000000000030B090 "h"
 *   insn=0x000000000030B094 string=0x000000000030B0C4 "h&G)\n"
 *   insn=0x000000000030B0A4 string=0x000000000030B0A8 "\n"
 *   insn=0x000000000030B0A8 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030B0BC string=0x00000000001F9050 "0'"
 *   insn=0x000000000030B0C4 string=0x000000000030B0C8 "\n"
 *   insn=0x000000000030B0CC string=0x000000000030B0D0 "j:"
 *   insn=0x000000000030B0DC string=0x000000000030B0E0 "("
 *   insn=0x000000000030B0F0 string=0x00000000001F9860 "0'"
 *   insn=0x000000000030B0F4 string=0x000000000030B0F8 "h"
 *   insn=0x000000000030B104 string=0x000000000030B108 "B"
 *   insn=0x000000000030B108 string=0x000000000030B10C "h:@"
 *   insn=0x000000000030B10C string=0x000000000030B110 ""
 *   insn=0x000000000030B110 string=0x000000000030B114 "K"
 *   insn=0x000000000030B114 string=0x000000000030B118 "h:"
 *   insn=0x000000000030B114 string=0x000000000030B11C "h"
 *   insn=0x000000000030B124 string=0x000000000030B128 "\t"
 *   insn=0x000000000030B128 string=0x000000000030B12C "?I"
 *   insn=0x000000000030B130 string=0x000000000030B134 ""
 *   insn=0x000000000030B134 string=0x000000000030B138 "h"
 *   insn=0x000000000030B140 string=0x000000000030B144 ""
 *   insn=0x000000000030B14C string=0x000000000030B164 "h"
 *   insn=0x000000000030B150 string=0x000000000030B154 "#"
 *   insn=0x000000000030B15C string=0x00000000001F98A0 "0'"
 *   insn=0x000000000030B16C string=0x000000000030B170 "\t"
 *   insn=0x000000000030B174 string=0x000000000030B178 ")"
 *   insn=0x000000000030B178 string=0x000000000030B17C ""
 *   insn=0x000000000030B180 string=0x000000000030B184 "h"
 *   insn=0x000000000030B188 string=0x000000000030B19C "h&G)\n"
 *   insn=0x000000000030B19C string=0x000000000030B1A0 "\n"
 *   insn=0x000000000030B1A4 string=0x000000000030B1A8 "j:"
 *   insn=0x000000000030B1A8 string=0x000000000030B1AC "*\n"
 *   insn=0x000000000030B1C4 string=0x000000000030B1C8 "V"
 *   insn=0x000000000030B1C8 string=0x000000000030B1CC " \t"
 *   insn=0x000000000030B1CC string=0x000000000030B1D0 "h"
 *   insn=0x000000000030B1E0 string=0x000000000030B1E4 "h:@"
 *   insn=0x000000000030B1E4 string=0x000000000030B1E8 ""
 *   insn=0x000000000030B1E8 string=0x000000000030B1EC "K"
 *   insn=0x000000000030B1EC string=0x000000000030B1F0 "h:"
 *   insn=0x000000000030B1EC string=0x000000000030B1F4 "h"
 *   insn=0x000000000030B1F8 string=0x000000000030B1FC """
 *   insn=0x000000000030B1FC string=0x000000000030B200 "\t"
 *   insn=0x000000000030B200 string=0x000000000030B204 "?i"
 *   insn=0x000000000030B208 string=0x000000000030B20C ""
 *   insn=0x000000000030B20C string=0x000000000030B210 "h"
 *   insn=0x000000000030B218 string=0x000000000030B21C ""
 *   insn=0x000000000030B224 string=0x000000000030B23C "h"
 *   insn=0x000000000030B230 string=0x000000000030B234 "_"
 *   insn=0x000000000030B234 string=0x00000000001F73B0 "0'"
 *   insn=0x000000000030B244 string=0x000000000030B248 "\t"
 *   insn=0x000000000030B24C string=0x000000000030B250 ")"
 *   insn=0x000000000030B250 string=0x000000000030B254 ""
 *   insn=0x000000000030B258 string=0x000000000030B25C "h"
 *   insn=0x000000000030B260 string=0x000000000030B274 "h&G)\n"
 *   insn=0x000000000030B268 string=0x000000000030B26C "y"
 *   insn=0x000000000030B274 string=0x000000000030B278 "\n"
 *   insn=0x000000000030B27C string=0x000000000030B280 "j:"
 *   insn=0x000000000030B280 string=0x000000000030B284 "j"
 *   insn=0x000000000030B29C string=0x000000000030B2A0 "d"
 *   insn=0x000000000030B2A0 string=0x000000000030B2A4 "`"
 *   insn=0x000000000030B2A0 string=0x00000000001F6030 "0'"
 *   insn=0x000000000030B2A4 string=0x000000000030B2A8 "h"
 *   insn=0x000000000030B2A8 string=0x000000000030B2AC "("
 *   insn=0x000000000030B2B8 string=0x000000000030B2BC "h:@"
 *   insn=0x000000000030B2BC string=0x000000000030B2C0 ""
 *   insn=0x000000000030B2C0 string=0x000000000030B2C4 "K"
 *   insn=0x000000000030B2C4 string=0x000000000030B2C8 "h:"
 *   insn=0x000000000030B2C4 string=0x000000000030B2CC "h"
 *   insn=0x000000000030B2D0 string=0x000000000030B2D4 "a"
 *   insn=0x000000000030B2D4 string=0x000000000030B2D8 "h.@"
 *   insn=0x000000000030B2D8 string=0x000000000030B2DC "("
 *   insn=0x000000000030B2E4 string=0x000000000030B2E8 "`"
 *   insn=0x000000000030B324 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030B338 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030B33C string=0x000000000030B340 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::MergePartialFromCodedStream(
        Caver::Proto::ShapeComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  Caver::Proto::Rectangle *v10; // x21
  char *v11; // x8
  int v12; // w8
  int v13; // w9
  int v14; // w22
  int v15; // w8
  bool v16; // vf
  int v17; // w8
  _BYTE *v18; // x8
  Caver::Proto::Circle *v19; // x21
  char *v20; // x8
  int v21; // w8
  int v22; // w9
  int v23; // w22
  int v24; // w8
  int v25; // w8
  _BYTE *v26; // x8
  Caver::Proto::Polygon *v27; // x21
  char *v28; // x8
  int v29; // w8
  int v30; // w9
  int v31; // w22
  int v32; // w8
  int v33; // w8
  __int64 result; // x0
  unsigned int v35; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v36; // [xsp+8h] [xbp-38h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
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
          v8 = (unsigned int)v6 >> 3;
          if ( (unsigned int)v6 >> 3 != 1 )
            break;
          v9 = v6 & 7;
          if ( v9 != 2 )
            goto LABEL_21;
          v10 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 10) |= 1u;
          if ( !v10 )
          {
            v10 = (Caver::Proto::Rectangle *)operator new(0x20u);
            Caver::Proto::Rectangle::Rectangle(v10);
            *((_QWORD *)this + 2) = v10;
          }
          v11 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
              return 0;
          }
          else
          {
            v35 = (unsigned __int8)*v11;
            *((_QWORD *)a2 + 1) = v11 + 1;
          }
          v12 = *((_DWORD *)a2 + 14);
          v13 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v12 + 1;
          if ( v12 >= v13 )
            return 0;
          v14 = google::protobuf::io::CodedInputStream::PushLimit(a2, v35);
          if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v10, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(a2, v14);
          v15 = *((_DWORD *)a2 + 14);
          v16 = __OFSUB__(v15, 1);
          v17 = v15 - 1;
          if ( v17 < 0 == v16 )
            *((_DWORD *)a2 + 14) = v17;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v18 < *((_QWORD *)a2 + 2) && *v18 == 18 )
          {
            *((_QWORD *)a2 + 1) = v18 + 1;
            goto LABEL_33;
          }
        }
        if ( v8 != 2 )
          break;
        v9 = v6 & 7;
        if ( v9 != 2 )
          goto LABEL_21;
LABEL_33:
        v19 = (Caver::Proto::Circle *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) |= 2u;
        if ( !v19 )
        {
          v19 = (Caver::Proto::Circle *)operator new(0x20u);
          Caver::Proto::Circle::Circle(v19);
          *((_QWORD *)this + 3) = v19;
        }
        v20 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
        }
        else
        {
          v35 = (unsigned __int8)*v20;
          *((_QWORD *)a2 + 1) = v20 + 1;
        }
        v21 = *((_DWORD *)a2 + 14);
        v22 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v21 + 1;
        if ( v21 >= v22 )
          return 0;
        v23 = google::protobuf::io::CodedInputStream::PushLimit(a2, v35);
        if ( (Caver::Proto::Circle::MergePartialFromCodedStream(v19, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v23);
        v24 = *((_DWORD *)a2 + 14);
        v16 = __OFSUB__(v24, 1);
        v25 = v24 - 1;
        if ( v25 < 0 == v16 )
          *((_DWORD *)a2 + 14) = v25;
        v26 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 < *((_QWORD *)a2 + 2) && *v26 == 26 )
        {
          *((_QWORD *)a2 + 1) = v26 + 1;
          goto LABEL_47;
        }
      }
      if ( v8 != 3 )
        break;
      v9 = v6 & 7;
      if ( v9 != 2 )
        goto LABEL_21;
LABEL_47:
      v27 = (Caver::Proto::Polygon *)*((_QWORD *)this + 4);
      *((_DWORD *)this + 10) |= 4u;
      if ( !v27 )
      {
        v27 = (Caver::Proto::Polygon *)operator new(0x50u);
        Caver::Proto::Polygon::Polygon(v27);
        *((_QWORD *)this + 4) = v27;
      }
      v28 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
          return 0;
      }
      else
      {
        v35 = (unsigned __int8)*v28;
        *((_QWORD *)a2 + 1) = v28 + 1;
      }
      v29 = *((_DWORD *)a2 + 14);
      v30 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v29 + 1;
      if ( v29 >= v30 )
        return 0;
      v31 = google::protobuf::io::CodedInputStream::PushLimit(a2, v35);
      if ( (Caver::Proto::Polygon::MergePartialFromCodedStream(v27, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(a2, v31);
      v32 = *((_DWORD *)a2 + 14);
      v16 = __OFSUB__(v32, 1);
      v33 = v32 - 1;
      if ( v33 < 0 == v16 )
        *((_DWORD *)a2 + 14) = v33;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v9 = v6 & 7;
LABEL_21:
    if ( v9 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

