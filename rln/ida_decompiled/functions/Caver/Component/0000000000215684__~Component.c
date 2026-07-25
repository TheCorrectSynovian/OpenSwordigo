/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215684
 * Mangled: _ZN5Caver9ComponentD2Ev
 * Demangled: Caver::Component::~Component()
 *
 * Callers: 1
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7250  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 40
 *   insn=0x0000000000215690 string=0x0000000000215694 "T"
 *   insn=0x000000000021569C string=0x00000000002156A0 ")uF"
 *   insn=0x00000000002156A8 string=0x00000000002156AC "a*@"
 *   insn=0x00000000002156AC string=0x00000000002156B0 "*"
 *   insn=0x00000000002156B0 string=0x00000000002156B4 "@"
 *   insn=0x00000000002156B4 string=0x00000000002156B8 "("
 *   insn=0x00000000002156B8 string=0x00000000002156BC "+A"
 *   insn=0x00000000002156C0 string=0x00000000002156C4 "`"
 *   insn=0x00000000002156C4 string=0x00000000002156C8 "k"
 *   insn=0x00000000002156C8 string=0x00000000002156CC "`"
 *   insn=0x00000000002156D0 string=0x00000000002156D4 "h"
 *   insn=0x00000000002156D0 string=0x00000000001F7250 "0'"
 *   insn=0x00000000002156D8 string=0x00000000002156DC ")"
 *   insn=0x00000000002156E4 string=0x00000000002156E8 "!"
 *   insn=0x00000000002156E8 string=0x000000000021570C "i&"
 *   insn=0x000000000021570C string=0x0000000000215710 ")=G"
 *   insn=0x0000000000215710 string=0x0000000000215714 "!"
 *   insn=0x0000000000215718 string=0x000000000021571C "\t"
 *   insn=0x0000000000215718 string=0x0000000000215730 "\t"
 *   insn=0x000000000021571C string=0x0000000000215720 "*"
 *   insn=0x0000000000215720 string=0x0000000000215724 "\n"
 *   insn=0x000000000021572C string=0x000000000021573C "?"
 *   insn=0x0000000000215730 string=0x0000000000215734 "*"
 *   insn=0x0000000000215734 string=0x0000000000215738 "\n"
 *   insn=0x000000000021573C string=0x0000000000215740 "l"
 *   insn=0x0000000000215750 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000215758 string=0x000000000021575C "J"
 *   insn=0x0000000000215760 string=0x0000000000215764 "(a"
 *   insn=0x000000000021576C string=0x0000000000215770 "j&"
 *   insn=0x0000000000215770 string=0x0000000000215774 "J=G"
 *   insn=0x0000000000215774 string=0x0000000000215778 ")!"
 *   insn=0x000000000021577C string=0x0000000000215780 "*"
 *   insn=0x000000000021577C string=0x00000000002157AC "*"
 *   insn=0x0000000000215780 string=0x0000000000215784 "K"
 *   insn=0x0000000000215784 string=0x0000000000215788 "+"
 *   insn=0x000000000021578C string=0x0000000000215790 "_"
 *   insn=0x00000000002157A4 string=0x00000000002157A8 "G"
 *   insn=0x00000000002157AC string=0x00000000002157B0 "K"
 *   insn=0x00000000002157B0 string=0x00000000002157B4 "+"
 *   insn=0x00000000002157B4 string=0x00000000002157B8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Component::~Component(Caver::Component *this)
{
  __int128 v2; // q0
  __int64 v3; // x8
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)&v2 = &off_6BC758;
  *((_QWORD *)&v2 + 1) = &off_6BC798;
  *(_QWORD *)this = off_6BC640;
  *((_OWORD *)this + 1) = v2;
  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase();
  v3 = *((_QWORD *)this + 7);
  v4 = (void *)(v3 - 24);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v3 - 8);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v4);
  }
}

