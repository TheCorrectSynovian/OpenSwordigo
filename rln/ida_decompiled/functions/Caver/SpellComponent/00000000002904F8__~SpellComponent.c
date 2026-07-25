/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002904F8
 * Mangled: _ZN5Caver14SpellComponentD0Ev
 * Demangled: Caver::SpellComponent::~SpellComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000290504 string=0x0000000000290508 "5D"
 *   insn=0x000000000029050C string=0x0000000000290510 "`B"
 *   insn=0x0000000000290510 string=0x0000000000290514 "\n!"
 *   insn=0x0000000000290514 string=0x0000000000290518 "\tA"
 *   insn=0x0000000000290518 string=0x000000000029051C "!"
 *   insn=0x000000000029051C string=0x0000000000290520 "@"
 *   insn=0x0000000000290524 string=0x0000000000290528 "i"
 *   insn=0x0000000000290528 string=0x000000000029052C "`"
 *   insn=0x0000000000290530 string=0x0000000000290534 "`:@"
 *   insn=0x0000000000290538 string=0x000000000029053C "@"
 *   insn=0x000000000029053C string=0x0000000000290540 ""
 *   insn=0x0000000000290540 string=0x0000000000290544 ""
 *   insn=0x0000000000290548 string=0x000000000029054C ""
 *   insn=0x000000000029054C string=0x0000000000290550 ""
 *   insn=0x000000000029055C string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000290568 string=0x000000000029056C "Q"
 *   insn=0x000000000029056C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000290584 string=0x0000000000290588 "("
 *   insn=0x0000000000290588 string=0x000000000029058C "\t\t@"
 *   insn=0x000000000029058C string=0x0000000000290590 ")"
 *   insn=0x0000000000290590 string=0x0000000000290594 "\t\t"
 *   insn=0x0000000000290598 string=0x000000000029059C "\t"
 *   insn=0x000000000029059C string=0x00000000002905A0 ")"
 *   insn=0x00000000002905A4 string=0x00000000002905A8 " "
 *   insn=0x00000000002905B4 string=0x00000000002905B8 ">"
 *   insn=0x00000000002905C0 string=0x00000000002905C4 "b"
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
  operator delete(this);
}

