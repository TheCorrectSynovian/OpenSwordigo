/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338814
 * Mangled: _ZN5Caver5Proto12MeshMaterial27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F6400  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 15
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002009C0  Caver::Proto::Texture::Texture(void)
 *   0x0000000000202140  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000338D0C  Caver::Proto::MeshMaterial::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 136
 *   insn=0x0000000000338828 string=0x000000000033882C "W"
 *   insn=0x0000000000338844 string=0x0000000000338848 "h"
 *   insn=0x000000000033884C string=0x0000000000338850 """
 *   insn=0x0000000000338850 string=0x0000000000338854 "\t"
 *   insn=0x0000000000338858 string=0x000000000033885C "!"
 *   insn=0x000000000033885C string=0x0000000000338860 ""
 *   insn=0x0000000000338860 string=0x0000000000338864 "a""
 *   insn=0x0000000000338864 string=0x0000000000338868 "h"
 *   insn=0x000000000033886C string=0x0000000000338888 "(|"
 *   insn=0x0000000000338874 string=0x0000000000338878 "r"
 *   insn=0x0000000000338878 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033887C string=0x0000000000338880 "a""
 *   insn=0x0000000000338888 string=0x000000000033888C ""
 *   insn=0x0000000000338894 string=0x0000000000338898 "{"
 *   insn=0x0000000000338894 string=0x0000000000338944 "("
 *   insn=0x0000000000338898 string=0x000000000033889C ""
 *   insn=0x00000000003388A0 string=0x00000000003388A4 "("
 *   insn=0x00000000003388A0 string=0x0000000000338900 "("
 *   insn=0x00000000003388A0 string=0x0000000000338914 "("
 *   insn=0x00000000003388A0 string=0x0000000000338924 "("
 *   insn=0x00000000003388A0 string=0x0000000000338934 "("
 *   insn=0x00000000003388B4 string=0x00000000003388B8 ""
 *   insn=0x00000000003388C0 string=0x00000000003388D8 "h"
 *   insn=0x00000000003388C4 string=0x00000000003388C8 "F"
 *   insn=0x00000000003388C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003388D0 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000003388E0 string=0x00000000003388E4 "\t"
 *   insn=0x00000000003388E8 string=0x00000000003388EC ")"
 *   insn=0x00000000003388EC string=0x00000000003388F0 ""
 *   insn=0x00000000003388F4 string=0x00000000003388F8 "h"
 *   insn=0x00000000003388FC string=0x0000000000338970 "h&G)\n"
 *   insn=0x0000000000338918 string=0x000000000033891C "a"
 *   insn=0x000000000033891C string=0x0000000000338920 "h"
 *   insn=0x0000000000338938 string=0x000000000033893C "a"
 *   insn=0x000000000033893C string=0x0000000000338940 "*"
 *   insn=0x0000000000338954 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000338968 string=0x000000000033896C "@"
 *   insn=0x0000000000338968 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000338970 string=0x0000000000338974 "\n"
 *   insn=0x0000000000338978 string=0x000000000033897C "j:"
 *   insn=0x00000000003389A0 string=0x00000000003389A4 "h"
 *   insn=0x00000000003389A4 string=0x00000000003389A8 "h"
 *   insn=0x00000000003389B4 string=0x00000000003389B8 "h:@"
 *   insn=0x00000000003389B8 string=0x00000000003389BC ""
 *   insn=0x00000000003389BC string=0x00000000003389C0 "K"
 *   insn=0x00000000003389C0 string=0x00000000003389C4 "h:"
 *   insn=0x00000000003389C0 string=0x00000000003389C8 "h"
 *   insn=0x00000000003389D0 string=0x00000000003389D4 "\t"
 *   insn=0x00000000003389D4 string=0x00000000003389D8 "?I"
 *   insn=0x00000000003389D8 string=0x00000000003389DC "a"
 *   insn=0x00000000003389DC string=0x00000000003389E0 ""
 *   insn=0x00000000003389E0 string=0x00000000003389E4 "h"
 *   insn=0x00000000003389EC string=0x00000000003389F0 ""
 *   insn=0x00000000003389F8 string=0x0000000000338A10 "h"
 *   insn=0x0000000000338A04 string=0x0000000000338A08 "F"
 *   insn=0x0000000000338A18 string=0x0000000000338A1C "\t"
 *   insn=0x0000000000338A20 string=0x0000000000338A24 ")"
 *   insn=0x0000000000338A24 string=0x0000000000338A28 ""
 *   insn=0x0000000000338A2C string=0x0000000000338A30 "h"
 *   insn=0x0000000000338A34 string=0x0000000000338A48 "h&G)\n"
 *   insn=0x0000000000338A48 string=0x0000000000338A4C "\n"
 *   insn=0x0000000000338A50 string=0x0000000000338A54 "j:"
 *   insn=0x0000000000338A78 string=0x0000000000338A7C "h"
 *   insn=0x0000000000338A8C string=0x0000000000338A90 "h:@"
 *   insn=0x0000000000338A90 string=0x0000000000338A94 ""
 *   insn=0x0000000000338A94 string=0x0000000000338A98 "K"
 *   insn=0x0000000000338A98 string=0x0000000000338A9C "h:"
 *   insn=0x0000000000338A98 string=0x0000000000338AA0 "h"
 *   insn=0x0000000000338AA8 string=0x0000000000338AAC "\t"
 *   insn=0x0000000000338AAC string=0x0000000000338AB0 "?i"
 *   insn=0x0000000000338AB4 string=0x0000000000338AB8 ""
 *   insn=0x0000000000338AB8 string=0x0000000000338ABC "h"
 *   insn=0x0000000000338AC4 string=0x0000000000338AC8 ""
 *   insn=0x0000000000338AD0 string=0x0000000000338AE8 "h"
 *   insn=0x0000000000338AF0 string=0x0000000000338AF4 "\t"
 *   insn=0x0000000000338AF8 string=0x0000000000338AFC ")"
 *   insn=0x0000000000338AFC string=0x0000000000338B00 ""
 *   insn=0x0000000000338B04 string=0x0000000000338B08 "h"
 *   insn=0x0000000000338B0C string=0x0000000000338B20 "h&G)\n"
 *   insn=0x0000000000338B14 string=0x0000000000338B18 "N"
 *   insn=0x0000000000338B20 string=0x0000000000338B24 "\n"
 *   insn=0x0000000000338B28 string=0x0000000000338B2C "j:"
 *   insn=0x0000000000338B2C string=0x0000000000338B30 "*"
 *   insn=0x0000000000338B48 string=0x0000000000338B4C "i'"
 *   insn=0x0000000000338B4C string=0x0000000000338B50 " "
 *   insn=0x0000000000338B50 string=0x0000000000338B54 "h"
 *   insn=0x0000000000338B64 string=0x0000000000338B68 "h:@"
 *   insn=0x0000000000338B68 string=0x0000000000338B6C ""
 *   insn=0x0000000000338B6C string=0x0000000000338B70 "K"
 *   insn=0x0000000000338B70 string=0x0000000000338B74 "h:"
 *   insn=0x0000000000338B70 string=0x0000000000338B78 "h"
 *   insn=0x0000000000338B7C string=0x0000000000338B80 "B"
 *   insn=0x0000000000338B80 string=0x0000000000338B84 "\t"
 *   insn=0x0000000000338B84 string=0x0000000000338B88 "?"
 *   insn=0x0000000000338B8C string=0x0000000000338B90 ""
 *   insn=0x0000000000338B90 string=0x0000000000338B94 "h"
 *   insn=0x0000000000338BA0 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000338BB0 string=0x0000000000338BB4 "("
 *   insn=0x0000000000338BB8 string=0x0000000000338BBC "i"
 *   insn=0x0000000000338BBC string=0x0000000000338BC0 "?"
 *   insn=0x0000000000338BC0 string=0x0000000000338BC4 """
 *   insn=0x0000000000338BC4 string=0x0000000000338BC8 "*"
 *   insn=0x0000000000338BC8 string=0x0000000000338BCC "_"
 *   insn=0x0000000000338BD0 string=0x0000000000338BD4 ")"
 *   insn=0x0000000000338BD4 string=0x0000000000338BD8 "i"
 *   insn=0x0000000000338BDC string=0x0000000000338BE0 ""
 *   insn=0x0000000000338BE8 string=0x0000000000338C00 "h"
 *   insn=0x0000000000338BEC string=0x0000000000338BF0 "|"
 *   insn=0x0000000000338BF4 string=0x0000000000338BF8 "r"
 *   insn=0x0000000000338C08 string=0x0000000000338C0C "\t"
 *   insn=0x0000000000338C10 string=0x0000000000338C14 ")"
 *   insn=0x0000000000338C14 string=0x0000000000338C18 ""
 *   insn=0x0000000000338C1C string=0x0000000000338C20 "h"
 *   insn=0x0000000000338C24 string=0x0000000000338C38 "h&G)\n"
 *   insn=0x0000000000338C2C string=0x0000000000338C30 ""
 *   insn=0x0000000000338C38 string=0x0000000000338C3C "\n"
 *   insn=0x0000000000338C40 string=0x0000000000338C44 "j:"
 *   insn=0x0000000000338C44 string=0x0000000000338C48 "j"
 *   insn=0x0000000000338C50 string=0x0000000000338C54 "K'"
 *   insn=0x0000000000338C60 string=0x0000000000338C64 "7%"
 *   insn=0x0000000000338C64 string=0x0000000000338C68 "`"
 *   insn=0x0000000000338C68 string=0x0000000000338C6C "h"
 *   insn=0x0000000000338C6C string=0x0000000000338C70 "("
 *   insn=0x0000000000338C78 string=0x0000000000338C7C "e("
 *   insn=0x0000000000338C7C string=0x0000000000338C80 "h:@"
 *   insn=0x0000000000338C80 string=0x0000000000338C84 ""
 *   insn=0x0000000000338C84 string=0x0000000000338C88 "K"
 *   insn=0x0000000000338C88 string=0x0000000000338C8C "h:"
 *   insn=0x0000000000338C88 string=0x0000000000338C90 "h"
 *   insn=0x0000000000338C98 string=0x0000000000338C9C "h.@"
 *   insn=0x0000000000338C9C string=0x0000000000338CA0 "H"
 *   insn=0x0000000000338CA8 string=0x0000000000338CAC "`"
 *   insn=0x0000000000338CCC string=0x0000000000338CE8 "z"
 *   insn=0x0000000000338CE8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000338CFC string=0x0000000000338D00 "l"
 *   insn=0x0000000000338D00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::MergePartialFromCodedStream(
        Caver::Proto::MeshMaterial *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  Caver::Proto::FloatColor *v9; // x21
  char *v10; // x8
  int v11; // w8
  int v12; // w8
  int v13; // w9
  int v14; // w22
  int v15; // w8
  bool v16; // vf
  int v17; // w8
  _BYTE *v18; // x8
  Caver::Proto::FloatColor *v19; // x21
  char *v20; // x8
  int v21; // w8
  int v22; // w9
  int v23; // w22
  int v24; // w8
  int v25; // w8
  _BYTE *v26; // x8
  Caver::Proto::FloatColor *v27; // x21
  char *v28; // x8
  int v29; // w8
  int v30; // w9
  int v31; // w22
  int v32; // w8
  int v33; // w8
  _BYTE *v34; // x8
  int v35; // w9
  _BYTE *v36; // x9
  Caver::Proto::Texture *v37; // x21
  char *v38; // x8
  int v39; // w8
  int v40; // w9
  int v41; // w22
  int v42; // w8
  int v43; // w8
  __int64 result; // x0
  unsigned int v45; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v46; // [xsp+8h] [xbp-38h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_23;
        v9 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 14) |= 1u;
        if ( !v9 )
        {
          v9 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v9);
          *((_QWORD *)this + 2) = v9;
        }
        v10 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
        }
        else
        {
          v45 = (unsigned __int8)*v10;
          *((_QWORD *)a2 + 1) = v10 + 1;
        }
        v12 = *((_DWORD *)a2 + 14);
        v13 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v12 + 1;
        if ( v12 >= v13 )
          return 0;
        v14 = google::protobuf::io::CodedInputStream::PushLimit(a2, v45);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v9, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v14);
        v15 = *((_DWORD *)a2 + 14);
        v16 = __OFSUB__(v15, 1);
        v17 = v15 - 1;
        if ( v17 < 0 == v16 )
          *((_DWORD *)a2 + 14) = v17;
        v18 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v18 >= *((_QWORD *)a2 + 2) || *v18 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v18 + 1;
        goto LABEL_35;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_23;
LABEL_35:
        v19 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 14) |= 2u;
        if ( !v19 )
        {
          v19 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v19);
          *((_QWORD *)this + 3) = v19;
        }
        v20 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
        }
        else
        {
          v45 = (unsigned __int8)*v20;
          *((_QWORD *)a2 + 1) = v20 + 1;
        }
        v21 = *((_DWORD *)a2 + 14);
        v22 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v21 + 1;
        if ( v21 >= v22 )
          return 0;
        v23 = google::protobuf::io::CodedInputStream::PushLimit(a2, v45);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v19, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v23);
        v24 = *((_DWORD *)a2 + 14);
        v16 = __OFSUB__(v24, 1);
        v25 = v24 - 1;
        if ( v25 < 0 == v16 )
          *((_DWORD *)a2 + 14) = v25;
        v26 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) || *v26 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v26 + 1;
LABEL_49:
        v27 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 14) |= 4u;
        if ( !v27 )
        {
          v27 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v27);
          *((_QWORD *)this + 4) = v27;
        }
        v28 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
        }
        else
        {
          v45 = (unsigned __int8)*v28;
          *((_QWORD *)a2 + 1) = v28 + 1;
        }
        v29 = *((_DWORD *)a2 + 14);
        v30 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v29 + 1;
        if ( v29 >= v30 )
          return 0;
        v31 = google::protobuf::io::CodedInputStream::PushLimit(a2, v45);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v27, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v31);
        v32 = *((_DWORD *)a2 + 14);
        v16 = __OFSUB__(v32, 1);
        v33 = v32 - 1;
        if ( v33 < 0 == v16 )
          *((_DWORD *)a2 + 14) = v33;
        v34 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v34 >= *((_QWORD *)a2 + 2) || *v34 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v34 + 1;
LABEL_63:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v45) & 1) == 0 )
          return 0;
        v35 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 10) = v45;
        v11 = v35 | 8;
        *((_DWORD *)this + 14) = v35 | 8;
        v36 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v36 >= *((_QWORD *)a2 + 2) || *v36 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v36 + 1;
LABEL_67:
        v37 = (Caver::Proto::Texture *)*((_QWORD *)this + 6);
        *((_DWORD *)this + 14) = v11 | 0x10;
        if ( !v37 )
        {
          v37 = (Caver::Proto::Texture *)operator new(0x70u);
          Caver::Proto::Texture::Texture(v37);
          *((_QWORD *)this + 6) = v37;
        }
        v38 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v38 >= *((_QWORD *)a2 + 2) || *v38 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
        }
        else
        {
          v45 = (unsigned __int8)*v38;
          *((_QWORD *)a2 + 1) = v38 + 1;
        }
        v39 = *((_DWORD *)a2 + 14);
        v40 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v39 + 1;
        if ( v39 >= v40 )
          return 0;
        v41 = google::protobuf::io::CodedInputStream::PushLimit(a2, v45);
        if ( (Caver::Proto::Texture::MergePartialFromCodedStream(v37, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v41);
        v42 = *((_DWORD *)a2 + 14);
        v16 = __OFSUB__(v42, 1);
        v43 = v42 - 1;
        if ( v43 < 0 == v16 )
          *((_DWORD *)a2 + 14) = v43;
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
          goto LABEL_49;
        goto LABEL_23;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_63;
        goto LABEL_23;
      case 5u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_23;
        v11 = *((_DWORD *)this + 14);
        goto LABEL_67;
      default:
        v8 = v6 & 7;
LABEL_23:
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

