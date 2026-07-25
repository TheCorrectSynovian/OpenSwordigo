/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054CA60
 * Mangled: sub_54CA60
 * Demangled: sub_54CA60
 *
 * Callers: 16
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *   0x00000000003A7124  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *   0x00000000003A7F2C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000003DFBF0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>)
 *   0x000000000045F88C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *   0x000000000046AB98  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>)
 *   0x000000000046C0B8  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>)
 *   0x000000000047E108  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000004A56F4  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *   0x00000000004A58AC  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *   0x00000000004BE34C  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *   0x00000000004CE54C  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *
 * Callees: 2
 *   0x000000000054C580  sub_54C580
 *   0x000000000054C5E0  sub_54C5E0
 *
 * Referenced strings: 81
 *   insn=0x000000000054CA80 string=0x000000000054CA84 """
 *   insn=0x000000000054CA8C string=0x000000000054CC8C "5@"
 *   insn=0x000000000054CAA0 string=0x000000000054CAA4 "?"
 *   insn=0x000000000054CAB0 string=0x000000000054CAB4 "@"
 *   insn=0x000000000054CABC string=0x000000000054CAC0 " "
 *   insn=0x000000000054CAD0 string=0x000000000054CAD4 "4"
 *   insn=0x000000000054CAD8 string=0x000000000054CADC "!"
 *   insn=0x000000000054CADC string=0x000000000054CAE0 " "
 *   insn=0x000000000054CAE4 string=0x000000000054CAE8 "?"
 *   insn=0x000000000054CAEC string=0x000000000054CAF0 "!@"
 *   insn=0x000000000054CAF0 string=0x000000000054CAF4 ""@"
 *   insn=0x000000000054CAF4 string=0x000000000054CAF8 "_"
 *   insn=0x000000000054CAFC string=0x000000000054CB00 " "
 *   insn=0x000000000054CAFC string=0x000000000054CD30 " "
 *   insn=0x000000000054CB04 string=0x000000000054CB08 "#"
 *   insn=0x000000000054CB14 string=0x000000000054CB18 """
 *   insn=0x000000000054CB1C string=0x000000000054CB20 "7"
 *   insn=0x000000000054CB24 string=0x000000000054CB28 "?"
 *   insn=0x000000000054CB30 string=0x000000000054CB34 " "
 *   insn=0x000000000054CB30 string=0x000000000054CB40 "`\n@"
 *   insn=0x000000000054CB38 string=0x000000000054CB3C "a"
 *   insn=0x000000000054CB3C string=0x000000000054CCE8 "`\n@"
 *   insn=0x000000000054CB48 string=0x000000000054CB4C "?"
 *   insn=0x000000000054CB4C string=0x000000000054CB50 "a"
 *   insn=0x000000000054CB68 string=0x000000000054CB6C "`"
 *   insn=0x000000000054CB6C string=0x000000000054CC18 "t"
 *   insn=0x000000000054CB7C string=0x000000000054CC1C " "
 *   insn=0x000000000054CB84 string=0x000000000054CB88 "@"
 *   insn=0x000000000054CB88 string=0x000000000054CB8C "`"
 *   insn=0x000000000054CB90 string=0x000000000054CB94 "w"
 *   insn=0x000000000054CB90 string=0x000000000054CB2C "a"
 *   insn=0x000000000054CBB4 string=0x000000000054CBB8 "A"
 *   insn=0x000000000054CBC0 string=0x000000000054CBC4 "A"
 *   insn=0x000000000054CBC4 string=0x000000000054CBC8 "?"
 *   insn=0x000000000054CBC8 string=0x000000000054CBCC "a"
 *   insn=0x000000000054CBD4 string=0x000000000054CBD8 """
 *   insn=0x000000000054CBD8 string=0x000000000054CBDC "_"
 *   insn=0x000000000054CBF8 string=0x000000000054CBFC " "
 *   insn=0x000000000054CC00 string=0x000000000054CC04 " "
 *   insn=0x000000000054CC04 string=0x000000000054CC08 " "
 *   insn=0x000000000054CC10 string=0x000000000054CC14 "["
 *   insn=0x000000000054CC4C string=0x000000000054CC50 "L"
 *   insn=0x000000000054CC5C string=0x000000000054CC60 "a"
 *   insn=0x000000000054CC60 string=0x000000000054CC64 "!"
 *   insn=0x000000000054CC68 string=0x000000000054CC6C "!"
 *   insn=0x000000000054CC78 string=0x000000000054CC7C "Y"
 *   insn=0x000000000054CC8C string=0x000000000054CC90 "B"
 *   insn=0x000000000054CC90 string=0x000000000054CC94 "U"
 *   insn=0x000000000054CCA0 string=0x000000000054CCA4 " @"
 *   insn=0x000000000054CCA8 string=0x000000000054CCAC "?"
 *   insn=0x000000000054CCBC string=0x000000000054CCC0 "`"
 *   insn=0x000000000054CCC0 string=0x000000000054CD6C " "
 *   insn=0x000000000054CCCC string=0x000000000054CCD0 "!"
 *   insn=0x000000000054CCCC string=0x000000000054CD40 " @"
 *   insn=0x000000000054CCDC string=0x000000000054CCE0 "!@"
 *   insn=0x000000000054CCEC string=0x000000000054CCFC "7"
 *   insn=0x000000000054CCF0 string=0x000000000054CCF4 "_"
 *   insn=0x000000000054CCF4 string=0x000000000054CCF8 "!"
 *   insn=0x000000000054CCFC string=0x000000000054CD00 "7"
 *   insn=0x000000000054CD18 string=0x000000000054CD1C " @"
 *   insn=0x000000000054CD1C string=0x000000000054CD20 """
 *   insn=0x000000000054CD24 string=0x000000000054CD28 " "
 *   insn=0x000000000054CD30 string=0x000000000054CD34 "t"
 *   insn=0x000000000054CD38 string=0x000000000054CD3C "f"
 *   insn=0x000000000054CD44 string=0x000000000054CD48 "`"
 *   insn=0x000000000054CD48 string=0x000000000054CD4C "*"
 *   insn=0x000000000054CD48 string=0x000000000054CD54 "`"
 *   insn=0x000000000054CD4C string=0x000000000054CDF4 " @"
 *   insn=0x000000000054CD58 string=0x000000000054CD5C "!"
 *   insn=0x000000000054CD64 string=0x000000000054CD68 "m"
 *   insn=0x000000000054CD70 string=0x000000000054CD74 "`"
 *   insn=0x000000000054CD74 string=0x000000000054CD80 " @"
 *   insn=0x000000000054CD78 string=0x000000000054CDE8 " @"
 *   insn=0x000000000054CD9C string=0x000000000054CDA0 "#"
 *   insn=0x000000000054CD9C string=0x000000000054CDAC "7"
 *   insn=0x000000000054CDA4 string=0x000000000054CDA8 "A"
 *   insn=0x000000000054CDAC string=0x000000000054CDB0 "W"
 *   insn=0x000000000054CDBC string=0x000000000054CDC0 ""
 *   insn=0x000000000054CDD4 string=0x000000000054CDD8 "a"
 *   insn=0x000000000054CDFC string=0x000000000054CE00 "!"
 *   insn=0x000000000054CE00 string=0x000000000054CE04 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall sub_54CA60(int *a1, _QWORD *a2)
{
  __int64 v2; // x2
  __int64 v5; // x3
  __int64 i; // x0
  __int64 v7; // x21
  __int64 v8; // x20
  __int64 v9; // x1
  int v10; // w2
  int v11; // w1
  _DWORD *v12; // x1
  _DWORD *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x19
  __int64 v16; // x0
  _DWORD *v17; // x2
  _DWORD *v18; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  __int64 v23; // x1
  __int64 v24; // x0

  v2 = *((_QWORD *)a1 + 2);
  if ( v2 )
  {
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      for ( i = *((_QWORD *)a1 + 3); *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
        ;
      v7 = i;
      v8 = *(_QWORD *)(i + 24);
      if ( a1 != (int *)i )
      {
        *(_QWORD *)(v2 + 8) = i;
        *(_QWORD *)(i + 16) = v2;
        if ( v5 != i )
        {
          v7 = *(_QWORD *)(i + 8);
          if ( v8 )
            *(_QWORD *)(v8 + 8) = v7;
          *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) = v8;
          *(_QWORD *)(i + 24) = v5;
          *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) = i;
        }
        if ( (int *)a2[1] == a1 )
        {
          a2[1] = i;
          v9 = *((_QWORD *)a1 + 1);
        }
        else
        {
          v9 = *((_QWORD *)a1 + 1);
          if ( *(int **)(v9 + 16) == a1 )
            *(_QWORD *)(v9 + 16) = i;
          else
            *(_QWORD *)(v9 + 24) = i;
        }
        v10 = *(_DWORD *)i;
        *(_DWORD *)i = *a1;
        *(_QWORD *)(i + 8) = v9;
        v11 = v10;
        *a1 = v10;
        goto LABEL_15;
      }
      v2 = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    v2 = *((_QWORD *)a1 + 3);
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( v2 )
    *(_QWORD *)(v2 + 8) = v7;
  if ( (int *)a2[1] == a1 )
  {
    a2[1] = v2;
  }
  else
  {
    v20 = *((_QWORD *)a1 + 1);
    if ( *(int **)(v20 + 16) == a1 )
      *(_QWORD *)(v20 + 16) = v2;
    else
      *(_QWORD *)(v20 + 24) = v2;
  }
  if ( (int *)a2[2] == a1 )
  {
    v23 = v2;
    if ( *((_QWORD *)a1 + 3) )
    {
      while ( *(_QWORD *)(v23 + 16) )
        v23 = *(_QWORD *)(v23 + 16);
      a2[2] = v23;
    }
    else
    {
      a2[2] = *((_QWORD *)a1 + 1);
    }
  }
  if ( (int *)a2[3] == a1 )
  {
    v22 = v2;
    if ( *((_QWORD *)a1 + 2) )
    {
      while ( *(_QWORD *)(v22 + 24) )
        v22 = *(_QWORD *)(v22 + 24);
      v11 = *a1;
      v8 = v2;
      a2[3] = v22;
    }
    else
    {
      v8 = v2;
      a2[3] = *((_QWORD *)a1 + 1);
      v11 = *a1;
    }
  }
  else
  {
    v11 = *a1;
    v8 = v2;
  }
LABEL_15:
  if ( !v11 )
    return a1;
  while ( 1 )
  {
    if ( a2[1] == v8 )
      goto LABEL_39;
    if ( v8 && *(_DWORD *)v8 != 1 )
      goto LABEL_40;
    v15 = *(_QWORD *)(v7 + 16);
    if ( v15 != v8 )
      break;
    v16 = *(_QWORD *)(v7 + 24);
    if ( !*(_DWORD *)v16 )
    {
      *(_DWORD *)v16 = 1;
      *(_DWORD *)v7 = 0;
      sub_54C580(v7, a2 + 1);
      v16 = *(_QWORD *)(v7 + 24);
    }
    v17 = *(_DWORD **)(v16 + 16);
    if ( v17 && *v17 != 1 )
    {
      v18 = *(_DWORD **)(v16 + 24);
      if ( v18 && *v18 != 1 )
      {
LABEL_36:
        v8 = v15;
        *(_DWORD *)v16 = *(_DWORD *)v7;
        *(_DWORD *)v7 = 1;
      }
      else
      {
        *v17 = 1;
        *(_DWORD *)v16 = 0;
        v8 = v15;
        sub_54C5E0(v16, a2 + 1);
        v24 = *(_QWORD *)(v7 + 24);
        v18 = *(_DWORD **)(v24 + 24);
        *(_DWORD *)v24 = *(_DWORD *)v7;
        *(_DWORD *)v7 = 1;
        if ( !v18 )
          goto LABEL_38;
      }
      *v18 = 1;
LABEL_38:
      sub_54C580(v7, a2 + 1);
LABEL_39:
      if ( !v8 )
        return a1;
LABEL_40:
      *(_DWORD *)v8 = 1;
      return a1;
    }
    v18 = *(_DWORD **)(v16 + 24);
    if ( v18 && *v18 != 1 )
      goto LABEL_36;
    *(_DWORD *)v16 = 0;
    v14 = *(_QWORD *)(v7 + 8);
LABEL_22:
    v8 = v7;
    v7 = v14;
  }
  if ( !*(_DWORD *)v15 )
  {
    *(_DWORD *)v15 = 1;
    *(_DWORD *)v7 = 0;
    sub_54C5E0(v7, a2 + 1);
    v15 = *(_QWORD *)(v7 + 16);
  }
  v12 = *(_DWORD **)(v15 + 24);
  if ( !v12 || *v12 == 1 )
  {
    v13 = *(_DWORD **)(v15 + 16);
    if ( v13 && *v13 != 1 )
      goto LABEL_42;
    v14 = *(_QWORD *)(v7 + 8);
    *(_DWORD *)v15 = 0;
    goto LABEL_22;
  }
  v13 = *(_DWORD **)(v15 + 16);
  if ( v13 && *v13 != 1 )
  {
LABEL_42:
    *(_DWORD *)v15 = *(_DWORD *)v7;
    *(_DWORD *)v7 = 1;
  }
  else
  {
    *v12 = 1;
    *(_DWORD *)v15 = 0;
    sub_54C580(v15, a2 + 1);
    v21 = *(_QWORD *)(v7 + 16);
    v13 = *(_DWORD **)(v21 + 16);
    *(_DWORD *)v21 = *(_DWORD *)v7;
    *(_DWORD *)v7 = 1;
    if ( !v13 )
      goto LABEL_44;
  }
  *v13 = 1;
LABEL_44:
  sub_54C5E0(v7, a2 + 1);
  if ( v8 )
    goto LABEL_40;
  return a1;
}

