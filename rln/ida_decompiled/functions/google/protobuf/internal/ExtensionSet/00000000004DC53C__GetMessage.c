/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DC53C
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet10GetMessageEiRKNS0_11MessageLiteE
 * Demangled: google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Callers: 1
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004DC53C string=0x00000000004DC540 " "
 *   insn=0x00000000004DC544 string=0x00000000004DC548 "*"
 *   insn=0x00000000004DC548 string=0x00000000004DC54C "K!@"
 *   insn=0x00000000004DC548 string=0x00000000004DC56C "?"
 *   insn=0x00000000004DC54C string=0x00000000004DC550 "La"
 *   insn=0x00000000004DC550 string=0x00000000004DC554 "MA"
 *   insn=0x00000000004DC55C string=0x00000000004DC560 ")"
 *   insn=0x00000000004DC560 string=0x00000000004DC564 "j"
 *   insn=0x00000000004DC564 string=0x00000000004DC568 "*"
 *   insn=0x00000000004DC570 string=0x00000000004DC574 "*!@"
 *   insn=0x00000000004DC574 string=0x00000000004DC578 "_"
 *   insn=0x00000000004DC578 string=0x00000000004DC57C "\t"
 *   insn=0x00000000004DC57C string=0x00000000004DC580 "?"
 *   insn=0x00000000004DC580 string=0x00000000004DC584 "@"
 *   insn=0x00000000004DC584 string=0x00000000004DC588 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::GetMessage(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        const google::protobuf::MessageLite *a3)
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
  if ( v5 != v4 )
  {
    if ( *((_DWORD *)v5 + 8) > a2 )
      v5 = (char *)this + 8;
    if ( v5 != v4 )
      return (const google::protobuf::MessageLite *)*((_QWORD *)v5 + 5);
  }
  return a3;
}

