/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331640
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000331A0C  Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 109
 *   insn=0x000000000033165C string=0x0000000000331660 "W"
 *   insn=0x000000000033166C string=0x0000000000331670 "9G"
 *   insn=0x0000000000331670 string=0x0000000000331674 "Z"
 *   insn=0x0000000000331690 string=0x0000000000331694 "[c"
 *   insn=0x0000000000331694 string=0x0000000000331698 "h"
 *   insn=0x000000000033169C string=0x00000000003316A0 """
 *   insn=0x00000000003316A0 string=0x00000000003316A4 "\t"
 *   insn=0x00000000003316A8 string=0x00000000003316AC "!"
 *   insn=0x00000000003316AC string=0x00000000003316B0 ""
 *   insn=0x00000000003316B0 string=0x00000000003316B4 "a""
 *   insn=0x00000000003316B4 string=0x00000000003316B8 "h"
 *   insn=0x00000000003316BC string=0x00000000003316D8 "(|"
 *   insn=0x00000000003316C8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003316CC string=0x00000000003316D0 "a""
 *   insn=0x00000000003316D0 string=0x00000000003316D4 "A"
 *   insn=0x00000000003316D8 string=0x00000000003316DC ""
 *   insn=0x00000000003316E4 string=0x00000000003316E8 "{"
 *   insn=0x00000000003316E4 string=0x00000000003317D8 "("
 *   insn=0x00000000003316E8 string=0x00000000003316EC ""
 *   insn=0x00000000003316F0 string=0x00000000003316F4 "("
 *   insn=0x00000000003316F0 string=0x000000000033175C "("
 *   insn=0x00000000003316F0 string=0x000000000033176C "("
 *   insn=0x00000000003316F0 string=0x000000000033177C "("
 *   insn=0x0000000000331704 string=0x0000000000331708 ""
 *   insn=0x0000000000331708 string=0x000000000033170C "?"
 *   insn=0x000000000033171C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000331720 string=0x0000000000331724 ";"
 *   insn=0x000000000033172C string=0x0000000000331730 "( "
 *   insn=0x0000000000331730 string=0x00000000001F97D0 "0'"
 *   insn=0x0000000000331734 string=0x0000000000331738 "h"
 *   insn=0x0000000000331740 string=0x0000000000331744 "\t"
 *   insn=0x0000000000331744 string=0x0000000000331748 "?I"
 *   insn=0x0000000000331748 string=0x000000000033174C "a"
 *   insn=0x000000000033174C string=0x0000000000331750 ""
 *   insn=0x0000000000331750 string=0x0000000000331754 "h"
 *   insn=0x0000000000331764 string=0x0000000000331768 "E"
 *   insn=0x0000000000331770 string=0x0000000000331774 "A"
 *   insn=0x0000000000331774 string=0x0000000000331778 "X"
 *   insn=0x000000000033178C string=0x0000000000331790 ""
 *   insn=0x0000000000331798 string=0x00000000003317B0 "h"
 *   insn=0x00000000003317A4 string=0x00000000003317A8 "J"
 *   insn=0x00000000003317A8 string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000003317B8 string=0x00000000003317BC "\t"
 *   insn=0x00000000003317C0 string=0x00000000003317C4 ")"
 *   insn=0x00000000003317C4 string=0x00000000003317C8 ""
 *   insn=0x00000000003317CC string=0x00000000003317D0 "h"
 *   insn=0x00000000003317D4 string=0x0000000000331804 "h&G)\n"
 *   insn=0x00000000003317E4 string=0x00000000003317E8 ":0"
 *   insn=0x00000000003317E8 string=0x00000000003317EC "`"
 *   insn=0x00000000003317E8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003317EC string=0x00000000003317F0 "q"
 *   insn=0x00000000003317FC string=0x00000000001F9050 "0'"
 *   insn=0x0000000000331804 string=0x0000000000331808 "\n"
 *   insn=0x000000000033180C string=0x0000000000331810 "j:"
 *   insn=0x0000000000331810 string=0x0000000000331814 "\n"
 *   insn=0x000000000033181C string=0x0000000000331820 "XD"
 *   insn=0x0000000000331830 string=0x00000000001F5710 "P'"
 *   insn=0x0000000000331834 string=0x0000000000331838 "h"
 *   insn=0x0000000000331844 string=0x0000000000331848 "rE"
 *   insn=0x0000000000331848 string=0x000000000033184C "h:@"
 *   insn=0x000000000033184C string=0x0000000000331850 ""
 *   insn=0x0000000000331850 string=0x0000000000331854 "K"
 *   insn=0x0000000000331854 string=0x0000000000331858 "h:"
 *   insn=0x0000000000331854 string=0x000000000033185C "h"
 *   insn=0x0000000000331864 string=0x0000000000331868 "\t"
 *   insn=0x0000000000331868 string=0x000000000033186C "?i"
 *   insn=0x000000000033186C string=0x0000000000331870 "A"
 *   insn=0x0000000000331870 string=0x0000000000331874 ""
 *   insn=0x0000000000331874 string=0x0000000000331878 "h"
 *   insn=0x0000000000331880 string=0x0000000000331884 ""
 *   insn=0x0000000000331884 string=0x0000000000331888 "?"
 *   insn=0x0000000000331894 string=0x0000000000331898 "R"
 *   insn=0x000000000033189C string=0x00000000003318A0 "Hc"
 *   insn=0x00000000003318A0 string=0x00000000003318A4 "("
 *   insn=0x00000000003318B4 string=0x00000000003318B8 "h"
 *   insn=0x00000000003318C0 string=0x00000000003318C4 "\t"
 *   insn=0x00000000003318C4 string=0x00000000003318C8 "?"
 *   insn=0x00000000003318C8 string=0x00000000003318CC "a"
 *   insn=0x00000000003318CC string=0x00000000003318D0 ""
 *   insn=0x00000000003318D0 string=0x00000000003318D4 "h"
 *   insn=0x00000000003318DC string=0x00000000003318E0 ""
 *   insn=0x00000000003318E8 string=0x0000000000331900 "h"
 *   insn=0x00000000003318EC string=0x00000000003318F0 "<"
 *   insn=0x0000000000331908 string=0x000000000033190C "\t"
 *   insn=0x0000000000331910 string=0x0000000000331914 ")"
 *   insn=0x0000000000331914 string=0x0000000000331918 ""
 *   insn=0x000000000033191C string=0x0000000000331920 "h"
 *   insn=0x0000000000331924 string=0x0000000000331938 "h&G)\n"
 *   insn=0x0000000000331938 string=0x000000000033193C "\n"
 *   insn=0x0000000000331940 string=0x0000000000331944 "j:"
 *   insn=0x0000000000331944 string=0x0000000000331948 "j"
 *   insn=0x0000000000331950 string=0x0000000000331954 "D"
 *   insn=0x0000000000331960 string=0x0000000000331964 "k"
 *   insn=0x0000000000331964 string=0x0000000000331968 "`"
 *   insn=0x0000000000331968 string=0x000000000033196C "h"
 *   insn=0x000000000033196C string=0x0000000000331970 "("
 *   insn=0x0000000000331978 string=0x000000000033197C "%E"
 *   insn=0x000000000033197C string=0x0000000000331980 "h:@"
 *   insn=0x0000000000331980 string=0x0000000000331984 ""
 *   insn=0x0000000000331984 string=0x0000000000331988 "K"
 *   insn=0x0000000000331988 string=0x000000000033198C "h:"
 *   insn=0x0000000000331988 string=0x0000000000331990 "h"
 *   insn=0x0000000000331998 string=0x000000000033199C "h.@"
 *   insn=0x00000000003319A8 string=0x00000000003319AC "`"
 *   insn=0x00000000003319C8 string=0x00000000003319CC "!"
 *   insn=0x00000000003319CC string=0x00000000003319F0 "8"
 *   insn=0x00000000003319F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003319FC string=0x0000000000331A00 ","
 *   insn=0x0000000000331A00 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(
        Caver::Proto::OverlayTextComponent *this,
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
  Caver::Proto::Vector2 *v12; // x21
  char *v13; // x8
  int v14; // w8
  int v15; // w9
  int v16; // w22
  int v17; // w8
  bool v18; // vf
  int v19; // w8
  _BYTE *v20; // x8
  __int64 *v21; // x1
  _QWORD *v22; // x0
  _BYTE *v23; // x8
  Caver::Proto::Vector2 *v24; // x21
  char *v25; // x8
  int v26; // w8
  int v27; // w9
  int v28; // w22
  int v29; // w8
  int v30; // w8
  __int64 result; // x0
  unsigned int v32; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v33; // [xsp+8h] [xbp-58h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_26;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 12) |= 1u;
        if ( v9 == &Caver::Proto::OverlayTextComponent::_default_text_ )
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
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_26;
LABEL_20:
        v12 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 12) |= 2u;
        if ( !v12 )
        {
          v12 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v12);
          *((_QWORD *)this + 3) = v12;
        }
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) || *v13 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
        }
        else
        {
          v32 = (unsigned __int8)*v13;
          *((_QWORD *)a2 + 1) = v13 + 1;
        }
        v14 = *((_DWORD *)a2 + 14);
        v15 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v14 + 1;
        if ( v14 >= v15 )
          return 0;
        v16 = google::protobuf::io::CodedInputStream::PushLimit(a2, v32);
        if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v12, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v16);
        v17 = *((_DWORD *)a2 + 14);
        v18 = __OFSUB__(v17, 1);
        v19 = v17 - 1;
        if ( v19 < 0 == v18 )
          *((_DWORD *)a2 + 14) = v19;
        v20 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v20 + 1;
LABEL_38:
        v21 = (__int64 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 12) |= 4u;
        if ( v21 == &Caver::Proto::OverlayTextComponent::_default_sprite_name_ )
        {
          v22 = (_QWORD *)operator new(8u);
          *v22 = &byte_6FD2F8;
          *((_QWORD *)this + 4) = v22;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_44:
        v24 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 12) |= 8u;
        if ( !v24 )
        {
          v24 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v24);
          *((_QWORD *)this + 5) = v24;
        }
        v25 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
        }
        else
        {
          v32 = (unsigned __int8)*v25;
          *((_QWORD *)a2 + 1) = v25 + 1;
        }
        v26 = *((_DWORD *)a2 + 14);
        v27 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v26 + 1;
        if ( v26 >= v27 )
          return 0;
        v28 = google::protobuf::io::CodedInputStream::PushLimit(a2, v32);
        if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v24, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v28);
        v29 = *((_DWORD *)a2 + 14);
        v18 = __OFSUB__(v29, 1);
        v30 = v29 - 1;
        if ( v30 < 0 == v18 )
          *((_DWORD *)a2 + 14) = v30;
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
          goto LABEL_38;
        goto LABEL_26;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_44;
        goto LABEL_26;
      default:
        v8 = v6 & 7;
LABEL_26:
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

