/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D4A18
 * Mangled: _ZN5Caver5Proto4Font27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Font::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201AA0  Caver::Proto::Font_Glyph::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202140  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 157
 *   insn=0x00000000002D4A34 string=0x00000000002D4A38 "X"
 *   insn=0x00000000002D4A4C string=0x00000000002D4A50 "mD"
 *   insn=0x00000000002D4A50 string=0x00000000002D4A54 "\t"
 *   insn=0x00000000002D4A54 string=0x00000000002D4A58 "J"
 *   insn=0x00000000002D4A58 string=0x00000000002D4A5C "k"
 *   insn=0x00000000002D4A64 string=0x000000000058A384 "<"
 *   insn=0x00000000002D4A6C string=0x00000000002D4A70 "9"
 *   insn=0x00000000002D4A7C string=0x00000000002D4A80 "[A"
 *   insn=0x00000000002D4A80 string=0x00000000002D4A84 "zA"
 *   insn=0x00000000002D4A88 string=0x00000000002D4A8C "B"
 *   insn=0x00000000002D4A8C string=0x00000000002D4F94 "h"
 *   insn=0x00000000002D4A94 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D4A98 string=0x00000000002D4A9C "a""
 *   insn=0x00000000002D4AA0 string=0x00000000002D4AA4 "(|"
 *   insn=0x00000000002D4AA4 string=0x00000000002D4AA8 ""
 *   insn=0x00000000002D4AB0 string=0x00000000002D4AB4 "({"
 *   insn=0x00000000002D4AB0 string=0x00000000002D4C2C "("
 *   insn=0x00000000002D4AB4 string=0x00000000002D4AB8 ""
 *   insn=0x00000000002D4ABC string=0x00000000002D4AC0 "("
 *   insn=0x00000000002D4ABC string=0x00000000002D4B34 "("
 *   insn=0x00000000002D4ABC string=0x00000000002D4B64 "("
 *   insn=0x00000000002D4ABC string=0x00000000002D4B74 "("
 *   insn=0x00000000002D4ABC string=0x00000000002D4B84 "("
 *   insn=0x00000000002D4ABC string=0x00000000002D4C18 "("
 *   insn=0x00000000002D4AC4 string=0x00000000002D4AC8 "A"
 *   insn=0x00000000002D4AD4 string=0x00000000002D4AD8 ")AA"
 *   insn=0x00000000002D4AD8 string=0x00000000002D4ADC ""
 *   insn=0x00000000002D4AE0 string=0x00000000002D4AE4 "?"
 *   insn=0x00000000002D4AF0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D4AF8 string=0x00000000002D4AFC "("
 *   insn=0x00000000002D4B04 string=0x00000000002D4B08 "2"
 *   insn=0x00000000002D4B08 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D4B0C string=0x00000000002D4B10 "h"
 *   insn=0x00000000002D4B18 string=0x00000000002D4B1C "\t"
 *   insn=0x00000000002D4B1C string=0x00000000002D4B20 "?I"
 *   insn=0x00000000002D4B24 string=0x00000000002D4B28 ""
 *   insn=0x00000000002D4B28 string=0x00000000002D4B2C "h"
 *   insn=0x00000000002D4B38 string=0x00000000002D4B3C "i"
 *   insn=0x00000000002D4B3C string=0x00000000002D4B40 "?"
 *   insn=0x00000000002D4B40 string=0x00000000002D4B44 "B"
 *   insn=0x00000000002D4B44 string=0x00000000002D4B48 "*"
 *   insn=0x00000000002D4B48 string=0x00000000002D4B4C "\n"
 *   insn=0x00000000002D4B4C string=0x00000000002D4B50 "J"
 *   insn=0x00000000002D4B50 string=0x00000000002D4B54 ")"
 *   insn=0x00000000002D4B58 string=0x00000000002D4B5C "i"
 *   insn=0x00000000002D4B5C string=0x00000000002D4B60 "a"
 *   insn=0x00000000002D4B68 string=0x00000000002D4B6C "!"
 *   insn=0x00000000002D4B88 string=0x00000000002D4B8C "!"
 *   insn=0x00000000002D4B94 string=0x00000000002D4B98 ""
 *   insn=0x00000000002D4BA0 string=0x00000000002D4BF0 "h"
 *   insn=0x00000000002D4BC4 string=0x00000000002D4BC8 ")"
 *   insn=0x00000000002D4BF8 string=0x00000000002D4BFC "\t"
 *   insn=0x00000000002D4BFC string=0x00000000002D4C00 "I"
 *   insn=0x00000000002D4C00 string=0x00000000002D4C04 ")"
 *   insn=0x00000000002D4C04 string=0x00000000002D4C08 ""
 *   insn=0x00000000002D4C0C string=0x00000000002D4C10 "h"
 *   insn=0x00000000002D4C14 string=0x00000000002D4C58 "h&G)\n"
 *   insn=0x00000000002D4C24 string=0x00000000002D4C28 ":"
 *   insn=0x00000000002D4C30 string=0x00000000002D4C34 "@"
 *   insn=0x00000000002D4C38 string=0x00000000002D4C3C "%"
 *   insn=0x00000000002D4C3C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D4C50 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D4C58 string=0x00000000002D4C5C "\n"
 *   insn=0x00000000002D4C60 string=0x00000000002D4C64 "j:"
 *   insn=0x00000000002D4C70 string=0x00000000002D4C74 "C"
 *   insn=0x00000000002D4C80 string=0x00000000002D4C84 "/"
 *   insn=0x00000000002D4C88 string=0x00000000002D4C8C "h"
 *   insn=0x00000000002D4C98 string=0x00000000002D4C9C "]"
 *   insn=0x00000000002D4C9C string=0x00000000002D4CA0 "h:@"
 *   insn=0x00000000002D4CA0 string=0x00000000002D4CA4 ""
 *   insn=0x00000000002D4CA4 string=0x00000000002D4CA8 "K"
 *   insn=0x00000000002D4CA8 string=0x00000000002D4CAC "h:"
 *   insn=0x00000000002D4CA8 string=0x00000000002D4CB0 "h"
 *   insn=0x00000000002D4CB8 string=0x00000000002D4CBC "\t"
 *   insn=0x00000000002D4CBC string=0x00000000002D4CC0 "?i"
 *   insn=0x00000000002D4CC4 string=0x00000000002D4CC8 "F"
 *   insn=0x00000000002D4CC8 string=0x00000000002D4DE0 ""
 *   insn=0x00000000002D4CD4 string=0x00000000002D4CD8 "`"
 *   insn=0x00000000002D4CDC string=0x00000000002D4CE0 "i"
 *   insn=0x00000000002D4CE8 string=0x00000000002D4CEC "?"
 *   insn=0x00000000002D4CEC string=0x00000000002D4CF0 "j"
 *   insn=0x00000000002D4CF8 string=0x00000000002D4CFC "("
 *   insn=0x00000000002D4D04 string=0x00000000002D4D08 "("
 *   insn=0x00000000002D4D08 string=0x00000000002D4D0C "h"
 *   insn=0x00000000002D4D10 string=0x00000000002D4D14 "H"
 *   insn=0x00000000002D4D1C string=0x00000000002D4D38 "h"
 *   insn=0x00000000002D4D20 string=0x00000000002D4D24 "/"
 *   insn=0x00000000002D4D40 string=0x00000000002D4D44 "\t"
 *   insn=0x00000000002D4D48 string=0x00000000002D4D4C ")"
 *   insn=0x00000000002D4D4C string=0x00000000002D4D50 ""
 *   insn=0x00000000002D4D54 string=0x00000000002D4D58 "h"
 *   insn=0x00000000002D4D5C string=0x00000000002D4D70 "h&G)\n"
 *   insn=0x00000000002D4D70 string=0x00000000002D4D74 "\n"
 *   insn=0x00000000002D4D78 string=0x00000000002D4D7C "j:"
 *   insn=0x00000000002D4D7C string=0x00000000002D4D80 "*"
 *   insn=0x00000000002D4D9C string=0x00000000002D4DA0 " "
 *   insn=0x00000000002D4D9C string=0x00000000001F9860 "0'"
 *   insn=0x00000000002D4DA0 string=0x00000000002D4DA4 "h"
 *   insn=0x00000000002D4DB4 string=0x00000000002D4DB8 "h:@"
 *   insn=0x00000000002D4DB8 string=0x00000000002D4DBC ""
 *   insn=0x00000000002D4DBC string=0x00000000002D4DC0 "K"
 *   insn=0x00000000002D4DC0 string=0x00000000002D4DC4 "h:"
 *   insn=0x00000000002D4DC0 string=0x00000000002D4DC8 "h"
 *   insn=0x00000000002D4DCC string=0x00000000002D4DD0 "!"
 *   insn=0x00000000002D4DD0 string=0x00000000002D4DD4 "h.@"
 *   insn=0x00000000002D4DE0 string=0x00000000002D4DE4 "h"
 *   insn=0x00000000002D4E08 string=0x00000000002D4E60 "h"
 *   insn=0x00000000002D4E14 string=0x00000000002D4E28 ""
 *   insn=0x00000000002D4E20 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002D4E68 string=0x00000000002D4E6C "\t"
 *   insn=0x00000000002D4E70 string=0x00000000002D4E74 ")"
 *   insn=0x00000000002D4E74 string=0x00000000002D4E78 ""
 *   insn=0x00000000002D4E7C string=0x00000000002D4E80 "h"
 *   insn=0x00000000002D4E84 string=0x00000000002D4E98 "h&G)\n"
 *   insn=0x00000000002D4E8C string=0x00000000002D4E90 "p"
 *   insn=0x00000000002D4E98 string=0x00000000002D4E9C "\n"
 *   insn=0x00000000002D4EA0 string=0x00000000002D4EA4 "j:"
 *   insn=0x00000000002D4EC8 string=0x00000000002D4ECC "h"
 *   insn=0x00000000002D4EDC string=0x00000000002D4EE0 "h:@"
 *   insn=0x00000000002D4EE0 string=0x00000000002D4EE4 ""
 *   insn=0x00000000002D4EE4 string=0x00000000002D4EE8 "K"
 *   insn=0x00000000002D4EE8 string=0x00000000002D4EEC "h:"
 *   insn=0x00000000002D4EE8 string=0x00000000002D4EF0 "h"
 *   insn=0x00000000002D4EF8 string=0x00000000002D4EFC "\t"
 *   insn=0x00000000002D4EFC string=0x00000000002D4F00 "?i"
 *   insn=0x00000000002D4F04 string=0x00000000002D4F08 "\t"
 *   insn=0x00000000002D4F08 string=0x00000000002D4F0C "?"
 *   insn=0x00000000002D4F0C string=0x00000000002D4F10 "!"
 *   insn=0x00000000002D4F10 string=0x00000000002D4F14 ""
 *   insn=0x00000000002D4F14 string=0x00000000002D4F18 "h"
 *   insn=0x00000000002D4F24 string=0x00000000002D4F28 ")"
 *   insn=0x00000000002D4F28 string=0x00000000002D4F2C ""
 *   insn=0x00000000002D4F30 string=0x00000000002D4F34 "?"
 *   insn=0x00000000002D4F34 string=0x00000000002D4F38 "!"
 *   insn=0x00000000002D4F44 string=0x00000000002D4F48 ""
 *   insn=0x00000000002D4F4C string=0x00000000002D4F50 "a"
 *   insn=0x00000000002D4F50 string=0x00000000002D4F54 "("
 *   insn=0x00000000002D4F60 string=0x00000000001FC6E0 "0'"
 *   insn=0x00000000002D4F64 string=0x00000000002D4F68 "i"
 *   insn=0x00000000002D4F68 string=0x00000000002D4F6C "?"
 *   insn=0x00000000002D4F6C string=0x00000000002D4F70 """
 *   insn=0x00000000002D4F70 string=0x00000000002D4F74 "*"
 *   insn=0x00000000002D4F74 string=0x00000000002D4F78 "_"
 *   insn=0x00000000002D4F7C string=0x00000000002D4F80 ")"
 *   insn=0x00000000002D4F80 string=0x00000000002D4F84 "i"
 *   insn=0x00000000002D4F84 string=0x00000000002D4F88 "?"
 *   insn=0x00000000002D4F8C string=0x00000000002D4F90 "O"
 *   insn=0x00000000002D4F9C string=0x00000000002D4FA0 "\t"
 *   insn=0x00000000002D4FA0 string=0x00000000002D4FA4 "i"
 *   insn=0x00000000002D4FA4 string=0x00000000002D4FA8 "!"
 *   insn=0x00000000002D4FA8 string=0x00000000002D4FAC ""
 *   insn=0x00000000002D4FAC string=0x00000000002D4FB0 "a""
 *   insn=0x00000000002D4FB0 string=0x00000000002D4FB4 "h"
 *   insn=0x00000000002D4FB4 string=0x00000000002D4FB8 "a"
 *   insn=0x00000000002D4FC0 string=0x00000000002D4FC8 ""
 *   insn=0x00000000002D4FFC string=0x00000000002D5000 "`"
 *   insn=0x00000000002D5008 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::MergePartialFromCodedStream(
        Caver::Proto::Font *this,
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
  unsigned __int64 v12; // x8
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  __int64 v16; // x22
  char *v17; // x8
  int v18; // w10
  int v19; // w8
  int v20; // w9
  int v21; // w23
  int v22; // w8
  bool v23; // vf
  int v24; // w8
  _BYTE *v25; // x8
  int v26; // w11
  Caver::Proto::Rectangle *v27; // x22
  char *v28; // x8
  int v29; // w8
  int v30; // w9
  int v31; // w23
  int v32; // w8
  int v33; // w8
  int v34; // w8
  int v35; // w23
  __int64 v36; // x8
  __int64 v37; // x22
  __int64 v38; // x8
  char *v39; // x8
  int v40; // w8
  int v41; // w9
  int v42; // w23
  int v43; // w8
  int v44; // w8
  __int64 *v45; // x1
  _QWORD *v46; // x0
  _BYTE *v47; // x9
  char *v48; // x8
  __int64 result; // x0
  unsigned int v50; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v51; // [xsp+18h] [xbp-58h]

  v5 = (Caver::Proto::Font *)((char *)this + 32);
  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_85:
  while ( 2 )
  {
    v48 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v48 >= *((_QWORD *)a2 + 2) || *v48 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v7 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v7 = (unsigned __int8)*v48;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v48 + 1;
      if ( !(_DWORD)v7 )
        return 1;
    }
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_28;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 28) |= 1u;
        if ( v9 == &Caver::Proto::Font::_default_name_ )
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
        goto LABEL_20;
      case 2u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_28;
LABEL_20:
        v16 = *((_QWORD *)this + 3);
        *((_DWORD *)this + 28) |= 2u;
        if ( !v16 )
        {
          v16 = operator new(0x70u);
          *(_QWORD *)v16 = off_6C5E40;
          *(_QWORD *)(v16 + 40) = 0;
          *(_DWORD *)(v16 + 48) = 4;
          *(_DWORD *)(v16 + 8) = 0;
          *(_DWORD *)(v16 + 88) = 0;
          *(_QWORD *)(v16 + 96) = 0;
          *(_QWORD *)(v16 + 16) = &Caver::Proto::Texture::_default_name_;
          *(_DWORD *)(v16 + 24) = 1;
          *(_DWORD *)(v16 + 104) = 0;
          *(_QWORD *)(v16 + 32) = v16 + 56;
          *((_QWORD *)this + 3) = v16;
        }
        v17 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
        }
        else
        {
          v50 = (unsigned __int8)*v17;
          *((_QWORD *)a2 + 1) = v17 + 1;
        }
        v19 = *((_DWORD *)a2 + 14);
        v20 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v19 + 1;
        if ( v19 >= v20 )
          return 0;
        v21 = google::protobuf::io::CodedInputStream::PushLimit(a2, v50);
        if ( (Caver::Proto::Texture::MergePartialFromCodedStream((Caver::Proto::Texture *)v16, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v21);
        v22 = *((_DWORD *)a2 + 14);
        v23 = __OFSUB__(v22, 1);
        v24 = v22 - 1;
        if ( v24 < 0 == v23 )
          *((_DWORD *)a2 + 14) = v24;
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 != 26 )
          continue;
        do
        {
          *((_QWORD *)a2 + 1) = v25 + 1;
LABEL_60:
          v35 = *((_DWORD *)this + 10);
          v34 = *((_DWORD *)this + 11);
          if ( v35 >= v34 )
          {
            if ( v34 == *((_DWORD *)this + 12) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v34 + 1);
              v35 = *((_DWORD *)this + 10);
              v34 = *((_DWORD *)this + 11);
            }
            *((_DWORD *)this + 11) = v34 + 1;
            v37 = operator new(0x30u);
            *(_QWORD *)(v37 + 32) = 0;
            *(_DWORD *)(v37 + 40) = 0;
            *(_DWORD *)(v37 + 24) = 0;
            *(_QWORD *)(v37 + 8) = 0;
            *(_QWORD *)(v37 + 16) = 0;
            *(_QWORD *)v37 = off_6C5EB8;
            v38 = *((_QWORD *)this + 4);
            *((_DWORD *)this + 10) = v35 + 1;
            *(_QWORD *)(v38 + 8LL * v35) = v37;
          }
          else
          {
            v36 = *((_QWORD *)this + 4);
            *((_DWORD *)this + 10) = v35 + 1;
            v37 = *(_QWORD *)(v36 + 8LL * v35);
          }
          v39 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v39 >= *((_QWORD *)a2 + 2) || *v39 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
              return 0;
          }
          else
          {
            v50 = (unsigned __int8)*v39;
            *((_QWORD *)a2 + 1) = v39 + 1;
          }
          v40 = *((_DWORD *)a2 + 14);
          v41 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v40 + 1;
          if ( v40 >= v41 )
            return 0;
          v42 = google::protobuf::io::CodedInputStream::PushLimit(a2, v50);
          if ( (Caver::Proto::Font_Glyph::MergePartialFromCodedStream((Caver::Proto::Font_Glyph *)v37, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v42);
          v43 = *((_DWORD *)a2 + 14);
          v23 = __OFSUB__(v43, 1);
          v44 = v43 - 1;
          if ( v44 < 0 == v23 )
            *((_DWORD *)a2 + 14) = v44;
          v25 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) )
            goto LABEL_85;
        }
        while ( *v25 == 26 );
        if ( *v25 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v25 + 1;
LABEL_78:
        v45 = (__int64 *)*((_QWORD *)this + 11);
        *((_DWORD *)this + 28) |= 8u;
        if ( v45 == &Caver::Proto::Font::_default_kerning_ )
        {
          v46 = (_QWORD *)operator new(8u);
          *v46 = &byte_6FD2F8;
          *((_QWORD *)this + 11) = v46;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
          return 0;
        v47 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v47 >= v12 || *v47 != 40 )
          continue;
        v13 = v47 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_40;
LABEL_13:
        if ( *v13 < 0 )
        {
LABEL_40:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
          v14 = v50;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v50 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v26 = *((_DWORD *)this + 28);
        *((_DWORD *)this + 24) = v14;
        v18 = v26 | 0x10;
        *((_DWORD *)this + 28) = v26 | 0x10;
        if ( (unsigned __int64)v15 >= v12 || *v15 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_45:
        v27 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 13);
        *((_DWORD *)this + 28) = v18 | 0x20;
        if ( !v27 )
        {
          v27 = (Caver::Proto::Rectangle *)operator new(0x20u);
          *((_QWORD *)v27 + 2) = 0;
          *((_QWORD *)v27 + 3) = 0;
          *(_QWORD *)v27 = off_6C5AF8;
          *((_QWORD *)v27 + 1) = 0;
          *((_QWORD *)this + 13) = v27;
        }
        v28 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v50) & 1) == 0 )
            return 0;
        }
        else
        {
          v50 = (unsigned __int8)*v28;
          *((_QWORD *)a2 + 1) = v28 + 1;
        }
        v29 = *((_DWORD *)a2 + 14);
        v30 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v29 + 1;
        if ( v29 < v30 )
        {
          v31 = google::protobuf::io::CodedInputStream::PushLimit(a2, v50);
          if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v27, a2) & 1) != 0 )
          {
            if ( *((_BYTE *)a2 + 36) )
            {
              google::protobuf::io::CodedInputStream::PopLimit(a2, v31);
              v32 = *((_DWORD *)a2 + 14);
              v23 = __OFSUB__(v32, 1);
              v33 = v32 - 1;
              if ( v33 < 0 == v23 )
                *((_DWORD *)a2 + 14) = v33;
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
          goto LABEL_60;
        goto LABEL_28;
      case 4u:
        v8 = v7 & 7;
        if ( v8 == 2 )
          goto LABEL_78;
        goto LABEL_28;
      case 5u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_28;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_13;
        goto LABEL_40;
      case 6u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_28;
        v18 = *((_DWORD *)this + 28);
        goto LABEL_45;
      default:
        v8 = v7 & 7;
LABEL_28:
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

