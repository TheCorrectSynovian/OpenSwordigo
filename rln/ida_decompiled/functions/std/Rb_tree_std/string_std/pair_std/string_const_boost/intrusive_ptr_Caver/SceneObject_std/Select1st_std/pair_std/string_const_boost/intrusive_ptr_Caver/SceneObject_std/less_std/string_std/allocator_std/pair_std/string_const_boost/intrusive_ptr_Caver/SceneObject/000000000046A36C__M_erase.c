/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046A36C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SceneObjectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>> *)
 *
 * Callers: 1
 *   0x00000000001F4BF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>> *)
 *
 * Callees: 6
 *   0x00000000001F4BF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x000000000046A380 string=0x000000000046A384 "W"
 *   insn=0x000000000046A394 string=0x000000000046A398 "T"
 *   insn=0x000000000046A3B4 string=0x000000000046A3B8 "\t"
 *   insn=0x000000000046A3B4 string=0x000000000046A3CC "\t"
 *   insn=0x000000000046A3B8 string=0x000000000046A3BC "*"
 *   insn=0x000000000046A3BC string=0x000000000046A3C0 "\n"
 *   insn=0x000000000046A3C8 string=0x000000000046A3D8 "?"
 *   insn=0x000000000046A3CC string=0x000000000046A3D0 "*"
 *   insn=0x000000000046A3D0 string=0x000000000046A3D4 "\n"
 *   insn=0x000000000046A3F8 string=0x00000000001F4BF0 "P'"
 *   insn=0x000000000046A404 string=0x000000000046A408 "@"
 *   insn=0x000000000046A408 string=0x000000000046A40C ""
 *   insn=0x000000000046A40C string=0x000000000046A410 ""
 *   insn=0x000000000046A414 string=0x000000000046A418 ""
 *   insn=0x000000000046A418 string=0x000000000046A41C ""
 *   insn=0x000000000046A430 string=0x000000000046A3B0 "!"
 *   insn=0x000000000046A438 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046A468 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046A470 string=0x000000000046A474 "(a"
 *   insn=0x000000000046A47C string=0x000000000046A480 ")!"
 *   insn=0x000000000046A484 string=0x000000000046A488 "*"
 *   insn=0x000000000046A484 string=0x000000000046A4B4 "*"
 *   insn=0x000000000046A488 string=0x000000000046A48C "K"
 *   insn=0x000000000046A48C string=0x000000000046A490 "+"
 *   insn=0x000000000046A494 string=0x000000000046A498 "_"
 *   insn=0x000000000046A4B4 string=0x000000000046A4B8 "K"
 *   insn=0x000000000046A4B8 string=0x000000000046A4BC "+"
 *   insn=0x000000000046A4BC string=0x000000000046A4C0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD *v5; // x21
  _DWORD *v6; // x0
  int v7; // w8
  __int64 v8; // x8
  void *v9; // x0

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase();
      v6 = (_DWORD *)v2[5];
      v2 = (_QWORD *)v2[2];
      if ( v6 )
      {
        v7 = v6[2] - 1;
        v6[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v8 = v5[4];
      v9 = (void *)(v8 - 24);
      if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
      {
        v3 = (unsigned int *)(v8 - 8);
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
          operator delete(v9);
      }
      operator delete(v5);
    }
    while ( v2 );
  }
}

