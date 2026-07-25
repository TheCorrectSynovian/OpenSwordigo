/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F530
 * Mangled: _ZN5Caver19EntityInfoComponentD2Ev
 * Demangled: Caver::EntityInfoComponent::~EntityInfoComponent()
 *
 * Callers: 1
 *   0x00000000001FDC70  Caver::EntityInfoComponent::~EntityInfoComponent()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FDC70  Caver::EntityInfoComponent::~EntityInfoComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026F700  Caver::EntityInfoComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x000000000026F540 string=0x000000000026F544 "U"
 *   insn=0x000000000026F54C string=0x000000000026F550 ")"
 *   insn=0x000000000026F558 string=0x000000000026F55C "tF@"
 *   insn=0x000000000026F55C string=0x000000000026F560 "("
 *   insn=0x000000000026F564 string=0x000000000026F568 "("
 *   insn=0x000000000026F568 string=0x000000000026F56C "*A"
 *   insn=0x000000000026F570 string=0x000000000026F574 "j"
 *   insn=0x000000000026F574 string=0x000000000026F578 "`"
 *   insn=0x000000000026F578 string=0x000000000026F57C "4"
 *   insn=0x000000000026F57C string=0x000000000026F5C0 "h>@"
 *   insn=0x000000000026F580 string=0x000000000026F584 ""
 *   insn=0x000000000026F590 string=0x000000000026F594 "\t@"
 *   insn=0x000000000026F5A0 string=0x000000000026F5A4 ""
 *   insn=0x000000000026F5B0 string=0x000000000026F5B4 "@"
 *   insn=0x000000000026F5C4 string=0x000000000026F5C8 ")"
 *   insn=0x000000000026F5DC string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000026F5EC string=0x000000000026F648 """
 *   insn=0x000000000026F604 string=0x000000000026F608 ")=G"
 *   insn=0x000000000026F608 string=0x000000000026F60C "!"
 *   insn=0x000000000026F610 string=0x000000000026F614 "\t"
 *   insn=0x000000000026F610 string=0x000000000026F628 "\t"
 *   insn=0x000000000026F614 string=0x000000000026F618 "*"
 *   insn=0x000000000026F618 string=0x000000000026F61C "\n"
 *   insn=0x000000000026F624 string=0x000000000026F634 "?"
 *   insn=0x000000000026F628 string=0x000000000026F62C "*"
 *   insn=0x000000000026F62C string=0x000000000026F630 "\n"
 *   insn=0x000000000026F63C string=0x000000000026F640 "Y"
 *   insn=0x000000000026F648 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026F650 string=0x000000000026F654 "J"
 *   insn=0x000000000026F658 string=0x000000000026F65C "(a"
 *   insn=0x000000000026F668 string=0x000000000026F66C "J=G"
 *   insn=0x000000000026F66C string=0x000000000026F670 ")!"
 *   insn=0x000000000026F674 string=0x000000000026F678 "*"
 *   insn=0x000000000026F674 string=0x000000000026F6AC "*"
 *   insn=0x000000000026F678 string=0x000000000026F67C "K"
 *   insn=0x000000000026F67C string=0x000000000026F680 "+"
 *   insn=0x000000000026F684 string=0x000000000026F688 "_"
 *   insn=0x000000000026F694 string=0x000000000026F698 "C"
 *   insn=0x000000000026F6AC string=0x000000000026F6B0 "K"
 *   insn=0x000000000026F6B0 string=0x000000000026F6B4 "+"
 *   insn=0x000000000026F6B4 string=0x000000000026F6B8 "_"
 *   insn=0x000000000026F6D4 string=0x000000000026F6D8 "f9"
 *   insn=0x000000000026F6D8 string=0x00000000001FDC70 "0'"
 *   insn=0x000000000026F6E8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026F6F8 string=0x000000000026F6FC "rH"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityInfoComponent::~EntityInfoComponent(Caver::EntityInfoComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = &off_6BEFB8;
  *((_QWORD *)&v3 + 1) = &off_6BEFF8;
  *(_QWORD *)this = off_6BEEA0;
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
  v6 = *((_QWORD *)this + 15);
  v7 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v7);
  }
  Caver::Component::~Component(this);
}

