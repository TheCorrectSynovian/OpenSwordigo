/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045CDB0
 * Mangled: _ZNSt3mapISsN5Caver13ObjectLibrary18ObjectTemplateInfoESt4lessISsESaISt4pairIKSsS2_EEEixERS6_
 * Demangled: std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000001F3780  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Callees: 9
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D90  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::string const&)
 *   0x00000000001F6E40  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo> const&)
 *   0x00000000001FF200  std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x000000000045CDCC string=0x000000000045CDD0 "I"
 *   insn=0x000000000045CDD0 string=0x000000000045CDD4 "("
 *   insn=0x000000000045CDE8 string=0x000000000045CDEC "7"
 *   insn=0x000000000045CE0C string=0x000000000045CE10 ""
 *   insn=0x000000000045CE14 string=0x000000000045CE18 """
 *   insn=0x000000000045CE1C string=0x00000000001F5190 "P'"
 *   insn=0x000000000045CE20 string=0x000000000045CE24 "@"
 *   insn=0x000000000045CE30 string=0x000000000045CE34 ""
 *   insn=0x000000000045CE70 string=0x000000000045CE74 "@"
 *   insn=0x000000000045CE7C string=0x000000000045CE80 ""
 *   insn=0x000000000045CE80 string=0x000000000045CE84 ")"
 *   insn=0x000000000045CE88 string=0x000000000045CE8C """
 *   insn=0x000000000045CEBC string=0x00000000001F6D90 "0'"
 *   insn=0x000000000045CEC4 string=0x000000000045CEC8 "6"
 *   insn=0x000000000045CECC string=0x000000000045CED0 "u"
 *   insn=0x000000000045CED4 string=0x000000000045CED8 " "
 *   insn=0x000000000045CEE0 string=0x000000000045CEE4 ""
 *   insn=0x000000000045CEE4 string=0x000000000045CEE8 ")"
 *   insn=0x000000000045CEEC string=0x000000000045CEF0 """
 *   insn=0x000000000045CF24 string=0x00000000001F6E40 "0'"
 *   insn=0x000000000045CF38 string=0x000000000045CF3C "Y"
 *   insn=0x000000000045CF3C string=0x000000000045CF40 "h"
 *   insn=0x000000000045CF40 string=0x000000000045CF44 ""
 *   insn=0x000000000045CF44 string=0x000000000045CF48 "h"
 *   insn=0x000000000045CF54 string=0x000000000045CF58 ""
 *   insn=0x000000000045CF60 string=0x000000000045CF64 "a"
 *   insn=0x000000000045CFA4 string=0x000000000045CFA8 "`"
 *   insn=0x000000000045CFB0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045CFC0 string=0x000000000045CFC4 "@"
 *   insn=0x000000000045CFC8 string=0x000000000045CFCC ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo>::operator[](
        __int64 a1,
        const void **a2)
{
  __int64 node; // x21
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x19
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x20
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
  __int64 v27; // x21
  size_t v28; // x2
  unsigned int v29; // w0
  int v31; // w0
  void *v33[5]; // [xsp+18h] [xbp-78h] BYREF

  node = a1 + 8;
  v33[4] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      v31 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v31 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(v33, v5);
  memset(&v33[1], 0, 24);
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !insert_hint_unique_pos && v7 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v33[0] - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v33[0] - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v33[0], v24, v28);
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair();
  return node + 40;
}

