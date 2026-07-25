/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DB940
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet7GetEnumEii
 * Demangled: google::protobuf::internal::ExtensionSet::GetEnum(int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004DB940 string=0x00000000004DB944 " "
 *   insn=0x00000000004DB948 string=0x00000000004DB94C "*"
 *   insn=0x00000000004DB94C string=0x00000000004DB950 "K!@"
 *   insn=0x00000000004DB94C string=0x00000000004DB970 "?"
 *   insn=0x00000000004DB950 string=0x00000000004DB954 "La"
 *   insn=0x00000000004DB954 string=0x00000000004DB958 "MA"
 *   insn=0x00000000004DB960 string=0x00000000004DB964 ")"
 *   insn=0x00000000004DB964 string=0x00000000004DB968 "j"
 *   insn=0x00000000004DB968 string=0x00000000004DB96C "*"
 *   insn=0x00000000004DB974 string=0x00000000004DB978 "*!@"
 *   insn=0x00000000004DB978 string=0x00000000004DB97C "_"
 *   insn=0x00000000004DB97C string=0x00000000004DB980 "\t"
 *   insn=0x00000000004DB980 string=0x00000000004DB984 "?"
 *   insn=0x00000000004DB984 string=0x00000000004DB988 "`"
 *   insn=0x00000000004DB988 string=0x00000000004DB98C "("
 *   insn=0x00000000004DB98C string=0x00000000004DB990 "h"
 *   insn=0x00000000004DB990 string=0x00000000004DB99C "")@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetEnum(
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

