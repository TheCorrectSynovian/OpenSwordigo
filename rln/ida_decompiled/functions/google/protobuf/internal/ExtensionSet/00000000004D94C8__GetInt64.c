/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D94C8
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet8GetInt64Eil
 * Demangled: google::protobuf::internal::ExtensionSet::GetInt64(int,long)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004D94C8 string=0x00000000004D94CC " "
 *   insn=0x00000000004D94D0 string=0x00000000004D94D4 "*"
 *   insn=0x00000000004D94D4 string=0x00000000004D94D8 "K!@"
 *   insn=0x00000000004D94D4 string=0x00000000004D94F8 "?"
 *   insn=0x00000000004D94D8 string=0x00000000004D94DC "La"
 *   insn=0x00000000004D94DC string=0x00000000004D94E0 "MA"
 *   insn=0x00000000004D94E8 string=0x00000000004D94EC ")"
 *   insn=0x00000000004D94EC string=0x00000000004D94F0 "j"
 *   insn=0x00000000004D94F0 string=0x00000000004D94F4 "*"
 *   insn=0x00000000004D94FC string=0x00000000004D9500 "*!@"
 *   insn=0x00000000004D9500 string=0x00000000004D9504 "_"
 *   insn=0x00000000004D9504 string=0x00000000004D9508 "\t"
 *   insn=0x00000000004D9508 string=0x00000000004D950C "?"
 *   insn=0x00000000004D950C string=0x00000000004D9510 "`"
 *   insn=0x00000000004D9510 string=0x00000000004D9514 "("
 *   insn=0x00000000004D9514 string=0x00000000004D9518 "h"
 *   insn=0x00000000004D9518 string=0x00000000004D9524 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetInt64(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        __int64 a3)
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
    return *((_QWORD *)v5 + 5);
}

