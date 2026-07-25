/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BA24
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::HeroEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x000000000031BBDC  Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x000000000031BA38 string=0x000000000031BA3C "W"
 *   insn=0x000000000031BA4C string=0x000000000031BA50 "h"
 *   insn=0x000000000031BA54 string=0x000000000031BA58 """
 *   insn=0x000000000031BA58 string=0x000000000031BA5C "\t"
 *   insn=0x000000000031BA60 string=0x000000000031BA64 "!"
 *   insn=0x000000000031BA64 string=0x000000000031BA68 ""
 *   insn=0x000000000031BA68 string=0x000000000031BA6C "a""
 *   insn=0x000000000031BA6C string=0x000000000031BA70 "h"
 *   insn=0x000000000031BA70 string=0x000000000031BA74 "?("
 *   insn=0x000000000031BA7C string=0x000000000031BA80 "("
 *   insn=0x000000000031BA90 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031BA94 string=0x000000000031BA98 ">"
 *   insn=0x000000000031BAA0 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031BAA4 string=0x000000000031BAA8 "a""
 *   insn=0x000000000031BAA8 string=0x000000000031BAAC "?("
 *   insn=0x000000000031BAAC string=0x000000000031BAB0 "a"
 *   insn=0x000000000031BAB8 string=0x000000000031BABC ""
 *   insn=0x000000000031BAC4 string=0x000000000031BADC "h"
 *   insn=0x000000000031BACC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031BAD0 string=0x000000000031BAD4 "Ke"
 *   insn=0x000000000031BAD4 string=0x00000000001F5000 "P'"
 *   insn=0x000000000031BAE4 string=0x000000000031BAE8 "\t"
 *   insn=0x000000000031BAEC string=0x000000000031BAF0 ")"
 *   insn=0x000000000031BAF0 string=0x000000000031BAF4 ""
 *   insn=0x000000000031BAF8 string=0x000000000031BAFC "h"
 *   insn=0x000000000031BB00 string=0x000000000031BB14 "h&G)\n"
 *   insn=0x000000000031BB08 string=0x000000000031BB0C "Qu"
 *   insn=0x000000000031BB0C string=0x00000000001F9050 "0'"
 *   insn=0x000000000031BB14 string=0x000000000031BB18 "\n"
 *   insn=0x000000000031BB1C string=0x000000000031BB20 "j:"
 *   insn=0x000000000031BB20 string=0x000000000031BB24 "j"
 *   insn=0x000000000031BB3C string=0x000000000031BB40 "xt"
 *   insn=0x000000000031BB40 string=0x000000000031BB44 "`"
 *   insn=0x000000000031BB40 string=0x00000000001F8D20 "0'"
 *   insn=0x000000000031BB44 string=0x000000000031BB48 "h"
 *   insn=0x000000000031BB48 string=0x000000000031BB4C "("
 *   insn=0x000000000031BB58 string=0x000000000031BB5C "h:@"
 *   insn=0x000000000031BB5C string=0x000000000031BB60 ""
 *   insn=0x000000000031BB60 string=0x000000000031BB64 "K"
 *   insn=0x000000000031BB64 string=0x000000000031BB68 "h:"
 *   insn=0x000000000031BB64 string=0x000000000031BB6C "h"
 *   insn=0x000000000031BB74 string=0x000000000031BB78 "h.@"
 *   insn=0x000000000031BB84 string=0x000000000031BB88 "`"
 *   insn=0x000000000031BBC4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031BBD0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031BBD4 string=0x000000000031BBD8 ";"
 *   insn=0x000000000031BBD8 string=0x000000000031BBDC "\t`@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::MergePartialFromCodedStream(
        Caver::Proto::HeroEntityComponent *this,
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

