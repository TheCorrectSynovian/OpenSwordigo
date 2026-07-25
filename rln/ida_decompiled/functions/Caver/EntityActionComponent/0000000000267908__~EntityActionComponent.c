/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267908
 * Mangled: _ZN5Caver21EntityActionComponentD2Ev
 * Demangled: Caver::EntityActionComponent::~EntityActionComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5490  Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x0000000000267914 string=0x0000000000267918 "\tD"
 *   insn=0x000000000026791C string=0x0000000000267920 "tR@"
 *   insn=0x0000000000267920 string=0x0000000000267924 "\n"
 *   insn=0x0000000000267924 string=0x0000000000267928 "\tA"
 *   insn=0x0000000000267928 string=0x000000000026792C "@"
 *   insn=0x000000000026792C string=0x0000000000267930 ""
 *   insn=0x0000000000267934 string=0x0000000000267938 "i"
 *   insn=0x0000000000267938 string=0x000000000026793C "`"
 *   insn=0x000000000026793C string=0x0000000000267940 "4"
 *   insn=0x0000000000267940 string=0x0000000000267984 "`"
 *   insn=0x0000000000267944 string=0x0000000000267948 ""
 *   insn=0x0000000000267954 string=0x0000000000267958 "\t@"
 *   insn=0x0000000000267964 string=0x0000000000267968 ""
 *   insn=0x0000000000267974 string=0x0000000000267978 "@"
 *   insn=0x0000000000267984 string=0x0000000000267988 "z`"
 *   insn=0x0000000000267998 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000026799C string=0x00000000002679A0 "`"
 *   insn=0x00000000002679A0 string=0x00000000002679A4 "s`"
 *   insn=0x00000000002679BC string=0x00000000002679C0 "c"
 *   insn=0x00000000002679D0 string=0x00000000002679D4 "\tD"
 *   insn=0x00000000002679D8 string=0x00000000002679DC "tR@"
 *   insn=0x00000000002679DC string=0x00000000002679E0 "\n"
 *   insn=0x00000000002679E0 string=0x00000000002679E4 "\tA"
 *   insn=0x00000000002679E4 string=0x00000000002679E8 "@"
 *   insn=0x00000000002679E8 string=0x00000000002679EC ""
 *   insn=0x00000000002679F0 string=0x00000000002679F4 "i"
 *   insn=0x00000000002679F4 string=0x00000000002679F8 "`"
 *   insn=0x00000000002679F8 string=0x00000000002679FC "4"
 *   insn=0x00000000002679FC string=0x0000000000267A40 "`"
 *   insn=0x0000000000267A00 string=0x0000000000267A04 ""
 *   insn=0x0000000000267A10 string=0x0000000000267A14 "\t@"
 *   insn=0x0000000000267A20 string=0x0000000000267A24 ""
 *   insn=0x0000000000267A30 string=0x0000000000267A34 "@"
 *   insn=0x0000000000267A40 string=0x0000000000267A44 "K`"
 *   insn=0x0000000000267A5C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000267A60 string=0x0000000000267A64 "`"
 *   insn=0x0000000000267A64 string=0x0000000000267A68 "B`"
 *   insn=0x0000000000267A84 string=0x0000000000267A88 "\n>"
 *   insn=0x0000000000267A90 string=0x0000000000267A94 "."
 *   insn=0x0000000000267AAC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000267AC0 string=0x0000000000267AC4 ""
 *   insn=0x0000000000267AC4 string=0x0000000000267AC8 "J\tD"
 *   insn=0x0000000000267AD0 string=0x0000000000267AD4 "a"
 *   insn=0x0000000000267AD4 string=0x0000000000267AD8 "L"
 *   insn=0x0000000000267AD8 string=0x0000000000267ADC "KA"
 *   insn=0x0000000000267AE0 string=0x0000000000267AE4 "J"
 *   insn=0x0000000000267AE8 string=0x0000000000267AEC " "
 *   insn=0x0000000000267AEC string=0x0000000000267AF0 "A"
 *   insn=0x0000000000267B18 string=0x0000000000267B1C "]6"
 *   insn=0x0000000000267B1C string=0x00000000001F5490 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityActionComponent::~EntityActionComponent(Caver::EntityActionComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 20);
  *(_QWORD *)&v3 = &off_6BE838;
  *((_QWORD *)&v3 + 1) = &off_6BE878;
  *(_QWORD *)this = off_6BE720;
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
  Caver::Program::~Program((Caver::EntityActionComponent *)((char *)this + 112));
  Caver::Component::~Component(this);
}

