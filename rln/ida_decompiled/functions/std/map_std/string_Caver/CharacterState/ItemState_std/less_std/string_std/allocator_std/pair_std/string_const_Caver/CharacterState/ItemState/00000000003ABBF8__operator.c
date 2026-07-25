/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ABBF8
 * Mangled: _ZNSt3mapISsN5Caver14CharacterState9ItemStateESt4lessISsESaISt4pairIKSsS2_EEEixERS6_
 * Demangled: std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000002002E0  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F70E0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *   0x0000000000200830  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x00000000003ABC14 string=0x00000000003ABC18 "H"
 *   insn=0x00000000003ABC1C string=0x00000000003ABC20 ""
 *   insn=0x00000000003ABC34 string=0x00000000003ABC38 "7"
 *   insn=0x00000000003ABC58 string=0x00000000003ABC5C ""
 *   insn=0x00000000003ABC60 string=0x00000000003ABC64 """
 *   insn=0x00000000003ABC64 string=0x00000000003ABC68 "J%"
 *   insn=0x00000000003ABC68 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003ABC6C string=0x00000000003ABC70 "@"
 *   insn=0x00000000003ABC7C string=0x00000000003ABC80 ""
 *   insn=0x00000000003ABCBC string=0x00000000003ABCC0 "@"
 *   insn=0x00000000003ABCC4 string=0x00000000003ABCC8 "a"
 *   insn=0x00000000003ABCC8 string=0x00000000003ABCCC ""
 *   insn=0x00000000003ABCCC string=0x00000000003ABCD0 ")"
 *   insn=0x00000000003ABCD4 string=0x00000000003ABCD8 """
 *   insn=0x00000000003ABCD8 string=0x00000000003ABCDC "-%"
 *   insn=0x00000000003ABD10 string=0x00000000003ABD14 "6"
 *   insn=0x00000000003ABD18 string=0x00000000003ABD1C "s"
 *   insn=0x00000000003ABD20 string=0x00000000003ABD24 " "
 *   insn=0x00000000003ABD2C string=0x00000000003ABD30 ""
 *   insn=0x00000000003ABD30 string=0x00000000003ABD34 ")"
 *   insn=0x00000000003ABD38 string=0x00000000003ABD3C """
 *   insn=0x00000000003ABD5C string=0x00000000003ABD60 "`"
 *   insn=0x00000000003ABD70 string=0x00000000001F70E0 "0'"
 *   insn=0x00000000003ABD8C string=0x00000000003ABD90 ""
 *   insn=0x00000000003ABD98 string=0x00000000003ABD9C "4"
 *   insn=0x00000000003ABDA0 string=0x00000000003ABDA4 ""
 *   insn=0x00000000003ABDB0 string=0x00000000003ABDB4 "\t@"
 *   insn=0x00000000003ABDC0 string=0x00000000003ABDC4 ""
 *   insn=0x00000000003ABDD0 string=0x00000000003ABDD4 "@"
 *   insn=0x00000000003ABDE4 string=0x00000000003ABDE8 ")"
 *   insn=0x00000000003ABDF8 string=0x00000000003ABDFC ""
 *   insn=0x00000000003ABE08 string=0x00000000003ABE0C "`"
 *   insn=0x00000000003ABE48 string=0x00000000003ABE4C "`"
 *   insn=0x00000000003ABE54 string=0x00000000003ABE58 ")=G"
 *   insn=0x00000000003ABE58 string=0x00000000003ABE5C "!"
 *   insn=0x00000000003ABE60 string=0x00000000003ABE64 "\t"
 *   insn=0x00000000003ABE60 string=0x00000000003ABE78 "\t"
 *   insn=0x00000000003ABE64 string=0x00000000003ABE68 "*"
 *   insn=0x00000000003ABE68 string=0x00000000003ABE6C "\n"
 *   insn=0x00000000003ABE74 string=0x00000000003ABE84 "?"
 *   insn=0x00000000003ABE78 string=0x00000000003ABE7C "*"
 *   insn=0x00000000003ABE7C string=0x00000000003ABE80 "\n"
 *   insn=0x00000000003ABE8C string=0x00000000003ABE90 "E"
 *   insn=0x00000000003ABE98 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003ABEA0 string=0x00000000003ABEA4 "J"
 *   insn=0x00000000003ABEA8 string=0x00000000003ABEAC "(a"
 *   insn=0x00000000003ABEB8 string=0x00000000003ABEBC "J=G"
 *   insn=0x00000000003ABEBC string=0x00000000003ABEC0 ")!"
 *   insn=0x00000000003ABEC4 string=0x00000000003ABEC8 "*"
 *   insn=0x00000000003ABEC4 string=0x00000000003ABEF4 "*"
 *   insn=0x00000000003ABEC8 string=0x00000000003ABECC "K"
 *   insn=0x00000000003ABECC string=0x00000000003ABED0 "+"
 *   insn=0x00000000003ABED4 string=0x00000000003ABED8 "_"
 *   insn=0x00000000003ABED8 string=0x00000000003ABEDC "l"
 *   insn=0x00000000003ABEE4 string=0x00000000003ABEE8 "/"
 *   insn=0x00000000003ABEEC string=0x00000000003ABEF0 "uV"
 *   insn=0x00000000003ABEF4 string=0x00000000003ABEF8 "K"
 *   insn=0x00000000003ABEF8 string=0x00000000003ABEFC "+"
 *   insn=0x00000000003ABEFC string=0x00000000003ABF00 "_"
 *   insn=0x00000000003ABF04 string=0x00000000003ABF08 "0"
 *   insn=0x00000000003ABF10 string=0x00000000003ABF14 "lV"
 *   insn=0x00000000003ABF1C string=0x00000000003ABF20 "4"
 *   insn=0x00000000003ABF24 string=0x00000000003ABF28 ""
 *   insn=0x00000000003ABF34 string=0x00000000003ABF38 "\t@"
 *   insn=0x00000000003ABF44 string=0x00000000003ABF48 ""
 *   insn=0x00000000003ABF54 string=0x00000000003ABF58 "@"
 *   insn=0x00000000003ABF68 string=0x00000000003ABF6C ")"
 *   insn=0x00000000003ABF7C string=0x00000000003ABF80 ")=G"
 *   insn=0x00000000003ABF80 string=0x00000000003ABF84 "!"
 *   insn=0x00000000003ABF84 string=0x00000000003ABF88 "i"
 *   insn=0x00000000003ABF88 string=0x00000000003ABF8C "\t"
 *   insn=0x00000000003ABF88 string=0x00000000003ABFB4 "\t"
 *   insn=0x00000000003ABF8C string=0x00000000003ABF90 "*"
 *   insn=0x00000000003ABF90 string=0x00000000003ABF94 "\n"
 *   insn=0x00000000003ABF98 string=0x00000000003ABF9C "?"
 *   insn=0x00000000003ABF9C string=0x00000000003ABFA0 "L"
 *   insn=0x00000000003ABFAC string=0x00000000003ABFB0 "EV"
 *   insn=0x00000000003ABFB4 string=0x00000000003ABFB8 "*"
 *   insn=0x00000000003ABFB8 string=0x00000000003ABFBC "\n"
 *   insn=0x00000000003ABFBC string=0x00000000003ABFC0 "?"
 *   insn=0x00000000003ABFC0 string=0x00000000003ABFC4 ""
 *   insn=0x00000000003ABFC8 string=0x00000000003ABFCC ">V"
 *   insn=0x00000000003ABFD4 string=0x00000000003ABFD8 "J"
 *   insn=0x00000000003ABFDC string=0x00000000003ABFE0 "(a"
 *   insn=0x00000000003ABFEC string=0x00000000003ABFF0 "J=G"
 *   insn=0x00000000003ABFF0 string=0x00000000003ABFF4 ")!"
 *   insn=0x00000000003ABFF8 string=0x00000000003ABFFC "*"
 *   insn=0x00000000003ABFF8 string=0x00000000003AC028 "*"
 *   insn=0x00000000003ABFFC string=0x00000000003AC000 "K"
 *   insn=0x00000000003AC000 string=0x00000000003AC004 "+"
 *   insn=0x00000000003AC008 string=0x00000000003AC00C "_"
 *   insn=0x00000000003AC028 string=0x00000000003AC02C "K"
 *   insn=0x00000000003AC02C string=0x00000000003AC030 "+"
 *   insn=0x00000000003AC030 string=0x00000000003AC034 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,Caver::CharacterState::ItemState>::operator[](__int64 a1, const void **a2)
{
  __int64 node; // x19
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x20
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x21
  size_t v11; // x2
  int v12; // w0
  int v13; // w0
  _QWORD *v14; // x1
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x23
  size_t v18; // x2
  int v19; // w0
  __int64 insert_hint_unique_pos; // x0
  __int64 v21; // x1
  __int64 v22; // x22
  unsigned int v23; // w23
  _QWORD *v24; // x1
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  __int64 v27; // x19
  size_t v28; // x2
  unsigned int v29; // w0
  _QWORD *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x8
  char *v33; // x0
  int v35; // w0
  unsigned int *v36; // x8
  int v37; // w9
  void *v39[2]; // [xsp+18h] [xbp-78h] BYREF
  _QWORD *v40; // [xsp+28h] [xbp-68h]
  int v41; // [xsp+30h] [xbp-60h]
  __int64 v42; // [xsp+38h] [xbp-58h]

  node = a1 + 8;
  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = *((_QWORD *)*a2 - 3);
    v7 = a1 + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v3[4];
        v9 = *(v8 - 3);
        v10 = v9 - v6;
        v11 = v9 <= v6 ? *(v8 - 3) : v6;
        v12 = memcmp(v8, v4, v11);
        if ( v12 )
          break;
        if ( v10 <= 0x7FFFFFFF )
        {
          v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
          if ( v13 < 0 )
            goto LABEL_8;
        }
LABEL_15:
        node = (__int64)v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_18;
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        goto LABEL_18;
    }
  }
  v5 = a2;
  v7 = a1 + 8;
LABEL_18:
  if ( node != v7 )
  {
    v14 = *(_QWORD **)(node + 32);
    v15 = *((_QWORD *)*v5 - 3);
    v16 = *(v14 - 3);
    v17 = v15 - v16;
    if ( v15 <= v16 )
      v18 = *((_QWORD *)*v5 - 3);
    else
      v18 = *(v14 - 3);
    v19 = memcmp(*v5, v14, v18);
    if ( v19 )
    {
      if ( (v19 & 0x80000000) == 0 )
        return node + 40;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return node + 40;
      v35 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v35 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(v39, v5);
  v39[1] = 0;
  v40 = 0;
  v41 = 0;
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !insert_hint_unique_pos && v7 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v39[0] - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v39[0] - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v39[0], v24, v28);
      if ( !v29 )
      {
        v29 = 0x7FFFFFFF;
        if ( v27 <= 0x7FFFFFFF )
        {
          if ( v27 <= (__int64)0xFFFFFFFF80000000LL )
            v29 = 0x80000000;
          else
            v29 = v27;
        }
      }
      v23 = v29 >> 31;
    }
    node = std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  v30 = v40;
  if ( v40 )
  {
    v31 = v40[1] - 1LL;
    v40[1] = v31;
    if ( !v31 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v32 = v30[2] - 1LL;
      v30[2] = v32;
      if ( !v32 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  v33 = (char *)v39[0] - 24;
  if ( (char *)v39[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v36 = (unsigned int *)((char *)v39[0] - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v33);
  }
  return node + 40;
}

