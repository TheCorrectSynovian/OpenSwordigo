/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8A84
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet13ExtensionSizeEi
 * Demangled: google::protobuf::internal::ExtensionSet::ExtensionSize(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6510  google::protobuf::internal::ExtensionSet::Extension::GetSize(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000004D8A84 string=0x00000000004D8A88 " "
 *   insn=0x00000000004D8A8C string=0x00000000004D8A90 "*"
 *   insn=0x00000000004D8A90 string=0x00000000004D8A94 "K!@"
 *   insn=0x00000000004D8A90 string=0x00000000004D8AB4 "?"
 *   insn=0x00000000004D8A94 string=0x00000000004D8A98 "La"
 *   insn=0x00000000004D8A98 string=0x00000000004D8A9C "MA"
 *   insn=0x00000000004D8AA4 string=0x00000000004D8AA8 ")"
 *   insn=0x00000000004D8AA8 string=0x00000000004D8AAC "j"
 *   insn=0x00000000004D8AAC string=0x00000000004D8AB0 "*"
 *   insn=0x00000000004D8AB8 string=0x00000000004D8ABC "*!@"
 *   insn=0x00000000004D8ABC string=0x00000000004D8AC0 "_"
 *   insn=0x00000000004D8AC0 string=0x00000000004D8AC4 "\t"
 *   insn=0x00000000004D8AC4 string=0x00000000004D8AC8 "?"
 *   insn=0x00000000004D8AC8 string=0x00000000004D8ACC "`"
 *   insn=0x00000000004D8ACC string=0x00000000004D8AD0 " "
 *   insn=0x00000000004D8AD4 string=0x00000000001F6510 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::ExtensionSize(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
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
  if ( v4 == v3 )
    return 0;
  else
    return google::protobuf::internal::ExtensionSet::Extension::GetSize((google::protobuf::internal::ExtensionSet::Extension *)(v4 + 40));
}

