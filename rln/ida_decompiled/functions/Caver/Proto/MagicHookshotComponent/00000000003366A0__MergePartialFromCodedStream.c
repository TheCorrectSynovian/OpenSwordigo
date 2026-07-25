/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003366A0
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000336A6C  Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 117
 *   insn=0x00000000003366B4 string=0x00000000003366B8 "W"
 *   insn=0x00000000003366D0 string=0x00000000003366D4 "h"
 *   insn=0x00000000003366D8 string=0x00000000003366DC """
 *   insn=0x00000000003366DC string=0x00000000003366E0 "\t"
 *   insn=0x00000000003366E4 string=0x00000000003366E8 "!"
 *   insn=0x00000000003366E8 string=0x00000000003366EC ""
 *   insn=0x00000000003366EC string=0x00000000003366F0 "a""
 *   insn=0x00000000003366F0 string=0x00000000003366F4 "h"
 *   insn=0x00000000003366F8 string=0x0000000000336714 "(|"
 *   insn=0x0000000000336704 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000336708 string=0x000000000033670C "a""
 *   insn=0x0000000000336714 string=0x0000000000336718 ""
 *   insn=0x000000000033671C string=0x0000000000336720 "("
 *   insn=0x0000000000336720 string=0x0000000000336724 "{"
 *   insn=0x0000000000336720 string=0x0000000000336804 "("
 *   insn=0x0000000000336724 string=0x0000000000336728 ""
 *   insn=0x000000000033672C string=0x0000000000336730 "("
 *   insn=0x000000000033672C string=0x0000000000336760 "("
 *   insn=0x000000000033672C string=0x0000000000336790 "("
 *   insn=0x000000000033672C string=0x00000000003367C0 "("
 *   insn=0x000000000033672C string=0x00000000003367D4 "("
 *   insn=0x0000000000336734 string=0x0000000000336738 "i"
 *   insn=0x0000000000336738 string=0x000000000033673C "?"
 *   insn=0x0000000000336740 string=0x0000000000336744 "*"
 *   insn=0x0000000000336748 string=0x000000000033674C "J"
 *   insn=0x000000000033674C string=0x0000000000336750 ")"
 *   insn=0x0000000000336754 string=0x0000000000336758 "i"
 *   insn=0x0000000000336758 string=0x000000000033675C "7"
 *   insn=0x0000000000336760 string=0x0000000000336764 "!"
 *   insn=0x0000000000336764 string=0x0000000000336768 "i"
 *   insn=0x0000000000336768 string=0x000000000033676C "?"
 *   insn=0x000000000033676C string=0x0000000000336770 "B"
 *   insn=0x0000000000336770 string=0x0000000000336774 "*"
 *   insn=0x0000000000336774 string=0x0000000000336778 "\n"
 *   insn=0x0000000000336778 string=0x000000000033677C "J"
 *   insn=0x000000000033677C string=0x0000000000336780 ")"
 *   insn=0x0000000000336784 string=0x0000000000336788 "i"
 *   insn=0x0000000000336794 string=0x0000000000336798 "i"
 *   insn=0x0000000000336798 string=0x000000000033679C "?"
 *   insn=0x00000000003367A0 string=0x00000000003367A4 "*"
 *   insn=0x00000000003367A8 string=0x00000000003367AC "J"
 *   insn=0x00000000003367AC string=0x00000000003367B0 ")"
 *   insn=0x00000000003367B4 string=0x00000000003367B8 "i"
 *   insn=0x00000000003367B8 string=0x00000000003367BC "E"
 *   insn=0x00000000003367CC string=0x00000000003367D0 "K"
 *   insn=0x00000000003367D8 string=0x00000000003367DC "i"
 *   insn=0x00000000003367DC string=0x00000000003367E0 "?"
 *   insn=0x00000000003367E0 string=0x00000000003367E4 "B"
 *   insn=0x00000000003367E4 string=0x00000000003367E8 "*"
 *   insn=0x00000000003367E8 string=0x00000000003367EC "\n"
 *   insn=0x00000000003367EC string=0x00000000003367F0 "J"
 *   insn=0x00000000003367F0 string=0x00000000003367F4 ")"
 *   insn=0x00000000003367F8 string=0x00000000003367FC "i"
 *   insn=0x00000000003367FC string=0x0000000000336800 "!"
 *   insn=0x0000000000336810 string=0x0000000000336814 "/"
 *   insn=0x0000000000336814 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000336824 string=0x0000000000336828 "\n\n"
 *   insn=0x0000000000336828 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000336830 string=0x0000000000336834 "i"
 *   insn=0x000000000033683C string=0x0000000000336840 "?"
 *   insn=0x0000000000336840 string=0x0000000000336844 "j"
 *   insn=0x0000000000336848 string=0x000000000033684C "B"
 *   insn=0x000000000033684C string=0x0000000000336850 "*"
 *   insn=0x0000000000336850 string=0x0000000000336854 "_A"
 *   insn=0x0000000000336858 string=0x000000000033685C ")"
 *   insn=0x000000000033685C string=0x0000000000336860 "i"
 *   insn=0x0000000000336860 string=0x0000000000336864 "?"
 *   insn=0x000000000033687C string=0x0000000000336880 "i"
 *   insn=0x0000000000336888 string=0x000000000033688C "?"
 *   insn=0x000000000033688C string=0x0000000000336890 "j"
 *   insn=0x0000000000336898 string=0x000000000033689C "*"
 *   insn=0x000000000033689C string=0x00000000003368A0 "_a"
 *   insn=0x00000000003368A4 string=0x00000000003368A8 ")"
 *   insn=0x00000000003368A8 string=0x00000000003368AC "i"
 *   insn=0x00000000003368AC string=0x00000000003368B0 "?"
 *   insn=0x00000000003368C0 string=0x00000000003368C4 " "
 *   insn=0x00000000003368C8 string=0x00000000003368CC "i"
 *   insn=0x00000000003368D4 string=0x00000000003368D8 "?"
 *   insn=0x00000000003368D8 string=0x00000000003368DC "j"
 *   insn=0x00000000003368E4 string=0x00000000003368E8 "("
 *   insn=0x00000000003368EC string=0x00000000003368F0 "!"
 *   insn=0x00000000003368F0 string=0x00000000003368F4 "("
 *   insn=0x00000000003368F4 string=0x00000000003368F8 "h"
 *   insn=0x00000000003368FC string=0x0000000000336900 "H"
 *   insn=0x0000000000336908 string=0x0000000000336920 "h"
 *   insn=0x000000000033690C string=0x0000000000336910 "4"
 *   insn=0x0000000000336910 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000336918 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000336928 string=0x000000000033692C "\t"
 *   insn=0x0000000000336930 string=0x0000000000336934 ")"
 *   insn=0x0000000000336934 string=0x0000000000336938 ""
 *   insn=0x000000000033693C string=0x0000000000336940 "h"
 *   insn=0x0000000000336944 string=0x0000000000336958 "h&G)\n"
 *   insn=0x0000000000336958 string=0x000000000033695C "\n"
 *   insn=0x0000000000336960 string=0x0000000000336964 "j:"
 *   insn=0x0000000000336964 string=0x0000000000336968 "\n"
 *   insn=0x0000000000336988 string=0x000000000033698C "h"
 *   insn=0x000000000033699C string=0x00000000003369A0 "h:@"
 *   insn=0x00000000003369A0 string=0x00000000003369A4 ""
 *   insn=0x00000000003369A4 string=0x00000000003369A8 "K"
 *   insn=0x00000000003369A8 string=0x00000000003369AC "h:"
 *   insn=0x00000000003369A8 string=0x00000000003369B0 "i"
 *   insn=0x00000000003369B0 string=0x00000000003369B4 "?"
 *   insn=0x00000000003369B8 string=0x00000000003369BC "*"
 *   insn=0x00000000003369BC string=0x00000000003369C0 "_"
 *   insn=0x00000000003369C4 string=0x00000000003369C8 ")"
 *   insn=0x00000000003369C8 string=0x00000000003369CC "i"
 *   insn=0x00000000003369CC string=0x00000000003369D0 "?"
 *   insn=0x00000000003369E0 string=0x00000000003369E4 " "
 *   insn=0x00000000003369E8 string=0x00000000003369EC "i"
 *   insn=0x00000000003369F4 string=0x00000000003369F8 "?"
 *   insn=0x00000000003369F8 string=0x00000000003369FC "j"
 *   insn=0x0000000000336A04 string=0x0000000000336A08 "h.@"
 *   insn=0x0000000000336A08 string=0x0000000000336A0C "H"
 *   insn=0x0000000000336A14 string=0x0000000000336A18 "`"
 *   insn=0x0000000000336A54 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000336A60 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream(
        Caver::Proto::MagicHookshotComponent *this,
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
  unsigned __int64 v13; // x8
  char *v14; // x9
  unsigned int v15; // w10
  unsigned __int8 *v16; // x9
  char *v17; // x9
  unsigned int v18; // w10
  _BYTE *v19; // x9
  int v20; // w10
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  int v24; // w11
  int v25; // w11
  int v26; // w11
  Caver::Proto::FloatColor *v27; // x21
  char *v28; // x8
  int v29; // w8
  int v30; // w9
  int v31; // w22
  int v32; // w8
  bool v33; // vf
  int v34; // w8
  _BYTE *v35; // x9
  int v36; // w11
  __int64 result; // x0
  unsigned int v38; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v39; // [xsp+8h] [xbp-38h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_27;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
          v11 = v38;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v38 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v24 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 10) = v24 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v21 = v12 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 < v9 )
          goto LABEL_24;
        goto LABEL_35;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 >= v9 )
          goto LABEL_35;
LABEL_24:
        if ( *v21 < 0 )
        {
LABEL_35:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
          v22 = v38;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v22 = (unsigned __int8)*v21;
          v23 = v21 + 1;
          v38 = v22;
          *((_QWORD *)a2 + 1) = v23;
        }
        v25 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 4) = v22;
        *((_DWORD *)this + 10) = v25 | 2;
        if ( (unsigned __int64)v23 >= v9 || *v23 != 24 )
          continue;
        v17 = v23 + 1;
        *((_QWORD *)a2 + 1) = v17;
        if ( (unsigned __int64)v17 >= v9 )
          goto LABEL_40;
LABEL_18:
        if ( *v17 < 0 )
        {
LABEL_40:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
          v18 = v38;
          v19 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v18 = (unsigned __int8)*v17;
          v19 = v17 + 1;
          v38 = v18;
          *((_QWORD *)a2 + 1) = v19;
        }
        v26 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 5) = v18;
        v20 = v26 | 4;
        *((_DWORD *)this + 10) = v26 | 4;
        if ( (unsigned __int64)v19 >= v9 || *v19 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_45:
        v27 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 10) = v20 | 0x10;
        if ( !v27 )
        {
          v27 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v27);
          *((_QWORD *)this + 4) = v27;
        }
        v28 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
        }
        else
        {
          v38 = (unsigned __int8)*v28;
          *((_QWORD *)a2 + 1) = v28 + 1;
        }
        v29 = *((_DWORD *)a2 + 14);
        v30 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v29 + 1;
        if ( v29 >= v30 )
          return 0;
        v31 = google::protobuf::io::CodedInputStream::PushLimit(a2, v38);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v27, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v31);
        v32 = *((_DWORD *)a2 + 14);
        v33 = __OFSUB__(v32, 1);
        v34 = v32 - 1;
        if ( v34 < 0 == v33 )
          *((_DWORD *)a2 + 14) = v34;
        v35 = (_BYTE *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v35 >= v13 || *v35 != 40 )
          continue;
        v14 = v35 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_59;
LABEL_14:
        if ( (*v14 & 0x80000000) == 0 )
        {
          v15 = (unsigned __int8)*v14;
          v16 = (unsigned __int8 *)(v14 + 1);
          v38 = v15;
          *((_QWORD *)a2 + 1) = v16;
          goto LABEL_61;
        }
LABEL_59:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) != 0 )
        {
          v15 = v38;
          v16 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v13 = *((_QWORD *)a2 + 2);
LABEL_61:
          v36 = *((_DWORD *)this + 10);
          *((_DWORD *)this + 6) = v15;
          *((_DWORD *)this + 10) = v36 | 8;
          if ( v16 == (unsigned __int8 *)v13 && *((_DWORD *)a2 + 11) )
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
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 < v9 )
          goto LABEL_18;
        goto LABEL_40;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_27;
        v20 = *((_DWORD *)this + 10);
        goto LABEL_45;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 < v13 )
          goto LABEL_14;
        goto LABEL_59;
      default:
        v8 = v6 & 7;
LABEL_27:
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

