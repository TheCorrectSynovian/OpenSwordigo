/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286538
 * Mangled: _ZN5Caver18MagicBombComponentD2Ev
 * Demangled: Caver::MagicBombComponent::~MagicBombComponent()
 *
 * Callers: 1
 *   0x0000000000201740  Caver::MagicBombComponent::~MagicBombComponent()
 *
 * Callees: 7
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000201740  Caver::MagicBombComponent::~MagicBombComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000286774  Caver::MagicBombComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 80
 *   insn=0x0000000000286540 string=0x0000000000286544 "#"
 *   insn=0x0000000000286544 string=0x0000000000286548 ""
 *   insn=0x000000000028654C string=0x0000000000286550 "`v@"
 *   insn=0x0000000000286550 string=0x0000000000286554 "\n!"
 *   insn=0x0000000000286554 string=0x0000000000286558 "\tA"
 *   insn=0x0000000000286558 string=0x000000000028655C "@"
 *   insn=0x000000000028655C string=0x0000000000286560 "!"
 *   insn=0x0000000000286564 string=0x0000000000286568 "i"
 *   insn=0x0000000000286568 string=0x000000000028656C "`"
 *   insn=0x0000000000286570 string=0x0000000000286574 "@"
 *   insn=0x0000000000286570 string=0x0000000000286590 "`f@"
 *   insn=0x0000000000286574 string=0x0000000000286578 ""
 *   insn=0x0000000000286578 string=0x000000000028657C ""
 *   insn=0x0000000000286580 string=0x0000000000286584 ""
 *   insn=0x0000000000286584 string=0x0000000000286588 ""
 *   insn=0x0000000000286594 string=0x0000000000286598 "@"
 *   insn=0x0000000000286598 string=0x000000000028659C ""
 *   insn=0x000000000028659C string=0x00000000002865A0 ""
 *   insn=0x00000000002865A4 string=0x00000000002865A8 ""
 *   insn=0x00000000002865A8 string=0x00000000002865AC ""
 *   insn=0x00000000002865B4 string=0x00000000002865B8 "5D"
 *   insn=0x00000000002865B8 string=0x00000000002865BC "`B"
 *   insn=0x00000000002865BC string=0x00000000002865C0 "\n!"
 *   insn=0x00000000002865C0 string=0x00000000002865C4 "\tA"
 *   insn=0x00000000002865C4 string=0x00000000002865C8 "!"
 *   insn=0x00000000002865C8 string=0x00000000002865CC "@"
 *   insn=0x00000000002865D0 string=0x00000000002865D4 "i"
 *   insn=0x00000000002865D4 string=0x00000000002865D8 "`"
 *   insn=0x00000000002865D8 string=0x00000000002865DC "e"
 *   insn=0x00000000002865DC string=0x00000000002865E0 "`:@"
 *   insn=0x00000000002865E4 string=0x00000000002865E8 "@"
 *   insn=0x00000000002865E8 string=0x00000000002865EC ""
 *   insn=0x00000000002865EC string=0x00000000002865F0 ""
 *   insn=0x00000000002865F4 string=0x00000000002865F8 ""
 *   insn=0x00000000002865F8 string=0x00000000002865FC ""
 *   insn=0x0000000000286610 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000286614 string=0x0000000000286618 "D"
 *   insn=0x0000000000286628 string=0x000000000028662C "("
 *   insn=0x000000000028662C string=0x0000000000286630 "\t\t@"
 *   insn=0x0000000000286630 string=0x0000000000286634 ")"
 *   insn=0x0000000000286634 string=0x0000000000286638 "\t\t"
 *   insn=0x000000000028663C string=0x0000000000286640 "\t"
 *   insn=0x0000000000286640 string=0x0000000000286644 ")"
 *   insn=0x0000000000286648 string=0x000000000028664C " "
 *   insn=0x0000000000286650 string=0x0000000000286654 "5D"
 *   insn=0x0000000000286654 string=0x0000000000286658 "`B"
 *   insn=0x0000000000286658 string=0x000000000028665C "\n!"
 *   insn=0x000000000028665C string=0x0000000000286660 "\tA"
 *   insn=0x0000000000286660 string=0x0000000000286664 "!"
 *   insn=0x0000000000286664 string=0x0000000000286668 "@"
 *   insn=0x000000000028666C string=0x0000000000286670 "i"
 *   insn=0x0000000000286670 string=0x0000000000286674 "`"
 *   insn=0x0000000000286674 string=0x0000000000286678 ">"
 *   insn=0x0000000000286678 string=0x000000000028667C "`:@"
 *   insn=0x0000000000286680 string=0x0000000000286684 "@"
 *   insn=0x0000000000286684 string=0x0000000000286688 ""
 *   insn=0x0000000000286688 string=0x000000000028668C ""
 *   insn=0x0000000000286690 string=0x0000000000286694 ""
 *   insn=0x0000000000286694 string=0x0000000000286698 ""
 *   insn=0x00000000002866A4 string=0x00000000002866A8 """
 *   insn=0x00000000002866B8 string=0x00000000002866BC "("
 *   insn=0x00000000002866BC string=0x00000000002866C0 "\t\t@"
 *   insn=0x00000000002866C0 string=0x00000000002866C4 ")"
 *   insn=0x00000000002866C4 string=0x00000000002866C8 "\t\t"
 *   insn=0x00000000002866CC string=0x00000000002866D0 "\t"
 *   insn=0x00000000002866D0 string=0x00000000002866D4 ")"
 *   insn=0x00000000002866D8 string=0x00000000002866DC " "
 *   insn=0x00000000002866E0 string=0x00000000002866E4 "{"
 *   insn=0x00000000002866F8 string=0x00000000002866FC "h:@"
 *   insn=0x0000000000286700 string=0x0000000000286704 "("
 *   insn=0x0000000000286704 string=0x0000000000286708 "\t\t@"
 *   insn=0x0000000000286708 string=0x000000000028670C ")"
 *   insn=0x000000000028670C string=0x0000000000286710 "\t\t"
 *   insn=0x0000000000286714 string=0x0000000000286718 "\t"
 *   insn=0x0000000000286718 string=0x000000000028671C ")"
 *   insn=0x0000000000286720 string=0x0000000000286724 " "
 *   insn=0x0000000000286728 string=0x000000000028672C "i"
 *   insn=0x0000000000286730 string=0x0000000000286734 "d"
 *   insn=0x000000000028675C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028676C string=0x0000000000286770 "U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBombComponent::~MagicBombComponent(Caver::MagicBombComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  __int128 v7; // q0
  _DWORD *v8; // x0
  int v9; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 29);
  *(_QWORD *)&v3 = &off_6C0768;
  *((_QWORD *)&v3 + 1) = &off_6C07A8;
  *(_QWORD *)this = off_6C0630;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 25);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *(_QWORD *)&v7 = &off_6C1358;
  *((_QWORD *)&v7 + 1) = &off_6C1398;
  *(_QWORD *)this = off_6C1220;
  *((_OWORD *)this + 1) = v7;
  Caver::Program::~Program((Caver::MagicBombComponent *)((char *)this + 144));
  v8 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  Caver::Component::~Component(this);
}

