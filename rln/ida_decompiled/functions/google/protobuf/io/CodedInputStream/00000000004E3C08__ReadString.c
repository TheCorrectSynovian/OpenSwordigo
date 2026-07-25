/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3C08
 * Mangled: _ZN6google8protobuf2io16CodedInputStream10ReadStringEPSsi
 * Demangled: google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *
 * Callers: 1
 *   0x00000000001F6EE0  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *
 * Callees: 4
 *   0x00000000001F9BF0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *   0x0000000000201760  .memcpy
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *
 * Referenced strings: 13
 *   insn=0x00000000004E3C20 string=0x00000000004E3C24 "h"
 *   insn=0x00000000004E3C24 string=0x00000000004E3C28 "i\n@"
 *   insn=0x00000000004E3C28 string=0x00000000004E3C2C ""
 *   insn=0x00000000004E3C30 string=0x00000000004E3C34 "*"
 *   insn=0x00000000004E3C34 string=0x00000000004E3C58 "T|@"
 *   insn=0x00000000004E3C4C string=0x00000000001F9BF0 "0'"
 *   insn=0x00000000004E3C64 string=0x00000000004E3C68 "z"
 *   insn=0x00000000004E3C6C string=0x00000000004E3C70 ""
 *   insn=0x00000000004E3C74 string=0x00000000004E3C78 ""
 *   insn=0x00000000004E3C7C string=0x00000000004E3C94 "a"
 *   insn=0x00000000004E3C9C string=0x00000000004E3CA0 "h"
 *   insn=0x00000000004E3CA4 string=0x00000000004E3CA8 ""
 *   insn=0x00000000004E3CA8 string=0x00000000004E3CAC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadString(__int64 a1, void **a2, int a3)
{
  __int64 result; // x0
  size_t v6; // x20
  _DWORD *v7; // x0

  if ( a3 < 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 8) < a3 )
    return google::protobuf::io::CodedInputStream::ReadStringFallback((google::protobuf::io::CodedInputStream *)a1);
  v6 = a3;
  sub_569650(a2, a3, 0);
  v7 = *a2;
  if ( *((_QWORD *)*a2 - 3) )
  {
    if ( (*(v7 - 2) & 0x80000000) == 0 )
    {
      sub_568EA8(a2);
      v7 = *a2;
    }
  }
  else
  {
    v7 = 0;
  }
  memcpy(v7, *(const void **)(a1 + 8), v6);
  result = 1;
  *(_QWORD *)(a1 + 8) += v6;
  return result;
}

