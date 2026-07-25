/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311390
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SoundEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 * Referenced strings: 55
 *   insn=0x00000000003113A4 string=0x00000000003113A8 "U"
 *   insn=0x00000000003113B8 string=0x00000000003113BC ")"
 *   insn=0x00000000003113C8 string=0x00000000003113CC "7a"
 *   insn=0x00000000003113CC string=0x00000000003113D0 "h"
 *   insn=0x00000000003113D4 string=0x00000000003113D8 """
 *   insn=0x00000000003113D8 string=0x00000000003113DC "\t"
 *   insn=0x00000000003113E0 string=0x00000000003113E4 "!"
 *   insn=0x00000000003113E4 string=0x00000000003113E8 ""
 *   insn=0x00000000003113E8 string=0x00000000003113EC "a""
 *   insn=0x00000000003113EC string=0x00000000003113F0 "h"
 *   insn=0x00000000003113F4 string=0x00000000003113F8 "V"
 *   insn=0x00000000003113F4 string=0x0000000000311410 "(|"
 *   insn=0x0000000000311400 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000311404 string=0x0000000000311408 "a""
 *   insn=0x0000000000311408 string=0x000000000031140C "!\n"
 *   insn=0x0000000000311418 string=0x000000000031144C "("
 *   insn=0x0000000000311420 string=0x000000000031143C "("
 *   insn=0x0000000000311424 string=0x0000000000311428 "A"
 *   insn=0x0000000000311428 string=0x000000000031142C "("
 *   insn=0x0000000000311428 string=0x0000000000311530 "("
 *   insn=0x0000000000311434 string=0x0000000000311438 "?"
 *   insn=0x0000000000311440 string=0x0000000000311444 "`"
 *   insn=0x0000000000311444 string=0x0000000000311448 ";"
 *   insn=0x000000000031145C string=0x0000000000311460 ""
 *   insn=0x0000000000311460 string=0x0000000000311464 "?"
 *   insn=0x0000000000311470 string=0x0000000000311474 "["
 *   insn=0x0000000000311474 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000311478 string=0x000000000031147C "7"
 *   insn=0x0000000000311488 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000031148C string=0x0000000000311490 "h"
 *   insn=0x0000000000311498 string=0x000000000031149C "\t"
 *   insn=0x000000000031149C string=0x00000000003114A0 "?U"
 *   insn=0x00000000003114A0 string=0x00000000003114A4 "a"
 *   insn=0x00000000003114A4 string=0x00000000003114A8 ""
 *   insn=0x00000000003114A8 string=0x00000000003114AC "h"
 *   insn=0x00000000003114B8 string=0x00000000003114BC "`"
 *   insn=0x00000000003114B8 string=0x00000000001FA750 "0'"
 *   insn=0x00000000003114C8 string=0x00000000003114CC "("
 *   insn=0x00000000003114D0 string=0x00000000003114D4 "h"
 *   insn=0x00000000003114DC string=0x00000000003114E0 "\t"
 *   insn=0x00000000003114E0 string=0x00000000003114E4 "?u"
 *   insn=0x00000000003114E4 string=0x00000000003114E8 "A"
 *   insn=0x00000000003114E8 string=0x00000000003114EC ""
 *   insn=0x00000000003114EC string=0x00000000003114F0 "h"
 *   insn=0x00000000003114FC string=0x0000000000311500 "@"
 *   insn=0x000000000031150C string=0x0000000000311510 "("
 *   insn=0x0000000000311514 string=0x0000000000311518 "h"
 *   insn=0x0000000000311520 string=0x0000000000311524 "h.@"
 *   insn=0x0000000000311524 string=0x0000000000311528 "H"
 *   insn=0x0000000000311540 string=0x0000000000311544 "`"
 *   insn=0x0000000000311540 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031155C string=0x0000000000311560 "a"
 *   insn=0x0000000000311560 string=0x000000000031158C "Q"
 *   insn=0x0000000000311580 string=0x0000000000311584 "`"
 *   insn=0x000000000031158C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::MergePartialFromCodedStream(
        Caver::Proto::SoundEffectComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  _BYTE *v12; // x8
  int v13; // w9
  _BYTE *v14; // x8
  int v15; // w9
  __int64 result; // x0
  unsigned int v17; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( v9 != 2 )
          goto LABEL_30;
        v10 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 8) |= 1u;
        if ( v10 == &Caver::Proto::SoundEffectComponent::_default_name_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 < *((_QWORD *)a2 + 2) && *v12 == 21 )
        {
          *((_QWORD *)a2 + 1) = v12 + 1;
LABEL_21:
          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
            return 0;
          v13 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 7) = v17;
          *((_DWORD *)this + 8) = v13 | 4;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v14 < *((_QWORD *)a2 + 2) && *v14 == 29 )
          {
            *((_QWORD *)a2 + 1) = v14 + 1;
            goto LABEL_25;
          }
        }
      }
      if ( v8 == 2 )
      {
        v9 = v6 & 7;
        if ( v9 != 5 )
          break;
        goto LABEL_21;
      }
      if ( v8 != 3 )
      {
        v9 = v6 & 7;
        break;
      }
      v9 = v6 & 7;
      if ( v9 != 5 )
        break;
LABEL_25:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
        return 0;
      v15 = *((_DWORD *)this + 8);
      *((_DWORD *)this + 6) = v17;
      *((_DWORD *)this + 8) = v15 | 2;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
LABEL_30:
    if ( v9 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

