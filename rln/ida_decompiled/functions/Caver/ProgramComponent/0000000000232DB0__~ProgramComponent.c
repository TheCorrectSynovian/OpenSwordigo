/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232DB0
 * Mangled: _ZN5Caver16ProgramComponentD2Ev
 * Demangled: Caver::ProgramComponent::~ProgramComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7DC0  Caver::ProgramComponent::InitWithComponent(Caver::ProgramComponent const*)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x0000000000232DBC string=0x0000000000232DC0 ""
 *   insn=0x0000000000232DC4 string=0x0000000000232DC8 "t^@"
 *   insn=0x0000000000232DC8 string=0x0000000000232DCC "\n"
 *   insn=0x0000000000232DCC string=0x0000000000232DD0 "\tA"
 *   insn=0x0000000000232DD0 string=0x0000000000232DD4 "@"
 *   insn=0x0000000000232DD4 string=0x0000000000232DD8 ""
 *   insn=0x0000000000232DDC string=0x0000000000232DE0 "i"
 *   insn=0x0000000000232DE0 string=0x0000000000232DE4 "`"
 *   insn=0x0000000000232DE4 string=0x0000000000232DE8 "4"
 *   insn=0x0000000000232DE8 string=0x0000000000232E2C "`"
 *   insn=0x0000000000232DEC string=0x0000000000232DF0 ""
 *   insn=0x0000000000232DFC string=0x0000000000232E00 "\t@"
 *   insn=0x0000000000232E0C string=0x0000000000232E10 ""
 *   insn=0x0000000000232E1C string=0x0000000000232E20 "@"
 *   insn=0x0000000000232E2C string=0x0000000000232E30 "P3"
 *   insn=0x0000000000232E40 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000232E44 string=0x0000000000232E48 "`"
 *   insn=0x0000000000232E48 string=0x0000000000232E4C "I3"
 *   insn=0x0000000000232E64 string=0x0000000000232E68 "9m"
 *   insn=0x0000000000232E78 string=0x0000000000232E7C ""
 *   insn=0x0000000000232E80 string=0x0000000000232E84 "t^@"
 *   insn=0x0000000000232E84 string=0x0000000000232E88 "\n"
 *   insn=0x0000000000232E88 string=0x0000000000232E8C "\tA"
 *   insn=0x0000000000232E8C string=0x0000000000232E90 "@"
 *   insn=0x0000000000232E90 string=0x0000000000232E94 ""
 *   insn=0x0000000000232E98 string=0x0000000000232E9C "i"
 *   insn=0x0000000000232E9C string=0x0000000000232EA0 "`"
 *   insn=0x0000000000232EA0 string=0x0000000000232EA4 "4"
 *   insn=0x0000000000232EA4 string=0x0000000000232EE8 "`"
 *   insn=0x0000000000232EA8 string=0x0000000000232EAC ""
 *   insn=0x0000000000232EB8 string=0x0000000000232EBC "\t@"
 *   insn=0x0000000000232EC8 string=0x0000000000232ECC ""
 *   insn=0x0000000000232ED8 string=0x0000000000232EDC "@"
 *   insn=0x0000000000232EE8 string=0x0000000000232EEC "!3"
 *   insn=0x0000000000232EF0 string=0x0000000000232EF4 "w"
 *   insn=0x0000000000232F04 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000232F08 string=0x0000000000232F0C "`"
 *   insn=0x0000000000232F24 string=0x0000000000232F28 "j"
 *   insn=0x0000000000232F34 string=0x0000000000232F38 "c:"
 *   insn=0x0000000000232F54 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000232F68 string=0x0000000000232F6C ""
 *   insn=0x0000000000232F6C string=0x0000000000232F70 "J"
 *   insn=0x0000000000232F78 string=0x0000000000232F7C "a"
 *   insn=0x0000000000232F7C string=0x0000000000232F80 "L"
 *   insn=0x0000000000232F80 string=0x0000000000232F84 "KA"
 *   insn=0x0000000000232F88 string=0x0000000000232F8C "J"
 *   insn=0x0000000000232F94 string=0x0000000000232F98 " "
 *   insn=0x0000000000232FA0 string=0x0000000000232FA4 "A"
 *   insn=0x0000000000232FD4 string=0x0000000000232FD8 "z"
 *   insn=0x0000000000232FD8 string=0x00000000001F7DC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramComponent::~ProgramComponent(Caver::ProgramComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 23);
  *(_QWORD *)&v3 = &off_6BAFE8;
  *((_QWORD *)&v3 + 1) = &off_6BB028;
  *(_QWORD *)this = off_6BAED0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::Program::~Program((Caver::ProgramComponent *)((char *)this + 128));
  Caver::Component::~Component(this);
}

