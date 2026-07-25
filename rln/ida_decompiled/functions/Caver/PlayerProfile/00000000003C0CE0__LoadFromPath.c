/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C0CE0
 * Mangled: _ZN5Caver13PlayerProfile12LoadFromPathERKSsb
 * Demangled: Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000001F4C80  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Callees: 14
 *   0x00000000001F4C80  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F81E0  Caver::Proto::PlayerProfile::~PlayerProfile()
 *   0x00000000001F8AC0  Caver::NewByteBufferFromFile(std::string const&,uint *)
 *   0x00000000001FD6A0  google::protobuf::MessageLite::ParseFromArray(void const*,int)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000001FDF50  Caver::PlayerProfile::LocalFilePath(void)
 *   0x00000000001FEDE0  Caver::Proto::PlayerProfile::PlayerProfile(void)
 *   0x0000000000202330  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000003C0CF4 string=0x00000000003C0CF8 "W"
 *   insn=0x00000000003C0D10 string=0x00000000003C0D14 "/"
 *   insn=0x00000000003C0D14 string=0x00000000003C0D18 " "
 *   insn=0x00000000003C0D14 string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000003C0D1C string=0x00000000003C0D20 "0"
 *   insn=0x00000000003C0D20 string=0x00000000003C0D24 "uB"
 *   insn=0x00000000003C0D2C string=0x00000000003C0D30 "d"
 *   insn=0x00000000003C0D30 string=0x00000000001F8AC0 "0'"
 *   insn=0x00000000003C0D34 string=0x00000000003C0D38 "`"
 *   insn=0x00000000003C0D38 string=0x00000000003C0D3C "h"
 *   insn=0x00000000003C0D3C string=0x00000000003C0D40 "`"
 *   insn=0x00000000003C0D44 string=0x00000000003C0D48 "h"
 *   insn=0x00000000003C0D44 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003C0D58 string=0x00000000003C0D5C "Q"
 *   insn=0x00000000003C0D5C string=0x00000000003C0D60 " "
 *   insn=0x00000000003C0D5C string=0x00000000001FD6A0 "0'"
 *   insn=0x00000000003C0D6C string=0x00000000003C0D70 "p"
 *   insn=0x00000000003C0D8C string=0x00000000001F81E0 "0'"
 *   insn=0x00000000003C0D9C string=0x00000000003C0DBC "E"
 *   insn=0x00000000003C0DBC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C0DD0 string=0x00000000003C0DD4 "^5"
 *   insn=0x00000000003C0DE4 string=0x00000000003C0DE8 "T"
 *   insn=0x00000000003C0DF8 string=0x00000000003C0DFC "U"
 *   insn=0x00000000003C0DFC string=0x00000000001FDF50 "0'"
 *   insn=0x00000000003C0E0C string=0x00000000001F4C80 "P'"
 *   insn=0x00000000003C0E14 string=0x00000000003C0E18 ")"
 *   insn=0x00000000003C0E18 string=0x00000000003C0E1C ")"
 *   insn=0x00000000003C0E24 string=0x00000000003C0E28 "A"
 *   insn=0x00000000003C0E28 string=0x00000000003C0E50 ")"
 *   insn=0x00000000003C0E38 string=0x00000000003C0E3C "`"
 *   insn=0x00000000003C0E50 string=0x00000000003C0E54 ")=G"
 *   insn=0x00000000003C0E54 string=0x00000000003C0E58 "!"
 *   insn=0x00000000003C0E5C string=0x00000000003C0E60 "\t"
 *   insn=0x00000000003C0E5C string=0x00000000003C0E74 "\t"
 *   insn=0x00000000003C0E60 string=0x00000000003C0E64 "*"
 *   insn=0x00000000003C0E64 string=0x00000000003C0E68 "\n"
 *   insn=0x00000000003C0E70 string=0x00000000003C0E80 "?"
 *   insn=0x00000000003C0E74 string=0x00000000003C0E78 "*"
 *   insn=0x00000000003C0E78 string=0x00000000003C0E7C "\n"
 *   insn=0x00000000003C0E80 string=0x00000000003C0E84 "L"
 *   insn=0x00000000003C0E88 string=0x00000000003C0E8C "F"
 *   insn=0x00000000003C0E98 string=0x00000000003C0E9C "*"
 *   insn=0x00000000003C0E9C string=0x00000000003C0EA0 "J"
 *   insn=0x00000000003C0EA4 string=0x00000000003C0EA8 "(a"
 *   insn=0x00000000003C0EB0 string=0x00000000003C0EB4 "*"
 *   insn=0x00000000003C0EB4 string=0x00000000003C0EB8 "J=G"
 *   insn=0x00000000003C0EB8 string=0x00000000003C0EBC ")!"
 *   insn=0x00000000003C0EC0 string=0x00000000003C0EC4 "*"
 *   insn=0x00000000003C0EC0 string=0x00000000003C0EF0 "*"
 *   insn=0x00000000003C0EC4 string=0x00000000003C0EC8 "K"
 *   insn=0x00000000003C0EC8 string=0x00000000003C0ECC "+"
 *   insn=0x00000000003C0ED0 string=0x00000000003C0ED4 "_"
 *   insn=0x00000000003C0EE0 string=0x00000000003C0EE4 "0"
 *   insn=0x00000000003C0EE8 string=0x00000000003C0EEC "v"
 *   insn=0x00000000003C0EF0 string=0x00000000003C0EF4 "K"
 *   insn=0x00000000003C0EF4 string=0x00000000003C0EF8 "+"
 *   insn=0x00000000003C0EF8 string=0x00000000003C0EFC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::LoadFromPath(Caver::PlayerProfile *a1, __int64 a2, char a3)
{
  const void *v5; // x0
  const void *v6; // x8
  void *v7; // x0
  char v8; // w0
  unsigned int v9; // w19
  _BYTE v11[176]; // [xsp+40h] [xbp-E8h] BYREF
  __int64 v12; // [xsp+F0h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (Caver::FileExistsAtPath() & 1) != 0 )
  {
    Caver::Proto::PlayerProfile::PlayerProfile((Caver::Proto::PlayerProfile *)v11);
    Caver::NewByteBufferFromFile();
    v6 = v5;
    v7 = (void *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = v6;
    if ( v7 )
    {
      operator delete[](v7);
      v6 = (const void *)*((_QWORD *)a1 + 1);
    }
    if ( v6 && (google::protobuf::MessageLite::ParseFromArray((google::protobuf::MessageLite *)v11, v6), (v8 & 1) != 0) )
    {
      Caver::PlayerProfile::LoadFromProtobufMessage(a1, (const Caver::Proto::PlayerProfile *)v11, a3 & 1);
      v9 = 1;
    }
    else
    {
      v9 = 0;
    }
    Caver::Proto::PlayerProfile::~PlayerProfile((Caver::Proto::PlayerProfile *)v11);
  }
  else
  {
    return 0;
  }
  return v9;
}

