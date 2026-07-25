/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330774
 * Mangled: _ZN5Caver5Proto17ItemDropComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ItemDropComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201C50  Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 138
 *   insn=0x0000000000330790 string=0x0000000000330794 "X"
 *   insn=0x000000000033079C string=0x00000000003307A0 "{"
 *   insn=0x00000000003307A0 string=0x00000000003307A4 ""
 *   insn=0x00000000003307A4 string=0x00000000003307A8 ")B"
 *   insn=0x00000000003307AC string=0x00000000003307B0 "J"
 *   insn=0x00000000003307B4 string=0x00000000003307B8 " "
 *   insn=0x00000000003307BC string=0x00000000003307C0 ")"
 *   insn=0x00000000003307C4 string=0x000000000058B920 "$O"
 *   insn=0x00000000003307CC string=0x00000000003307D0 "9"
 *   insn=0x00000000003307D0 string=0x00000000003307D4 "zc"
 *   insn=0x00000000003307D4 string=0x00000000003307D8 "\A"
 *   insn=0x00000000003307D8 string=0x00000000003307DC " "
 *   insn=0x00000000003307E4 string=0x00000000003307E8 "h"
 *   insn=0x00000000003307EC string=0x00000000003307F0 """
 *   insn=0x00000000003307F0 string=0x00000000003307F4 "\t"
 *   insn=0x00000000003307F8 string=0x00000000003307FC "!"
 *   insn=0x00000000003307FC string=0x0000000000330800 ""
 *   insn=0x0000000000330800 string=0x0000000000330804 "a""
 *   insn=0x0000000000330804 string=0x0000000000330808 "h"
 *   insn=0x000000000033080C string=0x0000000000330828 "(|"
 *   insn=0x0000000000330818 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033081C string=0x0000000000330820 "a""
 *   insn=0x0000000000330828 string=0x000000000033082C ""
 *   insn=0x0000000000330834 string=0x0000000000330838 "({"
 *   insn=0x0000000000330834 string=0x0000000000330990 "("
 *   insn=0x0000000000330838 string=0x000000000033083C ""
 *   insn=0x0000000000330840 string=0x0000000000330844 "("
 *   insn=0x0000000000330840 string=0x00000000003308B4 "("
 *   insn=0x0000000000330840 string=0x00000000003308E4 "("
 *   insn=0x0000000000330840 string=0x00000000003308F4 "("
 *   insn=0x0000000000330840 string=0x0000000000330924 "("
 *   insn=0x0000000000330848 string=0x000000000033084C "A\n"
 *   insn=0x0000000000330858 string=0x000000000033085C ")mF"
 *   insn=0x000000000033085C string=0x0000000000330860 ""
 *   insn=0x0000000000330864 string=0x0000000000330868 "?"
 *   insn=0x0000000000330870 string=0x0000000000330874 "["
 *   insn=0x0000000000330874 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000330878 string=0x000000000033087C ":"
 *   insn=0x0000000000330888 string=0x000000000033088C "`"
 *   insn=0x0000000000330888 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000033088C string=0x0000000000330890 "h"
 *   insn=0x0000000000330898 string=0x000000000033089C "\t"
 *   insn=0x000000000033089C string=0x00000000003308A0 "?I"
 *   insn=0x00000000003308A0 string=0x00000000003308A4 "!"
 *   insn=0x00000000003308A4 string=0x00000000003308A8 ""
 *   insn=0x00000000003308A8 string=0x00000000003308AC "h"
 *   insn=0x00000000003308AC string=0x00000000003308B0 " "
 *   insn=0x00000000003308B8 string=0x00000000003308BC "j"
 *   insn=0x00000000003308BC string=0x00000000003308C0 "_"
 *   insn=0x00000000003308C0 string=0x00000000003308C4 """
 *   insn=0x00000000003308C4 string=0x00000000003308C8 "I"
 *   insn=0x00000000003308CC string=0x00000000003308D0 ")"
 *   insn=0x00000000003308D0 string=0x00000000003308D4 "J"
 *   insn=0x00000000003308D8 string=0x00000000003308DC "j"
 *   insn=0x00000000003308E8 string=0x00000000003308EC "A"
 *   insn=0x00000000003308EC string=0x00000000003308F0 "/"
 *   insn=0x00000000003308F8 string=0x00000000003308FC "i"
 *   insn=0x00000000003308FC string=0x0000000000330900 "?"
 *   insn=0x0000000000330904 string=0x0000000000330908 "*"
 *   insn=0x0000000000330908 string=0x000000000033090C "J"
 *   insn=0x000000000033090C string=0x0000000000330910 "J"
 *   insn=0x0000000000330910 string=0x0000000000330914 ")"
 *   insn=0x0000000000330918 string=0x000000000033091C "i"
 *   insn=0x000000000033091C string=0x0000000000330920 "{"
 *   insn=0x0000000000330928 string=0x000000000033092C "A"
 *   insn=0x0000000000330938 string=0x000000000033093C ")"
 *   insn=0x000000000033093C string=0x0000000000330940 ""
 *   insn=0x0000000000330944 string=0x0000000000330948 "?"
 *   insn=0x0000000000330950 string=0x0000000000330954 "#"
 *   insn=0x0000000000330958 string=0x000000000033095C "hc"
 *   insn=0x000000000033095C string=0x0000000000330960 "("
 *   insn=0x000000000033096C string=0x0000000000330970 "@"
 *   insn=0x0000000000330970 string=0x0000000000330974 "i"
 *   insn=0x0000000000330974 string=0x0000000000330978 "?"
 *   insn=0x0000000000330978 string=0x000000000033097C "b"
 *   insn=0x000000000033097C string=0x0000000000330980 "("
 *   insn=0x0000000000330988 string=0x000000000033098C "P"
 *   insn=0x000000000033098C string=0x0000000000330ACC "("
 *   insn=0x0000000000330994 string=0x0000000000330998 "@"
 *   insn=0x00000000003309A0 string=0x00000000003309A4 " "
 *   insn=0x00000000003309A0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003309A4 string=0x00000000003309A8 "|"
 *   insn=0x00000000003309CC string=0x0000000000330A24 "h"
 *   insn=0x00000000003309D8 string=0x00000000003309EC ""
 *   insn=0x00000000003309E4 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000330A2C string=0x0000000000330A30 "\t"
 *   insn=0x0000000000330A34 string=0x0000000000330A38 ")"
 *   insn=0x0000000000330A38 string=0x0000000000330A3C ""
 *   insn=0x0000000000330A40 string=0x0000000000330A44 "h"
 *   insn=0x0000000000330A48 string=0x0000000000330A5C "h&G)\n"
 *   insn=0x0000000000330A54 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000330A5C string=0x0000000000330A60 "\n"
 *   insn=0x0000000000330A64 string=0x0000000000330A68 "j:"
 *   insn=0x0000000000330A68 string=0x0000000000330A6C "j\t"
 *   insn=0x0000000000330A84 string=0x0000000000330A88 "rD"
 *   insn=0x0000000000330A88 string=0x0000000000330A8C "`"
 *   insn=0x0000000000330A8C string=0x0000000000330A90 "h"
 *   insn=0x0000000000330A90 string=0x0000000000330A94 "("
 *   insn=0x0000000000330AA0 string=0x0000000000330AA4 "h:@"
 *   insn=0x0000000000330AA4 string=0x0000000000330AA8 ""
 *   insn=0x0000000000330AA8 string=0x0000000000330AAC "K"
 *   insn=0x0000000000330AAC string=0x0000000000330AB0 "h:"
 *   insn=0x0000000000330AAC string=0x0000000000330AB4 "i"
 *   insn=0x0000000000330AB4 string=0x0000000000330AB8 "?"
 *   insn=0x0000000000330AB8 string=0x0000000000330ABC "b"
 *   insn=0x0000000000330ABC string=0x0000000000330AC0 "*"
 *   insn=0x0000000000330AC0 string=0x0000000000330AC4 "_i"
 *   insn=0x0000000000330AC8 string=0x0000000000330AD8 "*"
 *   insn=0x0000000000330ACC string=0x0000000000330AD0 "h"
 *   insn=0x0000000000330AD8 string=0x0000000000330ADC "_"
 *   insn=0x0000000000330ADC string=0x0000000000330AE0 "A"
 *   insn=0x0000000000330AE0 string=0x0000000000330AE4 ")"
 *   insn=0x0000000000330AE4 string=0x0000000000330AE8 "i"
 *   insn=0x0000000000330AE8 string=0x0000000000330AEC "?"
 *   insn=0x0000000000330AF8 string=0x0000000000330AFC "U!"
 *   insn=0x0000000000330B04 string=0x0000000000330B08 "i"
 *   insn=0x0000000000330B0C string=0x0000000000330B10 "_"
 *   insn=0x0000000000330B18 string=0x0000000000330B1C "j"
 *   insn=0x0000000000330B1C string=0x0000000000330B20 "?"
 *   insn=0x0000000000330B28 string=0x0000000000330B2C "*"
 *   insn=0x0000000000330B2C string=0x0000000000330B30 "_"
 *   insn=0x0000000000330B34 string=0x0000000000330B38 "*"
 *   insn=0x0000000000330B38 string=0x0000000000330B3C "j"
 *   insn=0x0000000000330B3C string=0x0000000000330B40 "_"
 *   insn=0x0000000000330B40 string=0x0000000000330B44 "#"
 *   insn=0x0000000000330B4C string=0x0000000000330B50 "@!"
 *   insn=0x0000000000330B50 string=0x0000000000330B54 " "
 *   insn=0x0000000000330B58 string=0x0000000000330B5C "j"
 *   insn=0x0000000000330B60 string=0x0000000000330B64 "?"
 *   insn=0x0000000000330B6C string=0x0000000000330B70 "i"
 *   insn=0x0000000000330B70 string=0x0000000000330B74 "_"
 *   insn=0x0000000000330B78 string=0x0000000000330B7C "a"
 *   insn=0x0000000000330B7C string=0x0000000000330B80 "h.@"
 *   insn=0x0000000000330B80 string=0x0000000000330B84 "("
 *   insn=0x0000000000330B8C string=0x0000000000330B90 "`"
 *   insn=0x0000000000330B94 string=0x0000000000330BA4 ""
 *   insn=0x0000000000330BAC string=0x0000000000330BB0 "!"
 *   insn=0x0000000000330BD4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent::MergePartialFromCodedStream(
        Caver::Proto::ItemDropComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x21
  unsigned __int8 *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  int v10; // w8
  __int64 *v11; // x1
  _QWORD *v12; // x0
  _BYTE *v13; // x8
  unsigned __int64 v14; // x8
  char *v15; // x10
  unsigned int v16; // w9
  unsigned __int8 *v17; // x10
  unsigned __int8 *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  __int64 *v21; // x1
  _QWORD *v22; // x0
  _BYTE *v23; // x9
  int v24; // w8
  int v25; // w23
  __int64 v26; // x8
  __int64 v27; // x22
  __int64 v28; // x8
  char *v29; // x8
  int v30; // w8
  int v31; // w9
  int v32; // w23
  int v33; // w8
  bool v34; // vf
  int v35; // w8
  int v36; // w11
  int v37; // w11
  __int64 result; // x0
  __int128 v39; // [xsp+0h] [xbp-70h]
  unsigned int v40; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v41; // [xsp+18h] [xbp-58h]

  *(_QWORD *)&v4 = &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_;
  v6 = (Caver::Proto::ItemDropComponent *)((char *)this + 32);
  *((_QWORD *)&v4 + 1) = &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_;
  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v39 = v4;
LABEL_2:
  while ( 1 )
  {
    v7 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v7 >= *((_QWORD *)a2 + 2) || (char)*v7 < 0 )
      break;
    v8 = *v7;
    *((_DWORD *)a2 + 8) = v8;
    *((_QWORD *)a2 + 1) = v7 + 1;
    if ( !(_DWORD)v8 )
      return 1;
LABEL_7:
    switch ( (unsigned int)v8 >> 3 )
    {
      case 1u:
        v10 = v8 & 7;
        if ( v10 != 2 )
          goto LABEL_33;
        v11 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 23) |= 1u;
        if ( v11 == &Caver::Proto::ItemDropComponent::_default_item_name_ )
        {
          v12 = (_QWORD *)operator new(8u);
          *v12 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v12;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) || *v13 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v13 + 1;
        goto LABEL_26;
      case 2u:
        v10 = v8 & 7;
        if ( v10 != 2 )
          goto LABEL_33;
LABEL_26:
        v21 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 23) |= 2u;
        if ( v21 == &Caver::Proto::ItemDropComponent::_default_item_identifier_ )
        {
          v22 = (_QWORD *)operator new(8u);
          *v22 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v22;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 26 )
          continue;
        break;
      case 3u:
        v10 = v8 & 7;
        if ( v10 == 2 )
          goto LABEL_36;
        goto LABEL_33;
      case 4u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_33;
        v18 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v18 < v14 )
          goto LABEL_23;
        goto LABEL_55;
      case 5u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_33;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v14 )
          goto LABEL_17;
        goto LABEL_60;
      default:
        v10 = v8 & 7;
LABEL_33:
        if ( v10 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v8,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
    do
    {
      *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_36:
      v25 = *((_DWORD *)this + 10);
      v24 = *((_DWORD *)this + 11);
      if ( v25 >= v24 )
      {
        if ( v24 == *((_DWORD *)this + 12) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v24 + 1);
          v25 = *((_DWORD *)this + 10);
          v24 = *((_DWORD *)this + 11);
        }
        *((_DWORD *)this + 11) = v24 + 1;
        v27 = operator new(0x30u);
        *(_QWORD *)v27 = off_6C9540;
        *(_DWORD *)(v27 + 8) = 0;
        *(_OWORD *)(v27 + 16) = v39;
        *(_QWORD *)(v27 + 32) = 0;
        *(_QWORD *)(v27 + 40) = 0;
        v28 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 10) = v25 + 1;
        *(_QWORD *)(v28 + 8LL * v25) = v27;
      }
      else
      {
        v26 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 10) = v25 + 1;
        v27 = *(_QWORD *)(v26 + 8LL * v25);
      }
      v29 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
          return 0;
      }
      else
      {
        v40 = (unsigned __int8)*v29;
        *((_QWORD *)a2 + 1) = v29 + 1;
      }
      v30 = *((_DWORD *)a2 + 14);
      v31 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v30 + 1;
      if ( v30 >= v31 )
        return 0;
      v32 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
      if ( (Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(
              (Caver::Proto::ItemDropComponent_ItemDropEntry *)v27,
              a2)
          & 1) == 0
        || !*((_BYTE *)a2 + 36) )
      {
        return 0;
      }
      google::protobuf::io::CodedInputStream::PopLimit(a2, v32);
      v33 = *((_DWORD *)a2 + 14);
      v34 = __OFSUB__(v33, 1);
      v35 = v33 - 1;
      if ( v35 < 0 == v34 )
        *((_DWORD *)a2 + 14) = v35;
      v23 = (_BYTE *)*((_QWORD *)a2 + 1);
      v14 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v23 >= v14 )
        goto LABEL_2;
    }
    while ( *v23 == 26 );
    if ( *v23 != 32 )
      continue;
    v18 = v23 + 1;
    *((_QWORD *)a2 + 1) = v18;
    if ( (unsigned __int64)v18 >= v14 )
    {
LABEL_55:
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
        return 0;
      v19 = v40;
      v20 = (_BYTE *)*((_QWORD *)a2 + 1);
      v14 = *((_QWORD *)a2 + 2);
      goto LABEL_57;
    }
LABEL_23:
    if ( (char)*v18 < 0 )
      goto LABEL_55;
    v19 = *v18;
    v20 = v18 + 1;
    v40 = v19;
    *((_QWORD *)a2 + 1) = v20;
LABEL_57:
    v36 = *((_DWORD *)this + 23);
    *((_BYTE *)this + 88) = v19 != 0;
    *((_DWORD *)this + 23) = v36 | 8;
    if ( (unsigned __int64)v20 < v14 && *v20 == 40 )
    {
      v15 = v20 + 1;
      *((_QWORD *)a2 + 1) = v20 + 1;
      if ( (unsigned __int64)(v20 + 1) < v14 )
      {
LABEL_17:
        if ( (*v15 & 0x80000000) == 0 )
        {
          v16 = (unsigned __int8)*v15;
          v17 = (unsigned __int8 *)(v15 + 1);
          v40 = v16;
          *((_QWORD *)a2 + 1) = v17;
          goto LABEL_62;
        }
      }
LABEL_60:
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
        return 0;
      v16 = v40;
      v17 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      v14 = *((_QWORD *)a2 + 2);
LABEL_62:
      v37 = *((_DWORD *)this + 23);
      *((_BYTE *)this + 89) = v16 != 0;
      *((_DWORD *)this + 23) = v37 | 0x10;
      if ( v17 == (unsigned __int8 *)v14 && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
  v8 = TagFallback;
  *((_DWORD *)a2 + 8) = TagFallback;
  if ( TagFallback )
    goto LABEL_7;
  return 1;
}

