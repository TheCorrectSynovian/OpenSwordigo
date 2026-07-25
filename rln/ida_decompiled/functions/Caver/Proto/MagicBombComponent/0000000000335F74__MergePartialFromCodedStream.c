/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335F74
 * Mangled: _ZN5Caver5Proto18MagicBombComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MagicBombComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x000000000033612C  Caver::Proto::MagicBombComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x0000000000335F88 string=0x0000000000335F8C "W"
 *   insn=0x0000000000335F9C string=0x0000000000335FA0 "h"
 *   insn=0x0000000000335FA4 string=0x0000000000335FA8 """
 *   insn=0x0000000000335FA8 string=0x0000000000335FAC "\t"
 *   insn=0x0000000000335FB0 string=0x0000000000335FB4 "!"
 *   insn=0x0000000000335FB4 string=0x0000000000335FB8 ""
 *   insn=0x0000000000335FB8 string=0x0000000000335FBC "a""
 *   insn=0x0000000000335FBC string=0x0000000000335FC0 "h"
 *   insn=0x0000000000335FC0 string=0x0000000000335FC4 "?("
 *   insn=0x0000000000335FCC string=0x0000000000335FD0 "("
 *   insn=0x0000000000335FDC string=0x0000000000335FE0 "<"
 *   insn=0x0000000000335FE0 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000335FE4 string=0x0000000000335FE8 ">"
 *   insn=0x0000000000335FF0 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000335FF4 string=0x0000000000335FF8 "a""
 *   insn=0x0000000000335FF8 string=0x0000000000335FFC "?("
 *   insn=0x0000000000335FFC string=0x0000000000336000 "a"
 *   insn=0x0000000000336008 string=0x000000000033600C ""
 *   insn=0x0000000000336014 string=0x000000000033602C "h"
 *   insn=0x0000000000336018 string=0x000000000033601C "q"
 *   insn=0x000000000033601C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000336024 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000336034 string=0x0000000000336038 "\t"
 *   insn=0x000000000033603C string=0x0000000000336040 ")"
 *   insn=0x0000000000336040 string=0x0000000000336044 ""
 *   insn=0x0000000000336048 string=0x000000000033604C "h"
 *   insn=0x0000000000336050 string=0x0000000000336064 "h&G)\n"
 *   insn=0x000000000033605C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000336064 string=0x0000000000336068 "\n"
 *   insn=0x000000000033606C string=0x0000000000336070 "j:"
 *   insn=0x0000000000336070 string=0x0000000000336074 "j"
 *   insn=0x000000000033607C string=0x0000000000336080 "@2"
 *   insn=0x0000000000336090 string=0x0000000000336094 "`"
 *   insn=0x0000000000336094 string=0x0000000000336098 "h"
 *   insn=0x0000000000336098 string=0x000000000033609C "("
 *   insn=0x00000000003360A4 string=0x00000000003360A8 "Z3"
 *   insn=0x00000000003360A8 string=0x00000000003360AC "h:@"
 *   insn=0x00000000003360AC string=0x00000000003360B0 ""
 *   insn=0x00000000003360B0 string=0x00000000003360B4 "K"
 *   insn=0x00000000003360B4 string=0x00000000003360B8 "h:"
 *   insn=0x00000000003360B4 string=0x00000000003360BC "h"
 *   insn=0x00000000003360C4 string=0x00000000003360C8 "h.@"
 *   insn=0x00000000003360D4 string=0x00000000003360D8 "`"
 *   insn=0x00000000003360F8 string=0x0000000000336114 "o"
 *   insn=0x0000000000336114 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033611C string=0x0000000000336120 "d"
 *   insn=0x0000000000336120 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000336128 string=0x000000000033612C "\t`@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::MergePartialFromCodedStream(
        Caver::Proto::MagicBombComponent *this,
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

