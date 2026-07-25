/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DCB74
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet10RemoveLastEi
 * Demangled: google::protobuf::internal::ExtensionSet::RemoveLast(int)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000200D90  google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x0000000000568CB8  sub_568CB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 100
 *   insn=0x00000000004DCB80 string=0x00000000004DCB84 "S"
 *   insn=0x00000000004DCB84 string=0x00000000004DCB88 "h"
 *   insn=0x00000000004DCB90 string=0x00000000004DCB94 "\t@"
 *   insn=0x00000000004DCB98 string=0x00000000004DCB9C ")"
 *   insn=0x00000000004DCB9C string=0x00000000004DCBA0 "*!@"
 *   insn=0x00000000004DCBA0 string=0x00000000004DCBA4 "+a"
 *   insn=0x00000000004DCBA4 string=0x00000000004DCBA8 ",A"
 *   insn=0x00000000004DCBA8 string=0x00000000004DCBAC "_"
 *   insn=0x00000000004DCBAC string=0x00000000004DCBB0 "j"
 *   insn=0x00000000004DCBB0 string=0x00000000004DCBB4 ""
 *   insn=0x00000000004DCBB4 string=0x00000000004DCBB8 "I"
 *   insn=0x00000000004DCBB8 string=0x00000000004DCBBC ")"
 *   insn=0x00000000004DCBC4 string=0x00000000004DCBC8 "\t!@"
 *   insn=0x00000000004DCBC8 string=0x00000000004DCBCC "?"
 *   insn=0x00000000004DCBD8 string=0x00000000004DCC28 "J"
 *   insn=0x00000000004DCBDC string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DCBF0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DCBF4 string=0x0000000000598B8C "CHECK failed: iter != extensions_.end(): "
 *   insn=0x00000000004DCC00 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DCC04 string=0x0000000000598BB6 "Index out-of-bounds (field is empty)."
 *   insn=0x00000000004DCC14 string=0x00000000004DCC18 ":v"
 *   insn=0x00000000004DCC18 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DCC1C string=0x00000000004DCC20 "tu"
 *   insn=0x00000000004DCC20 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DCC28 string=0x00000000004DCC2C "\t"
 *   insn=0x00000000004DCC2C string=0x00000000004DCC30 "J"
 *   insn=0x00000000004DCC30 string=0x00000000004DCC34 "Iyi"
 *   insn=0x00000000004DCC34 string=0x00000000004DCC38 ")"
 *   insn=0x00000000004DCC38 string=0x00000000004DCC3C "?%"
 *   insn=0x00000000004DCC3C string=0x00000000004DCC40 "H"
 *   insn=0x00000000004DCC40 string=0x00000000004DCC68 "h"
 *   insn=0x00000000004DCC44 string=0x00000000004DCC4C "Iy"
 *   insn=0x00000000004DCC4C string=0x00000000004DCC50 ")"
 *   insn=0x00000000004DCC50 string=0x00000000004DCC54 " "
 *   insn=0x00000000004DCC54 string=0x00000000004DCC58 ""
 *   insn=0x00000000004DCC54 string=0x00000000004DCC88 ""
 *   insn=0x00000000004DCC54 string=0x00000000004DCCB0 ""
 *   insn=0x00000000004DCC58 string=0x00000000004DCC5C "\t\t@"
 *   insn=0x00000000004DCC5C string=0x00000000004DCC60 ")"
 *   insn=0x00000000004DCC60 string=0x00000000004DCC64 "\t\t"
 *   insn=0x00000000004DCC70 string=0x00000000004DCC74 "a"
 *   insn=0x00000000004DCC74 string=0x00000000004DCCE0 "|e"
 *   insn=0x00000000004DCC88 string=0x00000000004DCC8C "\t\t"
 *   insn=0x00000000004DCC8C string=0x00000000004DCC90 "\n"
 *   insn=0x00000000004DCC90 string=0x00000000004DCC94 ")"
 *   insn=0x00000000004DCC94 string=0x00000000004DCC98 "\t\t"
 *   insn=0x00000000004DCC98 string=0x00000000004DCC9C "@yi"
 *   insn=0x00000000004DCC9C string=0x00000000004DCCA0 ""
 *   insn=0x00000000004DCCA0 string=0x00000000004DCCA4 ""
 *   insn=0x00000000004DCCB8 string=0x00000000004DCCBC "\t\t"
 *   insn=0x00000000004DCCBC string=0x00000000004DCCC0 "\n"
 *   insn=0x00000000004DCCC0 string=0x00000000004DCCC4 ")"
 *   insn=0x00000000004DCCC4 string=0x00000000004DCCC8 "\t\t"
 *   insn=0x00000000004DCCC8 string=0x00000000004DCCCC "@yi"
 *   insn=0x00000000004DCCCC string=0x00000000004DCCD0 ""
 *   insn=0x00000000004DCCE0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DCCE8 string=0x00000000004DCCEC "Au"
 *   insn=0x00000000004DCD0C string=0x00000000004DCD10 "U"
 *   insn=0x00000000004DCD24 string=0x00000000004DCD28 "\t@"
 *   insn=0x00000000004DCD2C string=0x00000000004DCD30 ")"
 *   insn=0x00000000004DCD30 string=0x00000000004DCD34 "*!@"
 *   insn=0x00000000004DCD34 string=0x00000000004DCD38 "+a"
 *   insn=0x00000000004DCD38 string=0x00000000004DCD3C ",A"
 *   insn=0x00000000004DCD3C string=0x00000000004DCD40 "_"
 *   insn=0x00000000004DCD40 string=0x00000000004DCD44 "j"
 *   insn=0x00000000004DCD44 string=0x00000000004DCD48 ""
 *   insn=0x00000000004DCD48 string=0x00000000004DCD4C "I"
 *   insn=0x00000000004DCD4C string=0x00000000004DCD50 ")"
 *   insn=0x00000000004DCD58 string=0x00000000004DCD5C "\t!@"
 *   insn=0x00000000004DCD5C string=0x00000000004DCD60 "?"
 *   insn=0x00000000004DCD6C string=0x00000000004DCDBC "J"
 *   insn=0x00000000004DCDBC string=0x00000000004DCDC0 "\t"
 *   insn=0x00000000004DCDC0 string=0x00000000004DCDC4 "J"
 *   insn=0x00000000004DCDC4 string=0x00000000004DCDC8 "Iyi"
 *   insn=0x00000000004DCDC8 string=0x00000000004DCDCC ")"
 *   insn=0x00000000004DCDCC string=0x00000000004DCDD0 "?%"
 *   insn=0x00000000004DCDD0 string=0x00000000004DCDD4 ""
 *   insn=0x00000000004DCDD8 string=0x00000000004DCDE0 "Iy"
 *   insn=0x00000000004DCDD8 string=0x00000000005986D8 "8G"
 *   insn=0x00000000004DCDE0 string=0x00000000004DCDE4 ")"
 *   insn=0x00000000004DCDE4 string=0x00000000004DCDE8 " "
 *   insn=0x00000000004DCDE8 string=0x00000000004DCDEC ""
 *   insn=0x00000000004DCDE8 string=0x00000000004DCE10 ""
 *   insn=0x00000000004DCDE8 string=0x00000000004DCE34 ""
 *   insn=0x00000000004DCDF0 string=0x00000000004DCDF4 "j~}"
 *   insn=0x00000000004DCDF4 string=0x00000000004DCDF8 ""
 *   insn=0x00000000004DCDF8 string=0x00000000004DCDFC "ij"
 *   insn=0x00000000004DCE00 string=0x00000000004DCE04 "i)"
 *   insn=0x00000000004DCE14 string=0x00000000004DCE18 "j~~"
 *   insn=0x00000000004DCE18 string=0x00000000004DCE1C ""
 *   insn=0x00000000004DCE1C string=0x00000000004DCE20 "ij"
 *   insn=0x00000000004DCE24 string=0x00000000004DCE28 "i)"
 *   insn=0x00000000004DCE2C string=0x00000000004DCE30 "\t"
 *   insn=0x00000000004DCE38 string=0x00000000004DCE3C "j~@"
 *   insn=0x00000000004DCE3C string=0x00000000004DCE40 ""
 *   insn=0x00000000004DCE40 string=0x00000000004DCE44 "ij8"
 *   insn=0x00000000004DCE48 string=0x00000000004DCE4C "i)8"
 *   insn=0x00000000004DCE8C string=0x00000000004DCE90 "/"
 *   insn=0x00000000004DCEAC string=0x00000000004DCEB0 "`"
 *   insn=0x00000000004DCEC4 string=0x00000000004DCEC8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::ExtensionSet::RemoveLast(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  char *v2; // x20
  char *v3; // x9
  char *v4; // x8
  int v5; // w10
  bool v6; // cc
  char **v7; // x10
  int v8; // w0
  __int64 *v9; // x8
  __int64 v10; // x10
  __int64 v11; // x9
  __int64 *v12; // x8
  __int64 v13; // x10
  __int64 v14; // x9
  _BYTE v15[32]; // [xsp+88h] [xbp-38h] BYREF
  __int64 v16; // [xsp+A8h] [xbp-18h]

  v2 = (char *)this + 8;
  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (char *)*((_QWORD *)this + 2);
  v4 = (char *)this + 8;
  if ( v3 )
  {
    do
    {
      v5 = *((_DWORD *)v3 + 8);
      v6 = v5 < a2;
      if ( v5 >= a2 )
        v7 = (char **)(v3 + 16);
      else
        v7 = (char **)(v3 + 24);
      if ( !v6 )
        v4 = v3;
      v3 = *v7;
    }
    while ( *v7 );
  }
  if ( v4 == v2 )
    goto LABEL_12;
  if ( *((_DWORD *)v4 + 8) > a2 )
    v4 = (char *)this + 8;
  if ( v4 == v2 )
  {
LABEL_12:
    google::protobuf::internal::LogMessage::LogMessage();
    v8 = google::protobuf::internal::LogMessage::operator<<((int)v15, "CHECK failed: iter != extensions_.end(): ");
    google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v15);
    v4 = v2;
  }
  switch ( v4[48] )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      --*(_DWORD *)(*((_QWORD *)v4 + 5) + 8LL);
      break;
    case 9:
    case 12:
      v12 = (__int64 *)*((_QWORD *)v4 + 5);
      v13 = *v12;
      v14 = *((int *)v12 + 2) - 1LL;
      *((_DWORD *)v12 + 2) = v14;
      sub_568CB8(*(_QWORD *)(v13 + 8 * v14), 0, *(_QWORD *)(**(_QWORD **)(v13 + 8 * v14) - 24LL), 0);
      break;
    case 10:
    case 11:
      v9 = (__int64 *)*((_QWORD *)v4 + 5);
      v10 = *v9;
      v11 = *((int *)v9 + 2) - 1LL;
      *((_DWORD *)v9 + 2) = v11;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 8 * v11) + 32LL))(*(_QWORD *)(v10 + 8 * v11));
      break;
    default:
      return;
  }
}

