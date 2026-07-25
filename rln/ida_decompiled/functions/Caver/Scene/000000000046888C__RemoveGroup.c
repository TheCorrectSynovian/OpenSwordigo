/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046888C
 * Mangled: _ZN5Caver5Scene11RemoveGroupERKN5boost13intrusive_ptrINS_16SceneObjectGroupEEE
 * Demangled: Caver::Scene::RemoveGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F99D0  Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *   0x00000000001F9CE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>)
 *   0x00000000001FE280  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::equal_range(std::string const&)
 *   0x00000000001FE2C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *   0x0000000000201F50  Caver::SceneObjectGroup::RemoveAllObjects(void)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x00000000004688A0 string=0x00000000004688A4 "W"
 *   insn=0x00000000004688B4 string=0x00000000004688B8 "h"
 *   insn=0x00000000004688C4 string=0x00000000004688C8 "BD"
 *   insn=0x00000000004688C8 string=0x00000000004688CC "`"
 *   insn=0x00000000004688C8 string=0x00000000001F99D0 "0'"
 *   insn=0x00000000004688D0 string=0x00000000004688D4 "h"
 *   insn=0x00000000004688EC string=0x00000000004688F0 "dV"
 *   insn=0x0000000000468900 string=0x0000000000468904 "A"
 *   insn=0x0000000000468918 string=0x000000000046891C "iV"
 *   insn=0x0000000000468924 string=0x0000000000468928 ""
 *   insn=0x000000000046892C string=0x0000000000468930 "`"
 *   insn=0x0000000000468938 string=0x000000000046893C "Y"
 *   insn=0x000000000046894C string=0x00000000001F9CE0 "0'"
 *   insn=0x0000000000468960 string=0x0000000000468964 ")"
 *   insn=0x000000000046896C string=0x0000000000468970 "a"
 *   insn=0x0000000000468980 string=0x00000000004689E0 "<6"
 *   insn=0x000000000046899C string=0x00000000004689A0 ")=G"
 *   insn=0x00000000004689A0 string=0x00000000004689A4 "!"
 *   insn=0x00000000004689A8 string=0x00000000004689AC "\t"
 *   insn=0x00000000004689A8 string=0x00000000004689C0 "\t"
 *   insn=0x00000000004689AC string=0x00000000004689B0 "*"
 *   insn=0x00000000004689B0 string=0x00000000004689B4 "\n"
 *   insn=0x00000000004689BC string=0x00000000004689CC "?"
 *   insn=0x00000000004689C0 string=0x00000000004689C4 "*"
 *   insn=0x00000000004689C4 string=0x00000000004689C8 "\n"
 *   insn=0x00000000004689CC string=0x00000000004689D0 ","
 *   insn=0x00000000004689D4 string=0x00000000004689D8 "s"
 *   insn=0x00000000004689E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004689EC string=0x00000000004689F0 ")"
 *   insn=0x0000000000468A04 string=0x0000000000468A08 ")=G"
 *   insn=0x0000000000468A08 string=0x0000000000468A0C "!"
 *   insn=0x0000000000468A0C string=0x0000000000468A10 "i"
 *   insn=0x0000000000468A10 string=0x0000000000468A14 "\t"
 *   insn=0x0000000000468A10 string=0x0000000000468A3C "\t"
 *   insn=0x0000000000468A14 string=0x0000000000468A18 "*"
 *   insn=0x0000000000468A18 string=0x0000000000468A1C "\n"
 *   insn=0x0000000000468A20 string=0x0000000000468A24 "?"
 *   insn=0x0000000000468A24 string=0x0000000000468A28 "l"
 *   insn=0x0000000000468A2C string=0x0000000000468A30 "]"
 *   insn=0x0000000000468A3C string=0x0000000000468A40 "*"
 *   insn=0x0000000000468A40 string=0x0000000000468A44 "\n"
 *   insn=0x0000000000468A44 string=0x0000000000468A48 "?"
 *   insn=0x0000000000468A48 string=0x0000000000468A4C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Scene::RemoveGroup(_QWORD *a1, Caver::SceneObjectGroup **a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x1
  __int64 v6; // x22
  _QWORD *v7; // x19
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  _QWORD v11[3]; // [xsp+8h] [xbp-48h] BYREF

  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *a2 )
  {
    Caver::SceneObjectGroup::SetScene(*a2, 0);
    Caver::SceneObjectGroup::RemoveAllObjects(*a2);
    sub_56A528(v11, (char *)*a2 + 32);
    std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::equal_range();
    v6 = v4;
    v7 = v5;
    if ( a1 + 29 == v5 && a1[31] == v4 )
    {
      std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase();
      a1[30] = 0;
      a1[31] = v7;
      a1[32] = v7;
      a1[33] = 0;
    }
    else if ( (_QWORD *)v4 != v5 )
    {
      do
      {
        v6 = sub_54C6A0(v6);
        std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux();
      }
      while ( (_QWORD *)v6 != v7 );
    }
    v8 = (void *)(v11[0] - 24LL);
    if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
    {
      v9 = (unsigned int *)(v11[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = (*v9)--;
      }
      if ( v10 <= 0 )
        operator delete(v8);
    }
  }
}

