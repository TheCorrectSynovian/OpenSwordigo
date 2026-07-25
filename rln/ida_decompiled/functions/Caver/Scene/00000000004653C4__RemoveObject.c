/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004653C4
 * Mangled: _ZN5Caver5Scene12RemoveObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEEb
 * Demangled: Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4BF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>> *)
 *   0x00000000001F5170  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::equal_range(std::string const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB7C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>)
 *   0x00000000001FBEA0  Caver::SceneObject::RemoveAllComponents(void)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000001FF130  Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry *)
 *   0x0000000000202AE0  Caver::SceneObject::SetScene(Caver::Scene *)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 38
 *   insn=0x00000000004653E0 string=0x00000000004653E4 "("
 *   insn=0x00000000004653EC string=0x0000000000465404 "B"
 *   insn=0x0000000000465404 string=0x0000000000465408 "u"
 *   insn=0x0000000000465404 string=0x000000000046546C " "
 *   insn=0x0000000000465408 string=0x000000000046540C "hB"
 *   insn=0x0000000000465420 string=0x0000000000465424 "@"
 *   insn=0x0000000000465428 string=0x000000000046542C "?"
 *   insn=0x000000000046542C string=0x0000000000465430 "a"
 *   insn=0x0000000000465434 string=0x0000000000465438 "d"
 *   insn=0x0000000000465440 string=0x0000000000465444 "@"
 *   insn=0x0000000000465444 string=0x0000000000465448 ""
 *   insn=0x0000000000465448 string=0x000000000046544C ""
 *   insn=0x0000000000465450 string=0x0000000000465454 ""
 *   insn=0x0000000000465454 string=0x0000000000465458 ""
 *   insn=0x0000000000465464 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000465470 string=0x0000000000465480 "`"
 *   insn=0x0000000000465478 string=0x00000000001FDFE0 "0'"
 *   insn=0x0000000000465480 string=0x0000000000465484 "!"
 *   insn=0x0000000000465484 string=0x0000000000465488 "*g"
 *   insn=0x0000000000465494 string=0x0000000000465498 "@"
 *   insn=0x00000000004654A0 string=0x00000000004654A4 "u"
 *   insn=0x00000000004654AC string=0x00000000004654B0 ""
 *   insn=0x00000000004654B0 string=0x00000000004654B4 "Q@"
 *   insn=0x00000000004654E8 string=0x00000000004654EC "mZ"
 *   insn=0x00000000004654EC string=0x00000000001FBEA0 "0'"
 *   insn=0x00000000004654F0 string=0x00000000004654F4 "("
 *   insn=0x00000000004654F4 string=0x00000000004654F8 ""
 *   insn=0x00000000004654FC string=0x0000000000465500 "t"
 *   insn=0x0000000000465508 string=0x00000000001F5170 "P'"
 *   insn=0x000000000046550C string=0x0000000000465510 "h"
 *   insn=0x0000000000465518 string=0x000000000046551C "A"
 *   insn=0x000000000046551C string=0x0000000000465520 "hf@"
 *   insn=0x0000000000465528 string=0x000000000046552C "ab@"
 *   insn=0x0000000000465534 string=0x00000000001F4BF0 "P'"
 *   insn=0x0000000000465538 string=0x000000000046553C "u~"
 *   insn=0x0000000000465544 string=0x0000000000465548 "@"
 *   insn=0x0000000000465550 string=0x0000000000465554 "S"
 *   insn=0x0000000000465564 string=0x00000000001FB7C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Scene::RemoveObject(_QWORD *a1, Caver::SceneObject **a2, char a3)
{
  Caver::SceneObject *v4; // x1
  _QWORD *v6; // x21
  _DWORD *v7; // x0
  int v8; // w8
  Caver::SceneObject *v9; // x0
  Caver::SceneObject *v10; // x0
  _QWORD *v11; // x23
  _QWORD *v12; // x24
  __int64 v13; // x0
  _QWORD *v14; // x1
  _QWORD *v15; // x21
  __int64 v16; // x22

  v4 = *a2;
  if ( *((_QWORD **)v4 + 4) == a1 )
  {
    if ( (a3 & 1) != 0 )
    {
      v6 = (_QWORD *)a1[34];
      if ( a1 + 34 != v6 )
      {
        while ( (Caver::SceneObject *)v6[2] != v4 )
        {
          v6 = (_QWORD *)*v6;
          if ( a1 + 34 == v6 )
            goto LABEL_12;
        }
        sub_52A9C8(v6);
        v7 = (_DWORD *)v6[2];
        if ( v7 )
        {
          v8 = v7[2] - 1;
          v7[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
        }
        operator delete(v6);
        v4 = *a2;
      }
    }
LABEL_12:
    v9 = (Caver::SceneObject *)*((_QWORD *)v4 + 6);
    if ( v9 )
    {
      Caver::SceneObject::RemoveChildObject(v9, v4, 0);
      v4 = *a2;
    }
    Caver::SceneGrid::RemoveObject((Caver::SceneGrid *)(a1 + 108), (Caver::SceneObject *)((char *)v4 + 248));
    v10 = *a2;
    v11 = (_QWORD *)*((_QWORD *)*a2 + 24);
    v12 = (_QWORD *)*((_QWORD *)*a2 + 25);
    if ( v11 != v12 )
    {
      do
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v11 + 160LL))(
                *v11,
                Caver::CollisionShapeComponent::Interface)
            & 1) != 0 )
          Caver::SceneGrid::RemoveObject((Caver::SceneGrid *)(a1 + 116), (Caver::SceneGridEntry *)(*v11 + 400LL));
        ++v11;
      }
      while ( v12 != v11 );
      v10 = *a2;
    }
    Caver::SceneObject::SetScene(v10, 0);
    Caver::SceneObject::RemoveAllComponents(*a2);
    if ( *(_QWORD *)(*((_QWORD *)*a2 + 10) - 24LL) )
    {
      std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::equal_range();
      v15 = v14;
      v16 = v13;
      if ( a1 + 23 == v14 && a1[25] == v13 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase();
        a1[24] = 0;
        a1[25] = v15;
        a1[26] = v15;
        a1[27] = 0;
      }
      else if ( (_QWORD *)v13 != v14 )
      {
        do
        {
          v16 = sub_54C6A0(v16);
          std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux();
        }
        while ( (_QWORD *)v16 != v15 );
      }
    }
  }
}

