/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C940
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x000000000032CAF8  Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x000000000032C954 string=0x000000000032C958 "W"
 *   insn=0x000000000032C968 string=0x000000000032C96C "h"
 *   insn=0x000000000032C970 string=0x000000000032C974 """
 *   insn=0x000000000032C974 string=0x000000000032C978 "\t"
 *   insn=0x000000000032C97C string=0x000000000032C980 "!"
 *   insn=0x000000000032C980 string=0x000000000032C984 ""
 *   insn=0x000000000032C984 string=0x000000000032C988 "a""
 *   insn=0x000000000032C988 string=0x000000000032C98C "h"
 *   insn=0x000000000032C98C string=0x000000000032C990 "?("
 *   insn=0x000000000032C998 string=0x000000000032C99C "("
 *   insn=0x000000000032C9AC string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032C9B0 string=0x000000000032C9B4 ">"
 *   insn=0x000000000032C9B8 string=0x000000000032C9BC "!,"
 *   insn=0x000000000032C9BC string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032C9C0 string=0x000000000032C9C4 "a""
 *   insn=0x000000000032C9C4 string=0x000000000032C9C8 "?("
 *   insn=0x000000000032C9C8 string=0x000000000032C9CC "a"
 *   insn=0x000000000032C9D4 string=0x000000000032C9D8 ""
 *   insn=0x000000000032C9E0 string=0x000000000032C9F8 "h"
 *   insn=0x000000000032C9E8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032C9EC string=0x000000000032C9F0 "L"
 *   insn=0x000000000032C9F0 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000032CA00 string=0x000000000032CA04 "\t"
 *   insn=0x000000000032CA08 string=0x000000000032CA0C ")"
 *   insn=0x000000000032CA0C string=0x000000000032CA10 ""
 *   insn=0x000000000032CA14 string=0x000000000032CA18 "h"
 *   insn=0x000000000032CA1C string=0x000000000032CA30 "h&G)\n"
 *   insn=0x000000000032CA28 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032CA30 string=0x000000000032CA34 "\n"
 *   insn=0x000000000032CA38 string=0x000000000032CA3C "j:"
 *   insn=0x000000000032CA3C string=0x000000000032CA40 "j"
 *   insn=0x000000000032CA5C string=0x000000000032CA60 "`"
 *   insn=0x000000000032CA60 string=0x000000000032CA64 "h"
 *   insn=0x000000000032CA64 string=0x000000000032CA68 "("
 *   insn=0x000000000032CA74 string=0x000000000032CA78 "h:@"
 *   insn=0x000000000032CA78 string=0x000000000032CA7C ""
 *   insn=0x000000000032CA7C string=0x000000000032CA80 "K"
 *   insn=0x000000000032CA80 string=0x000000000032CA84 "h:"
 *   insn=0x000000000032CA80 string=0x000000000032CA88 "h"
 *   insn=0x000000000032CA90 string=0x000000000032CA94 "h.@"
 *   insn=0x000000000032CAA0 string=0x000000000032CAA4 "`"
 *   insn=0x000000000032CAE0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032CAEC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032CAF0 string=0x000000000032CAF4 "tS\t"
 *   insn=0x000000000032CAF4 string=0x000000000032CAF8 "\t`@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream(
        Caver::Proto::WeaponTrailComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  Caver::Proto::FloatColor *v8; // x21
  char *v9; // x8
  int v10; // w8
  int v11; // w9
  int v12; // w22
  int v13; // w8
  bool v14; // vf
  int v15; // w8
  __int64 result; // x0
  unsigned int v17; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && ((char)*v5 & 0x80000000) == 0 )
        break;
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback != 10 )
        goto LABEL_5;
LABEL_10:
      v8 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 6) |= 1u;
      if ( !v8 )
      {
        v8 = (Caver::Proto::FloatColor *)operator new(0x20u);
        Caver::Proto::FloatColor::FloatColor(v8);
        *((_QWORD *)this + 2) = v8;
      }
      v9 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || *v9 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v17) & 1) == 0 )
          return 0;
      }
      else
      {
        v17 = (unsigned __int8)*v9;
        *((_QWORD *)a2 + 1) = v9 + 1;
      }
      v10 = *((_DWORD *)a2 + 14);
      v11 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v10 + 1;
      if ( v10 >= v11 )
        return 0;
      v12 = google::protobuf::io::CodedInputStream::PushLimit(a2, v17);
      if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v8, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(a2, v12);
      v13 = *((_DWORD *)a2 + 14);
      v14 = __OFSUB__(v13, 1);
      v15 = v13 - 1;
      if ( v15 < 0 == v14 )
        *((_DWORD *)a2 + 14) = v15;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v6 = *v5;
    *((_DWORD *)a2 + 8) = v6;
    *((_QWORD *)a2 + 1) = v5 + 1;
    if ( (_DWORD)v6 == 10 )
      goto LABEL_10;
LABEL_5:
    if ( !(_DWORD)v6 || (v6 & 7) == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

