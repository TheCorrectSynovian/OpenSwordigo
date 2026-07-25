/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F87C
 * Mangled: _ZN5Caver5Proto17ParticleComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ParticleComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 49
 *   insn=0x000000000031F890 string=0x000000000031F894 "U"
 *   insn=0x000000000031F894 string=0x000000000031F898 "6"
 *   insn=0x000000000031F898 string=0x000000000031F89C ")"
 *   insn=0x000000000031F8A4 string=0x000000000031F8A8 ")"
 *   insn=0x000000000031F8B4 string=0x000000000031F8B8 "7a"
 *   insn=0x000000000031F8B8 string=0x000000000031F8BC "h"
 *   insn=0x000000000031F8C0 string=0x000000000031F8C4 """
 *   insn=0x000000000031F8C4 string=0x000000000031F8C8 "\t"
 *   insn=0x000000000031F8CC string=0x000000000031F8D0 "!"
 *   insn=0x000000000031F8D0 string=0x000000000031F8D4 ""
 *   insn=0x000000000031F8D4 string=0x000000000031F8D8 "a""
 *   insn=0x000000000031F8D8 string=0x000000000031F8DC "h"
 *   insn=0x000000000031F8E0 string=0x000000000031F8E4 "?"
 *   insn=0x000000000031F8E0 string=0x000000000031F8FC "(|"
 *   insn=0x000000000031F8E8 string=0x000000000031F8EC "U`"
 *   insn=0x000000000031F8EC string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031F8F0 string=0x000000000031F8F4 "a""
 *   insn=0x000000000031F8F4 string=0x000000000031F8F8 "A"
 *   insn=0x000000000031F904 string=0x000000000031F920 "("
 *   insn=0x000000000031F90C string=0x000000000031F910 "("
 *   insn=0x000000000031F90C string=0x000000000031F9C0 "("
 *   insn=0x000000000031F914 string=0x000000000031F918 "`"
 *   insn=0x000000000031F918 string=0x000000000031F91C "*"
 *   insn=0x000000000031F930 string=0x000000000031F934 ""
 *   insn=0x000000000031F934 string=0x000000000031F938 "?"
 *   insn=0x000000000031F944 string=0x000000000031F948 "&W"
 *   insn=0x000000000031F948 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031F94C string=0x000000000031F950 "7"
 *   insn=0x000000000031F95C string=0x00000000001F97D0 "0'"
 *   insn=0x000000000031F960 string=0x000000000031F964 "h"
 *   insn=0x000000000031F96C string=0x000000000031F970 "\t"
 *   insn=0x000000000031F970 string=0x000000000031F974 "?U"
 *   insn=0x000000000031F974 string=0x000000000031F978 "!"
 *   insn=0x000000000031F978 string=0x000000000031F97C ""
 *   insn=0x000000000031F97C string=0x000000000031F980 "h"
 *   insn=0x000000000031F988 string=0x000000000031F98C "qk"
 *   insn=0x000000000031F98C string=0x000000000031F990 "@"
 *   insn=0x000000000031F98C string=0x00000000001FA750 "0'"
 *   insn=0x000000000031F99C string=0x000000000031F9A0 "("
 *   insn=0x000000000031F9A4 string=0x000000000031F9A8 "h"
 *   insn=0x000000000031F9AC string=0x000000000031F9B0 "a"
 *   insn=0x000000000031F9B0 string=0x000000000031F9B4 "h.@"
 *   insn=0x000000000031F9B4 string=0x000000000031F9B8 "("
 *   insn=0x000000000031F9D0 string=0x000000000031F9D4 "@"
 *   insn=0x000000000031F9D0 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031F9EC string=0x000000000031F9F0 "a"
 *   insn=0x000000000031F9F0 string=0x000000000031FA1C "-Z"
 *   insn=0x000000000031FA10 string=0x000000000031FA14 "`"
 *   insn=0x000000000031FA1C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::MergePartialFromCodedStream(
        Caver::Proto::ParticleComponent *this,
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
  int v12; // w9
  __int64 result; // x0
  unsigned int v14; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v15; // [xsp+8h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
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
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_23;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 7) |= 1u;
        if ( v9 == &Caver::Proto::ParticleComponent::_default_texture_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) && *v11 == 21 )
        {
          *((_QWORD *)a2 + 1) = v11 + 1;
          goto LABEL_18;
        }
      }
      if ( (unsigned int)v6 >> 3 != 2 )
      {
        v8 = v6 & 7;
        break;
      }
      v8 = v6 & 7;
      if ( v8 != 5 )
        break;
LABEL_18:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v14) & 1) == 0 )
        return 0;
      v12 = *((_DWORD *)this + 7);
      *((_DWORD *)this + 6) = v14;
      *((_DWORD *)this + 7) = v12 | 2;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
LABEL_23:
    if ( v8 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

