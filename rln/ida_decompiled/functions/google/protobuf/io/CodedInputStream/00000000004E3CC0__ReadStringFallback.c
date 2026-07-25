/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3CC0
 * Mangled: _ZN6google8protobuf2io16CodedInputStream18ReadStringFallbackEPSsi
 * Demangled: google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *
 * Callers: 1
 *   0x00000000001F9BF0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *
 * Callees: 3
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 11
 *   insn=0x00000000004E3CE8 string=0x00000000004E3CFC "a"
 *   insn=0x00000000004E3D04 string=0x00000000004E3D08 "*"
 *   insn=0x00000000004E3D10 string=0x00000000004E3D24 "("
 *   insn=0x00000000004E3D1C string=0x00000000004E3D20 "a"
 *   insn=0x00000000004E3D28 string=0x00000000004E3D2C "h"
 *   insn=0x00000000004E3D30 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E3D34 string=0x00000000004E3D38 "a"
 *   insn=0x00000000004E3D44 string=0x00000000004E3D48 ","
 *   insn=0x00000000004E3D58 string=0x00000000004E3D5C "h"
 *   insn=0x00000000004E3D60 string=0x00000000004E3D64 ""
 *   insn=0x00000000004E3D64 string=0x00000000004E3D68 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadStringFallback(
        google::protobuf::io::CodedInputStream *this,
        _QWORD *a2,
        int a3)
{
  __int64 v6; // x2
  const char *v7; // x1
  int v8; // w23
  __int64 result; // x0

  v6 = *(_QWORD *)(*a2 - 24LL);
  if ( v6 )
    sub_568CB8(a2, 0, v6, 0);
  v7 = (const char *)*((_QWORD *)this + 1);
  v8 = *((_QWORD *)this + 2) - (_DWORD)v7;
  if ( v8 >= a3 )
  {
LABEL_8:
    sub_5677D4(a2, v7, a3);
    result = 1;
    *((_QWORD *)this + 1) += a3;
  }
  else
  {
    while ( 1 )
    {
      if ( v8 )
      {
        sub_5677D4(a2, v7, v8);
        v7 = (const char *)*((_QWORD *)this + 1);
      }
      *((_QWORD *)this + 1) = &v7[v8];
      if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
        return 0;
      v7 = (const char *)*((_QWORD *)this + 1);
      a3 -= v8;
      v8 = *((_QWORD *)this + 2) - (_DWORD)v7;
      if ( a3 <= v8 )
        goto LABEL_8;
    }
  }
  return result;
}

