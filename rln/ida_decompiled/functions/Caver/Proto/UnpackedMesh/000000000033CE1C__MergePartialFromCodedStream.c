/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CE1C
 * Mangled: _ZN5Caver5Proto12UnpackedMesh27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::UnpackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7F60  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8840  google::protobuf::io::CodedInputStream::Skip(int)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 169
 *   insn=0x000000000033CE40 string=0x000000000033CE44 "H"
 *   insn=0x000000000033CE68 string=0x000000000033CE6C ""
 *   insn=0x000000000033CE6C string=0x000000000033CE70 "u"
 *   insn=0x000000000033CE70 string=0x000000000058BA90 "l"
 *   insn=0x000000000033CE7C string=0x000000000033CE80 "H"
 *   insn=0x000000000033CE80 string=0x000000000033CE84 ""
 *   insn=0x000000000033CE94 string=0x000000000033CE98 "a"
 *   insn=0x000000000033CE9C string=0x000000000033CEA0 "h"
 *   insn=0x000000000033CEA4 string=0x000000000033CEA8 """
 *   insn=0x000000000033CEA8 string=0x000000000033CEAC "\t"
 *   insn=0x000000000033CEB0 string=0x000000000033CEB4 "!"
 *   insn=0x000000000033CEB4 string=0x000000000033CEB8 ""
 *   insn=0x000000000033CEB8 string=0x000000000033CEBC "a""
 *   insn=0x000000000033CEBC string=0x000000000033CEC0 "h"
 *   insn=0x000000000033CEC4 string=0x000000000033CEC8 "F"
 *   insn=0x000000000033CEC4 string=0x000000000033CEE0 "(|"
 *   insn=0x000000000033CED0 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033CED4 string=0x000000000033CED8 "a""
 *   insn=0x000000000033CED8 string=0x000000000033CEDC "!("
 *   insn=0x000000000033CEE0 string=0x000000000033CEE4 ""
 *   insn=0x000000000033CEE8 string=0x000000000033CEEC "("
 *   insn=0x000000000033CEEC string=0x000000000033CF50 "("
 *   insn=0x000000000033CEF0 string=0x000000000033CEF4 ""
 *   insn=0x000000000033CEF8 string=0x000000000033CEFC "("
 *   insn=0x000000000033CEF8 string=0x000000000033CF14 "("
 *   insn=0x000000000033CEF8 string=0x000000000033CF2C "("
 *   insn=0x000000000033CEF8 string=0x000000000033CF3C "("
 *   insn=0x000000000033CF24 string=0x000000000033CF28 "\n"
 *   insn=0x000000000033CF38 string=0x000000000033D370 "I"
 *   insn=0x000000000033CF48 string=0x000000000033CF4C "@"
 *   insn=0x000000000033CF54 string=0x000000000033CF58 "@$"
 *   insn=0x000000000033CF5C string=0x000000000033CF60 "\"
 *   insn=0x000000000033CF60 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000033CF74 string=0x000000000033CF78 "`"
 *   insn=0x000000000033CF74 string=0x00000000001F7F60 "0'"
 *   insn=0x000000000033CF78 string=0x000000000033D344 "h"
 *   insn=0x000000000033CF8C string=0x000000000033D0BC "h"
 *   insn=0x000000000033CF9C string=0x000000000033CFA0 "@"
 *   insn=0x000000000033CFA0 string=0x000000000033CFA4 ""
 *   insn=0x000000000033CFA0 string=0x000000000033D208 "h"
 *   insn=0x000000000033CFB0 string=0x000000000033CFB4 " !"
 *   insn=0x000000000033CFB0 string=0x00000000001FA750 "0'"
 *   insn=0x000000000033CFC0 string=0x000000000033CFC4 "!"
 *   insn=0x000000000033CFCC string=0x000000000033CFD0 "?"
 *   insn=0x000000000033CFD0 string=0x000000000033CFD4 "("
 *   insn=0x000000000033CFD4 string=0x000000000033CFD8 "\t}@"
 *   insn=0x000000000033CFDC string=0x000000000033CFE0 ")}"
 *   insn=0x000000000033CFE4 string=0x000000000033CFE8 "}~"
 *   insn=0x000000000033CFF4 string=0x000000000033CFF8 "^"
 *   insn=0x000000000033CFF8 string=0x000000000033CFFC """
 *   insn=0x000000000033CFF8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000033D020 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000033D034 string=0x000000000033D038 "z"
 *   insn=0x000000000033D038 string=0x000000000033D03C "h"
 *   insn=0x000000000033D03C string=0x000000000033D040 "i"
 *   insn=0x000000000033D040 string=0x000000000033D044 ")"
 *   insn=0x000000000033D044 string=0x000000000033D048 "?"
 *   insn=0x000000000033D050 string=0x000000000033D054 ")}"
 *   insn=0x000000000033D054 string=0x000000000033D058 ")"
 *   insn=0x000000000033D058 string=0x000000000033D05C "J"
 *   insn=0x000000000033D05C string=0x000000000033D060 "?"
 *   insn=0x000000000033D060 string=0x000000000033D064 "*"
 *   insn=0x000000000033D064 string=0x000000000033D068 "_"
 *   insn=0x000000000033D070 string=0x000000000033D074 "k\t"
 *   insn=0x000000000033D078 string=0x000000000033D07C ""
 *   insn=0x000000000033D080 string=0x000000000033D084 "!"
 *   insn=0x000000000033D084 string=0x000000000033D088 ""
 *   insn=0x000000000033D084 string=0x000000000033D0A8 "?"
 *   insn=0x000000000033D090 string=0x000000000033D094 ""
 *   insn=0x000000000033D094 string=0x000000000033D098 "my)"
 *   insn=0x000000000033D098 string=0x000000000033D09C ")"
 *   insn=0x000000000033D09C string=0x000000000033D0A0 "?"
 *   insn=0x000000000033D0AC string=0x000000000033D0B0 "!\t\t"
 *   insn=0x000000000033D0B8 string=0x00000000001F8840 "0'"
 *   insn=0x000000000033D0C4 string=0x000000000033D0C8 "\t"
 *   insn=0x000000000033D0C8 string=0x000000000033D0CC "?5"
 *   insn=0x000000000033D0D0 string=0x000000000033D0D4 ""
 *   insn=0x000000000033D0D0 string=0x000000000033D0E0 "\t"
 *   insn=0x000000000033D0D4 string=0x000000000033D0D8 "h"
 *   insn=0x000000000033D0E0 string=0x000000000033D0E4 "?U"
 *   insn=0x000000000033D0E8 string=0x000000000033D0EC ""
 *   insn=0x000000000033D0EC string=0x000000000033D0F0 "h"
 *   insn=0x000000000033D10C string=0x000000000033D110 "!"
 *   insn=0x000000000033D118 string=0x000000000033D11C "?"
 *   insn=0x000000000033D11C string=0x000000000033D120 "("
 *   insn=0x000000000033D120 string=0x000000000033D124 "\t}@"
 *   insn=0x000000000033D128 string=0x000000000033D12C ")}"
 *   insn=0x000000000033D130 string=0x000000000033D134 "}~"
 *   insn=0x000000000033D140 string=0x000000000033D144 ""
 *   insn=0x000000000033D144 string=0x000000000033D148 """
 *   insn=0x000000000033D168 string=0x000000000033D16C "}"
 *   insn=0x000000000033D180 string=0x000000000033D184 "z"
 *   insn=0x000000000033D184 string=0x000000000033D188 "h"
 *   insn=0x000000000033D188 string=0x000000000033D18C "i"
 *   insn=0x000000000033D18C string=0x000000000033D190 ")"
 *   insn=0x000000000033D190 string=0x000000000033D194 "?"
 *   insn=0x000000000033D19C string=0x000000000033D1A0 ")}"
 *   insn=0x000000000033D1A0 string=0x000000000033D1A4 ")"
 *   insn=0x000000000033D1A4 string=0x000000000033D1A8 "J"
 *   insn=0x000000000033D1A8 string=0x000000000033D1AC "?"
 *   insn=0x000000000033D1AC string=0x000000000033D1B0 "*"
 *   insn=0x000000000033D1B0 string=0x000000000033D1B4 "_"
 *   insn=0x000000000033D1BC string=0x000000000033D1C0 "k\t"
 *   insn=0x000000000033D1C4 string=0x000000000033D1C8 ""
 *   insn=0x000000000033D1CC string=0x000000000033D1D0 "!"
 *   insn=0x000000000033D1D0 string=0x000000000033D1D4 ""
 *   insn=0x000000000033D1D0 string=0x000000000033D1F4 "?"
 *   insn=0x000000000033D1DC string=0x000000000033D1E0 ""
 *   insn=0x000000000033D1E0 string=0x000000000033D1E4 "my)"
 *   insn=0x000000000033D1E4 string=0x000000000033D1E8 ")"
 *   insn=0x000000000033D1E8 string=0x000000000033D1EC "?"
 *   insn=0x000000000033D1F8 string=0x000000000033D1FC "!\t\t"
 *   insn=0x000000000033D210 string=0x000000000033D214 "\t"
 *   insn=0x000000000033D214 string=0x000000000033D218 "?U"
 *   insn=0x000000000033D21C string=0x000000000033D220 "\t"
 *   insn=0x000000000033D220 string=0x000000000033D224 "?u"
 *   insn=0x000000000033D228 string=0x000000000033D22C ""
 *   insn=0x000000000033D22C string=0x000000000033D230 "h"
 *   insn=0x000000000033D238 string=0x000000000033D23C "E"
 *   insn=0x000000000033D258 string=0x000000000033D25C "?"
 *   insn=0x000000000033D25C string=0x000000000033D260 "("
 *   insn=0x000000000033D260 string=0x000000000033D264 "\t}@"
 *   insn=0x000000000033D268 string=0x000000000033D26C ")}"
 *   insn=0x000000000033D270 string=0x000000000033D274 "}~"
 *   insn=0x000000000033D284 string=0x000000000033D288 """
 *   insn=0x000000000033D290 string=0x000000000033D294 "3"
 *   insn=0x000000000033D2A4 string=0x000000000033D2A8 "."
 *   insn=0x000000000033D2BC string=0x000000000033D2C0 "z"
 *   insn=0x000000000033D2C0 string=0x000000000033D2C4 "h"
 *   insn=0x000000000033D2C4 string=0x000000000033D2C8 "i"
 *   insn=0x000000000033D2C8 string=0x000000000033D2CC ")"
 *   insn=0x000000000033D2CC string=0x000000000033D2D0 "?"
 *   insn=0x000000000033D2D8 string=0x000000000033D2DC ")}"
 *   insn=0x000000000033D2DC string=0x000000000033D2E0 ")"
 *   insn=0x000000000033D2E0 string=0x000000000033D2E4 "J"
 *   insn=0x000000000033D2E4 string=0x000000000033D2E8 "?"
 *   insn=0x000000000033D2E8 string=0x000000000033D2EC "*"
 *   insn=0x000000000033D2EC string=0x000000000033D2F0 "_"
 *   insn=0x000000000033D2F8 string=0x000000000033D2FC "k\t"
 *   insn=0x000000000033D300 string=0x000000000033D304 ""
 *   insn=0x000000000033D308 string=0x000000000033D30C "!"
 *   insn=0x000000000033D30C string=0x000000000033D310 ""
 *   insn=0x000000000033D30C string=0x000000000033D330 "?"
 *   insn=0x000000000033D318 string=0x000000000033D31C ""
 *   insn=0x000000000033D31C string=0x000000000033D320 "my)"
 *   insn=0x000000000033D320 string=0x000000000033D324 ")"
 *   insn=0x000000000033D324 string=0x000000000033D328 "?"
 *   insn=0x000000000033D334 string=0x000000000033D338 "!\t\t"
 *   insn=0x000000000033D33C string=0x000000000033D340 "@"
 *   insn=0x000000000033D34C string=0x000000000033D350 "\t"
 *   insn=0x000000000033D350 string=0x000000000033D354 "?u"
 *   insn=0x000000000033D358 string=0x000000000033D35C "\t"
 *   insn=0x000000000033D35C string=0x000000000033D360 "?"
 *   insn=0x000000000033D364 string=0x000000000033D368 ""
 *   insn=0x000000000033D368 string=0x000000000033D36C "h"
 *   insn=0x000000000033D378 string=0x000000000033D37C ")"
 *   insn=0x000000000033D37C string=0x000000000033D380 ""
 *   insn=0x000000000033D384 string=0x000000000033D388 "?"
 *   insn=0x000000000033D394 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033D39C string=0x000000000033D3A0 "("
 *   insn=0x000000000033D3AC string=0x000000000033D3B0 "@"
 *   insn=0x000000000033D3AC string=0x00000000001FC6E0 "0'"
 *   insn=0x000000000033D3B0 string=0x000000000033D3B4 "h"
 *   insn=0x000000000033D3B8 string=0x000000000033D3BC "!"
 *   insn=0x000000000033D3BC string=0x000000000033D3C0 "h.@"
 *   insn=0x000000000033D3CC string=0x000000000033D3D0 "`"
 *   insn=0x000000000033D3E4 string=0x000000000033D3E8 ""
 *   insn=0x000000000033D3F0 string=0x000000000033D3F4 "!"
 *   insn=0x000000000033D418 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::MergePartialFromCodedStream(
        Caver::Proto::UnpackedMesh *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x27
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w28
  unsigned int v10; // w26
  int v11; // w8
  char *v12; // x24
  __int64 v13; // x9
  __int64 v14; // x8
  unsigned __int64 v15; // x0
  void *v16; // x0
  __int64 v17; // x11
  __int64 v18; // x12
  __int64 v19; // x8
  int v20; // w9
  signed int v21; // w9
  int v22; // w10
  __int64 v23; // x9
  __int64 v24; // x11
  int v25; // w13
  _BYTE *v26; // x8
  int v27; // w28
  unsigned int v28; // w26
  int v29; // w8
  char *v30; // x24
  __int64 v31; // x9
  __int64 v32; // x8
  unsigned __int64 v33; // x0
  void *v34; // x0
  __int64 v35; // x11
  __int64 v36; // x12
  __int64 v37; // x8
  int v38; // w9
  signed int v39; // w9
  int v40; // w10
  __int64 v41; // x9
  __int64 v42; // x11
  int v43; // w13
  int v44; // w28
  unsigned int v45; // w26
  int v46; // w8
  char *v47; // x24
  __int64 v48; // x9
  __int64 v49; // x8
  unsigned __int64 v50; // x0
  void *v51; // x0
  __int64 v52; // x11
  __int64 v53; // x12
  __int64 v54; // x8
  int v55; // w9
  signed int v56; // w9
  int v57; // w10
  __int64 v58; // x9
  __int64 v59; // x11
  int v60; // w13
  __int64 *v61; // x1
  _QWORD *v62; // x0
  __int64 result; // x0
  char *v64; // [xsp+30h] [xbp-70h]
  char *v65; // [xsp+38h] [xbp-68h]
  unsigned int v66; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v67; // [xsp+48h] [xbp-58h]

  v65 = (char *)this + 64;
  v64 = (char *)this + 32;
  v67 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (char *)this + 96;
LABEL_2:
  while ( 2 )
  {
    v6 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v7 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v7 = (unsigned __int8)*v6;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v6 + 1;
      if ( !(_DWORD)v7 )
        return 1;
    }
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        if ( (v7 & 7) != 2 )
        {
          if ( (v7 & 7) != 5 )
            goto LABEL_18;
          while ( 1 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v66) & 1) == 0 )
              return 0;
            v9 = *((_DWORD *)this + 6);
            v10 = v66;
            if ( v9 == *((_DWORD *)this + 7) )
            {
              v11 = 2 * v9 < v9 + 1 ? v9 + 1 : 2 * v9;
              v12 = (char *)*((_QWORD *)this + 2);
              v13 = ((unsigned __int64)v11 * (unsigned __int128)4uLL) >> 64;
              *((_DWORD *)this + 7) = v11;
              v14 = 4LL * v11;
              v15 = v13 ? -1LL : v14;
              v16 = (void *)operator new[](v15);
              *((_QWORD *)this + 2) = v16;
              memcpy(v16, v12, 4LL * v9);
              if ( v12 != v64 )
              {
                if ( v12 )
                {
                  operator delete[](v12);
                  v9 = *((_DWORD *)this + 6);
                }
              }
            }
            v17 = *((_QWORD *)this + 2);
            v18 = v9 + 1LL;
            *((_DWORD *)this + 6) = v18;
            *(_DWORD *)(v17 + 4LL * v9) = v10;
            v19 = *((_QWORD *)a2 + 1);
            v20 = *((_DWORD *)a2 + 4) - v19;
            if ( v20 >= 1 )
            {
              v21 = v20 / 5u;
              v22 = *((_DWORD *)this + 7) - v18;
              if ( v21 < v22 )
                v22 = v21;
              if ( v22 >= 1 )
              {
                v23 = 0;
                v24 = v17 + 4 * v18;
                do
                {
                  if ( *(_BYTE *)v19 != 13 )
                    break;
                  v25 = *(_DWORD *)(v19 + 1);
                  *((_DWORD *)this + 6) = v9 + 2 + v23;
                  v19 += 5;
                  *(_DWORD *)(v24 + 4 * v23++) = v25;
                }
                while ( (int)v23 < v22 );
                if ( (int)v23 >= 1 )
                  google::protobuf::io::CodedInputStream::Skip(a2);
              }
            }
LABEL_47:
            v26 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) )
              goto LABEL_2;
            if ( *v26 != 13 )
            {
              if ( *v26 != 21 )
                goto LABEL_2;
              goto LABEL_51;
            }
            *((_QWORD *)a2 + 1) = v26 + 1;
          }
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(a2)
            & 1) == 0 )
          return 0;
        goto LABEL_47;
      case 2u:
        if ( (v7 & 7) == 2 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(a2)
              & 1) == 0 )
            return 0;
          goto LABEL_72;
        }
        if ( (v7 & 7) != 5 )
          goto LABEL_18;
        while ( 2 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v66) & 1) == 0 )
            return 0;
          v27 = *((_DWORD *)this + 14);
          v28 = v66;
          if ( v27 == *((_DWORD *)this + 15) )
          {
            v29 = 2 * v27 < v27 + 1 ? v27 + 1 : 2 * v27;
            v30 = (char *)*((_QWORD *)this + 6);
            v31 = ((unsigned __int64)v29 * (unsigned __int128)4uLL) >> 64;
            *((_DWORD *)this + 15) = v29;
            v32 = 4LL * v29;
            v33 = v31 ? -1LL : v32;
            v34 = (void *)operator new[](v33);
            *((_QWORD *)this + 6) = v34;
            memcpy(v34, v30, 4LL * v27);
            if ( v30 != v65 )
            {
              if ( v30 )
              {
                operator delete[](v30);
                v27 = *((_DWORD *)this + 14);
              }
            }
          }
          v35 = *((_QWORD *)this + 6);
          v36 = v27 + 1LL;
          *((_DWORD *)this + 14) = v36;
          *(_DWORD *)(v35 + 4LL * v27) = v28;
          v37 = *((_QWORD *)a2 + 1);
          v38 = *((_DWORD *)a2 + 4) - v37;
          if ( v38 >= 1 )
          {
            v39 = v38 / 5u;
            v40 = *((_DWORD *)this + 15) - v36;
            if ( v39 < v40 )
              v40 = v39;
            if ( v40 >= 1 )
            {
              v41 = 0;
              v42 = v35 + 4 * v36;
              do
              {
                if ( *(_BYTE *)v37 != 21 )
                  break;
                v43 = *(_DWORD *)(v37 + 1);
                *((_DWORD *)this + 14) = v27 + 2 + v41;
                v37 += 5;
                *(_DWORD *)(v42 + 4 * v41++) = v43;
              }
              while ( (int)v41 < v40 );
              if ( (int)v41 >= 1 )
                google::protobuf::io::CodedInputStream::Skip(a2);
            }
          }
LABEL_72:
          v26 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v26 < *((_QWORD *)a2 + 2) )
          {
            if ( *v26 == 21 )
            {
LABEL_51:
              *((_QWORD *)a2 + 1) = v26 + 1;
              continue;
            }
            if ( *v26 == 29 )
              goto LABEL_75;
          }
          goto LABEL_2;
        }
      case 3u:
        if ( (v7 & 7) == 2 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(a2)
              & 1) == 0 )
            return 0;
          goto LABEL_96;
        }
        if ( (v7 & 7) == 5 )
        {
          while ( 1 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v66) & 1) == 0 )
              return 0;
            v44 = *((_DWORD *)this + 22);
            v45 = v66;
            if ( v44 == *((_DWORD *)this + 23) )
            {
              v46 = 2 * v44 < v44 + 1 ? v44 + 1 : 2 * v44;
              v47 = (char *)*((_QWORD *)this + 10);
              v48 = ((unsigned __int64)v46 * (unsigned __int128)4uLL) >> 64;
              *((_DWORD *)this + 23) = v46;
              v49 = 4LL * v46;
              v50 = v48 ? -1LL : v49;
              v51 = (void *)operator new[](v50);
              *((_QWORD *)this + 10) = v51;
              memcpy(v51, v47, 4LL * v44);
              if ( v47 != v5 )
              {
                if ( v47 )
                {
                  operator delete[](v47);
                  v44 = *((_DWORD *)this + 22);
                }
              }
            }
            v52 = *((_QWORD *)this + 10);
            v53 = v44 + 1LL;
            *((_DWORD *)this + 22) = v53;
            *(_DWORD *)(v52 + 4LL * v44) = v45;
            v54 = *((_QWORD *)a2 + 1);
            v55 = *((_DWORD *)a2 + 4) - v54;
            if ( v55 >= 1 )
            {
              v56 = v55 / 5u;
              v57 = *((_DWORD *)this + 23) - v53;
              if ( v56 < v57 )
                v57 = v56;
              if ( v57 >= 1 )
              {
                v58 = 0;
                v59 = v52 + 4 * v53;
                do
                {
                  if ( *(_BYTE *)v54 != 29 )
                    break;
                  v60 = *(_DWORD *)(v54 + 1);
                  *((_DWORD *)this + 22) = v44 + 2 + v58;
                  v54 += 5;
                  *(_DWORD *)(v59 + 4 * v58++) = v60;
                }
                while ( (int)v58 < v57 );
                if ( (int)v58 >= 1 )
                  google::protobuf::io::CodedInputStream::Skip(a2);
              }
            }
LABEL_96:
            v26 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) )
              goto LABEL_2;
            if ( *v26 != 29 )
            {
              if ( *v26 == 34 )
              {
                *((_QWORD *)a2 + 1) = v26 + 1;
LABEL_100:
                v61 = (__int64 *)*((_QWORD *)this + 14);
                *((_DWORD *)this + 30) |= 8u;
                if ( v61 == &Caver::Proto::UnpackedMesh::_default_vertex_data_ )
                {
                  v62 = (_QWORD *)operator new(8u);
                  *v62 = &byte_6FD2F8;
                  *((_QWORD *)this + 14) = v62;
                }
                if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
                  return 0;
                if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
                {
                  result = 1;
                  *((_DWORD *)a2 + 8) = 0;
                  *((_BYTE *)a2 + 36) = 1;
                  return result;
                }
              }
              goto LABEL_2;
            }
LABEL_75:
            *((_QWORD *)a2 + 1) = v26 + 1;
          }
        }
LABEL_18:
        if ( (v7 & 7) != 4 )
        {
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v7,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        return 1;
      case 4u:
        if ( (v7 & 7) == 2 )
          goto LABEL_100;
        goto LABEL_18;
      default:
        goto LABEL_18;
    }
  }
}

