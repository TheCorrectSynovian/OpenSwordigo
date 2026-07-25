/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028543C
 * Mangled: _ZN5Caver18MagicBoltComponentD2Ev
 * Demangled: Caver::MagicBoltComponent::~MagicBoltComponent()
 *
 * Callers: 1
 *   0x00000000001F4A20  Caver::MagicBoltComponent::~MagicBoltComponent()
 *
 * Callees: 7
 *   0x00000000001F4A20  Caver::MagicBoltComponent::~MagicBoltComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028570C  Caver::MagicBoltComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 102
 *   insn=0x0000000000285448 string=0x000000000028544C "#"
 *   insn=0x000000000028544C string=0x0000000000285450 ""
 *   insn=0x000000000028545C string=0x0000000000285460 "`"
 *   insn=0x0000000000285460 string=0x0000000000285464 "\n!"
 *   insn=0x0000000000285464 string=0x0000000000285468 "\tA"
 *   insn=0x0000000000285468 string=0x000000000028546C "!"
 *   insn=0x000000000028546C string=0x0000000000285470 "@"
 *   insn=0x0000000000285478 string=0x000000000028547C "i"
 *   insn=0x000000000028547C string=0x0000000000285480 "`"
 *   insn=0x0000000000285480 string=0x0000000000285484 "uz"
 *   insn=0x0000000000285488 string=0x000000000028548C "@"
 *   insn=0x0000000000285488 string=0x00000000002854A8 "`v@"
 *   insn=0x000000000028548C string=0x0000000000285490 ""
 *   insn=0x0000000000285490 string=0x0000000000285494 ""
 *   insn=0x0000000000285498 string=0x000000000028549C ""
 *   insn=0x000000000028549C string=0x00000000002854A0 ""
 *   insn=0x00000000002854A8 string=0x00000000002854AC "un"
 *   insn=0x00000000002854B0 string=0x00000000002854B4 "@"
 *   insn=0x00000000002854B0 string=0x00000000002854D0 "#"
 *   insn=0x00000000002854B4 string=0x00000000002854B8 ""
 *   insn=0x00000000002854B8 string=0x00000000002854BC ""
 *   insn=0x00000000002854C0 string=0x00000000002854C4 ""
 *   insn=0x00000000002854C4 string=0x00000000002854C8 ""
 *   insn=0x00000000002854D0 string=0x00000000002854D4 "`j@"
 *   insn=0x00000000002854D4 string=0x00000000002854D8 "mB"
 *   insn=0x00000000002854D8 string=0x00000000002854DC "A"
 *   insn=0x00000000002854DC string=0x00000000002854E0 "hb"
 *   insn=0x00000000002854E4 string=0x00000000002854E8 "@"
 *   insn=0x00000000002854E8 string=0x00000000002854EC ""
 *   insn=0x00000000002854EC string=0x00000000002854F0 ""
 *   insn=0x00000000002854F4 string=0x00000000002854F8 ""
 *   insn=0x00000000002854F8 string=0x00000000002854FC ""
 *   insn=0x0000000000285504 string=0x0000000000285508 "5D"
 *   insn=0x0000000000285508 string=0x000000000028550C "`B"
 *   insn=0x000000000028550C string=0x0000000000285510 "\n!"
 *   insn=0x0000000000285510 string=0x0000000000285514 "\tA"
 *   insn=0x0000000000285514 string=0x0000000000285518 "!"
 *   insn=0x0000000000285518 string=0x000000000028551C "@"
 *   insn=0x0000000000285520 string=0x0000000000285524 "i"
 *   insn=0x0000000000285524 string=0x0000000000285528 "`"
 *   insn=0x000000000028552C string=0x0000000000285530 "`:@"
 *   insn=0x0000000000285534 string=0x0000000000285538 "@"
 *   insn=0x0000000000285538 string=0x000000000028553C ""
 *   insn=0x000000000028553C string=0x0000000000285540 ""
 *   insn=0x0000000000285544 string=0x0000000000285548 ""
 *   insn=0x0000000000285548 string=0x000000000028554C ""
 *   insn=0x0000000000285564 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000285568 string=0x000000000028556C "U"
 *   insn=0x000000000028557C string=0x00000000002855B4 "#"
 *   insn=0x0000000000285584 string=0x0000000000285588 "`v@"
 *   insn=0x0000000000285588 string=0x000000000028558C "A"
 *   insn=0x000000000028558C string=0x0000000000285590 "hn"
 *   insn=0x0000000000285594 string=0x0000000000285598 "@"
 *   insn=0x0000000000285598 string=0x000000000028559C ""
 *   insn=0x000000000028559C string=0x00000000002855A0 ""
 *   insn=0x00000000002855A4 string=0x00000000002855A8 ""
 *   insn=0x00000000002855A8 string=0x00000000002855AC ""
 *   insn=0x00000000002855B4 string=0x00000000002855B8 "`j@"
 *   insn=0x00000000002855B8 string=0x00000000002855BC "mB"
 *   insn=0x00000000002855BC string=0x00000000002855C0 "A"
 *   insn=0x00000000002855C0 string=0x00000000002855C4 "hb"
 *   insn=0x00000000002855C8 string=0x00000000002855CC "@"
 *   insn=0x00000000002855CC string=0x00000000002855D0 ""
 *   insn=0x00000000002855D0 string=0x00000000002855D4 ""
 *   insn=0x00000000002855D8 string=0x00000000002855DC ""
 *   insn=0x00000000002855DC string=0x00000000002855E0 ""
 *   insn=0x00000000002855E8 string=0x00000000002855EC "5D"
 *   insn=0x00000000002855EC string=0x00000000002855F0 "`B"
 *   insn=0x00000000002855F0 string=0x00000000002855F4 "\n!"
 *   insn=0x00000000002855F4 string=0x00000000002855F8 "\tA"
 *   insn=0x00000000002855F8 string=0x00000000002855FC "!"
 *   insn=0x00000000002855FC string=0x0000000000285600 "@"
 *   insn=0x0000000000285604 string=0x0000000000285608 "i"
 *   insn=0x0000000000285608 string=0x000000000028560C "`"
 *   insn=0x000000000028560C string=0x0000000000285610 "X"
 *   insn=0x0000000000285610 string=0x0000000000285614 "`:@"
 *   insn=0x0000000000285618 string=0x000000000028561C "@"
 *   insn=0x000000000028561C string=0x0000000000285620 ""
 *   insn=0x0000000000285620 string=0x0000000000285624 ""
 *   insn=0x0000000000285628 string=0x000000000028562C ""
 *   insn=0x000000000028562C string=0x0000000000285630 ""
 *   insn=0x000000000028563C string=0x0000000000285640 """
 *   insn=0x0000000000285650 string=0x0000000000285654 "("
 *   insn=0x0000000000285654 string=0x0000000000285658 "\t\t@"
 *   insn=0x0000000000285658 string=0x000000000028565C ")"
 *   insn=0x000000000028565C string=0x0000000000285660 "\t\t"
 *   insn=0x0000000000285664 string=0x0000000000285668 "\t"
 *   insn=0x0000000000285668 string=0x000000000028566C ")"
 *   insn=0x0000000000285670 string=0x0000000000285674 " "
 *   insn=0x000000000028568C string=0x0000000000285690 "/#"
 *   insn=0x0000000000285690 string=0x0000000000285694 "h:@"
 *   insn=0x0000000000285698 string=0x000000000028569C "("
 *   insn=0x000000000028569C string=0x00000000002856A0 "\t\t@"
 *   insn=0x00000000002856A0 string=0x00000000002856A4 ")"
 *   insn=0x00000000002856A4 string=0x00000000002856A8 "\t\t"
 *   insn=0x00000000002856AC string=0x00000000002856B0 "\t"
 *   insn=0x00000000002856B0 string=0x00000000002856B4 ")"
 *   insn=0x00000000002856B8 string=0x00000000002856BC " "
 *   insn=0x00000000002856C8 string=0x00000000002856CC "~"
 *   insn=0x00000000002856E4 string=0x00000000001F4A20 "P'"
 *   insn=0x00000000002856F4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000285704 string=0x0000000000285708 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBoltComponent::~MagicBoltComponent(Caver::MagicBoltComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  __int128 v9; // q0
  _DWORD *v10; // x0
  int v11; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 32);
  *(_QWORD *)&v3 = &off_6C05A8;
  *((_QWORD *)&v3 + 1) = &off_6C05E8;
  *(_QWORD *)this = off_6C0470;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 30) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 27) = off_6BE248;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 24) = off_6C0268;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *(_QWORD *)&v9 = &off_6C1358;
  *((_QWORD *)&v9 + 1) = &off_6C1398;
  *(_QWORD *)this = off_6C1220;
  *((_OWORD *)this + 1) = v9;
  Caver::Program::~Program((Caver::MagicBoltComponent *)((char *)this + 144));
  v10 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v10 )
  {
    v11 = v10[2] - 1;
    v10[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  Caver::Component::~Component(this);
}

