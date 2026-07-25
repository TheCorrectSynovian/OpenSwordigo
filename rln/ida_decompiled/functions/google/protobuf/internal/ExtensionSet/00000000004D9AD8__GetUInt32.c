/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D9AD8
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9GetUInt32Eij
 * Demangled: google::protobuf::internal::ExtensionSet::GetUInt32(int,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004D9AD8 string=0x00000000004D9ADC " "
 *   insn=0x00000000004D9AE0 string=0x00000000004D9AE4 "*"
 *   insn=0x00000000004D9AE4 string=0x00000000004D9AE8 "K!@"
 *   insn=0x00000000004D9AE4 string=0x00000000004D9B08 "?"
 *   insn=0x00000000004D9AE8 string=0x00000000004D9AEC "La"
 *   insn=0x00000000004D9AEC string=0x00000000004D9AF0 "MA"
 *   insn=0x00000000004D9AF8 string=0x00000000004D9AFC ")"
 *   insn=0x00000000004D9AFC string=0x00000000004D9B00 "j"
 *   insn=0x00000000004D9B00 string=0x00000000004D9B04 "*"
 *   insn=0x00000000004D9B0C string=0x00000000004D9B10 "*!@"
 *   insn=0x00000000004D9B10 string=0x00000000004D9B14 "_"
 *   insn=0x00000000004D9B14 string=0x00000000004D9B18 "\t"
 *   insn=0x00000000004D9B18 string=0x00000000004D9B1C "?"
 *   insn=0x00000000004D9B1C string=0x00000000004D9B20 "`"
 *   insn=0x00000000004D9B20 string=0x00000000004D9B24 "("
 *   insn=0x00000000004D9B24 string=0x00000000004D9B28 "h"
 *   insn=0x00000000004D9B28 string=0x00000000004D9B34 "")@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetUInt32(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        unsigned int a3)
{
  char *v3; // x10
  char *v4; // x8
  char *v5; // x9
  int v6; // w11
  bool v7; // cc
  char **v8; // x11

  v3 = (char *)*((_QWORD *)this + 2);
  v4 = (char *)this + 8;
  v5 = (char *)this + 8;
  if ( v3 )
  {
    do
    {
      v6 = *((_DWORD *)v3 + 8);
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = (char **)(v3 + 16);
      else
        v8 = (char **)(v3 + 24);
      if ( !v7 )
        v5 = v3;
      v3 = *v8;
    }
    while ( *v8 );
  }
  if ( v5 == v4 )
    return a3;
  if ( *((_DWORD *)v5 + 8) > a2 )
    v5 = (char *)this + 8;
  if ( v5 == v4 || v5[50] )
    return a3;
  else
    return *((unsigned int *)v5 + 10);
}

