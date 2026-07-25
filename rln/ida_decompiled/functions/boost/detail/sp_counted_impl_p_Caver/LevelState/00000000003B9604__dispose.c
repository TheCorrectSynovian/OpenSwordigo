/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9604
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver10LevelStateEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::LevelState>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 37
 *   insn=0x00000000003B9610 string=0x00000000003B9614 "T"
 *   insn=0x00000000003B9624 string=0x00000000003B9628 "a"
 *   insn=0x00000000003B9628 string=0x00000000003B962C "`B"
 *   insn=0x00000000003B9630 string=0x00000000003B9634 "h"
 *   insn=0x00000000003B9634 string=0x00000000003B9638 "i"
 *   insn=0x00000000003B9638 string=0x00000000003B963C ")"
 *   insn=0x00000000003B9644 string=0x00000000003B9648 "a"
 *   insn=0x00000000003B9648 string=0x00000000003B9674 "I"
 *   insn=0x00000000003B9650 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B9674 string=0x00000000003B9678 ")=G"
 *   insn=0x00000000003B9678 string=0x00000000003B967C "!"
 *   insn=0x00000000003B9680 string=0x00000000003B9684 "\t"
 *   insn=0x00000000003B9680 string=0x00000000003B9698 "\t"
 *   insn=0x00000000003B9684 string=0x00000000003B9688 "*"
 *   insn=0x00000000003B9688 string=0x00000000003B968C "\n"
 *   insn=0x00000000003B9694 string=0x00000000003B96A4 "?"
 *   insn=0x00000000003B9698 string=0x00000000003B969C "*"
 *   insn=0x00000000003B969C string=0x00000000003B96A0 "\n"
 *   insn=0x00000000003B96A4 string=0x00000000003B96A8 ","
 *   insn=0x00000000003B96AC string=0x00000000003B96B0 "="
 *   insn=0x00000000003B96B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B96BC string=0x00000000003B96C0 "j"
 *   insn=0x00000000003B96C0 string=0x00000000003B96C4 "J"
 *   insn=0x00000000003B96C8 string=0x00000000003B96CC "(a"
 *   insn=0x00000000003B96D4 string=0x00000000003B96D8 "J"
 *   insn=0x00000000003B96D8 string=0x00000000003B96DC "J=G"
 *   insn=0x00000000003B96DC string=0x00000000003B96E0 ")!"
 *   insn=0x00000000003B96E4 string=0x00000000003B96E8 "*"
 *   insn=0x00000000003B96E4 string=0x00000000003B971C "*"
 *   insn=0x00000000003B96E8 string=0x00000000003B96EC "K"
 *   insn=0x00000000003B96EC string=0x00000000003B96F0 "+"
 *   insn=0x00000000003B96F4 string=0x00000000003B96F8 "_"
 *   insn=0x00000000003B9704 string=0x00000000003B9708 "'"
 *   insn=0x00000000003B9714 string=0x00000000003B9718 "k "
 *   insn=0x00000000003B971C string=0x00000000003B9720 "K"
 *   insn=0x00000000003B9720 string=0x00000000003B9724 "+"
 *   insn=0x00000000003B9724 string=0x00000000003B9728 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::LevelState>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  __int64 *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase();
    v2 = (__int64 *)(*v1 - 24LL);
    if ( v2 != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(*v1 - 8LL);
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
        operator delete(v2);
    }
    operator delete(v1);
  }
}

