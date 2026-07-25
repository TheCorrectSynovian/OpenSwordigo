/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046AB98
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SceneObjectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>)
 *
 * Callers: 1
 *   0x00000000001FB7C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054CA60  sub_54CA60
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x000000000046ABA8 string=0x000000000046ABAC "U"
 *   insn=0x000000000046ABBC string=0x000000000046ABC0 "h""
 *   insn=0x000000000046ABD4 string=0x000000000046ABD8 "@"
 *   insn=0x000000000046ABD8 string=0x000000000046ABDC ""
 *   insn=0x000000000046ABDC string=0x000000000046ABE0 ""
 *   insn=0x000000000046ABE4 string=0x000000000046ABE8 ""
 *   insn=0x000000000046ABE8 string=0x000000000046ABEC ""
 *   insn=0x000000000046ABF8 string=0x000000000046ABFC ")"
 *   insn=0x000000000046AC10 string=0x000000000046AC14 "h"
 *   insn=0x000000000046AC10 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046AC14 string=0x000000000046AC18 ""
 *   insn=0x000000000046AC18 string=0x000000000046AC1C "h"
 *   insn=0x000000000046AC44 string=0x000000000046AC48 ")=G"
 *   insn=0x000000000046AC48 string=0x000000000046AC4C "!"
 *   insn=0x000000000046AC50 string=0x000000000046AC54 "\t"
 *   insn=0x000000000046AC50 string=0x000000000046AC68 "\t"
 *   insn=0x000000000046AC54 string=0x000000000046AC58 "*"
 *   insn=0x000000000046AC58 string=0x000000000046AC5C "\n"
 *   insn=0x000000000046AC64 string=0x000000000046AC74 "?"
 *   insn=0x000000000046AC68 string=0x000000000046AC6C "*"
 *   insn=0x000000000046AC6C string=0x000000000046AC70 "\n"
 *   insn=0x000000000046AC88 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046AC90 string=0x000000000046AC94 "J"
 *   insn=0x000000000046AC98 string=0x000000000046AC9C "(a"
 *   insn=0x000000000046ACA8 string=0x000000000046ACAC "J=G"
 *   insn=0x000000000046ACAC string=0x000000000046ACB0 ")!"
 *   insn=0x000000000046ACB4 string=0x000000000046ACB8 "*"
 *   insn=0x000000000046ACB4 string=0x000000000046ACE4 "*"
 *   insn=0x000000000046ACB8 string=0x000000000046ACBC "K"
 *   insn=0x000000000046ACBC string=0x000000000046ACC0 "+"
 *   insn=0x000000000046ACC4 string=0x000000000046ACC8 "_"
 *   insn=0x000000000046ACE4 string=0x000000000046ACE8 "K"
 *   insn=0x000000000046ACE8 string=0x000000000046ACEC "+"
 *   insn=0x000000000046ACEC string=0x000000000046ACF0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux(
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

