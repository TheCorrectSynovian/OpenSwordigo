/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DEAC8
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet15ParseMessageSetEPNS0_2io16CodedInputStreamEPKNS0_11MessageLiteE
 * Demangled: google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FBE90  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD900  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x0000000000200E40  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x00000000004DEAD8 string=0x00000000004DEADC "U"
 *   insn=0x00000000004DEADC string=0x00000000004DEAE0 "("
 *   insn=0x00000000004DEAE0 string=0x00000000004DEAE4 "J"
 *   insn=0x00000000004DEAE4 string=0x00000000004DEAE8 "uA"
 *   insn=0x00000000004DEAEC string=0x00000000004DEAF0 "J"
 *   insn=0x00000000004DEAF8 string=0x00000000004DEAFC "A"
 *   insn=0x00000000004DEAFC string=0x00000000004DEB00 "JA"
 *   insn=0x00000000004DEB0C string=0x00000000004DEB10 "i"
 *   insn=0x00000000004DEB10 string=0x00000000004DEB14 "?"
 *   insn=0x00000000004DEB14 string=0x00000000004DEB18 "B"
 *   insn=0x00000000004DEB18 string=0x00000000004DEB1C "("
 *   insn=0x00000000004DEB1C string=0x00000000004DEB20 ""
 *   insn=0x00000000004DEB20 string=0x00000000004DEB24 ""
 *   insn=0x00000000004DEB24 string=0x00000000004DEB28 ")"
 *   insn=0x00000000004DEB28 string=0x00000000004DEB2C "h""
 *   insn=0x00000000004DEB2C string=0x00000000004DEB30 "i"
 *   insn=0x00000000004DEB58 string=0x00000000004DEB5C ""
 *   insn=0x00000000004DEB64 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000004DEB68 string=0x00000000004DEB6C "h""
 *   insn=0x00000000004DEB70 string=0x00000000004DEB74 "A"
 *   insn=0x00000000004DEB84 string=0x00000000004DEB88 "^{"
 *   insn=0x00000000004DEB88 string=0x00000000004DEB8C " "
 *   insn=0x00000000004DEB88 string=0x00000000001FD900 "0'"
 *   insn=0x00000000004DEBC0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DEBD4 string=0x00000000004DEBD8 "@"
 *   insn=0x00000000004DEBE8 string=0x00000000004DEBEC ""
 *   insn=0x00000000004DEBEC string=0x00000000004DEBF0 "\t!@"
 *   insn=0x00000000004DEBF0 string=0x00000000004DEBF4 "\na"
 *   insn=0x00000000004DEBF4 string=0x00000000004DEBF8 "A"
 *   insn=0x00000000004DEBF8 string=0x00000000004DEBFC "?"
 *   insn=0x00000000004DEBFC string=0x00000000004DEC00 "I"
 *   insn=0x00000000004DEC04 string=0x00000000004DEC08 "("
 *   insn=0x00000000004DEC08 string=0x00000000004DEC0C "("
 *   insn=0x00000000004DEC0C string=0x00000000004DEC10 ""
 *   insn=0x00000000004DEC1C string=0x00000000001FBE90 "0'"
 *   insn=0x00000000004DEC34 string=0x00000000004DEC38 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSet(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::io::CodedInputStream *a2,
        const google::protobuf::MessageLite *a3)
{
  unsigned __int8 *v5; // x9
  unsigned int TagFallback; // w8
  _QWORD v8[2]; // [xsp+30h] [xbp-40h] BYREF
  _QWORD v9[2]; // [xsp+40h] [xbp-30h] BYREF

  v9[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8[1] = a3;
  v9[0] = off_6D83E0;
  v8[0] = off_6D8318;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || (char)*v5 < 0 )
        break;
      TagFallback = *v5;
      *((_DWORD *)a2 + 8) = TagFallback;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( TagFallback != 11 )
        goto LABEL_5;
LABEL_9:
      if ( (google::protobuf::internal::ExtensionSet::ParseMessageSetItem(
              this,
              a2,
              (google::protobuf::internal::ExtensionFinder *)v8,
              (google::protobuf::internal::FieldSkipper *)v9)
          & 1) == 0 )
        return 0;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( TagFallback == 11 )
      goto LABEL_9;
LABEL_5:
    if ( !TagFallback )
      return 1;
    if ( (google::protobuf::internal::ExtensionSet::ParseField(
            this,
            TagFallback,
            a2,
            (google::protobuf::internal::ExtensionFinder *)v8,
            (google::protobuf::internal::FieldSkipper *)v9)
        & 1) == 0 )
      return 0;
  }
}

