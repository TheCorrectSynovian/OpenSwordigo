/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8A18
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet3HasEi
 * Demangled: google::protobuf::internal::ExtensionSet::Has(int)
 *
 * Callers: 2
 *   0x00000000002039C0  google::protobuf::internal::ExtensionSet::Has(int)
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004D8A18 string=0x00000000004D8A1C " "
 *   insn=0x00000000004D8A20 string=0x00000000004D8A24 "*"
 *   insn=0x00000000004D8A24 string=0x00000000004D8A28 "K!@"
 *   insn=0x00000000004D8A24 string=0x00000000004D8A48 "?"
 *   insn=0x00000000004D8A28 string=0x00000000004D8A2C "La"
 *   insn=0x00000000004D8A2C string=0x00000000004D8A30 "MA"
 *   insn=0x00000000004D8A38 string=0x00000000004D8A3C ")"
 *   insn=0x00000000004D8A3C string=0x00000000004D8A40 "j"
 *   insn=0x00000000004D8A40 string=0x00000000004D8A44 "*"
 *   insn=0x00000000004D8A48 string=0x00000000004D8A4C "@"
 *   insn=0x00000000004D8A4C string=0x00000000004D8A50 "*!@"
 *   insn=0x00000000004D8A50 string=0x00000000004D8A54 "_"
 *   insn=0x00000000004D8A54 string=0x00000000004D8A58 "\t"
 *   insn=0x00000000004D8A58 string=0x00000000004D8A5C "?"
 *   insn=0x00000000004D8A60 string=0x00000000004D8A64 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall google::protobuf::internal::ExtensionSet::Has(google::protobuf::internal::ExtensionSet *this, int a2)
{
  char *v2; // x10
  char *v3; // x8
  char *v4; // x9
  int v5; // w11
  bool v6; // nf
  bool v7; // vf
  char **v8; // x11

  v2 = (char *)*((_QWORD *)this + 2);
  v3 = (char *)this + 8;
  v4 = (char *)this + 8;
  if ( v2 )
  {
    do
    {
      v5 = *((_DWORD *)v2 + 8);
      v7 = __OFSUB__(v5, a2);
      v6 = v5 - a2 < 0;
      if ( v5 >= a2 )
        v8 = (char **)(v2 + 16);
      else
        v8 = (char **)(v2 + 24);
      if ( v6 == v7 )
        v4 = v2;
      v2 = *v8;
    }
    while ( *v8 );
  }
  if ( v4 == v3 )
    return 0;
  if ( *((_DWORD *)v4 + 8) > a2 )
    v4 = (char *)this + 8;
  return v4 != v3 && v4[50] == 0;
}

