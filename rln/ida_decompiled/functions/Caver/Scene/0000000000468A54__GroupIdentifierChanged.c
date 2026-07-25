/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000468A54
 * Mangled: _ZN5Caver5Scene22GroupIdentifierChangedERKSsS2_
 * Demangled: Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F67C0  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *
 * Callees: 9
 *   0x00000000001F7F30  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F9CE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>)
 *   0x00000000001FA4F0  std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::operator[](std::string const&)
 *   0x00000000001FE280  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::equal_range(std::string const&)
 *   0x00000000001FE2C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x0000000000468A7C string=0x00000000001FA4F0 "0'"
 *   insn=0x0000000000468A84 string=0x0000000000468A88 "h\n@"
 *   insn=0x0000000000468A88 string=0x0000000000468A8C ""
 *   insn=0x0000000000468A8C string=0x0000000000468A90 "h\n"
 *   insn=0x0000000000468AAC string=0x0000000000468AB0 "A"
 *   insn=0x0000000000468AD0 string=0x0000000000468AD4 ""
 *   insn=0x0000000000468AD8 string=0x0000000000468ADC "`"
 *   insn=0x0000000000468AF4 string=0x0000000000468AF8 "zD"
 *   insn=0x0000000000468AF8 string=0x00000000001F9CE0 "0'"
 *   insn=0x0000000000468B0C string=0x0000000000468B10 "xF"
 *   insn=0x0000000000468B18 string=0x0000000000468B1C "i\n@"
 *   insn=0x0000000000468B1C string=0x0000000000468B20 ")"
 *   insn=0x0000000000468B20 string=0x0000000000468B24 "i\n"
 *   insn=0x0000000000468B30 string=0x0000000000468B34 "@"
 *   insn=0x0000000000468B34 string=0x0000000000468B38 ""
 *   insn=0x0000000000468B38 string=0x0000000000468B3C ""
 *   insn=0x0000000000468B40 string=0x0000000000468B44 ""
 *   insn=0x0000000000468B44 string=0x0000000000468B48 ""
 *   insn=0x0000000000468B50 string=0x0000000000468B54 "h\n@"
 *   insn=0x0000000000468B54 string=0x0000000000468B58 ""
 *   insn=0x0000000000468B58 string=0x0000000000468B5C "h\n"
 *   insn=0x0000000000468B60 string=0x0000000000468B78 "h"
 *   insn=0x0000000000468B90 string=0x0000000000468B94 " "
 *   insn=0x0000000000468B9C string=0x0000000000468BA0 ""
 *   insn=0x0000000000468B9C string=0x0000000000468BAC "h\n@"
 *   insn=0x0000000000468BA4 string=0x0000000000468BA8 "3"
 *   insn=0x0000000000468BAC string=0x0000000000468BB0 ""
 *   insn=0x0000000000468BB0 string=0x0000000000468BB4 "h\n"
 *   insn=0x0000000000468BB8 string=0x0000000000468BBC "h"
 *   insn=0x0000000000468BBC string=0x0000000000468BC0 ""
 *   insn=0x0000000000468BCC string=0x0000000000468BD0 "=c"
 *   insn=0x0000000000468BF8 string=0x0000000000468BFC "a"
 *   insn=0x0000000000468C00 string=0x0000000000468C04 "?"
 *   insn=0x0000000000468C04 string=0x0000000000468C08 "@"
 *   insn=0x0000000000468C08 string=0x0000000000468C0C "H"
 *   insn=0x0000000000468C0C string=0x0000000000468C10 "("
 *   insn=0x0000000000468C14 string=0x0000000000468C18 "\t\t@"
 *   insn=0x0000000000468C14 string=0x0000000000468C24 "( "
 *   insn=0x0000000000468C18 string=0x0000000000468C1C ")"
 *   insn=0x0000000000468C1C string=0x0000000000468C20 "\t\t"
 *   insn=0x0000000000468C24 string=0x0000000000468C28 "h"
 *   insn=0x0000000000468C34 string=0x00000000001F7F30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::Scene::GroupIdentifierChanged(_QWORD *a1)
{
  _DWORD **v2; // x0
  _DWORD *v3; // x19
  __int64 v4; // x0
  _QWORD *v5; // x1
  __int64 v6; // x24
  _QWORD *v7; // x22
  _DWORD **v8; // x0
  _QWORD *v9; // x8
  _DWORD *result; // x0
  int v11; // w8
  int v12; // w8

  std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>>::operator[]();
  v3 = *v2;
  if ( *v2 )
    ++v3[2];
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
  std::map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>>::operator[]();
  v9 = v8;
  if ( v3 )
    ++v3[2];
  result = *v8;
  *v9 = v3;
  if ( result )
  {
    v11 = result[2] - 1;
    result[2] = v11;
    if ( !v11 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  if ( v3 )
  {
    v12 = v3[2] - 1;
    v3[2] = v12;
    if ( !v12 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}

