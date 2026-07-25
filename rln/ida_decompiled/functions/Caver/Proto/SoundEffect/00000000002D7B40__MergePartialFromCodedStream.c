/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7B40
 * Mangled: _ZN5Caver5Proto11SoundEffect27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F82D0  Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 70
 *   insn=0x00000000002D7B58 string=0x00000000002D7B5C "U"
 *   insn=0x00000000002D7B64 string=0x00000000002D7B68 "x "
 *   insn=0x00000000002D7B74 string=0x00000000002D7B78 "z "
 *   insn=0x00000000002D7B78 string=0x00000000002D7B7C "ZwC"
 *   insn=0x00000000002D7B80 string=0x000000000058A3AC "D"
 *   insn=0x00000000002D7B90 string=0x00000000002D7B94 "h"
 *   insn=0x00000000002D7B98 string=0x00000000002D7B9C """
 *   insn=0x00000000002D7B9C string=0x00000000002D7BA0 "\t"
 *   insn=0x00000000002D7BA4 string=0x00000000002D7BA8 "!"
 *   insn=0x00000000002D7BA8 string=0x00000000002D7BAC ""
 *   insn=0x00000000002D7BAC string=0x00000000002D7BB0 "a""
 *   insn=0x00000000002D7BB0 string=0x00000000002D7BB4 "h"
 *   insn=0x00000000002D7BB8 string=0x00000000002D7BBC "q"
 *   insn=0x00000000002D7BB8 string=0x00000000002D7BD4 "(|"
 *   insn=0x00000000002D7BC4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D7BC8 string=0x00000000002D7BCC "a""
 *   insn=0x00000000002D7BD4 string=0x00000000002D7BD8 ""
 *   insn=0x00000000002D7BDC string=0x00000000002D7BE0 ""
 *   insn=0x00000000002D7BE0 string=0x00000000002D7D60 "("
 *   insn=0x00000000002D7BE4 string=0x00000000002D7BE8 ""
 *   insn=0x00000000002D7BEC string=0x00000000002D7BF0 "("
 *   insn=0x00000000002D7BEC string=0x00000000002D7C58 "("
 *   insn=0x00000000002D7BEC string=0x00000000002D7C68 "("
 *   insn=0x00000000002D7BEC string=0x00000000002D7C78 "("
 *   insn=0x00000000002D7BF4 string=0x00000000002D7BF8 "a"
 *   insn=0x00000000002D7C00 string=0x00000000002D7C04 ""
 *   insn=0x00000000002D7C04 string=0x00000000002D7C08 "?"
 *   insn=0x00000000002D7C14 string=0x00000000002D7C18 "rv"
 *   insn=0x00000000002D7C18 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D7C1C string=0x00000000002D7C20 "9"
 *   insn=0x00000000002D7C2C string=0x00000000002D7C30 "@\n"
 *   insn=0x00000000002D7C2C string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D7C30 string=0x00000000002D7C34 "h"
 *   insn=0x00000000002D7C3C string=0x00000000002D7C40 "\t"
 *   insn=0x00000000002D7C40 string=0x00000000002D7C44 "?I"
 *   insn=0x00000000002D7C44 string=0x00000000002D7C48 "a"
 *   insn=0x00000000002D7C48 string=0x00000000002D7C4C ""
 *   insn=0x00000000002D7C4C string=0x00000000002D7C50 "h"
 *   insn=0x00000000002D7C60 string=0x00000000002D7C64 "@"
 *   insn=0x00000000002D7C70 string=0x00000000002D7C74 "<"
 *   insn=0x00000000002D7C7C string=0x00000000002D7C80 "!"
 *   insn=0x00000000002D7C88 string=0x00000000002D7C8C ""
 *   insn=0x00000000002D7C8C string=0x00000000002D7C90 "?"
 *   insn=0x00000000002D7C9C string=0x00000000002D7CA0 "Pv"
 *   insn=0x00000000002D7CA4 string=0x00000000002D7CA8 "c"
 *   insn=0x00000000002D7CA8 string=0x00000000002D7CAC "("
 *   insn=0x00000000002D7CBC string=0x00000000002D7CC0 "h"
 *   insn=0x00000000002D7CC4 string=0x00000000002D7CC8 "b"
 *   insn=0x00000000002D7CC8 string=0x00000000002D7CCC "\t"
 *   insn=0x00000000002D7CCC string=0x00000000002D7CD0 "?u"
 *   insn=0x00000000002D7CD4 string=0x00000000002D7CD8 ""
 *   insn=0x00000000002D7CD8 string=0x00000000002D7CDC "h"
 *   insn=0x00000000002D7CE8 string=0x00000000002D7CEC "`"
 *   insn=0x00000000002D7CE8 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002D7CF8 string=0x00000000002D7CFC "("
 *   insn=0x00000000002D7D00 string=0x00000000002D7D04 "h"
 *   insn=0x00000000002D7D08 string=0x00000000002D7D0C "B"
 *   insn=0x00000000002D7D0C string=0x00000000002D7D10 "\t"
 *   insn=0x00000000002D7D10 string=0x00000000002D7D14 "?"
 *   insn=0x00000000002D7D18 string=0x00000000002D7D1C ""
 *   insn=0x00000000002D7D1C string=0x00000000002D7D20 "h"
 *   insn=0x00000000002D7D2C string=0x00000000002D7D30 "@"
 *   insn=0x00000000002D7D3C string=0x00000000002D7D40 "("
 *   insn=0x00000000002D7D44 string=0x00000000002D7D48 "h"
 *   insn=0x00000000002D7D4C string=0x00000000002D7D50 "!"
 *   insn=0x00000000002D7D50 string=0x00000000002D7D54 "h.@"
 *   insn=0x00000000002D7D70 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D7D90 string=0x00000000002D7DC0 "Dy"
 *   insn=0x00000000002D7DB4 string=0x00000000002D7DB8 "`"
 *   insn=0x00000000002D7DC0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffect::MergePartialFromCodedStream(
        Caver::Proto::SoundEffect *this,
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
  __int64 *v12; // x1
  _QWORD *v13; // x0
  _BYTE *v14; // x8
  int v15; // w9
  _BYTE *v16; // x8
  int v17; // w9
  __int64 result; // x0
  unsigned int v19; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_35;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 10) |= 1u;
        if ( v9 == &Caver::Proto::SoundEffect::_default_name_ )
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
          goto LABEL_35;
LABEL_20:
        v12 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) |= 2u;
        if ( v12 == &Caver::Proto::SoundEffect::_default_resource_name_ )
        {
          v13 = (_QWORD *)operator new(8u);
          *v13 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v13;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v15 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 8) = v19;
        *((_DWORD *)this + 10) = v15 | 4;
        v16 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_30:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v17 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 9) = v19;
        *((_DWORD *)this + 10) = v17 | 8;
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
        if ( v8 != 5 )
          goto LABEL_35;
        goto LABEL_26;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_35;
        goto LABEL_30;
      default:
        v8 = v6 & 7;
LABEL_35:
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

