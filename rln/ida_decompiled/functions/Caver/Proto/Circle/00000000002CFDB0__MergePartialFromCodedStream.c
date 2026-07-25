/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFDB0
 * Mangled: _ZN5Caver5Proto6Circle27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Circle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000201B20  Caver::Proto::Circle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 58
 *   insn=0x00000000002CFDC4 string=0x00000000002CFDC8 "W"
 *   insn=0x00000000002CFDD0 string=0x00000000002CFDD4 ")"
 *   insn=0x00000000002CFDE0 string=0x00000000002CFDE4 "8A"
 *   insn=0x00000000002CFDE4 string=0x00000000002CFDE8 "h"
 *   insn=0x00000000002CFDEC string=0x00000000002CFDF0 """
 *   insn=0x00000000002CFDF0 string=0x00000000002CFDF4 "\t"
 *   insn=0x00000000002CFDF8 string=0x00000000002CFDFC "!"
 *   insn=0x00000000002CFDFC string=0x00000000002CFE00 ""
 *   insn=0x00000000002CFE00 string=0x00000000002CFE04 "a""
 *   insn=0x00000000002CFE04 string=0x00000000002CFE08 "h"
 *   insn=0x00000000002CFE0C string=0x00000000002CFE10 "b"
 *   insn=0x00000000002CFE0C string=0x00000000002CFE28 "(|"
 *   insn=0x00000000002CFE14 string=0x00000000002CFE18 "\n"
 *   insn=0x00000000002CFE18 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002CFE1C string=0x00000000002CFE20 "a""
 *   insn=0x00000000002CFE30 string=0x00000000002CFE4C "("
 *   insn=0x00000000002CFE38 string=0x00000000002CFE3C "("
 *   insn=0x00000000002CFE38 string=0x00000000002CFEAC "("
 *   insn=0x00000000002CFE40 string=0x00000000002CFE44 "a"
 *   insn=0x00000000002CFE44 string=0x00000000002CFE48 "B"
 *   insn=0x00000000002CFE5C string=0x00000000002CFE60 ""
 *   insn=0x00000000002CFE68 string=0x00000000002CFE84 "h"
 *   insn=0x00000000002CFE70 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CFE8C string=0x00000000002CFE90 "\t"
 *   insn=0x00000000002CFE94 string=0x00000000002CFE98 ")"
 *   insn=0x00000000002CFE98 string=0x00000000002CFE9C ""
 *   insn=0x00000000002CFEA0 string=0x00000000002CFEA4 "h"
 *   insn=0x00000000002CFEA8 string=0x00000000002CFED8 "h&G)\n"
 *   insn=0x00000000002CFEB0 string=0x00000000002CFEB4 " "
 *   insn=0x00000000002CFEBC string=0x00000000002CFEC0 "@"
 *   insn=0x00000000002CFEBC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002CFEC0 string=0x00000000002CFEC4 "7"
 *   insn=0x00000000002CFECC string=0x00000000002CFED0 "`"
 *   insn=0x00000000002CFED0 string=0x00000000002CFED4 "`"
 *   insn=0x00000000002CFED0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002CFED8 string=0x00000000002CFEDC "\n"
 *   insn=0x00000000002CFEE0 string=0x00000000002CFEE4 "j:"
 *   insn=0x00000000002CFF04 string=0x00000000001F5710 "P'"
 *   insn=0x00000000002CFF08 string=0x00000000002CFF0C "h"
 *   insn=0x00000000002CFF1C string=0x00000000002CFF20 "h:@"
 *   insn=0x00000000002CFF20 string=0x00000000002CFF24 ""
 *   insn=0x00000000002CFF24 string=0x00000000002CFF28 "K"
 *   insn=0x00000000002CFF28 string=0x00000000002CFF2C "h:"
 *   insn=0x00000000002CFF28 string=0x00000000002CFF30 "h"
 *   insn=0x00000000002CFF38 string=0x00000000002CFF3C "\t"
 *   insn=0x00000000002CFF3C string=0x00000000002CFF40 "?U"
 *   insn=0x00000000002CFF40 string=0x00000000002CFF44 "!"
 *   insn=0x00000000002CFF44 string=0x00000000002CFF48 ""
 *   insn=0x00000000002CFF48 string=0x00000000002CFF4C "h"
 *   insn=0x00000000002CFF58 string=0x00000000002CFF5C " "
 *   insn=0x00000000002CFF58 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002CFF68 string=0x00000000002CFF6C "("
 *   insn=0x00000000002CFF70 string=0x00000000002CFF74 "h"
 *   insn=0x00000000002CFF78 string=0x00000000002CFF7C "a"
 *   insn=0x00000000002CFF7C string=0x00000000002CFF80 "h.@"
 *   insn=0x00000000002CFF80 string=0x00000000002CFF84 "("
 *   insn=0x00000000002CFF8C string=0x00000000002CFF90 "`"
 *   insn=0x00000000002CFFCC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::MergePartialFromCodedStream(
        Caver::Proto::Circle *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  Caver::Proto::Vector2 *v9; // x21
  char *v10; // x8
  int v11; // w8
  int v12; // w9
  int v13; // w22
  int v14; // w8
  bool v15; // vf
  int v16; // w8
  _BYTE *v17; // x8
  int v18; // w9
  __int64 result; // x0
  unsigned int v20; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v21; // [xsp+8h] [xbp-38h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      if ( (unsigned int)v6 >> 3 == 1 )
        break;
      if ( (unsigned int)v6 >> 3 != 2 )
      {
        v8 = v6 & 7;
        goto LABEL_18;
      }
      v8 = v6 & 7;
      if ( v8 == 5 )
      {
LABEL_30:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v20) & 1) == 0 )
          return 0;
        v18 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v20;
        *((_DWORD *)this + 7) = v18 | 2;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
      else
      {
LABEL_18:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
    }
    v8 = v6 & 7;
    if ( v8 != 2 )
      goto LABEL_18;
    v9 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 7) |= 1u;
    if ( !v9 )
    {
      v9 = (Caver::Proto::Vector2 *)operator new(0x18u);
      *((_QWORD *)v9 + 1) = 0;
      *((_QWORD *)v9 + 2) = 0;
      *(_QWORD *)v9 = off_6C5A08;
      *((_QWORD *)this + 2) = v9;
    }
    v10 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v20) & 1) == 0 )
        return 0;
    }
    else
    {
      v20 = (unsigned __int8)*v10;
      *((_QWORD *)a2 + 1) = v10 + 1;
    }
    v11 = *((_DWORD *)a2 + 14);
    v12 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v11 + 1;
    if ( v11 >= v12 )
      return 0;
    v13 = google::protobuf::io::CodedInputStream::PushLimit(a2, v20);
    if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v9, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v13);
    v14 = *((_DWORD *)a2 + 14);
    v15 = __OFSUB__(v14, 1);
    v16 = v14 - 1;
    if ( v16 < 0 == v15 )
      *((_DWORD *)a2 + 14) = v16;
    v17 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v17 < *((_QWORD *)a2 + 2) && *v17 == 21 )
    {
      *((_QWORD *)a2 + 1) = v17 + 1;
      goto LABEL_30;
    }
  }
}

