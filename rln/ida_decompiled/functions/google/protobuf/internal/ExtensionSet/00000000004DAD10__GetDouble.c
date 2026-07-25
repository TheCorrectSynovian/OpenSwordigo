/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DAD10
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9GetDoubleEid
 * Demangled: google::protobuf::internal::ExtensionSet::GetDouble(int,double)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004DAD10 string=0x00000000004DAD14 " "
 *   insn=0x00000000004DAD18 string=0x00000000004DAD1C "*"
 *   insn=0x00000000004DAD1C string=0x00000000004DAD20 "K!@"
 *   insn=0x00000000004DAD1C string=0x00000000004DAD40 "?"
 *   insn=0x00000000004DAD20 string=0x00000000004DAD24 "La"
 *   insn=0x00000000004DAD24 string=0x00000000004DAD28 "MA"
 *   insn=0x00000000004DAD30 string=0x00000000004DAD34 ")"
 *   insn=0x00000000004DAD34 string=0x00000000004DAD38 "j"
 *   insn=0x00000000004DAD38 string=0x00000000004DAD3C "*"
 *   insn=0x00000000004DAD44 string=0x00000000004DAD48 "*!@"
 *   insn=0x00000000004DAD48 string=0x00000000004DAD4C "_"
 *   insn=0x00000000004DAD4C string=0x00000000004DAD50 "\t"
 *   insn=0x00000000004DAD50 string=0x00000000004DAD54 "?"
 *   insn=0x00000000004DAD54 string=0x00000000004DAD58 "`"
 *   insn=0x00000000004DAD58 string=0x00000000004DAD5C "("
 *   insn=0x00000000004DAD5C string=0x00000000004DAD60 "H"
 *   insn=0x00000000004DAD60 string=0x00000000004DAD68 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall google::protobuf::internal::ExtensionSet::GetDouble(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        double a3)
{
  char *v3; // x10
  char *v4; // x8
  char *v5; // x9
  int v6; // w11
  bool v7; // cc
  char **v8; // x11
  double result; // d0

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
  if ( v5 != v4 )
  {
    if ( *((_DWORD *)v5 + 8) > a2 )
      v5 = (char *)this + 8;
    if ( v5 != v4 && !v5[50] )
      return *((double *)v5 + 5);
  }
  return result;
}

