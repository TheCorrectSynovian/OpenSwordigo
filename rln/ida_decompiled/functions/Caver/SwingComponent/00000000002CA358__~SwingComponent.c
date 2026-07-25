/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA358
 * Mangled: _ZN5Caver14SwingComponentD2Ev
 * Demangled: Caver::SwingComponent::~SwingComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002CA490  Caver::SwingComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x00000000002CA364 string=0x00000000002CA368 ""
 *   insn=0x00000000002CA370 string=0x00000000002CA374 ")"
 *   insn=0x00000000002CA374 string=0x00000000002CA378 "`B@"
 *   insn=0x00000000002CA378 string=0x00000000002CA37C ""
 *   insn=0x00000000002CA37C string=0x00000000002CA380 "\nA"
 *   insn=0x00000000002CA380 string=0x00000000002CA384 ""
 *   insn=0x00000000002CA384 string=0x00000000002CA388 "`"
 *   insn=0x00000000002CA388 string=0x00000000002CA38C ")A"
 *   insn=0x00000000002CA390 string=0x00000000002CA394 "j"
 *   insn=0x00000000002CA394 string=0x00000000002CA398 "`"
 *   insn=0x00000000002CA398 string=0x00000000002CA39C "i:"
 *   insn=0x00000000002CA3A0 string=0x00000000002CA3A4 "@"
 *   insn=0x00000000002CA3A4 string=0x00000000002CA3A8 ""
 *   insn=0x00000000002CA3A8 string=0x00000000002CA3AC ""
 *   insn=0x00000000002CA3B0 string=0x00000000002CA3B4 ""
 *   insn=0x00000000002CA3B4 string=0x00000000002CA3B8 ""
 *   insn=0x00000000002CA3C8 string=0x00000000002CA3CC "A"
 *   insn=0x00000000002CA3CC string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002CA3D4 string=0x00000000002CA3D8 ">"
 *   insn=0x00000000002CA3DC string=0x00000000002CA3E0 "9"
 *   insn=0x00000000002CA3F4 string=0x00000000002CA3F8 ""
 *   insn=0x00000000002CA400 string=0x00000000002CA404 ")"
 *   insn=0x00000000002CA404 string=0x00000000002CA408 "`B@"
 *   insn=0x00000000002CA408 string=0x00000000002CA40C ""
 *   insn=0x00000000002CA40C string=0x00000000002CA410 "\nA"
 *   insn=0x00000000002CA410 string=0x00000000002CA414 ""
 *   insn=0x00000000002CA414 string=0x00000000002CA418 "`"
 *   insn=0x00000000002CA418 string=0x00000000002CA41C ")A"
 *   insn=0x00000000002CA420 string=0x00000000002CA424 "j"
 *   insn=0x00000000002CA424 string=0x00000000002CA428 "`"
 *   insn=0x00000000002CA428 string=0x00000000002CA42C "i:"
 *   insn=0x00000000002CA430 string=0x00000000002CA434 "@"
 *   insn=0x00000000002CA434 string=0x00000000002CA438 ""
 *   insn=0x00000000002CA438 string=0x00000000002CA43C ""
 *   insn=0x00000000002CA440 string=0x00000000002CA444 ""
 *   insn=0x00000000002CA444 string=0x00000000002CA448 ""
 *   insn=0x00000000002CA464 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingComponent::~SwingComponent(Caver::SwingComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6C55B8;
  *((_QWORD *)&v3 + 1) = &off_6C55F8;
  *(_QWORD *)this = off_6C54A0;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 14) = &off_6BDF68;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Component::~Component(this);
}

