/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0E54
 * Mangled: _ZN5Caver5Proto10FloatColor27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 59
 *   insn=0x00000000002D0E64 string=0x00000000002D0E68 "U"
 *   insn=0x00000000002D0E80 string=0x00000000002D0E84 "h"
 *   insn=0x00000000002D0E88 string=0x00000000002D0E8C """
 *   insn=0x00000000002D0E8C string=0x00000000002D0E90 "\t"
 *   insn=0x00000000002D0E94 string=0x00000000002D0E98 "!"
 *   insn=0x00000000002D0E98 string=0x00000000002D0E9C ""
 *   insn=0x00000000002D0E9C string=0x00000000002D0EA0 "a""
 *   insn=0x00000000002D0EA0 string=0x00000000002D0EA4 "h"
 *   insn=0x00000000002D0EA8 string=0x00000000002D0EAC "f"
 *   insn=0x00000000002D0EA8 string=0x00000000002D0EC4 "(|"
 *   insn=0x00000000002D0EB4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D0EB8 string=0x00000000002D0EBC "a""
 *   insn=0x00000000002D0EBC string=0x00000000002D0EC0 "!"
 *   insn=0x00000000002D0EC4 string=0x00000000002D0EC8 ""
 *   insn=0x00000000002D0ED0 string=0x00000000002D1024 "("
 *   insn=0x00000000002D0ED4 string=0x00000000002D0ED8 ""
 *   insn=0x00000000002D0EDC string=0x00000000002D0EE0 "("
 *   insn=0x00000000002D0EDC string=0x00000000002D0F34 "("
 *   insn=0x00000000002D0EDC string=0x00000000002D0F44 "("
 *   insn=0x00000000002D0EDC string=0x00000000002D0F54 "("
 *   insn=0x00000000002D0EF4 string=0x00000000002D0EF8 " \n"
 *   insn=0x00000000002D0EF4 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002D0F04 string=0x00000000002D0F08 "("
 *   insn=0x00000000002D0F0C string=0x00000000002D0F10 "h"
 *   insn=0x00000000002D0F14 string=0x00000000002D0F18 "b"
 *   insn=0x00000000002D0F18 string=0x00000000002D0F1C "\t"
 *   insn=0x00000000002D0F1C string=0x00000000002D0F20 "?U"
 *   insn=0x00000000002D0F24 string=0x00000000002D0F28 ""
 *   insn=0x00000000002D0F28 string=0x00000000002D0F2C "h"
 *   insn=0x00000000002D0F38 string=0x00000000002D0F3C "@"
 *   insn=0x00000000002D0F3C string=0x00000000002D0F40 ":"
 *   insn=0x00000000002D0F4C string=0x00000000002D0F50 "6"
 *   insn=0x00000000002D0F58 string=0x00000000002D0F5C "a"
 *   insn=0x00000000002D0F78 string=0x00000000002D0F7C "("
 *   insn=0x00000000002D0F80 string=0x00000000002D0F84 "h"
 *   insn=0x00000000002D0F8C string=0x00000000002D0F90 "\t"
 *   insn=0x00000000002D0F90 string=0x00000000002D0F94 "?u"
 *   insn=0x00000000002D0F94 string=0x00000000002D0F98 "a"
 *   insn=0x00000000002D0F98 string=0x00000000002D0F9C ""
 *   insn=0x00000000002D0F9C string=0x00000000002D0FA0 "h"
 *   insn=0x00000000002D0FAC string=0x00000000002D0FB0 "`"
 *   insn=0x00000000002D0FBC string=0x00000000002D0FC0 "("
 *   insn=0x00000000002D0FC4 string=0x00000000002D0FC8 "h"
 *   insn=0x00000000002D0FD0 string=0x00000000002D0FD4 "\t"
 *   insn=0x00000000002D0FD4 string=0x00000000002D0FD8 "?"
 *   insn=0x00000000002D0FD8 string=0x00000000002D0FDC "A"
 *   insn=0x00000000002D0FDC string=0x00000000002D0FE0 ""
 *   insn=0x00000000002D0FE0 string=0x00000000002D0FE4 "h"
 *   insn=0x00000000002D0FF0 string=0x00000000002D0FF4 "@"
 *   insn=0x00000000002D1000 string=0x00000000002D1004 "("
 *   insn=0x00000000002D1008 string=0x00000000002D100C "h"
 *   insn=0x00000000002D1014 string=0x00000000002D1018 "h.@"
 *   insn=0x00000000002D1018 string=0x00000000002D101C "H"
 *   insn=0x00000000002D1030 string=0x00000000002D1034 "'"
 *   insn=0x00000000002D1034 string=0x00000000002D1038 "`"
 *   insn=0x00000000002D1034 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D1050 string=0x00000000002D1054 "A"
 *   insn=0x00000000002D1070 string=0x00000000002D1074 "`"
 *   insn=0x00000000002D107C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::MergePartialFromCodedStream(
        Caver::Proto::FloatColor *this,
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
  _BYTE *v12; // x8
  int v13; // w9
  _BYTE *v14; // x8
  int v15; // w9
  __int64 result; // x0
  unsigned int v17; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( v8 != 5 )
          goto LABEL_31;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v17;
        *((_DWORD *)this + 7) = v9 | 1;
        v10 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 != 21 )
          continue;
        *((_QWORD *)a2 + 1) = v10 + 1;
        goto LABEL_18;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
LABEL_18:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v11 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v17;
        *((_DWORD *)this + 7) = v11 | 2;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
LABEL_22:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v13 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v17;
        *((_DWORD *)this + 7) = v13 | 4;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v15 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 7) = v15 | 8;
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
          goto LABEL_31;
        goto LABEL_22;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        goto LABEL_26;
      default:
        v8 = v6 & 7;
LABEL_31:
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

