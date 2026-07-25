/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037F058
 * Mangled: _ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE8_M_eraseEPSt13_Rb_tree_nodeISsE
 * Demangled: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *
 * Callers: 1
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 19
 *   insn=0x000000000037F06C string=0x000000000037F070 "V"
 *   insn=0x000000000037F080 string=0x000000000037F084 "4"
 *   insn=0x000000000037F084 string=0x000000000037F088 "7"
 *   insn=0x000000000037F088 string=0x000000000037F08C "8"
 *   insn=0x000000000037F0A0 string=0x000000000037F0A4 "\t"
 *   insn=0x000000000037F0A0 string=0x000000000037F0B8 "\t"
 *   insn=0x000000000037F0A4 string=0x000000000037F0A8 "*"
 *   insn=0x000000000037F0A8 string=0x000000000037F0AC "\n"
 *   insn=0x000000000037F0B4 string=0x000000000037F0C4 "?"
 *   insn=0x000000000037F0B8 string=0x000000000037F0BC "*"
 *   insn=0x000000000037F0BC string=0x000000000037F0C0 "\n"
 *   insn=0x000000000037F0D0 string=0x000000000037F0D4 "\n"
 *   insn=0x000000000037F0E0 string=0x000000000037F0E4 "?"
 *   insn=0x000000000037F0F4 string=0x000000000037F0F8 "!"
 *   insn=0x000000000037F0F8 string=0x000000000037F09C "!"
 *   insn=0x000000000037F0FC string=0x000000000037F100 "l"
 *   insn=0x000000000037F100 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037F114 string=0x000000000037F130 "h"
 *   insn=0x000000000037F130 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
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
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase();
      v6 = v2[4];
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

