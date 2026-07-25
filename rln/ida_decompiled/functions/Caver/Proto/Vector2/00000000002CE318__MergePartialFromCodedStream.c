/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE318
 * Mangled: _ZN5Caver5Proto7Vector227MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 35
 *   insn=0x00000000002CE328 string=0x00000000002CE32C "U"
 *   insn=0x00000000002CE33C string=0x00000000002CE340 "h"
 *   insn=0x00000000002CE344 string=0x00000000002CE348 """
 *   insn=0x00000000002CE348 string=0x00000000002CE34C "\t"
 *   insn=0x00000000002CE350 string=0x00000000002CE354 "!"
 *   insn=0x00000000002CE354 string=0x00000000002CE358 ""
 *   insn=0x00000000002CE358 string=0x00000000002CE35C "a""
 *   insn=0x00000000002CE35C string=0x00000000002CE360 "h"
 *   insn=0x00000000002CE364 string=0x00000000002CE368 ":"
 *   insn=0x00000000002CE364 string=0x00000000002CE380 "(|"
 *   insn=0x00000000002CE370 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002CE374 string=0x00000000002CE378 "a""
 *   insn=0x00000000002CE388 string=0x00000000002CE3A4 "("
 *   insn=0x00000000002CE390 string=0x00000000002CE394 "("
 *   insn=0x00000000002CE390 string=0x00000000002CE430 "("
 *   insn=0x00000000002CE39C string=0x00000000002CE3A0 "%"
 *   insn=0x00000000002CE3A8 string=0x00000000002CE3AC "A"
 *   insn=0x00000000002CE3B8 string=0x00000000002CE3BC "`"
 *   insn=0x00000000002CE3B8 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002CE3C8 string=0x00000000002CE3CC "("
 *   insn=0x00000000002CE3D0 string=0x00000000002CE3D4 "h"
 *   insn=0x00000000002CE3D8 string=0x00000000002CE3DC """
 *   insn=0x00000000002CE3DC string=0x00000000002CE3E0 "\t"
 *   insn=0x00000000002CE3E0 string=0x00000000002CE3E4 "?U"
 *   insn=0x00000000002CE3E8 string=0x00000000002CE3EC ""
 *   insn=0x00000000002CE3EC string=0x00000000002CE3F0 "h"
 *   insn=0x00000000002CE3FC string=0x00000000002CE400 "@"
 *   insn=0x00000000002CE40C string=0x00000000002CE410 "("
 *   insn=0x00000000002CE414 string=0x00000000002CE418 "h"
 *   insn=0x00000000002CE420 string=0x00000000002CE424 "h.@"
 *   insn=0x00000000002CE43C string=0x00000000002CE440 "$"
 *   insn=0x00000000002CE440 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002CE45C string=0x00000000002CE460 "A"
 *   insn=0x00000000002CE47C string=0x00000000002CE480 "`"
 *   insn=0x00000000002CE488 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::MergePartialFromCodedStream(
        Caver::Proto::Vector2 *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w9
  _BYTE *v10; // x8
  int v11; // w9
  __int64 result; // x0
  unsigned int v13; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( v8 != 5 )
          goto LABEL_21;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v13) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 5);
        *((_DWORD *)this + 3) = v13;
        *((_DWORD *)this + 5) = v9 | 1;
        v10 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 < *((_QWORD *)a2 + 2) && *v10 == 21 )
        {
          *((_QWORD *)a2 + 1) = v10 + 1;
          goto LABEL_16;
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
LABEL_16:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v13) & 1) == 0 )
        return 0;
      v11 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 4) = v13;
      *((_DWORD *)this + 5) = v11 | 2;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
LABEL_21:
    if ( v8 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

