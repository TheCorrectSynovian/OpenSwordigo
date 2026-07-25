/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8D4C
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet8GetInt32Eii
 * Demangled: google::protobuf::internal::ExtensionSet::GetInt32(int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004D8D4C string=0x00000000004D8D50 " "
 *   insn=0x00000000004D8D54 string=0x00000000004D8D58 "*"
 *   insn=0x00000000004D8D58 string=0x00000000004D8D5C "K!@"
 *   insn=0x00000000004D8D58 string=0x00000000004D8D7C "?"
 *   insn=0x00000000004D8D5C string=0x00000000004D8D60 "La"
 *   insn=0x00000000004D8D60 string=0x00000000004D8D64 "MA"
 *   insn=0x00000000004D8D6C string=0x00000000004D8D70 ")"
 *   insn=0x00000000004D8D70 string=0x00000000004D8D74 "j"
 *   insn=0x00000000004D8D74 string=0x00000000004D8D78 "*"
 *   insn=0x00000000004D8D80 string=0x00000000004D8D84 "*!@"
 *   insn=0x00000000004D8D84 string=0x00000000004D8D88 "_"
 *   insn=0x00000000004D8D88 string=0x00000000004D8D8C "\t"
 *   insn=0x00000000004D8D8C string=0x00000000004D8D90 "?"
 *   insn=0x00000000004D8D90 string=0x00000000004D8D94 "`"
 *   insn=0x00000000004D8D94 string=0x00000000004D8D98 "("
 *   insn=0x00000000004D8D98 string=0x00000000004D8D9C "h"
 *   insn=0x00000000004D8D9C string=0x00000000004D8DA8 "")@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetInt32(
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

