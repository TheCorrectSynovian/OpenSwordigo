/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004681E0
 * Mangled: _ZN5Caver5Scene23ObjectIdentifierChangedERKSsS2_
 * Demangled: Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Callers: 2
 *   0x00000000001F9270  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 21
 *   0x00000000001F42A0  Caver::SceneObjectGroup::SceneObjectGroup(void)
 *   0x00000000001F4BF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>> *)
 *   0x00000000001F5170  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::equal_range(std::string const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6070  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA460  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>> const&)
 *   0x00000000001FA4F0  std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::operator[](std::string const&)
 *   0x00000000001FAD30  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::string const&)
 *   0x00000000001FB7C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>)
 *   0x00000000001FEA10  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::find(std::string const&)
 *   0x0000000000203D90  std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 160
 *   insn=0x0000000000468210 string=0x0000000000468214 "h\n@"
 *   insn=0x0000000000468214 string=0x0000000000468218 ""
 *   insn=0x0000000000468218 string=0x000000000046821C "h\n"
 *   insn=0x0000000000468228 string=0x00000000001F5170 "P'"
 *   insn=0x0000000000468238 string=0x000000000046823C "A"
 *   insn=0x0000000000468250 string=0x0000000000468254 "g2"
 *   insn=0x0000000000468254 string=0x00000000001F4BF0 "P'"
 *   insn=0x000000000046825C string=0x0000000000468260 ""
 *   insn=0x0000000000468264 string=0x0000000000468268 "`"
 *   insn=0x0000000000468270 string=0x0000000000468274 ""
 *   insn=0x0000000000468280 string=0x0000000000468284 "OM"
 *   insn=0x0000000000468284 string=0x00000000001FB7C0 "0'"
 *   insn=0x00000000004682A4 string=0x00000000004682A8 "i\n@"
 *   insn=0x00000000004682A8 string=0x00000000004682AC ")"
 *   insn=0x00000000004682AC string=0x00000000004682B0 "i\n"
 *   insn=0x00000000004682BC string=0x00000000004682C0 "@"
 *   insn=0x00000000004682C0 string=0x00000000004682C4 ""
 *   insn=0x00000000004682C4 string=0x00000000004682C8 ""
 *   insn=0x00000000004682CC string=0x00000000004682D0 ""
 *   insn=0x00000000004682D0 string=0x00000000004682D4 ""
 *   insn=0x00000000004682DC string=0x00000000004682E0 "h\n@"
 *   insn=0x00000000004682E0 string=0x00000000004682E4 ""
 *   insn=0x00000000004682E4 string=0x00000000004682E8 "h\n"
 *   insn=0x00000000004682EC string=0x0000000000468304 "h"
 *   insn=0x000000000046831C string=0x0000000000468320 " "
 *   insn=0x0000000000468328 string=0x000000000046832C ""
 *   insn=0x0000000000468328 string=0x0000000000468338 "h\n@"
 *   insn=0x0000000000468330 string=0x0000000000468334 "3"
 *   insn=0x0000000000468338 string=0x000000000046833C ""
 *   insn=0x000000000046833C string=0x0000000000468340 "h\n"
 *   insn=0x0000000000468344 string=0x0000000000468348 "h"
 *   insn=0x0000000000468348 string=0x000000000046834C ""
 *   insn=0x0000000000468358 string=0x000000000046835C "Ze"
 *   insn=0x000000000046839C string=0x00000000004683A0 ""
 *   insn=0x00000000004683A8 string=0x00000000004683AC "\t\t@"
 *   insn=0x00000000004683AC string=0x00000000004683B0 ")"
 *   insn=0x00000000004683B0 string=0x00000000004683B4 "\t\t"
 *   insn=0x00000000004683B4 string=0x00000000004683B8 " "
 *   insn=0x00000000004683C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004683CC string=0x00000000004683D0 "h\n@"
 *   insn=0x00000000004683CC string=0x00000000001F42A0 "P'"
 *   insn=0x00000000004683D4 string=0x00000000004683D8 ""
 *   insn=0x00000000004683D8 string=0x00000000004683DC "h\n"
 *   insn=0x00000000004683E4 string=0x00000000004683E8 ""7"
 *   insn=0x00000000004683E8 string=0x00000000001F6070 "0'"
 *   insn=0x00000000004683F0 string=0x00000000004683F4 "?H"
 *   insn=0x00000000004683F4 string=0x00000000001FA4F0 "0'"
 *   insn=0x00000000004683F8 string=0x00000000004683FC "i\n@"
 *   insn=0x00000000004683FC string=0x0000000000468400 ")"
 *   insn=0x0000000000468400 string=0x0000000000468404 "i\n"
 *   insn=0x000000000046840C string=0x0000000000468410 "@"
 *   insn=0x0000000000468410 string=0x0000000000468414 "@"
 *   insn=0x0000000000468414 string=0x0000000000468418 ""
 *   insn=0x0000000000468418 string=0x000000000046841C ""
 *   insn=0x0000000000468420 string=0x0000000000468424 ""
 *   insn=0x0000000000468424 string=0x0000000000468428 ""
 *   insn=0x0000000000468454 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046845C string=0x0000000000468460 "h\n@"
 *   insn=0x0000000000468464 string=0x0000000000468468 ""
 *   insn=0x0000000000468468 string=0x000000000046846C "h\n"
 *   insn=0x0000000000468470 string=0x0000000000468474 "h"
 *   insn=0x0000000000468474 string=0x0000000000468478 ""
 *   insn=0x00000000004684AC string=0x00000000004684B0 "I"
 *   insn=0x00000000004684B0 string=0x00000000004684B4 "("
 *   insn=0x00000000004684C8 string=0x00000000004684CC "7"
 *   insn=0x00000000004684EC string=0x00000000004684F0 ""
 *   insn=0x00000000004684F4 string=0x00000000004684F8 """
 *   insn=0x00000000004684F8 string=0x00000000004684FC "%3"
 *   insn=0x00000000004684FC string=0x00000000001F5190 "P'"
 *   insn=0x0000000000468500 string=0x0000000000468504 "@"
 *   insn=0x0000000000468510 string=0x0000000000468514 ""
 *   insn=0x0000000000468550 string=0x0000000000468554 "@"
 *   insn=0x0000000000468558 string=0x000000000046855C "a"
 *   insn=0x000000000046855C string=0x0000000000468560 ""
 *   insn=0x0000000000468560 string=0x0000000000468564 ")"
 *   insn=0x0000000000468568 string=0x000000000046856C """
 *   insn=0x000000000046856C string=0x0000000000468570 "3"
 *   insn=0x0000000000468570 string=0x0000000000468574 "@\t"
 *   insn=0x0000000000468574 string=0x0000000000468578 "`"
 *   insn=0x0000000000468598 string=0x00000000001FAD30 "0'"
 *   insn=0x00000000004685A0 string=0x00000000004685A4 "6"
 *   insn=0x00000000004685A8 string=0x00000000004685AC "s"
 *   insn=0x00000000004685B0 string=0x00000000004685B4 " "
 *   insn=0x00000000004685BC string=0x00000000004685C0 ""
 *   insn=0x00000000004685C0 string=0x00000000004685C4 ")"
 *   insn=0x00000000004685C8 string=0x00000000004685CC """
 *   insn=0x00000000004685EC string=0x00000000004685F0 "`"
 *   insn=0x0000000000468600 string=0x00000000001FA460 "0'"
 *   insn=0x000000000046861C string=0x0000000000468620 ""
 *   insn=0x000000000046862C string=0x0000000000468630 "@"
 *   insn=0x0000000000468630 string=0x0000000000468634 ""
 *   insn=0x0000000000468634 string=0x0000000000468638 ""
 *   insn=0x000000000046863C string=0x0000000000468640 ""
 *   insn=0x0000000000468640 string=0x0000000000468644 ""
 *   insn=0x0000000000468650 string=0x0000000000468654 ")"
 *   insn=0x0000000000468664 string=0x0000000000468668 ""
 *   insn=0x0000000000468674 string=0x0000000000468678 "`"
 *   insn=0x00000000004686B4 string=0x00000000004686B8 "`"
 *   insn=0x00000000004686C0 string=0x00000000004686C4 ")=G"
 *   insn=0x00000000004686C4 string=0x00000000004686C8 "!"
 *   insn=0x00000000004686CC string=0x00000000004686D0 "\t"
 *   insn=0x00000000004686CC string=0x00000000004686E4 "\t"
 *   insn=0x00000000004686D0 string=0x00000000004686D4 "*"
 *   insn=0x00000000004686D4 string=0x00000000004686D8 "\n"
 *   insn=0x00000000004686E0 string=0x00000000004686F0 "?"
 *   insn=0x00000000004686E4 string=0x00000000004686E8 "*"
 *   insn=0x00000000004686E8 string=0x00000000004686EC "\n"
 *   insn=0x00000000004686F8 string=0x00000000004686FC "*"
 *   insn=0x0000000000468704 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046870C string=0x0000000000468710 "J"
 *   insn=0x0000000000468714 string=0x0000000000468718 "(a"
 *   insn=0x0000000000468724 string=0x0000000000468728 "J=G"
 *   insn=0x0000000000468728 string=0x000000000046872C ")!"
 *   insn=0x0000000000468730 string=0x0000000000468734 "*"
 *   insn=0x0000000000468730 string=0x0000000000468760 "*"
 *   insn=0x0000000000468734 string=0x0000000000468738 "K"
 *   insn=0x0000000000468738 string=0x000000000046873C "+"
 *   insn=0x0000000000468740 string=0x0000000000468744 "_"
 *   insn=0x0000000000468744 string=0x0000000000468748 "l"
 *   insn=0x0000000000468758 string=0x000000000046875C "Zd"
 *   insn=0x0000000000468760 string=0x0000000000468764 "K"
 *   insn=0x0000000000468764 string=0x0000000000468768 "+"
 *   insn=0x0000000000468768 string=0x000000000046876C "_"
 *   insn=0x0000000000468770 string=0x0000000000468774 "("
 *   insn=0x000000000046877C string=0x0000000000468780 "Qd"
 *   insn=0x0000000000468788 string=0x000000000046878C "("
 *   insn=0x000000000046878C string=0x0000000000468790 "\t\t@"
 *   insn=0x0000000000468790 string=0x0000000000468794 ")"
 *   insn=0x0000000000468794 string=0x0000000000468798 "\t\t"
 *   insn=0x000000000046879C string=0x00000000004687A0 "\t"
 *   insn=0x00000000004687A0 string=0x00000000004687A4 ")"
 *   insn=0x00000000004687A8 string=0x00000000004687AC " "
 *   insn=0x00000000004687B4 string=0x00000000004687B8 ")"
 *   insn=0x00000000004687C8 string=0x00000000004687CC ")=G"
 *   insn=0x00000000004687CC string=0x00000000004687D0 "!"
 *   insn=0x00000000004687D0 string=0x00000000004687D4 "i"
 *   insn=0x00000000004687D4 string=0x00000000004687D8 "\t"
 *   insn=0x00000000004687D4 string=0x0000000000468800 "\t"
 *   insn=0x00000000004687D8 string=0x00000000004687DC "*"
 *   insn=0x00000000004687DC string=0x00000000004687E0 "\n"
 *   insn=0x00000000004687E4 string=0x00000000004687E8 "?"
 *   insn=0x00000000004687E8 string=0x00000000004687EC "L"
 *   insn=0x00000000004687F8 string=0x00000000004687FC "2d"
 *   insn=0x0000000000468800 string=0x0000000000468804 "*"
 *   insn=0x0000000000468804 string=0x0000000000468808 "\n"
 *   insn=0x0000000000468808 string=0x000000000046880C "?"
 *   insn=0x000000000046880C string=0x0000000000468810 ""
 *   insn=0x0000000000468814 string=0x0000000000468818 "+d"
 *   insn=0x0000000000468820 string=0x0000000000468824 "J"
 *   insn=0x0000000000468828 string=0x000000000046882C "(a"
 *   insn=0x0000000000468838 string=0x000000000046883C "J=G"
 *   insn=0x000000000046883C string=0x0000000000468840 ")!"
 *   insn=0x0000000000468844 string=0x0000000000468848 "*"
 *   insn=0x0000000000468844 string=0x0000000000468874 "*"
 *   insn=0x0000000000468848 string=0x000000000046884C "K"
 *   insn=0x000000000046884C string=0x0000000000468850 "+"
 *   insn=0x0000000000468854 string=0x0000000000468858 "_"
 *   insn=0x0000000000468874 string=0x0000000000468878 "K"
 *   insn=0x0000000000468878 string=0x000000000046887C "+"
 *   insn=0x000000000046887C string=0x0000000000468880 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::Scene::ObjectIdentifierChanged(_QWORD *a1)
{
  _DWORD *v2; // x19
  __int64 v3; // x0
  _QWORD *v4; // x1
  __int64 v5; // x24
  _QWORD *v6; // x22
  _DWORD **v7; // x0
  _QWORD *v8; // x8
  _DWORD *result; // x0
  int v10; // w8
  int v11; // w8

  v2 = *(_DWORD **)std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>>::operator[]();
  if ( v2 )
    ++v2[2];
  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::equal_range();
  v5 = v3;
  v6 = v4;
  if ( a1 + 23 == v4 && a1[25] == v3 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase();
    a1[24] = 0;
    a1[25] = v6;
    a1[26] = v6;
    a1[27] = 0;
  }
  else if ( (_QWORD *)v3 != v4 )
  {
    do
    {
      v5 = sub_54C6A0(v5);
      std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux();
    }
    while ( (_QWORD *)v5 != v6 );
  }
  v7 = (_DWORD **)std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>>::operator[]();
  v8 = v7;
  if ( v2 )
    ++v2[2];
  result = *v7;
  *v8 = v2;
  if ( result )
  {
    v10 = result[2] - 1;
    result[2] = v10;
    if ( !v10 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  if ( v2 )
  {
    v11 = v2[2] - 1;
    v2[2] = v11;
    if ( !v11 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}

