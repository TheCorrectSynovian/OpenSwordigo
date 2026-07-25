/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2C78
 * Mangled: _ZN5Caver5Proto7Texture27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000202140  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8BB0  Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FEC40  Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 139
 *   insn=0x00000000002D2C94 string=0x00000000002D2C98 "X"
 *   insn=0x00000000002D2C9C string=0x00000000002D2CA0 ""
 *   insn=0x00000000002D2CA0 string=0x00000000002D2CA4 "\t"
 *   insn=0x00000000002D2CA8 string=0x00000000002D2CAC "J1D"
 *   insn=0x00000000002D2CB8 string=0x00000000002D2CBC ")"
 *   insn=0x00000000002D2CC8 string=0x00000000002D2CCC "9"
 *   insn=0x00000000002D2CD0 string=0x00000000002D2CD4 "[A"
 *   insn=0x00000000002D2CD4 string=0x00000000002D2CD8 "<A"
 *   insn=0x00000000002D2CDC string=0x00000000002D30E8 "h"
 *   insn=0x00000000002D2CE0 string=0x00000000002D2CE4 "W"
 *   insn=0x00000000002D2CE4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D2CE8 string=0x00000000002D2CEC "a""
 *   insn=0x00000000002D2CF0 string=0x00000000002D2CF4 "(|"
 *   insn=0x00000000002D2CF4 string=0x00000000002D2CF8 ""
 *   insn=0x00000000002D2D00 string=0x00000000002D2D04 "({"
 *   insn=0x00000000002D2D00 string=0x00000000002D2EDC "("
 *   insn=0x00000000002D2D04 string=0x00000000002D2D08 ""
 *   insn=0x00000000002D2D0C string=0x00000000002D2D10 "("
 *   insn=0x00000000002D2D0C string=0x00000000002D2DD0 "("
 *   insn=0x00000000002D2D0C string=0x00000000002D2DE0 "("
 *   insn=0x00000000002D2D0C string=0x00000000002D2DF0 "("
 *   insn=0x00000000002D2D0C string=0x00000000002D2EA8 "("
 *   insn=0x00000000002D2D14 string=0x00000000002D2D18 "A"
 *   insn=0x00000000002D2D24 string=0x00000000002D2D28 ")"
 *   insn=0x00000000002D2D28 string=0x00000000002D2D2C ""
 *   insn=0x00000000002D2D30 string=0x00000000002D2D34 "?"
 *   insn=0x00000000002D2D3C string=0x00000000002D2D40 "("
 *   insn=0x00000000002D2D40 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D2D44 string=0x00000000002D2D48 ":"
 *   insn=0x00000000002D2D54 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D2D58 string=0x00000000002D2D5C "h"
 *   insn=0x00000000002D2D60 string=0x00000000002D2D64 """
 *   insn=0x00000000002D2D64 string=0x00000000002D2D68 "\n"
 *   insn=0x00000000002D2D68 string=0x00000000002D2D6C "_A"
 *   insn=0x00000000002D2D70 string=0x00000000002D2D74 ""
 *   insn=0x00000000002D2D74 string=0x00000000002D2D78 "h"
 *   insn=0x00000000002D2D80 string=0x00000000002D2D84 "\t"
 *   insn=0x00000000002D2D88 string=0x00000000002D2D8C ")"
 *   insn=0x00000000002D2D8C string=0x00000000002D2D90 ""
 *   insn=0x00000000002D2D94 string=0x00000000002D2D98 "h"
 *   insn=0x00000000002D2D98 string=0x00000000002D2D9C "?!"
 *   insn=0x00000000002D2DA0 string=0x00000000002D2DB4 "h"
 *   insn=0x00000000002D2DA8 string=0x00000000002D2DAC ""
 *   insn=0x00000000002D2DB8 string=0x00000000002D2DBC "b"
 *   insn=0x00000000002D2DBC string=0x00000000002D2DC0 "\t"
 *   insn=0x00000000002D2DC0 string=0x00000000002D2DC4 "?i"
 *   insn=0x00000000002D2DCC string=0x00000000002D30A0 ""
 *   insn=0x00000000002D2DD8 string=0x00000000002D2DDC "A"
 *   insn=0x00000000002D2DE8 string=0x00000000002D2DEC "c"
 *   insn=0x00000000002D2DF0 string=0x00000000002D2DF4 "a"
 *   insn=0x00000000002D2DF4 string=0x00000000002D2DF8 "h"
 *   insn=0x00000000002D2DFC string=0x00000000002D2E00 "B"
 *   insn=0x00000000002D2E00 string=0x00000000002D2E04 "\t"
 *   insn=0x00000000002D2E04 string=0x00000000002D2E08 "\t"
 *   insn=0x00000000002D2E08 string=0x00000000002D2E0C ")"
 *   insn=0x00000000002D2E0C string=0x00000000002D2E10 ""
 *   insn=0x00000000002D2E14 string=0x00000000002D2E18 "h"
 *   insn=0x00000000002D2E18 string=0x00000000002D2E1C "?"
 *   insn=0x00000000002D2E20 string=0x00000000002D2E34 "h"
 *   insn=0x00000000002D2E28 string=0x00000000002D2E2C ""
 *   insn=0x00000000002D2E38 string=0x00000000002D2E3C "b"
 *   insn=0x00000000002D2E3C string=0x00000000002D2E40 "\t"
 *   insn=0x00000000002D2E40 string=0x00000000002D2E44 "?"
 *   insn=0x00000000002D2E48 string=0x00000000002D2E4C ""
 *   insn=0x00000000002D2E4C string=0x00000000002D2E50 "h"
 *   insn=0x00000000002D2E58 string=0x00000000002D2E5C ""
 *   insn=0x00000000002D2E64 string=0x00000000002D2E80 "h"
 *   insn=0x00000000002D2E88 string=0x00000000002D2E8C "\t"
 *   insn=0x00000000002D2E8C string=0x00000000002D2E90 "I"
 *   insn=0x00000000002D2E90 string=0x00000000002D2E94 ")"
 *   insn=0x00000000002D2E94 string=0x00000000002D2E98 ""
 *   insn=0x00000000002D2E9C string=0x00000000002D2EA0 "h"
 *   insn=0x00000000002D2EA4 string=0x00000000002D2F08 "h&G)\n"
 *   insn=0x00000000002D2EAC string=0x00000000002D2EB0 "h"
 *   insn=0x00000000002D2EB4 string=0x00000000002D2EB8 "c"
 *   insn=0x00000000002D2EC0 string=0x00000000002D2EC4 "c"
 *   insn=0x00000000002D2EC4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D2ECC string=0x00000000002D2ED0 "?!"
 *   insn=0x00000000002D2EE0 string=0x00000000002D2EE4 "`"
 *   insn=0x00000000002D2EE8 string=0x00000000002D2EEC "y"
 *   insn=0x00000000002D2EEC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D2EFC string=0x00000000002D2F00 "T"
 *   insn=0x00000000002D2F08 string=0x00000000002D2F0C "\n"
 *   insn=0x00000000002D2F10 string=0x00000000002D2F14 "j:"
 *   insn=0x00000000002D2F14 string=0x00000000002D2F18 "\n"
 *   insn=0x00000000002D2F30 string=0x00000000002D2F34 "C"
 *   insn=0x00000000002D2F38 string=0x00000000002D2F3C "h"
 *   insn=0x00000000002D2F4C string=0x00000000002D2F50 "h:@"
 *   insn=0x00000000002D2F50 string=0x00000000002D2F54 ""
 *   insn=0x00000000002D2F54 string=0x00000000002D2F58 "K"
 *   insn=0x00000000002D2F58 string=0x00000000002D2F5C "h:"
 *   insn=0x00000000002D2F58 string=0x00000000002D2F60 "h"
 *   insn=0x00000000002D2F68 string=0x00000000002D2F6C "h.@"
 *   insn=0x00000000002D2F70 string=0x00000000002D2F74 "v"
 *   insn=0x00000000002D2F98 string=0x00000000002D2FF8 "h"
 *   insn=0x00000000002D2FA4 string=0x00000000002D2FB8 ""
 *   insn=0x00000000002D2FAC string=0x00000000002D2FB0 "\"
 *   insn=0x00000000002D2FB0 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D2FD4 string=0x00000000002D2FD8 ""
 *   insn=0x00000000002D3000 string=0x00000000002D3004 "\t"
 *   insn=0x00000000002D3008 string=0x00000000002D300C ")"
 *   insn=0x00000000002D300C string=0x00000000002D3010 ""
 *   insn=0x00000000002D3014 string=0x00000000002D3018 "h"
 *   insn=0x00000000002D301C string=0x00000000002D3030 "h&G)\n"
 *   insn=0x00000000002D3024 string=0x00000000002D3028 "\n"
 *   insn=0x00000000002D3028 string=0x00000000002D302C "`"
 *   insn=0x00000000002D3030 string=0x00000000002D3034 "\n"
 *   insn=0x00000000002D3038 string=0x00000000002D303C "j:"
 *   insn=0x00000000002D3048 string=0x00000000002D304C "M"
 *   insn=0x00000000002D305C string=0x00000000001F8BB0 "0'"
 *   insn=0x00000000002D3060 string=0x00000000002D3064 "h"
 *   insn=0x00000000002D3070 string=0x00000000002D3074 "g"
 *   insn=0x00000000002D3074 string=0x00000000002D3078 "h:@"
 *   insn=0x00000000002D3078 string=0x00000000002D307C ""
 *   insn=0x00000000002D307C string=0x00000000002D3080 "K"
 *   insn=0x00000000002D3080 string=0x00000000002D3084 "h:"
 *   insn=0x00000000002D3080 string=0x00000000002D3088 "h"
 *   insn=0x00000000002D3090 string=0x00000000002D3094 "\n"
 *   insn=0x00000000002D3094 string=0x00000000002D3098 "_i"
 *   insn=0x00000000002D309C string=0x00000000002D30AC "\n"
 *   insn=0x00000000002D30A0 string=0x00000000002D30A4 "h"
 *   insn=0x00000000002D30AC string=0x00000000002D30B0 "_"
 *   insn=0x00000000002D30B4 string=0x00000000002D30B8 ""
 *   insn=0x00000000002D30B8 string=0x00000000002D30BC "h"
 *   insn=0x00000000002D30D0 string=0x00000000002D30D4 " "
 *   insn=0x00000000002D30D8 string=0x00000000002D30DC "?"
 *   insn=0x00000000002D30DC string=0x00000000002D30E0 ")"
 *   insn=0x00000000002D30E0 string=0x00000000002D30E4 "T"
 *   insn=0x00000000002D30F0 string=0x00000000002D30F4 "\t"
 *   insn=0x00000000002D30F4 string=0x00000000002D30F8 "I"
 *   insn=0x00000000002D30F8 string=0x00000000002D30FC "!"
 *   insn=0x00000000002D30FC string=0x00000000002D3100 ""
 *   insn=0x00000000002D3100 string=0x00000000002D3104 "a""
 *   insn=0x00000000002D3104 string=0x00000000002D3108 "h"
 *   insn=0x00000000002D3108 string=0x00000000002D310C "A"
 *   insn=0x00000000002D3114 string=0x00000000002D311C ""
 *   insn=0x00000000002D3128 string=0x00000000002D315C "]"
 *   insn=0x00000000002D3150 string=0x00000000002D3154 "`"
 *   insn=0x00000000002D315C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::MergePartialFromCodedStream(
        Caver::Proto::Texture *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  unsigned int TagFallback; // w0
  unsigned __int64 v7; // x1
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  unsigned __int64 v12; // x9
  char *v13; // x8
  unsigned int v14; // w9
  int v15; // w8
  _BYTE *v16; // x8
  char *v17; // x8
  unsigned int v18; // w9
  int v19; // w8
  _BYTE *v20; // x8
  Caver::Proto::Texture_ConversionInfo *v21; // x22
  char *v22; // x8
  int v23; // w8
  int v24; // w9
  int v25; // w23
  int v26; // w8
  bool v27; // vf
  int v28; // w8
  int v29; // w8
  int v30; // w23
  __int64 v31; // x8
  __int64 v32; // x22
  __int64 v33; // x8
  char *v34; // x8
  int v35; // w8
  int v36; // w9
  int v37; // w23
  int v38; // w8
  int v39; // w8
  unsigned __int64 v40; // x9
  char *v41; // x8
  __int64 result; // x0
  unsigned int v43; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v44; // [xsp+8h] [xbp-58h]

  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (Caver::Proto::Texture *)((char *)this + 32);
LABEL_74:
  while ( 2 )
  {
    v41 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v41 >= *((_QWORD *)a2 + 2) || *v41 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v7 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v7 = (unsigned __int8)*v41;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v41 + 1;
      if ( !(_DWORD)v7 )
        return 1;
    }
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_40;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 26) |= 1u;
        if ( v9 == &Caver::Proto::Texture::_default_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v11 >= v12 || *v11 != 16 )
          continue;
        v13 = v11 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_36;
        goto LABEL_11;
      case 2u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_40;
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) )
          goto LABEL_36;
LABEL_11:
        if ( (*v13 & 0x80000000) == 0 )
        {
          v14 = (unsigned __int8)*v13;
          v43 = v14;
          *((_QWORD *)a2 + 1) = v13 + 1;
          if ( v14 > 8 )
            goto LABEL_14;
LABEL_13:
          v15 = *((_DWORD *)this + 26);
          *((_DWORD *)this + 6) = v14;
          *((_DWORD *)this + 26) = v15 | 2;
          goto LABEL_14;
        }
LABEL_36:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
          return 0;
        v14 = v43;
        if ( v43 <= 8 )
          goto LABEL_13;
LABEL_14:
        v16 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 != 26 )
          continue;
        do
        {
          *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_52:
          v30 = *((_DWORD *)this + 10);
          v29 = *((_DWORD *)this + 11);
          if ( v30 >= v29 )
          {
            if ( v29 == *((_DWORD *)this + 12) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v29 + 1);
              v30 = *((_DWORD *)this + 10);
              v29 = *((_DWORD *)this + 11);
            }
            *((_DWORD *)this + 11) = v29 + 1;
            v32 = operator new(0x28u);
            *(_QWORD *)v32 = off_6C5D50;
            *(_DWORD *)(v32 + 8) = 0;
            *(_QWORD *)(v32 + 16) = &Caver::Proto::Texture_Subtexture::_default_name_;
            *(_QWORD *)(v32 + 24) = 0;
            *(_QWORD *)(v32 + 32) = 1065353216;
            v33 = *((_QWORD *)this + 4);
            *((_DWORD *)this + 10) = v30 + 1;
            *(_QWORD *)(v33 + 8LL * v30) = v32;
          }
          else
          {
            v31 = *((_QWORD *)this + 4);
            *((_DWORD *)this + 10) = v30 + 1;
            v32 = *(_QWORD *)(v31 + 8LL * v30);
          }
          v34 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v34 >= *((_QWORD *)a2 + 2) || *v34 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
              return 0;
          }
          else
          {
            v43 = (unsigned __int8)*v34;
            *((_QWORD *)a2 + 1) = v34 + 1;
          }
          v35 = *((_DWORD *)a2 + 14);
          v36 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v35 + 1;
          if ( v35 >= v36 )
            return 0;
          v37 = google::protobuf::io::CodedInputStream::PushLimit(a2, v43);
          if ( (Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(
                  (Caver::Proto::Texture_Subtexture *)v32,
                  a2)
              & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v37);
          v38 = *((_DWORD *)a2 + 14);
          v27 = __OFSUB__(v38, 1);
          v39 = v38 - 1;
          if ( v39 < 0 == v27 )
            *((_DWORD *)a2 + 14) = v39;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v40 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v16 >= v40 )
            goto LABEL_74;
        }
        while ( *v16 == 26 );
        if ( *v16 != 32 )
          continue;
        v17 = v16 + 1;
        *((_QWORD *)a2 + 1) = v17;
        if ( (unsigned __int64)v17 >= v40 )
          goto LABEL_71;
LABEL_23:
        if ( (*v17 & 0x80000000) == 0 )
        {
          v18 = (unsigned __int8)*v17;
          v43 = v18;
          *((_QWORD *)a2 + 1) = v17 + 1;
          if ( v18 > 3 )
            goto LABEL_26;
LABEL_25:
          v19 = *((_DWORD *)this + 26);
          *((_DWORD *)this + 22) = v18;
          *((_DWORD *)this + 26) = v19 | 8;
          goto LABEL_26;
        }
LABEL_71:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
          return 0;
        v18 = v43;
        if ( v43 <= 3 )
          goto LABEL_25;
LABEL_26:
        v20 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v20 + 1;
LABEL_29:
        v21 = (Caver::Proto::Texture_ConversionInfo *)*((_QWORD *)this + 12);
        *((_DWORD *)this + 26) |= 0x10u;
        if ( !v21 )
        {
          v21 = (Caver::Proto::Texture_ConversionInfo *)operator new(0x20u);
          *((_QWORD *)v21 + 2) = 0;
          *((_QWORD *)v21 + 3) = 0;
          *(_QWORD *)v21 = off_6C5DC8;
          *((_QWORD *)v21 + 1) = 0;
          *((_QWORD *)this + 12) = v21;
        }
        v22 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v22 >= *((_QWORD *)a2 + 2) || *v22 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
            return 0;
        }
        else
        {
          v43 = (unsigned __int8)*v22;
          *((_QWORD *)a2 + 1) = v22 + 1;
        }
        v23 = *((_DWORD *)a2 + 14);
        v24 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v23 + 1;
        if ( v23 < v24 )
        {
          v25 = google::protobuf::io::CodedInputStream::PushLimit(a2, v43);
          if ( (Caver::Proto::Texture_ConversionInfo::MergePartialFromCodedStream(v21, a2) & 1) != 0 )
          {
            if ( *((_BYTE *)a2 + 36) )
            {
              google::protobuf::io::CodedInputStream::PopLimit(a2, v25);
              v26 = *((_DWORD *)a2 + 14);
              v27 = __OFSUB__(v26, 1);
              v28 = v26 - 1;
              if ( v28 < 0 == v27 )
                *((_DWORD *)a2 + 14) = v28;
              if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
              {
                result = 1;
                *((_DWORD *)a2 + 8) = 0;
                *((_BYTE *)a2 + 36) = 1;
                return result;
              }
              continue;
            }
          }
        }
        return 0;
      case 3u:
        v8 = v7 & 7;
        if ( v8 == 2 )
          goto LABEL_52;
        goto LABEL_40;
      case 4u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_40;
        v17 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 < *((_QWORD *)a2 + 2) )
          goto LABEL_23;
        goto LABEL_71;
      case 5u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_40;
        goto LABEL_29;
      default:
        v8 = v7 & 7;
LABEL_40:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v7,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

