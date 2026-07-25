/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002157C4
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *
 * Callers: 1
 *   0x00000000001F7250  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7250  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x00000000002157D8 string=0x00000000002157DC "V"
 *   insn=0x00000000002157EC string=0x00000000002157F0 "4"
 *   insn=0x00000000002157F4 string=0x00000000002157F8 "x&"
 *   insn=0x000000000021580C string=0x0000000000215810 "\t"
 *   insn=0x000000000021580C string=0x0000000000215824 "\t"
 *   insn=0x0000000000215810 string=0x0000000000215814 "*"
 *   insn=0x0000000000215814 string=0x0000000000215818 "\n"
 *   insn=0x0000000000215820 string=0x0000000000215830 "?"
 *   insn=0x0000000000215824 string=0x0000000000215828 "*"
 *   insn=0x0000000000215828 string=0x000000000021582C "\n"
 *   insn=0x000000000021583C string=0x0000000000215840 "\n"
 *   insn=0x0000000000215850 string=0x00000000001F7250 "0'"
 *   insn=0x0000000000215860 string=0x0000000000215864 "!"
 *   insn=0x0000000000215864 string=0x0000000000215808 "!"
 *   insn=0x000000000021586C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021589C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  unsigned int *v3; // x8
  int v4; // w9
  void *v5; // x21
  __int64 v6; // x8
  void *v7; // x0

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase();
      v6 = v2[6];
      v2 = (_QWORD *)v2[2];
      v7 = (void *)(v6 - 24);
      if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
      {
        v3 = (unsigned int *)(v6 - 8);
        if ( &pthread_create )
        {
          do
            v4 = __ldaxr(v3);
          while ( __stlxr(v4 - 1, v3) );
        }
        else
        {
          v4 = (*v3)--;
        }
        if ( v4 <= 0 )
          operator delete(v7);
      }
      operator delete(v5);
    }
    while ( v2 );
  }
}

