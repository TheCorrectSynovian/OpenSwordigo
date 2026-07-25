/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DE804
 * Mangled: _ZN5Caver5Proto7MapZone27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000201530  Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8240  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD060  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 121
 *   insn=0x00000000002DE820 string=0x00000000002DE824 "X"
 *   insn=0x00000000002DE824 string=0x00000000002DE828 ""
 *   insn=0x00000000002DE828 string=0x00000000002DE82C "; "
 *   insn=0x00000000002DE82C string=0x00000000002DE830 "{"
 *   insn=0x00000000002DE830 string=0x00000000002DE834 "< "
 *   insn=0x00000000002DE840 string=0x00000000002DE844 "y"
 *   insn=0x00000000002DE84C string=0x00000000002DE850 "9"
 *   insn=0x00000000002DE850 string=0x00000000002DE854 "zc"
 *   insn=0x00000000002DE854 string=0x00000000002DE858 "h"
 *   insn=0x00000000002DE85C string=0x00000000002DE860 """
 *   insn=0x00000000002DE860 string=0x00000000002DE864 "\t"
 *   insn=0x00000000002DE868 string=0x00000000002DE86C "!"
 *   insn=0x00000000002DE86C string=0x00000000002DE870 ""
 *   insn=0x00000000002DE870 string=0x00000000002DE874 "a""
 *   insn=0x00000000002DE874 string=0x00000000002DE878 "h"
 *   insn=0x00000000002DE87C string=0x00000000002DE898 "(|"
 *   insn=0x00000000002DE884 string=0x00000000002DE888 "nd"
 *   insn=0x00000000002DE888 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002DE88C string=0x00000000002DE890 "a""
 *   insn=0x00000000002DE898 string=0x00000000002DE89C ""
 *   insn=0x00000000002DE8A0 string=0x00000000002DE8A4 "\n"
 *   insn=0x00000000002DE8A4 string=0x00000000002DE8A8 "({"
 *   insn=0x00000000002DE8A4 string=0x00000000002DE9E4 "("
 *   insn=0x00000000002DE8A8 string=0x00000000002DE8AC ""
 *   insn=0x00000000002DE8B0 string=0x00000000002DE8B4 "("
 *   insn=0x00000000002DE8B0 string=0x00000000002DE924 "("
 *   insn=0x00000000002DE8B0 string=0x00000000002DE938 "("
 *   insn=0x00000000002DE8B0 string=0x00000000002DE948 "("
 *   insn=0x00000000002DE8B0 string=0x00000000002DE978 "("
 *   insn=0x00000000002DE8B8 string=0x00000000002DE8BC "a\t"
 *   insn=0x00000000002DE8BC string=0x00000000002DE8C0 ") "
 *   insn=0x00000000002DE8C8 string=0x00000000002DE8CC ")"
 *   insn=0x00000000002DE8CC string=0x00000000002DE8D0 ""
 *   insn=0x00000000002DE8D4 string=0x00000000002DE8D8 "?"
 *   insn=0x00000000002DE8E0 string=0x00000000002DE8E4 "?["
 *   insn=0x00000000002DE8E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DE8E8 string=0x00000000002DE8EC ":"
 *   insn=0x00000000002DE8F8 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002DE8FC string=0x00000000002DE900 "h"
 *   insn=0x00000000002DE908 string=0x00000000002DE90C "\t"
 *   insn=0x00000000002DE90C string=0x00000000002DE910 "?I"
 *   insn=0x00000000002DE910 string=0x00000000002DE914 "!"
 *   insn=0x00000000002DE914 string=0x00000000002DE918 ""
 *   insn=0x00000000002DE918 string=0x00000000002DE91C "h"
 *   insn=0x00000000002DE920 string=0x00000000002DE984 "I "
 *   insn=0x00000000002DE930 string=0x00000000002DE934 "{"
 *   insn=0x00000000002DE93C string=0x00000000002DE940 "A"
 *   insn=0x00000000002DE940 string=0x00000000002DE944 "/"
 *   insn=0x00000000002DE94C string=0x00000000002DE950 "i"
 *   insn=0x00000000002DE950 string=0x00000000002DE954 "?"
 *   insn=0x00000000002DE954 string=0x00000000002DE958 """
 *   insn=0x00000000002DE958 string=0x00000000002DE95C "*"
 *   insn=0x00000000002DE960 string=0x00000000002DE964 "J"
 *   insn=0x00000000002DE964 string=0x00000000002DE968 ")"
 *   insn=0x00000000002DE96C string=0x00000000002DE970 "i"
 *   insn=0x00000000002DE970 string=0x00000000002DE974 "`"
 *   insn=0x00000000002DE97C string=0x00000000002DE980 "A"
 *   insn=0x00000000002DE98C string=0x00000000002DE990 ")"
 *   insn=0x00000000002DE990 string=0x00000000002DE994 ""
 *   insn=0x00000000002DE998 string=0x00000000002DE99C "?"
 *   insn=0x00000000002DE9AC string=0x00000000002DE9B0 "hc"
 *   insn=0x00000000002DE9B0 string=0x00000000002DE9B4 "("
 *   insn=0x00000000002DE9C4 string=0x00000000002DE9C8 "i"
 *   insn=0x00000000002DE9C8 string=0x00000000002DE9CC "?"
 *   insn=0x00000000002DE9CC string=0x00000000002DE9D0 "B"
 *   insn=0x00000000002DE9D0 string=0x00000000002DE9D4 "("
 *   insn=0x00000000002DE9DC string=0x00000000002DE9E0 "5"
 *   insn=0x00000000002DE9E0 string=0x00000000002DEAB4 "("
 *   insn=0x00000000002DE9F4 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002DE9F8 string=0x00000000002DE9FC "`"
 *   insn=0x00000000002DEA04 string=0x00000000002DEA08 "h"
 *   insn=0x00000000002DEA04 string=0x00000000001F8240 "0'"
 *   insn=0x00000000002DEA14 string=0x00000000002DEA18 "\t"
 *   insn=0x00000000002DEA1C string=0x00000000002DEA20 ")"
 *   insn=0x00000000002DEA20 string=0x00000000002DEA24 ""
 *   insn=0x00000000002DEA28 string=0x00000000002DEA2C "h"
 *   insn=0x00000000002DEA30 string=0x00000000002DEA44 "h&G)\n"
 *   insn=0x00000000002DEA3C string=0x00000000001F9050 "0'"
 *   insn=0x00000000002DEA44 string=0x00000000002DEA48 "\n"
 *   insn=0x00000000002DEA4C string=0x00000000002DEA50 "j:"
 *   insn=0x00000000002DEA50 string=0x00000000002DEA54 "J\t"
 *   insn=0x00000000002DEA6C string=0x00000000002DEA70 "|y"
 *   insn=0x00000000002DEA70 string=0x00000000002DEA74 "@"
 *   insn=0x00000000002DEA70 string=0x00000000001FD060 "0'"
 *   insn=0x00000000002DEA74 string=0x00000000002DEA78 "h"
 *   insn=0x00000000002DEA78 string=0x00000000002DEA7C ""
 *   insn=0x00000000002DEA88 string=0x00000000002DEA8C "h:@"
 *   insn=0x00000000002DEA8C string=0x00000000002DEA90 ""
 *   insn=0x00000000002DEA90 string=0x00000000002DEA94 "K"
 *   insn=0x00000000002DEA94 string=0x00000000002DEA98 "h:"
 *   insn=0x00000000002DEA94 string=0x00000000002DEA9C "i"
 *   insn=0x00000000002DEA9C string=0x00000000002DEAA0 "?"
 *   insn=0x00000000002DEAA4 string=0x00000000002DEAA8 "*"
 *   insn=0x00000000002DEAA8 string=0x00000000002DEAAC "_i"
 *   insn=0x00000000002DEAB0 string=0x00000000002DEAC0 "*"
 *   insn=0x00000000002DEAB4 string=0x00000000002DEAB8 "h"
 *   insn=0x00000000002DEAC0 string=0x00000000002DEAC4 "_"
 *   insn=0x00000000002DEAC8 string=0x00000000002DEACC ")"
 *   insn=0x00000000002DEACC string=0x00000000002DEAD0 "i"
 *   insn=0x00000000002DEAD0 string=0x00000000002DEAD4 "?"
 *   insn=0x00000000002DEAD4 string=0x00000000002DEAD8 "#"
 *   insn=0x00000000002DEAE0 string=0x00000000002DEAE4 "[i"
 *   insn=0x00000000002DEAEC string=0x00000000002DEAF0 "i"
 *   insn=0x00000000002DEAF8 string=0x00000000002DEAFC "?"
 *   insn=0x00000000002DEAFC string=0x00000000002DEB00 "j"
 *   insn=0x00000000002DEB08 string=0x00000000002DEB0C "("
 *   insn=0x00000000002DEB10 string=0x00000000002DEB14 "!"
 *   insn=0x00000000002DEB14 string=0x00000000002DEB18 "("
 *   insn=0x00000000002DEB18 string=0x00000000002DEB1C "h"
 *   insn=0x00000000002DEB20 string=0x00000000002DEB24 "H"
 *   insn=0x00000000002DEB28 string=0x00000000002DEB2C "?"
 *   insn=0x00000000002DEB3C string=0x00000000002DEB40 "hc"
 *   insn=0x00000000002DEB40 string=0x00000000002DEB44 "("
 *   insn=0x00000000002DEB4C string=0x00000000002DEB50 " k"
 *   insn=0x00000000002DEB50 string=0x00000000002DEB54 "@"
 *   insn=0x00000000002DEB54 string=0x00000000002DEB58 "h"
 *   insn=0x00000000002DEB60 string=0x00000000002DEB64 "h.@"
 *   insn=0x00000000002DEB70 string=0x00000000002DEB74 "`"
 *   insn=0x00000000002DEB78 string=0x00000000002DEB88 ""
 *   insn=0x00000000002DEB90 string=0x00000000002DEB94 "!"
 *   insn=0x00000000002DEBB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapZone::MergePartialFromCodedStream(
        Caver::Proto::MapZone *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  unsigned __int8 *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  _BYTE *v12; // x8
  int v13; // w10
  unsigned __int64 v14; // x8
  unsigned __int8 *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  __int64 *v18; // x1
  _QWORD *v19; // x0
  _BYTE *v20; // x9
  __int64 v21; // x0
  char *v22; // x8
  Caver::Proto::MapNode *v23; // x22
  int v24; // w8
  int v25; // w9
  int v26; // w23
  int v27; // w8
  bool v28; // vf
  int v29; // w8
  int v30; // w11
  __int64 *v31; // x1
  _QWORD *v32; // x0
  __int64 result; // x0
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v35; // [xsp+8h] [xbp-58h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (Caver::Proto::MapZone *)((char *)this + 32);
LABEL_2:
  while ( 1 )
  {
    v6 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || (char)*v6 < 0 )
      break;
    v7 = *v6;
    *((_DWORD *)a2 + 8) = v7;
    *((_QWORD *)a2 + 1) = v6 + 1;
    if ( !(_DWORD)v7 )
      return 1;
LABEL_7:
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_31;
        v10 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 26) |= 1u;
        if ( v10 == &Caver::Proto::MapZone::_default_name_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_24;
      case 2u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_31;
LABEL_24:
        v18 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 26) |= 2u;
        if ( v18 == &Caver::Proto::MapZone::_default_title_ )
        {
          v19 = (_QWORD *)operator new(8u);
          *v19 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v19;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v20 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 != 26 )
          continue;
        break;
      case 3u:
        v9 = v7 & 7;
        if ( v9 == 2 )
          goto LABEL_34;
        goto LABEL_31;
      case 4u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_31;
        v15 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v14 )
          goto LABEL_21;
        goto LABEL_48;
      case 5u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_31;
        v13 = *((_DWORD *)this + 26);
        goto LABEL_53;
      default:
        v9 = v7 & 7;
LABEL_31:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v7,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
    do
    {
      *((_QWORD *)a2 + 1) = v20 + 1;
LABEL_34:
      v21 = google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(v5);
      v22 = (char *)*((_QWORD *)a2 + 1);
      v23 = (Caver::Proto::MapNode *)v21;
      if ( (unsigned __int64)v22 >= *((_QWORD *)a2 + 2) || *v22 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
          return 0;
      }
      else
      {
        v34 = (unsigned __int8)*v22;
        *((_QWORD *)a2 + 1) = v22 + 1;
      }
      v24 = *((_DWORD *)a2 + 14);
      v25 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v24 + 1;
      if ( v24 >= v25 )
        return 0;
      v26 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
      if ( (Caver::Proto::MapNode::MergePartialFromCodedStream(v23, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(a2, v26);
      v27 = *((_DWORD *)a2 + 14);
      v28 = __OFSUB__(v27, 1);
      v29 = v27 - 1;
      if ( v29 < 0 == v28 )
        *((_DWORD *)a2 + 14) = v29;
      v20 = (_BYTE *)*((_QWORD *)a2 + 1);
      v14 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v20 >= v14 )
        goto LABEL_2;
    }
    while ( *v20 == 26 );
    if ( *v20 != 32 )
      continue;
    v15 = v20 + 1;
    *((_QWORD *)a2 + 1) = v15;
    if ( (unsigned __int64)v15 >= v14 )
    {
LABEL_48:
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
        return 0;
      v16 = v34;
      v17 = (_BYTE *)*((_QWORD *)a2 + 1);
      v14 = *((_QWORD *)a2 + 2);
      goto LABEL_50;
    }
LABEL_21:
    if ( (char)*v15 < 0 )
      goto LABEL_48;
    v16 = *v15;
    v17 = v15 + 1;
    v34 = v16;
    *((_QWORD *)a2 + 1) = v17;
LABEL_50:
    v30 = *((_DWORD *)this + 26);
    *((_DWORD *)this + 22) = v16;
    v13 = v30 | 8;
    *((_DWORD *)this + 26) = v30 | 8;
    if ( (unsigned __int64)v17 < v14 && *v17 == 42 )
    {
      *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_53:
      v31 = (__int64 *)*((_QWORD *)this + 12);
      *((_DWORD *)this + 26) = v13 | 0x10;
      if ( v31 == &Caver::Proto::MapZone::_default_music_ )
      {
        v32 = (_QWORD *)operator new(8u);
        *v32 = &byte_6FD2F8;
        *((_QWORD *)this + 12) = v32;
      }
      if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
        return 0;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
  v7 = TagFallback;
  *((_DWORD *)a2 + 8) = TagFallback;
  if ( TagFallback )
    goto LABEL_7;
  return 1;
}

