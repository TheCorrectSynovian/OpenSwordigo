/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243510
 * Mangled: _ZNSt3mapIiN5Caver9Component13OutletBindingESt4lessIiESaISt4pairIKiS2_EEEixERS6_
 * Demangled: std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *
 * Callers: 1
 *   0x00000000001FD4E0  std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *
 * Callees: 8
 *   0x00000000001F4F10  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9AC0  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x0000000000243528 string=0x000000000024352C "X"
 *   insn=0x000000000024352C string=0x0000000000243530 ""
 *   insn=0x0000000000243540 string=0x0000000000243544 "H"
 *   insn=0x0000000000243544 string=0x0000000000243548 ")"
 *   insn=0x000000000024354C string=0x0000000000243550 "\n!@"
 *   insn=0x0000000000243550 string=0x0000000000243554 "a"
 *   insn=0x0000000000243558 string=0x000000000024355C "_"
 *   insn=0x000000000024355C string=0x0000000000243560 "j"
 *   insn=0x0000000000243560 string=0x0000000000243564 "s"
 *   insn=0x0000000000243564 string=0x0000000000243568 "H"
 *   insn=0x0000000000243568 string=0x000000000024356C "("
 *   insn=0x0000000000243570 string=0x0000000000243574 " "
 *   insn=0x0000000000243574 string=0x0000000000243578 "("
 *   insn=0x0000000000243574 string=0x0000000000243598 "("
 *   insn=0x0000000000243578 string=0x000000000024357C "i"@"
 *   insn=0x0000000000243584 string=0x0000000000243588 "9"
 *   insn=0x0000000000243588 string=0x000000000024366C ""
 *   insn=0x0000000000243590 string=0x0000000000243594 "!"
 *   insn=0x00000000002435A4 string=0x00000000002435A8 "9"
 *   insn=0x00000000002435B4 string=0x00000000002435B8 "!!"
 *   insn=0x00000000002435B8 string=0x00000000002435BC ")c"
 *   insn=0x00000000002435E8 string=0x00000000002435EC "5"
 *   insn=0x00000000002435EC string=0x00000000001F9AC0 "0'"
 *   insn=0x0000000000243620 string=0x0000000000243624 ";"
 *   insn=0x0000000000243624 string=0x00000000001F4F10 "P'"
 *   insn=0x0000000000243640 string=0x0000000000243644 ""
 *   insn=0x0000000000243654 string=0x0000000000243658 "!"
 *   insn=0x0000000000243658 string=0x000000000024369C "\t%"
 *   insn=0x0000000000243668 string=0x00000000002436C0 "\t%"
 *   insn=0x0000000000243674 string=0x0000000000243678 "a"
 *   insn=0x0000000000243678 string=0x000000000024367C "`"
 *   insn=0x000000000024369C string=0x00000000002436A0 ")=G"
 *   insn=0x00000000002436A0 string=0x00000000002436A4 "!"
 *   insn=0x00000000002436A8 string=0x00000000002436AC "\t"
 *   insn=0x00000000002436A8 string=0x00000000002436E4 "\t"
 *   insn=0x00000000002436AC string=0x00000000002436B0 "*"
 *   insn=0x00000000002436B0 string=0x00000000002436B4 "\n"
 *   insn=0x00000000002436B8 string=0x00000000002436BC ""
 *   insn=0x00000000002436BC string=0x00000000002436F0 "?"
 *   insn=0x00000000002436C0 string=0x00000000002436C4 ")=G"
 *   insn=0x00000000002436C4 string=0x00000000002436C8 "!"
 *   insn=0x00000000002436CC string=0x00000000002436D0 "\t"
 *   insn=0x00000000002436CC string=0x0000000000243704 "\t"
 *   insn=0x00000000002436D0 string=0x00000000002436D4 "*"
 *   insn=0x00000000002436D4 string=0x00000000002436D8 "\n"
 *   insn=0x00000000002436E0 string=0x0000000000243710 "?"
 *   insn=0x00000000002436E4 string=0x00000000002436E8 "*"
 *   insn=0x00000000002436E8 string=0x00000000002436EC "\n"
 *   insn=0x00000000002436F0 string=0x00000000002436F4 "L"
 *   insn=0x00000000002436F8 string=0x00000000002436FC "*"
 *   insn=0x0000000000243704 string=0x0000000000243708 "*"
 *   insn=0x0000000000243708 string=0x000000000024370C "\n"
 *   insn=0x0000000000243718 string=0x000000000024371C """
 *   insn=0x0000000000243724 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000243734 string=0x0000000000243738 "(a"
 *   insn=0x000000000024373C string=0x0000000000243740 "a"
 *   insn=0x0000000000243740 string=0x000000000024378C "\n%"
 *   insn=0x0000000000243750 string=0x0000000000243754 "\t%"
 *   insn=0x0000000000243754 string=0x0000000000243758 ")=G"
 *   insn=0x0000000000243758 string=0x000000000024375C "!"
 *   insn=0x0000000000243760 string=0x0000000000243764 "\t"
 *   insn=0x0000000000243760 string=0x00000000002437D4 "\t"
 *   insn=0x0000000000243764 string=0x0000000000243768 "*"
 *   insn=0x0000000000243768 string=0x000000000024376C "\n"
 *   insn=0x0000000000243770 string=0x0000000000243774 "?"
 *   insn=0x0000000000243774 string=0x0000000000243778 "l"
 *   insn=0x000000000024377C string=0x0000000000243780 "\t"
 *   insn=0x0000000000243784 string=0x0000000000243788 "O"
 *   insn=0x000000000024378C string=0x0000000000243790 "J=G"
 *   insn=0x0000000000243790 string=0x0000000000243794 ")!"
 *   insn=0x0000000000243798 string=0x000000000024379C "*"
 *   insn=0x0000000000243798 string=0x00000000002437B0 "*"
 *   insn=0x000000000024379C string=0x00000000002437A0 "K"
 *   insn=0x00000000002437A0 string=0x00000000002437A4 "+"
 *   insn=0x00000000002437AC string=0x00000000002437BC "_"
 *   insn=0x00000000002437B0 string=0x00000000002437B4 "K"
 *   insn=0x00000000002437B4 string=0x00000000002437B8 "+"
 *   insn=0x00000000002437BC string=0x00000000002437C0 ","
 *   insn=0x00000000002437D4 string=0x00000000002437D8 "*"
 *   insn=0x00000000002437D8 string=0x00000000002437DC "\n"
 *   insn=0x00000000002437DC string=0x00000000002437E0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<int,Caver::Component::OutletBinding>::operator[](__int64 a1, int *a2)
{
  __int64 v3; // x21
  __int64 v4; // x8
  int v5; // w9
  __int64 node; // x19
  int v7; // w10
  bool v8; // cc
  __int64 *v9; // x10
  int v10; // w8
  __int64 insert_hint_unique_pos; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  _BOOL4 v14; // w23
  void *v15; // x0
  char *v16; // x0
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  char *v22; // [xsp+18h] [xbp-88h] BYREF
  __int64 v23; // [xsp+20h] [xbp-80h]
  __int64 v24; // [xsp+28h] [xbp-78h]
  int v25; // [xsp+30h] [xbp-70h]
  int v26; // [xsp+38h] [xbp-68h]
  _QWORD v27[2]; // [xsp+40h] [xbp-60h] BYREF
  char v28; // [xsp+50h] [xbp-50h]
  __int64 v29; // [xsp+58h] [xbp-48h]

  v3 = a1 + 8;
  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_12;
  v5 = *a2;
  node = a1 + 8;
  do
  {
    v7 = *(_DWORD *)(v4 + 32);
    v8 = v7 < v5;
    if ( v7 >= v5 )
      v9 = (__int64 *)(v4 + 16);
    else
      v9 = (__int64 *)(v4 + 24);
    if ( !v8 )
      node = v4;
    v4 = *v9;
  }
  while ( *v9 );
  if ( node == v3 )
  {
LABEL_12:
    v10 = *a2;
  }
  else
  {
    v10 = *a2;
    if ( *a2 >= *(_DWORD *)(node + 32) )
      return node + 40;
  }
  v23 = 0;
  v24 = 0;
  v25 = v10;
  v26 = 0;
  v22 = &byte_6FD2F8;
  sub_56A528(v27, &v22);
  v28 = v24;
  v27[1] = v23;
  insert_hint_unique_pos = std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v13 = v12;
  if ( v12 )
  {
    v14 = 1;
    if ( !insert_hint_unique_pos && v3 != v12 )
      v14 = v25 < *(_DWORD *)(v12 + 32);
    node = std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node();
    sub_54C8A0(v14, node, v13, v3);
    ++*(_QWORD *)(a1 + 40);
  }
  v15 = (void *)(v27[0] - 24LL);
  if ( (__int64 *)(v27[0] - 24LL) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v27[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v15);
  }
  v16 = v22 - 24;
  if ( v22 - 24 != (char *)&qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v22 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v16);
  }
  return node + 40;
}

