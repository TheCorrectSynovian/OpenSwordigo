/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F67C
 * Mangled: _ZN5Caver23BlendAnimationComponentD2Ev
 * Demangled: Caver::BlendAnimationComponent::~BlendAnimationComponent()
 *
 * Callers: 1
 *   0x00000000001FD680  Caver::BlendAnimationComponent::~BlendAnimationComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FD680  Caver::BlendAnimationComponent::~BlendAnimationComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021F7E0  Caver::BlendAnimationComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x000000000021F684 string=0x000000000021F688 "(&"
 *   insn=0x000000000021F688 string=0x000000000021F68C ""
 *   insn=0x000000000021F690 string=0x000000000021F694 "`N@"
 *   insn=0x000000000021F694 string=0x000000000021F698 "\n"
 *   insn=0x000000000021F698 string=0x000000000021F69C "\tA"
 *   insn=0x000000000021F69C string=0x000000000021F6A0 "@"
 *   insn=0x000000000021F6A0 string=0x000000000021F6A4 ""
 *   insn=0x000000000021F6A8 string=0x000000000021F6AC "i"
 *   insn=0x000000000021F6AC string=0x000000000021F6B0 "`"
 *   insn=0x000000000021F6B4 string=0x000000000021F6B8 "@"
 *   insn=0x000000000021F6B4 string=0x000000000021F6D4 "`F@"
 *   insn=0x000000000021F6B8 string=0x000000000021F6BC ""
 *   insn=0x000000000021F6BC string=0x000000000021F6C0 ""
 *   insn=0x000000000021F6C4 string=0x000000000021F6C8 ""
 *   insn=0x000000000021F6C8 string=0x000000000021F6CC ""
 *   insn=0x000000000021F6D8 string=0x000000000021F6DC "@"
 *   insn=0x000000000021F6D8 string=0x000000000021F6F8 "`>@"
 *   insn=0x000000000021F6DC string=0x000000000021F6E0 ""
 *   insn=0x000000000021F6E0 string=0x000000000021F6E4 ""
 *   insn=0x000000000021F6E8 string=0x000000000021F6EC ""
 *   insn=0x000000000021F6EC string=0x000000000021F6F0 ""
 *   insn=0x000000000021F6FC string=0x000000000021F700 "@"
 *   insn=0x000000000021F700 string=0x000000000021F704 ""
 *   insn=0x000000000021F704 string=0x000000000021F708 ""
 *   insn=0x000000000021F70C string=0x000000000021F710 ""
 *   insn=0x000000000021F710 string=0x000000000021F714 ""
 *   insn=0x000000000021F724 string=0x000000000021F728 "jk"
 *   insn=0x000000000021F728 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000021F734 string=0x000000000021F738 "`>@"
 *   insn=0x000000000021F73C string=0x000000000021F778 "@"
 *   insn=0x000000000021F748 string=0x000000000021F74C "("
 *   insn=0x000000000021F74C string=0x000000000021F750 "\t\t@"
 *   insn=0x000000000021F74C string=0x000000000021F770 "`>@"
 *   insn=0x000000000021F750 string=0x000000000021F754 ")"
 *   insn=0x000000000021F754 string=0x000000000021F758 "\t\t"
 *   insn=0x000000000021F75C string=0x000000000021F760 "\t"
 *   insn=0x000000000021F760 string=0x000000000021F764 ")"
 *   insn=0x000000000021F768 string=0x000000000021F76C " "
 *   insn=0x000000000021F778 string=0x000000000021F77C ""
 *   insn=0x000000000021F77C string=0x000000000021F780 ""
 *   insn=0x000000000021F784 string=0x000000000021F788 ""
 *   insn=0x000000000021F788 string=0x000000000021F78C ""
 *   insn=0x000000000021F794 string=0x000000000021F798 "Nk"
 *   insn=0x000000000021F79C string=0x000000000021F7A0 "I"
 *   insn=0x000000000021F7B8 string=0x00000000001FD680 "0'"
 *   insn=0x000000000021F7C8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021F7D8 string=0x000000000021F7DC ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BlendAnimationComponent::~BlendAnimationComponent(Caver::BlendAnimationComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 19);
  *(_QWORD *)&v3 = &off_6B9DB0;
  *((_QWORD *)&v3 + 1) = &off_6B9DF0;
  *(_QWORD *)this = off_6B9C90;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 17);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  Caver::Component::~Component(this);
}

