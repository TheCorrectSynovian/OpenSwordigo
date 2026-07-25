/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DA0E8
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9GetUInt64Eim
 * Demangled: google::protobuf::internal::ExtensionSet::GetUInt64(int,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004DA0E8 string=0x00000000004DA0EC " "
 *   insn=0x00000000004DA0F0 string=0x00000000004DA0F4 "*"
 *   insn=0x00000000004DA0F4 string=0x00000000004DA0F8 "K!@"
 *   insn=0x00000000004DA0F4 string=0x00000000004DA118 "?"
 *   insn=0x00000000004DA0F8 string=0x00000000004DA0FC "La"
 *   insn=0x00000000004DA0FC string=0x00000000004DA100 "MA"
 *   insn=0x00000000004DA108 string=0x00000000004DA10C ")"
 *   insn=0x00000000004DA10C string=0x00000000004DA110 "j"
 *   insn=0x00000000004DA110 string=0x00000000004DA114 "*"
 *   insn=0x00000000004DA11C string=0x00000000004DA120 "*!@"
 *   insn=0x00000000004DA120 string=0x00000000004DA124 "_"
 *   insn=0x00000000004DA124 string=0x00000000004DA128 "\t"
 *   insn=0x00000000004DA128 string=0x00000000004DA12C "?"
 *   insn=0x00000000004DA12C string=0x00000000004DA130 "`"
 *   insn=0x00000000004DA130 string=0x00000000004DA134 "("
 *   insn=0x00000000004DA134 string=0x00000000004DA138 "h"
 *   insn=0x00000000004DA138 string=0x00000000004DA144 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::GetUInt64(
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

