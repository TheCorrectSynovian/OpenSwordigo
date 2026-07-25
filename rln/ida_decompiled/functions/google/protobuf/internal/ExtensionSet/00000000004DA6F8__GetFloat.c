/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DA6F8
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet8GetFloatEif
 * Demangled: google::protobuf::internal::ExtensionSet::GetFloat(int,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004DA6F8 string=0x00000000004DA6FC " "
 *   insn=0x00000000004DA700 string=0x00000000004DA704 "*"
 *   insn=0x00000000004DA704 string=0x00000000004DA708 "K!@"
 *   insn=0x00000000004DA704 string=0x00000000004DA728 "?"
 *   insn=0x00000000004DA708 string=0x00000000004DA70C "La"
 *   insn=0x00000000004DA70C string=0x00000000004DA710 "MA"
 *   insn=0x00000000004DA718 string=0x00000000004DA71C ")"
 *   insn=0x00000000004DA71C string=0x00000000004DA720 "j"
 *   insn=0x00000000004DA720 string=0x00000000004DA724 "*"
 *   insn=0x00000000004DA72C string=0x00000000004DA730 "*!@"
 *   insn=0x00000000004DA730 string=0x00000000004DA734 "_"
 *   insn=0x00000000004DA734 string=0x00000000004DA738 "\t"
 *   insn=0x00000000004DA738 string=0x00000000004DA73C "?"
 *   insn=0x00000000004DA73C string=0x00000000004DA740 "`"
 *   insn=0x00000000004DA740 string=0x00000000004DA744 "("
 *   insn=0x00000000004DA744 string=0x00000000004DA748 "H"
 *   insn=0x00000000004DA748 string=0x00000000004DA750 " )@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall google::protobuf::internal::ExtensionSet::GetFloat(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        float a3)
{
  char *v3; // x10
  char *v4; // x8
  char *v5; // x9
  int v6; // w11
  bool v7; // cc
  char **v8; // x11
  float result; // s0

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
      return *((float *)v5 + 10);
  }
  return result;
}

