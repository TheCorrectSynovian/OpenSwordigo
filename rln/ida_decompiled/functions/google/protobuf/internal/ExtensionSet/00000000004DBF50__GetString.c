/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DBF50
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9GetStringEiRKSs
 * Demangled: google::protobuf::internal::ExtensionSet::GetString(int,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004DBF50 string=0x00000000004DBF54 " "
 *   insn=0x00000000004DBF58 string=0x00000000004DBF5C "*"
 *   insn=0x00000000004DBF5C string=0x00000000004DBF60 "K!@"
 *   insn=0x00000000004DBF5C string=0x00000000004DBF80 "?"
 *   insn=0x00000000004DBF60 string=0x00000000004DBF64 "La"
 *   insn=0x00000000004DBF64 string=0x00000000004DBF68 "MA"
 *   insn=0x00000000004DBF70 string=0x00000000004DBF74 ")"
 *   insn=0x00000000004DBF74 string=0x00000000004DBF78 "j"
 *   insn=0x00000000004DBF78 string=0x00000000004DBF7C "*"
 *   insn=0x00000000004DBF84 string=0x00000000004DBF88 "*!@"
 *   insn=0x00000000004DBF88 string=0x00000000004DBF8C "_"
 *   insn=0x00000000004DBF8C string=0x00000000004DBF90 "\t"
 *   insn=0x00000000004DBF90 string=0x00000000004DBF94 "?"
 *   insn=0x00000000004DBF94 string=0x00000000004DBF98 "`"
 *   insn=0x00000000004DBF98 string=0x00000000004DBF9C "("
 *   insn=0x00000000004DBF9C string=0x00000000004DBFA0 "h"
 *   insn=0x00000000004DBFA0 string=0x00000000004DBFAC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetString(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // x10
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w11
  bool v7; // cc
  __int64 *v8; // x11

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1 + 8;
  v5 = a1 + 8;
  if ( v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v3 + 32);
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = (__int64 *)(v3 + 16);
      else
        v8 = (__int64 *)(v3 + 24);
      if ( !v7 )
        v5 = v3;
      v3 = *v8;
    }
    while ( *v8 );
  }
  if ( v5 == v4 )
    return a3;
  if ( *(_DWORD *)(v5 + 32) > a2 )
    v5 = a1 + 8;
  if ( v5 == v4 || *(_BYTE *)(v5 + 50) )
    return a3;
  else
    return *(_QWORD *)(v5 + 40);
}

