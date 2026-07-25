/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DD59C
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet4SwapEPS2_
 * Demangled: google::protobuf::internal::ExtensionSet::Swap(google::protobuf::internal::ExtensionSet*)
 *
 * Callers: 1
 *   0x00000000001FA0E0  google::protobuf::internal::ExtensionSet::Swap(google::protobuf::internal::ExtensionSet*)
 *
 * Callees: 0
 *
 * Referenced strings: 42
 *   insn=0x00000000004DD59C string=0x00000000004DD5A0 "(@"
 *   insn=0x00000000004DD5A0 string=0x00000000004DD5A4 "i"
 *   insn=0x00000000004DD5A8 string=0x00000000004DD5AC ""
 *   insn=0x00000000004DD5A8 string=0x00000000004DD620 ")"
 *   insn=0x00000000004DD5AC string=0x00000000004DD5B0 ")"
 *   insn=0x00000000004DD5B0 string=0x00000000004DD5B4 "("
 *   insn=0x00000000004DD5B4 string=0x00000000004DD5B8 "\t"
 *   insn=0x00000000004DD5B8 string=0x00000000004DD5BC ""
 *   insn=0x00000000004DD5BC string=0x00000000004DD5C0 ")"
 *   insn=0x00000000004DD5C0 string=0x00000000004DD5C4 "("
 *   insn=0x00000000004DD5C4 string=0x00000000004DD5C8 "\t"
 *   insn=0x00000000004DD5C8 string=0x00000000004DD5CC ""
 *   insn=0x00000000004DD5CC string=0x00000000004DD5D0 ")"
 *   insn=0x00000000004DD5D0 string=0x00000000004DD5D4 "@"
 *   insn=0x00000000004DD5D4 string=0x00000000004DD5D8 "\t "
 *   insn=0x00000000004DD5D8 string=0x00000000004DD5DC "\t"
 *   insn=0x00000000004DD5DC string=0x00000000004DD5E0 "(@"
 *   insn=0x00000000004DD5E0 string=0x00000000004DD5E4 ") "
 *   insn=0x00000000004DD5E4 string=0x00000000004DD5E8 "\t"
 *   insn=0x00000000004DD5EC string=0x00000000004DD648 "("
 *   insn=0x00000000004DD5F0 string=0x00000000004DD5F4 ""
 *   insn=0x00000000004DD5F4 string=0x00000000004DD5F8 ")"
 *   insn=0x00000000004DD5F8 string=0x00000000004DD5FC "* "
 *   insn=0x00000000004DD5FC string=0x00000000004DD600 " "
 *   insn=0x00000000004DD600 string=0x00000000004DD604 "\t"
 *   insn=0x00000000004DD604 string=0x00000000004DD608 ")"
 *   insn=0x00000000004DD608 string=0x00000000004DD60C "\t"
 *   insn=0x00000000004DD60C string=0x00000000004DD610 ""
 *   insn=0x00000000004DD610 string=0x00000000004DD614 "?("
 *   insn=0x00000000004DD614 string=0x00000000004DD618 "*"
 *   insn=0x00000000004DD618 string=0x00000000004DD61C ""
 *   insn=0x00000000004DD620 string=0x00000000004DD624 ""
 *   insn=0x00000000004DD624 string=0x00000000004DD628 "\n "
 *   insn=0x00000000004DD628 string=0x00000000004DD62C "+ "
 *   insn=0x00000000004DD62C string=0x00000000004DD630 "("
 *   insn=0x00000000004DD630 string=0x00000000004DD634 ""
 *   insn=0x00000000004DD634 string=0x00000000004DD638 "("
 *   insn=0x00000000004DD638 string=0x00000000004DD63C "+"
 *   insn=0x00000000004DD640 string=0x00000000004DD644 "\n"
 *   insn=0x00000000004DD648 string=0x00000000004DD64C "\t"
 *   insn=0x00000000004DD64C string=0x00000000004DD650 ""
 *   insn=0x00000000004DD650 string=0x00000000004DD654 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall google::protobuf::internal::ExtensionSet::Swap(
        _QWORD *this,
        google::protobuf::internal::ExtensionSet *a2)
{
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9

  v2 = this[2];
  v3 = *((_QWORD *)a2 + 2);
  if ( v2 )
  {
    if ( v3 )
    {
      this[2] = v3;
      *((_QWORD *)a2 + 2) = v2;
      v4 = this[3];
      this[3] = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = v4;
      v5 = this[4];
      this[4] = *((_QWORD *)a2 + 4);
      *((_QWORD *)a2 + 4) = v5;
      *(_QWORD *)(this[2] + 8LL) = this + 1;
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL) = (char *)a2 + 8;
    }
    else
    {
      *((_QWORD *)a2 + 2) = v2;
      *((_QWORD *)a2 + 3) = this[3];
      *((_QWORD *)a2 + 4) = this[4];
      *(_QWORD *)(v2 + 8) = (char *)a2 + 8;
      this[2] = 0;
      this[3] = this + 1;
      this[4] = this + 1;
    }
  }
  else if ( v3 )
  {
    this[2] = v3;
    this[3] = *((_QWORD *)a2 + 3);
    this[4] = *((_QWORD *)a2 + 4);
    *(_QWORD *)(v3 + 8) = this + 1;
    *((_QWORD *)a2 + 2) = 0;
    *((_QWORD *)a2 + 3) = (char *)a2 + 8;
    *((_QWORD *)a2 + 4) = (char *)a2 + 8;
  }
  v6 = this[5];
  this[5] = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 5) = v6;
  return this;
}

