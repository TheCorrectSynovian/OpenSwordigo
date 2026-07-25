/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281F14
 * Mangled: _ZN5Caver14SpellComponentD2Ev
 * Demangled: Caver::SpellComponent::~SpellComponent()
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000282110  Caver::DimensionSpellComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 65
 *   insn=0x0000000000281F1C string=0x0000000000281F20 "#"
 *   insn=0x0000000000281F20 string=0x0000000000281F24 "5D"
 *   insn=0x0000000000281F28 string=0x0000000000281F2C "`B"
 *   insn=0x0000000000281F2C string=0x0000000000281F30 "\n!"
 *   insn=0x0000000000281F30 string=0x0000000000281F34 "\tA"
 *   insn=0x0000000000281F34 string=0x0000000000281F38 "!"
 *   insn=0x0000000000281F38 string=0x0000000000281F3C "@"
 *   insn=0x0000000000281F40 string=0x0000000000281F44 "i"
 *   insn=0x0000000000281F44 string=0x0000000000281F48 "`"
 *   insn=0x0000000000281F48 string=0x0000000000281F4C "\t"
 *   insn=0x0000000000281F4C string=0x0000000000281F50 "`:@"
 *   insn=0x0000000000281F54 string=0x0000000000281F58 "@"
 *   insn=0x0000000000281F58 string=0x0000000000281F5C ""
 *   insn=0x0000000000281F5C string=0x0000000000281F60 ""
 *   insn=0x0000000000281F64 string=0x0000000000281F68 ""
 *   insn=0x0000000000281F68 string=0x0000000000281F6C ""
 *   insn=0x0000000000281F7C string=0x0000000000281F80 "T"
 *   insn=0x0000000000281F80 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000281F90 string=0x0000000000281F94 "("
 *   insn=0x0000000000281F94 string=0x0000000000281F98 "\t\t@"
 *   insn=0x0000000000281F98 string=0x0000000000281F9C ")"
 *   insn=0x0000000000281F9C string=0x0000000000281FA0 "\t\t"
 *   insn=0x0000000000281FA4 string=0x0000000000281FA8 "\t"
 *   insn=0x0000000000281FA8 string=0x0000000000281FAC ")"
 *   insn=0x0000000000281FB0 string=0x0000000000281FB4 " "
 *   insn=0x0000000000281FB8 string=0x0000000000281FBC "E"
 *   insn=0x0000000000281FC0 string=0x0000000000281FC4 "@"
 *   insn=0x0000000000281FD4 string=0x0000000000281FD8 "#"
 *   insn=0x0000000000281FD8 string=0x0000000000281FDC "5D"
 *   insn=0x0000000000281FE0 string=0x0000000000281FE4 "`B"
 *   insn=0x0000000000281FE4 string=0x0000000000281FE8 "\n!"
 *   insn=0x0000000000281FE8 string=0x0000000000281FEC "\tA"
 *   insn=0x0000000000281FEC string=0x0000000000281FF0 "!"
 *   insn=0x0000000000281FF0 string=0x0000000000281FF4 "@"
 *   insn=0x0000000000281FF8 string=0x0000000000281FFC "i"
 *   insn=0x0000000000281FFC string=0x0000000000282000 "`"
 *   insn=0x0000000000282004 string=0x0000000000282008 "`:@"
 *   insn=0x000000000028200C string=0x0000000000282010 "@"
 *   insn=0x0000000000282010 string=0x0000000000282014 ""
 *   insn=0x0000000000282014 string=0x0000000000282018 ""
 *   insn=0x000000000028201C string=0x0000000000282020 ""
 *   insn=0x0000000000282020 string=0x0000000000282024 ""
 *   insn=0x000000000028202C string=0x0000000000282030 "("
 *   insn=0x0000000000282040 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000282058 string=0x000000000028205C "("
 *   insn=0x000000000028205C string=0x0000000000282060 "\t\t@"
 *   insn=0x0000000000282060 string=0x0000000000282064 ")"
 *   insn=0x0000000000282064 string=0x0000000000282068 "\t\t"
 *   insn=0x000000000028206C string=0x0000000000282070 "\t"
 *   insn=0x0000000000282070 string=0x0000000000282074 ")"
 *   insn=0x0000000000282078 string=0x000000000028207C " "
 *   insn=0x00000000002820AC string=0x00000000002820B0 "L"
 *   insn=0x00000000002820B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002820B8 string=0x00000000002820BC "#"
 *   insn=0x00000000002820B8 string=0x00000000001F8740 "0'"
 *   insn=0x00000000002820BC string=0x00000000002820C0 ""
 *   insn=0x00000000002820C8 string=0x00000000002820CC "\n!"
 *   insn=0x00000000002820CC string=0x00000000002820D0 "\tA"
 *   insn=0x00000000002820D0 string=0x00000000002820D4 "@"
 *   insn=0x00000000002820D4 string=0x00000000002820D8 "!"
 *   insn=0x00000000002820DC string=0x00000000002820E0 "i"
 *   insn=0x00000000002820E0 string=0x00000000002820E4 "`"
 *   insn=0x00000000002820E4 string=0x00000000002820E8 "B"
 *   insn=0x00000000002820E8 string=0x00000000001F9DF0 "0'"
 *   insn=0x0000000000282100 string=0x0000000000282104 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpellComponent::~SpellComponent(Caver::SpellComponent *this)
{
  __int128 v2; // q0
  _DWORD *v3; // x0
  int v4; // w8

  *(_QWORD *)&v2 = &off_6C1358;
  *((_QWORD *)&v2 + 1) = &off_6C1398;
  *(_QWORD *)this = off_6C1220;
  *((_OWORD *)this + 1) = v2;
  Caver::Program::~Program((Caver::SpellComponent *)((char *)this + 144));
  v3 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    v4 = v3[2] - 1;
    v3[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  Caver::Component::~Component(this);
}

