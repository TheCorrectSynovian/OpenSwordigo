/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033712C
 * Mangled: _ZN5Caver5Proto14SpellComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SpellComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000003372E4  Caver::Proto::SpellComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000337140 string=0x0000000000337144 "W"
 *   insn=0x0000000000337154 string=0x0000000000337158 "h"
 *   insn=0x000000000033715C string=0x0000000000337160 """
 *   insn=0x0000000000337160 string=0x0000000000337164 "\t"
 *   insn=0x0000000000337168 string=0x000000000033716C "!"
 *   insn=0x000000000033716C string=0x0000000000337170 ""
 *   insn=0x0000000000337170 string=0x0000000000337174 "a""
 *   insn=0x0000000000337174 string=0x0000000000337178 "h"
 *   insn=0x0000000000337178 string=0x000000000033717C "?("
 *   insn=0x0000000000337184 string=0x0000000000337188 "("
 *   insn=0x0000000000337198 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000033719C string=0x00000000003371A0 ">"
 *   insn=0x00000000003371A4 string=0x00000000003371A8 "&"
 *   insn=0x00000000003371A8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003371AC string=0x00000000003371B0 "a""
 *   insn=0x00000000003371B0 string=0x00000000003371B4 "?("
 *   insn=0x00000000003371B4 string=0x00000000003371B8 "a"
 *   insn=0x00000000003371C0 string=0x00000000003371C4 ""
 *   insn=0x00000000003371CC string=0x00000000003371E4 "h"
 *   insn=0x00000000003371D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003371DC string=0x00000000001F5000 "P'"
 *   insn=0x00000000003371EC string=0x00000000003371F0 "\t"
 *   insn=0x00000000003371F4 string=0x00000000003371F8 ")"
 *   insn=0x00000000003371F8 string=0x00000000003371FC ""
 *   insn=0x0000000000337200 string=0x0000000000337204 "h"
 *   insn=0x0000000000337208 string=0x000000000033721C "h&G)\n"
 *   insn=0x0000000000337214 string=0x00000000001F9050 "0'"
 *   insn=0x000000000033721C string=0x0000000000337220 "\n"
 *   insn=0x0000000000337224 string=0x0000000000337228 "j:"
 *   insn=0x0000000000337228 string=0x000000000033722C "j"
 *   insn=0x0000000000337248 string=0x000000000033724C "`"
 *   insn=0x0000000000337248 string=0x00000000001F8D20 "0'"
 *   insn=0x000000000033724C string=0x0000000000337250 "h"
 *   insn=0x0000000000337250 string=0x0000000000337254 "("
 *   insn=0x0000000000337260 string=0x0000000000337264 "h:@"
 *   insn=0x0000000000337264 string=0x0000000000337268 ""
 *   insn=0x0000000000337268 string=0x000000000033726C "K"
 *   insn=0x000000000033726C string=0x0000000000337270 "h:"
 *   insn=0x000000000033726C string=0x0000000000337274 "h"
 *   insn=0x000000000033727C string=0x0000000000337280 "h.@"
 *   insn=0x000000000033728C string=0x0000000000337290 "`"
 *   insn=0x00000000003372CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003372D8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003372DC string=0x00000000003372E0 "y)\t"
 *   insn=0x00000000003372E0 string=0x00000000003372E4 "\t`@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::MergePartialFromCodedStream(
        Caver::Proto::SpellComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  Caver::Proto::Program *v8; // x21
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
      v8 = (Caver::Proto::Program *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 6) |= 1u;
      if ( !v8 )
      {
        v8 = (Caver::Proto::Program *)operator new(0x30u);
        Caver::Proto::Program::Program(v8);
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
      if ( (Caver::Proto::Program::MergePartialFromCodedStream(v8, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
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

