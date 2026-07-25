/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DB328
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet7GetBoolEib
 * Demangled: google::protobuf::internal::ExtensionSet::GetBool(int,bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000004DB328 string=0x00000000004DB32C " "
 *   insn=0x00000000004DB330 string=0x00000000004DB334 "*"
 *   insn=0x00000000004DB334 string=0x00000000004DB338 "K!@"
 *   insn=0x00000000004DB334 string=0x00000000004DB358 "?"
 *   insn=0x00000000004DB338 string=0x00000000004DB33C "La"
 *   insn=0x00000000004DB33C string=0x00000000004DB340 "MA"
 *   insn=0x00000000004DB348 string=0x00000000004DB34C ")"
 *   insn=0x00000000004DB34C string=0x00000000004DB350 "j"
 *   insn=0x00000000004DB350 string=0x00000000004DB354 "*"
 *   insn=0x00000000004DB35C string=0x00000000004DB360 "*!@"
 *   insn=0x00000000004DB35C string=0x00000000004DB37C "@"
 *   insn=0x00000000004DB360 string=0x00000000004DB364 "_"
 *   insn=0x00000000004DB364 string=0x00000000004DB368 "\t"
 *   insn=0x00000000004DB368 string=0x00000000004DB36C "?"
 *   insn=0x00000000004DB36C string=0x00000000004DB370 "`"
 *   insn=0x00000000004DB370 string=0x00000000004DB374 "("
 *   insn=0x00000000004DB374 string=0x00000000004DB378 "h"
 *   insn=0x00000000004DB378 string=0x00000000004DB384 "("
 *   insn=0x00000000004DB38C string=0x00000000004DB390 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall google::protobuf::internal::ExtensionSet::GetBool(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3)
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
    return a3 & 1;
  if ( *((_DWORD *)v5 + 8) > a2 )
    v5 = (char *)this + 8;
  if ( v5 == v4 || v5[50] )
    return a3 & 1;
  else
    return v5[40] != 0;
}

