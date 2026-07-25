/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046C0B8
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver16SceneObjectGroupEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>)
 *
 * Callers: 1
 *   0x00000000001F9CE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054CA60  sub_54CA60
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x000000000046C0C8 string=0x000000000046C0CC "U"
 *   insn=0x000000000046C0DC string=0x000000000046C0E0 "h""
 *   insn=0x000000000046C0E4 string=0x000000000046C0E8 "^"
 *   insn=0x000000000046C0F4 string=0x000000000046C0F8 "@"
 *   insn=0x000000000046C0F8 string=0x000000000046C0FC ""
 *   insn=0x000000000046C0FC string=0x000000000046C100 ""
 *   insn=0x000000000046C104 string=0x000000000046C108 ""
 *   insn=0x000000000046C108 string=0x000000000046C10C ""
 *   insn=0x000000000046C118 string=0x000000000046C11C ")"
 *   insn=0x000000000046C12C string=0x000000000046C130 "`,"
 *   insn=0x000000000046C130 string=0x000000000046C134 "h"
 *   insn=0x000000000046C130 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046C134 string=0x000000000046C138 ""
 *   insn=0x000000000046C138 string=0x000000000046C13C "h"
 *   insn=0x000000000046C14C string=0x000000000046C1A8 "J("
 *   insn=0x000000000046C164 string=0x000000000046C168 ")=G"
 *   insn=0x000000000046C168 string=0x000000000046C16C "!"
 *   insn=0x000000000046C170 string=0x000000000046C174 "\t"
 *   insn=0x000000000046C170 string=0x000000000046C188 "\t"
 *   insn=0x000000000046C174 string=0x000000000046C178 "*"
 *   insn=0x000000000046C178 string=0x000000000046C17C "\n"
 *   insn=0x000000000046C184 string=0x000000000046C194 "?"
 *   insn=0x000000000046C188 string=0x000000000046C18C "*"
 *   insn=0x000000000046C18C string=0x000000000046C190 "\n"
 *   insn=0x000000000046C1A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046C1B0 string=0x000000000046C1B4 "J"
 *   insn=0x000000000046C1B8 string=0x000000000046C1BC "(a"
 *   insn=0x000000000046C1C8 string=0x000000000046C1CC "J=G"
 *   insn=0x000000000046C1CC string=0x000000000046C1D0 ")!"
 *   insn=0x000000000046C1D4 string=0x000000000046C1D8 "*"
 *   insn=0x000000000046C1D4 string=0x000000000046C204 "*"
 *   insn=0x000000000046C1D8 string=0x000000000046C1DC "K"
 *   insn=0x000000000046C1DC string=0x000000000046C1E0 "+"
 *   insn=0x000000000046C1E4 string=0x000000000046C1E8 "_"
 *   insn=0x000000000046C1F4 string=0x000000000046C1F8 "k"
 *   insn=0x000000000046C204 string=0x000000000046C208 "K"
 *   insn=0x000000000046C208 string=0x000000000046C20C "+"
 *   insn=0x000000000046C20C string=0x000000000046C210 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // x20
  _DWORD *v4; // x0
  int v5; // w8
  __int64 v6; // x8
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v3 = (_QWORD *)sub_54CA60(a2, a1 + 8);
  v4 = (_DWORD *)v3[5];
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = v3[4];
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
  operator delete(v3);
  --*(_QWORD *)(a1 + 40);
}

