/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B580
 * Mangled: _ZN5Caver23MagicSpellCastComponentC2Ev
 * Demangled: Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *
 * Callers: 2
 *   0x00000000001FECA0  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *   0x00000000002001C0  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 82
 *   insn=0x000000000028B598 string=0x000000000028B59C "X"
 *   insn=0x000000000028B5A4 string=0x000000000028B5A8 "9"
 *   insn=0x000000000028B5A8 string=0x000000000028B5AC ")-E"
 *   insn=0x000000000028B5AC string=0x000000000028B5B0 "\n"
 *   insn=0x000000000028B5C0 string=0x000000000028B5C4 "*c"
 *   insn=0x000000000028B5C4 string=0x000000000028B5C8 "j"
 *   insn=0x000000000028B5D4 string=0x000000000028B5D8 "+"
 *   insn=0x000000000028B5D8 string=0x000000000028B5DC "`"
 *   insn=0x000000000028B5DC string=0x000000000028B5E0 "+"
 *   insn=0x000000000028B5F0 string=0x000000000028B5F4 "`"
 *   insn=0x000000000028B5F8 string=0x000000000028B5FC ")A"
 *   insn=0x000000000028B5FC string=0x000000000028B600 "h"
 *   insn=0x000000000028B604 string=0x000000000028B608 "i"
 *   insn=0x000000000028B614 string=0x000000000028B618 "`"
 *   insn=0x000000000028B63C string=0x0000000000588A18 "particleEmitter"
 *   insn=0x000000000028B648 string=0x000000000028B64C "[m"
 *   insn=0x000000000028B664 string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000028B670 string=0x000000000028B674 "a"
 *   insn=0x000000000028B678 string=0x0000000000588CE1 "soundEffect"
 *   insn=0x000000000028B684 string=0x000000000028B688 "Lm"
 *   insn=0x000000000028B6B0 string=0x000000000028B6B4 ""
 *   insn=0x000000000028B6BC string=0x000000000028B6C0 "A"
 *   insn=0x000000000028B6E0 string=0x000000000028B6E4 ")=G"
 *   insn=0x000000000028B6E4 string=0x000000000028B6E8 "!"
 *   insn=0x000000000028B6EC string=0x000000000028B6F0 "\t"
 *   insn=0x000000000028B6EC string=0x000000000028B728 "\t"
 *   insn=0x000000000028B6F0 string=0x000000000028B6F4 "*"
 *   insn=0x000000000028B6F4 string=0x000000000028B6F8 "\n"
 *   insn=0x000000000028B6FC string=0x000000000028B700 ""
 *   insn=0x000000000028B700 string=0x000000000028B734 "?"
 *   insn=0x000000000028B704 string=0x000000000028B708 ")=G"
 *   insn=0x000000000028B708 string=0x000000000028B70C "!"
 *   insn=0x000000000028B710 string=0x000000000028B714 "\t"
 *   insn=0x000000000028B710 string=0x000000000028B748 "\t"
 *   insn=0x000000000028B714 string=0x000000000028B718 "*"
 *   insn=0x000000000028B718 string=0x000000000028B71C "\n"
 *   insn=0x000000000028B724 string=0x000000000028B754 "?"
 *   insn=0x000000000028B728 string=0x000000000028B72C "*"
 *   insn=0x000000000028B72C string=0x000000000028B730 "\n"
 *   insn=0x000000000028B748 string=0x000000000028B74C "*"
 *   insn=0x000000000028B74C string=0x000000000028B750 "\n"
 *   insn=0x000000000028B768 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028B770 string=0x000000000028B774 "(a"
 *   insn=0x000000000028B77C string=0x000000000028B810 "`N@"
 *   insn=0x000000000028B780 string=0x000000000028B784 "J=G"
 *   insn=0x000000000028B784 string=0x000000000028B788 ")!"
 *   insn=0x000000000028B788 string=0x000000000028B78C "J"
 *   insn=0x000000000028B78C string=0x000000000028B790 "*"
 *   insn=0x000000000028B78C string=0x000000000028B7F4 "*"
 *   insn=0x000000000028B790 string=0x000000000028B794 "K"
 *   insn=0x000000000028B794 string=0x000000000028B798 "+"
 *   insn=0x000000000028B7A0 string=0x000000000028B7DC "_"
 *   insn=0x000000000028B7AC string=0x000000000028B7B0 "(a"
 *   insn=0x000000000028B7BC string=0x000000000028B7C0 "J=G"
 *   insn=0x000000000028B7C0 string=0x000000000028B7C4 ")!"
 *   insn=0x000000000028B7C4 string=0x000000000028B7C8 "j"
 *   insn=0x000000000028B7C8 string=0x000000000028B7CC "*"
 *   insn=0x000000000028B7CC string=0x000000000028B7D0 "K"
 *   insn=0x000000000028B7D0 string=0x000000000028B7D4 "+"
 *   insn=0x000000000028B7EC string=0x000000000028B7F0 ""
 *   insn=0x000000000028B7F4 string=0x000000000028B7F8 "K"
 *   insn=0x000000000028B7F8 string=0x000000000028B7FC "+"
 *   insn=0x000000000028B7FC string=0x000000000028B800 "_"
 *   insn=0x000000000028B800 string=0x000000000028B804 ""
 *   insn=0x000000000028B814 string=0x000000000028B818 "hF"
 *   insn=0x000000000028B81C string=0x000000000028B820 "@"
 *   insn=0x000000000028B81C string=0x000000000028B83C "`B@"
 *   insn=0x000000000028B820 string=0x000000000028B824 ""
 *   insn=0x000000000028B824 string=0x000000000028B828 ""
 *   insn=0x000000000028B82C string=0x000000000028B830 ""
 *   insn=0x000000000028B830 string=0x000000000028B834 ""
 *   insn=0x000000000028B840 string=0x000000000028B844 "h:"
 *   insn=0x000000000028B848 string=0x000000000028B84C "@"
 *   insn=0x000000000028B84C string=0x000000000028B850 ""
 *   insn=0x000000000028B850 string=0x000000000028B854 ""
 *   insn=0x000000000028B858 string=0x000000000028B85C ""
 *   insn=0x000000000028B85C string=0x000000000028B860 ""
 *   insn=0x000000000028B86C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028B888 string=0x000000000028B88C "h"@"
 *   insn=0x000000000028B890 string=0x000000000028B894 "a"
 *   insn=0x000000000028B8A0 string=0x000000000028B8A4 "hz@"
 *   insn=0x000000000028B8A8 string=0x000000000028B8AC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicSpellCastComponent::MagicSpellCastComponent(Caver::MagicSpellCastComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+28h] [xbp-58h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v1 = &off_6C0C68;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)&v1 + 1) = &off_6C0CA8;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6C0B50;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 14) = off_6C0268;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = off_6BE248;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_DWORD *)this + 40) = 0;
  sub_566BB8((int)v8, "particleEmitter");
  Caver::Component::BindOutlet();
  v2 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v8, "soundEffect");
  Caver::Component::BindOutlet();
  v3 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v3);
  }
}

