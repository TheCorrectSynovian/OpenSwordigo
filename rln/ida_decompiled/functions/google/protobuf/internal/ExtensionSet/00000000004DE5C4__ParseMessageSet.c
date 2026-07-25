/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DE5C4
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet15ParseMessageSetEPNS0_2io16CodedInputStreamEPNS1_15ExtensionFinderEPNS1_12FieldSkipperE
 * Demangled: google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FD900  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x0000000000200E40  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Referenced strings: 12
 *   insn=0x00000000004DE5E8 string=0x00000000004DE5EC """
 *   insn=0x00000000004DE5EC string=0x00000000004DE5F0 "\t"
 *   insn=0x00000000004DE5F4 string=0x00000000004DE5F8 "!"
 *   insn=0x00000000004DE5F8 string=0x00000000004DE5FC ""
 *   insn=0x00000000004DE604 string=0x00000000004DE608 "?,"
 *   insn=0x00000000004DE620 string=0x00000000004DE624 ""
 *   insn=0x00000000004DE628 string=0x00000000004DE62C ""
 *   insn=0x00000000004DE634 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000004DE63C string=0x00000000004DE640 "?,"
 *   insn=0x00000000004DE640 string=0x00000000004DE644 "a"
 *   insn=0x00000000004DE658 string=0x00000000004DE65C "@"
 *   insn=0x00000000004DE658 string=0x00000000001FD900 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSet(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::internal::ExtensionFinder *a3,
        google::protobuf::internal::FieldSkipper *a4)
{
  unsigned __int8 *v8; // x8
  int v9; // w9
  unsigned int TagFallback; // w1

  while ( 1 )
  {
    while ( 1 )
    {
      v8 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v8 >= *((_QWORD *)a2 + 2) )
        break;
      v9 = (char)*v8;
      if ( v9 < 0 )
        break;
      TagFallback = *v8;
      *((_DWORD *)a2 + 8) = TagFallback;
      *((_QWORD *)a2 + 1) = v8 + 1;
      if ( (unsigned __int8)v9 != 11 )
        goto LABEL_4;
LABEL_8:
      if ( (google::protobuf::internal::ExtensionSet::ParseMessageSetItem(this, a2, a3, a4) & 1) == 0 )
        return 0;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( TagFallback == 11 )
      goto LABEL_8;
LABEL_4:
    if ( !TagFallback )
      return 1;
    if ( (google::protobuf::internal::ExtensionSet::ParseField(this, TagFallback, a2, a3, a4) & 1) == 0 )
      return 0;
  }
}

