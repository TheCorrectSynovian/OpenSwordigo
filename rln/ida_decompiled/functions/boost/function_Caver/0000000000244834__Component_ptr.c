/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000244834
 * Mangled: _ZN5boost8functionIFPN5Caver9ComponentEvEEaSERKS5_
 * Demangled: boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *
 * Callers: 2
 *   0x00000000001FF050  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *   0x0000000000244320  std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD80  boost::function0<Caver::Component *>::swap(boost::function0<Caver::Component *>&)
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000200B20  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::find(std::string const&)
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002449E4  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *   0x000000000054A024  sub_54A024
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x0000000000244840 string=0x0000000000244844 "T"
 *   insn=0x0000000000244854 string=0x0000000000244858 "("
 *   insn=0x0000000000244860 string=0x0000000000244864 "("
 *   insn=0x0000000000244864 string=0x0000000000244868 ""
 *   insn=0x0000000000244864 string=0x0000000000244888 "("
 *   insn=0x0000000000244868 string=0x000000000024486C ""
 *   insn=0x0000000000244870 string=0x0000000000244874 "  "
 *   insn=0x0000000000244874 string=0x0000000000244878 "!!"
 *   insn=0x000000000024488C string=0x0000000000244890 " "
 *   insn=0x000000000024489C string=0x00000000002448A0 "8"
 *   insn=0x00000000002448A4 string=0x00000000002448A8 "h"
 *   insn=0x00000000002448A8 string=0x00000000002448AC "("
 *   insn=0x00000000002448AC string=0x00000000002448B0 ""
 *   insn=0x00000000002448B0 string=0x00000000002448B4 ""
 *   insn=0x00000000002448BC string=0x00000000002448C0 " !"
 *   insn=0x00000000002448E0 string=0x00000000002448F8 "v"
 *   insn=0x00000000002448F8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000244900 string=0x0000000000244904 "h"
 *   insn=0x0000000000244904 string=0x0000000000244908 "("
 *   insn=0x0000000000244908 string=0x000000000024490C ""
 *   insn=0x000000000024490C string=0x0000000000244910 ""
 *   insn=0x0000000000244918 string=0x000000000024491C " !"
 *   insn=0x0000000000244948 string=0x000000000024494C "T"
 *   insn=0x0000000000244958 string=0x000000000024495C "q"
 *   insn=0x000000000024495C string=0x0000000000244960 "h""
 *   insn=0x0000000000244968 string=0x000000000024496C ""
 *   insn=0x0000000000244970 string=0x0000000000244974 ""
 *   insn=0x0000000000244974 string=0x0000000000244978 ""
 *   insn=0x0000000000244990 string=0x0000000000244994 "\n"
 *   insn=0x0000000000244994 string=0x00000000002449BC "E"
 *   insn=0x00000000002449C8 string=0x00000000002449CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::function<Caver::Component * ()(void)>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v3; // x8
  void (__fastcall *v4)(__int128 *, __int128 *, __int64); // x8
  __int64 v6; // [xsp+40h] [xbp-38h]
  __int128 v7; // [xsp+48h] [xbp-30h] BYREF
  __int64 v8; // [xsp+58h] [xbp-20h]
  __int64 v9; // [xsp+60h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = 0;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = *a2;
    if ( (v3 & 1) != 0 )
    {
      v8 = a2[3];
      v7 = *(_OWORD *)(a2 + 1);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v3 & 0xFFFFFFFFFFFFFFFELL))(a2 + 1, &v7, 0);
    }
  }
  boost::function0<Caver::Component *>::swap();
  if ( v6 )
  {
    if ( (v6 & 1) == 0 )
    {
      v4 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v6 & 0xFFFFFFFFFFFFFFFELL);
      if ( v4 )
        v4(&v7, &v7, 2);
    }
  }
  return a1;
}

