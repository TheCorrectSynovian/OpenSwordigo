/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DF878
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet8ByteSizeEv
 * Demangled: google::protobuf::internal::ExtensionSet::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F6E60  google::protobuf::internal::ExtensionSet::ByteSize(void)
 *
 * Callees: 2
 *   0x00000000001FFDB0  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 2
 *   insn=0x00000000004DF8A0 string=0x00000000004DF8A4 "C"
 *   insn=0x00000000004DF8AC string=0x00000000004DF8B0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::ByteSize(google::protobuf::internal::ExtensionSet *this)
{
  int *v1; // x20
  int *v2; // x21
  unsigned int v3; // w19

  v1 = (int *)*((_QWORD *)this + 3);
  v2 = (int *)((char *)this + 8);
  if ( v1 == (int *)((char *)this + 8) )
  {
    return 0;
  }
  else
  {
    v3 = 0;
    do
    {
      v3 += google::protobuf::internal::ExtensionSet::Extension::ByteSize(
              (google::protobuf::internal::ExtensionSet::Extension *)(v1 + 10),
              v1[8]);
      v1 = (int *)sub_54C6A0(v1);
    }
    while ( v1 != v2 );
  }
  return v3;
}

