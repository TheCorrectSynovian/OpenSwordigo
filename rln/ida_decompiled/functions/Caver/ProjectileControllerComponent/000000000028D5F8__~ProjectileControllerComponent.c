/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028D5F8
 * Mangled: _ZN5Caver29ProjectileControllerComponentD2Ev
 * Demangled: Caver::ProjectileControllerComponent::~ProjectileControllerComponent()
 *
 * Callers: 1
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028D710  Caver::ProjectileControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000028D604 string=0x000000000028D608 "YD"
 *   insn=0x000000000028D60C string=0x000000000028D610 "`>@"
 *   insn=0x000000000028D610 string=0x000000000028D614 "\n"
 *   insn=0x000000000028D614 string=0x000000000028D618 "\tA"
 *   insn=0x000000000028D618 string=0x000000000028D61C "@"
 *   insn=0x000000000028D61C string=0x000000000028D620 ""
 *   insn=0x000000000028D624 string=0x000000000028D628 "i"
 *   insn=0x000000000028D628 string=0x000000000028D62C "`"
 *   insn=0x000000000028D630 string=0x000000000028D634 "@"
 *   insn=0x000000000028D634 string=0x000000000028D638 ""
 *   insn=0x000000000028D638 string=0x000000000028D63C ""
 *   insn=0x000000000028D640 string=0x000000000028D644 ""
 *   insn=0x000000000028D644 string=0x000000000028D648 ""
 *   insn=0x000000000028D65C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028D670 string=0x000000000028D674 "6"
 *   insn=0x000000000028D684 string=0x000000000028D688 "YD"
 *   insn=0x000000000028D68C string=0x000000000028D690 "`>@"
 *   insn=0x000000000028D690 string=0x000000000028D694 "\n"
 *   insn=0x000000000028D694 string=0x000000000028D698 "\tA"
 *   insn=0x000000000028D698 string=0x000000000028D69C "@"
 *   insn=0x000000000028D69C string=0x000000000028D6A0 ""
 *   insn=0x000000000028D6A4 string=0x000000000028D6A8 "i"
 *   insn=0x000000000028D6A8 string=0x000000000028D6AC "`"
 *   insn=0x000000000028D6B0 string=0x000000000028D6B4 "@"
 *   insn=0x000000000028D6B4 string=0x000000000028D6B8 ""
 *   insn=0x000000000028D6B8 string=0x000000000028D6BC ""
 *   insn=0x000000000028D6C0 string=0x000000000028D6C4 ""
 *   insn=0x000000000028D6C4 string=0x000000000028D6C8 ""
 *   insn=0x000000000028D6E4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028D6EC string=0x000000000028D6F0 "x"
 *   insn=0x000000000028D708 string=0x000000000028D70C "n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProjectileControllerComponent::~ProjectileControllerComponent(
        Caver::ProjectileControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 15);
  *(_QWORD *)&v3 = &off_6C0FA8;
  *((_QWORD *)&v3 + 1) = &off_6C0FE8;
  *(_QWORD *)this = off_6C0E90;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Component::~Component(this);
}

