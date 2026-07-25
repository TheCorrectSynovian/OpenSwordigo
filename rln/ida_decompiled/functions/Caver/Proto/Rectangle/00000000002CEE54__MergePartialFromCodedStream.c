/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEE54
 * Mangled: _ZN5Caver5Proto9Rectangle27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 59
 *   insn=0x00000000002CEE64 string=0x00000000002CEE68 "U"
 *   insn=0x00000000002CEE80 string=0x00000000002CEE84 "h"
 *   insn=0x00000000002CEE88 string=0x00000000002CEE8C """
 *   insn=0x00000000002CEE8C string=0x00000000002CEE90 "\t"
 *   insn=0x00000000002CEE94 string=0x00000000002CEE98 "!"
 *   insn=0x00000000002CEE98 string=0x00000000002CEE9C ""
 *   insn=0x00000000002CEE9C string=0x00000000002CEEA0 "a""
 *   insn=0x00000000002CEEA0 string=0x00000000002CEEA4 "h"
 *   insn=0x00000000002CEEA8 string=0x00000000002CEEAC "f"
 *   insn=0x00000000002CEEA8 string=0x00000000002CEEC4 "(|"
 *   insn=0x00000000002CEEB4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002CEEB8 string=0x00000000002CEEBC "a""
 *   insn=0x00000000002CEEBC string=0x00000000002CEEC0 "!"
 *   insn=0x00000000002CEEC4 string=0x00000000002CEEC8 ""
 *   insn=0x00000000002CEED0 string=0x00000000002CF024 "("
 *   insn=0x00000000002CEED4 string=0x00000000002CEED8 ""
 *   insn=0x00000000002CEEDC string=0x00000000002CEEE0 "("
 *   insn=0x00000000002CEEDC string=0x00000000002CEF34 "("
 *   insn=0x00000000002CEEDC string=0x00000000002CEF44 "("
 *   insn=0x00000000002CEEDC string=0x00000000002CEF54 "("
 *   insn=0x00000000002CEEF4 string=0x00000000002CEEF8 " \n"
 *   insn=0x00000000002CEEF4 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002CEF04 string=0x00000000002CEF08 "("
 *   insn=0x00000000002CEF0C string=0x00000000002CEF10 "h"
 *   insn=0x00000000002CEF14 string=0x00000000002CEF18 "b"
 *   insn=0x00000000002CEF18 string=0x00000000002CEF1C "\t"
 *   insn=0x00000000002CEF1C string=0x00000000002CEF20 "?U"
 *   insn=0x00000000002CEF24 string=0x00000000002CEF28 ""
 *   insn=0x00000000002CEF28 string=0x00000000002CEF2C "h"
 *   insn=0x00000000002CEF38 string=0x00000000002CEF3C "@"
 *   insn=0x00000000002CEF3C string=0x00000000002CEF40 ":"
 *   insn=0x00000000002CEF4C string=0x00000000002CEF50 "6"
 *   insn=0x00000000002CEF58 string=0x00000000002CEF5C "a"
 *   insn=0x00000000002CEF78 string=0x00000000002CEF7C "("
 *   insn=0x00000000002CEF80 string=0x00000000002CEF84 "h"
 *   insn=0x00000000002CEF8C string=0x00000000002CEF90 "\t"
 *   insn=0x00000000002CEF90 string=0x00000000002CEF94 "?u"
 *   insn=0x00000000002CEF94 string=0x00000000002CEF98 "a"
 *   insn=0x00000000002CEF98 string=0x00000000002CEF9C ""
 *   insn=0x00000000002CEF9C string=0x00000000002CEFA0 "h"
 *   insn=0x00000000002CEFAC string=0x00000000002CEFB0 "`"
 *   insn=0x00000000002CEFBC string=0x00000000002CEFC0 "("
 *   insn=0x00000000002CEFC4 string=0x00000000002CEFC8 "h"
 *   insn=0x00000000002CEFD0 string=0x00000000002CEFD4 "\t"
 *   insn=0x00000000002CEFD4 string=0x00000000002CEFD8 "?"
 *   insn=0x00000000002CEFD8 string=0x00000000002CEFDC "A"
 *   insn=0x00000000002CEFDC string=0x00000000002CEFE0 ""
 *   insn=0x00000000002CEFE0 string=0x00000000002CEFE4 "h"
 *   insn=0x00000000002CEFF0 string=0x00000000002CEFF4 "@"
 *   insn=0x00000000002CF000 string=0x00000000002CF004 "("
 *   insn=0x00000000002CF008 string=0x00000000002CF00C "h"
 *   insn=0x00000000002CF014 string=0x00000000002CF018 "h.@"
 *   insn=0x00000000002CF018 string=0x00000000002CF01C "H"
 *   insn=0x00000000002CF030 string=0x00000000002CF034 "'"
 *   insn=0x00000000002CF034 string=0x00000000002CF038 "`"
 *   insn=0x00000000002CF034 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002CF050 string=0x00000000002CF054 "A"
 *   insn=0x00000000002CF070 string=0x00000000002CF074 "`"
 *   insn=0x00000000002CF07C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Rectangle::MergePartialFromCodedStream(
        Caver::Proto::Rectangle *this,
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

