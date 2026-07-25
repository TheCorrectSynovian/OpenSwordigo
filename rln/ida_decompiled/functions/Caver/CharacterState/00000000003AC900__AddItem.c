/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AC900
 * Mangled: _ZN5Caver14CharacterState7AddItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x0000000000202F20  Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9F30  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000001FDA10  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find(std::string const&)
 *   0x00000000002002E0  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 116
 *   insn=0x00000000003AC918 string=0x00000000003AC91C "W"
 *   insn=0x00000000003AC934 string=0x00000000003AC938 "tB"
 *   insn=0x00000000003AC948 string=0x00000000003AC94C "1D"
 *   insn=0x00000000003AC94C string=0x00000000001FDA10 "0'"
 *   insn=0x00000000003AC96C string=0x00000000003AC970 "ib"
 *   insn=0x00000000003AC970 string=0x00000000003AC974 "?"
 *   insn=0x00000000003AC978 string=0x00000000003AC97C ""
 *   insn=0x00000000003AC984 string=0x00000000003AC988 "s"
 *   insn=0x00000000003AC98C string=0x00000000003AC990 "("
 *   insn=0x00000000003AC9A0 string=0x00000000003AC9A4 "c5"
 *   insn=0x00000000003AC9A4 string=0x00000000001F9F30 "0'"
 *   insn=0x00000000003AC9B8 string=0x00000000003AC9BC "9-@"
 *   insn=0x00000000003AC9BC string=0x00000000003AC9C0 "3"
 *   insn=0x00000000003AC9C0 string=0x00000000003AC9C4 "h"
 *   insn=0x00000000003AC9C4 string=0x00000000003AC9C8 ""
 *   insn=0x00000000003AC9C8 string=0x00000000003AC9CC "h"
 *   insn=0x00000000003AC9D0 string=0x00000000003AC9D4 "h"
 *   insn=0x00000000003AC9D8 string=0x00000000003AC9DC "\t@"
 *   insn=0x00000000003AC9E0 string=0x00000000003AC9E4 "h\n@"
 *   insn=0x00000000003AC9E4 string=0x00000000003AC9E8 ""
 *   insn=0x00000000003AC9E8 string=0x00000000003AC9EC "h\n"
 *   insn=0x00000000003AC9F0 string=0x00000000003AC9F4 "h"
 *   insn=0x00000000003AC9F8 string=0x00000000003AC9FC "@"
 *   insn=0x00000000003ACA10 string=0x00000000003ACA14 ""
 *   insn=0x00000000003ACA18 string=0x00000000003ACA1C "M"
 *   insn=0x00000000003ACA20 string=0x00000000003ACA24 "3"
 *   insn=0x00000000003ACA24 string=0x00000000003ACA28 "h"
 *   insn=0x00000000003ACA28 string=0x00000000003ACA2C ""
 *   insn=0x00000000003ACA2C string=0x00000000003ACA30 "h"
 *   insn=0x00000000003ACA34 string=0x00000000003ACA38 "h"
 *   insn=0x00000000003ACA3C string=0x00000000003ACA40 "\t@"
 *   insn=0x00000000003ACA44 string=0x00000000003ACA48 "h\n@"
 *   insn=0x00000000003ACA48 string=0x00000000003ACA4C ""
 *   insn=0x00000000003ACA4C string=0x00000000003ACA50 "h\n"
 *   insn=0x00000000003ACA54 string=0x00000000003ACA58 "h"
 *   insn=0x00000000003ACA5C string=0x00000000003ACA60 "@"
 *   insn=0x00000000003ACA6C string=0x00000000003ACA70 "h"
 *   insn=0x00000000003ACA70 string=0x00000000003ACA74 ""
 *   insn=0x00000000003ACA74 string=0x00000000003ACA78 "h"
 *   insn=0x00000000003ACA98 string=0x00000000003ACA9C "h"
 *   insn=0x00000000003ACA9C string=0x00000000003ACAA0 ""
 *   insn=0x00000000003ACAA0 string=0x00000000003ACAA4 "h"
 *   insn=0x00000000003ACAAC string=0x00000000003ACAB0 "5"
 *   insn=0x00000000003ACAB4 string=0x00000000003ACAB8 ""
 *   insn=0x00000000003ACAC4 string=0x00000000003ACAC8 "\t@"
 *   insn=0x00000000003ACAD4 string=0x00000000003ACAD8 ""
 *   insn=0x00000000003ACAE4 string=0x00000000003ACAE8 "@"
 *   insn=0x00000000003ACB08 string=0x00000000003ACB0C "3"
 *   insn=0x00000000003ACB0C string=0x00000000003ACB10 "h"
 *   insn=0x00000000003ACB10 string=0x00000000003ACB14 ""
 *   insn=0x00000000003ACB14 string=0x00000000003ACB18 "h"
 *   insn=0x00000000003ACB1C string=0x00000000003ACB20 "h"
 *   insn=0x00000000003ACB24 string=0x00000000003ACB28 "\t@"
 *   insn=0x00000000003ACB2C string=0x00000000003ACB30 "h\n@"
 *   insn=0x00000000003ACB30 string=0x00000000003ACB34 ""
 *   insn=0x00000000003ACB34 string=0x00000000003ACB38 "h\n"
 *   insn=0x00000000003ACB3C string=0x00000000003ACB40 "h"
 *   insn=0x00000000003ACB44 string=0x00000000003ACB48 "@"
 *   insn=0x00000000003ACB5C string=0x00000000003ACB60 "a"
 *   insn=0x00000000003ACB80 string=0x00000000003ACB84 ")=G"
 *   insn=0x00000000003ACB84 string=0x00000000003ACB88 "!"
 *   insn=0x00000000003ACB8C string=0x00000000003ACB90 "\t"
 *   insn=0x00000000003ACB8C string=0x00000000003ACBA4 "\t"
 *   insn=0x00000000003ACB90 string=0x00000000003ACB94 "*"
 *   insn=0x00000000003ACB94 string=0x00000000003ACB98 "\n"
 *   insn=0x00000000003ACBA0 string=0x00000000003ACBB0 "?"
 *   insn=0x00000000003ACBA4 string=0x00000000003ACBA8 "*"
 *   insn=0x00000000003ACBA8 string=0x00000000003ACBAC "\n"
 *   insn=0x00000000003ACBBC string=0x00000000003ACBC0 "k"
 *   insn=0x00000000003ACBC4 string=0x00000000003ACBC8 ")=G"
 *   insn=0x00000000003ACBC8 string=0x00000000003ACBCC "!"
 *   insn=0x00000000003ACBD0 string=0x00000000003ACBD4 "\t"
 *   insn=0x00000000003ACBD0 string=0x00000000003ACBE8 "\t"
 *   insn=0x00000000003ACBD4 string=0x00000000003ACBD8 "*"
 *   insn=0x00000000003ACBD8 string=0x00000000003ACBDC "\n"
 *   insn=0x00000000003ACBE4 string=0x00000000003ACBF4 "?"
 *   insn=0x00000000003ACBE8 string=0x00000000003ACBEC "*"
 *   insn=0x00000000003ACBEC string=0x00000000003ACBF0 "\n"
 *   insn=0x00000000003ACC00 string=0x00000000003ACC04 "s"
 *   insn=0x00000000003ACC0C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003ACC14 string=0x00000000003ACC18 "G"
 *   insn=0x00000000003ACC14 string=0x00000000003ACC68 "h"
 *   insn=0x00000000003ACC20 string=0x00000000003ACC24 "(a"
 *   insn=0x00000000003ACC30 string=0x00000000003ACC34 "J=G"
 *   insn=0x00000000003ACC34 string=0x00000000003ACC38 ")!"
 *   insn=0x00000000003ACC3C string=0x00000000003ACC40 "*"
 *   insn=0x00000000003ACC3C string=0x00000000003ACCAC "*"
 *   insn=0x00000000003ACC40 string=0x00000000003ACC44 "K"
 *   insn=0x00000000003ACC44 string=0x00000000003ACC48 "+"
 *   insn=0x00000000003ACC4C string=0x00000000003ACC50 "_"
 *   insn=0x00000000003ACC68 string=0x00000000003ACC6C ""
 *   insn=0x00000000003ACC6C string=0x00000000003ACC70 "h"
 *   insn=0x00000000003ACC74 string=0x00000000003ACC78 "h"
 *   insn=0x00000000003ACC78 string=0x00000000003ACC7C "\t@"
 *   insn=0x00000000003ACC84 string=0x00000000003ACC88 "h\n@"
 *   insn=0x00000000003ACC88 string=0x00000000003ACC8C ""
 *   insn=0x00000000003ACC8C string=0x00000000003ACC90 "h\n"
 *   insn=0x00000000003ACC94 string=0x00000000003ACC98 "h"
 *   insn=0x00000000003ACC98 string=0x00000000003ACC9C "@"
 *   insn=0x00000000003ACCA4 string=0x00000000003ACCA8 "#"
 *   insn=0x00000000003ACCAC string=0x00000000003ACCB0 "K"
 *   insn=0x00000000003ACCB0 string=0x00000000003ACCB4 "+"
 *   insn=0x00000000003ACCB4 string=0x00000000003ACCB8 "_"
 *   insn=0x00000000003ACCCC string=0x00000000003ACCD0 "J"
 *   insn=0x00000000003ACCD4 string=0x00000000003ACCD8 "(a"
 *   insn=0x00000000003ACCE4 string=0x00000000003ACCE8 "J=G"
 *   insn=0x00000000003ACCE8 string=0x00000000003ACCEC ")!"
 *   insn=0x00000000003ACCF0 string=0x00000000003ACCF4 "*"
 *   insn=0x00000000003ACCF0 string=0x00000000003ACD20 "*"
 *   insn=0x00000000003ACCF4 string=0x00000000003ACCF8 "K"
 *   insn=0x00000000003ACCF8 string=0x00000000003ACCFC "+"
 *   insn=0x00000000003ACD00 string=0x00000000003ACD04 "_"
 *   insn=0x00000000003ACD04 string=0x00000000003ACD08 "l"
 *   insn=0x00000000003ACD20 string=0x00000000003ACD24 "K"
 *   insn=0x00000000003ACD24 string=0x00000000003ACD28 "+"
 *   insn=0x00000000003ACD28 string=0x00000000003ACD2C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::AddItem(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x0
  __int64 v5; // x22
  void *v6; // x0
  __int64 v7; // x8
  int v9; // w22
  _QWORD *v10; // x19
  int v11; // w25
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x19
  __int64 v18; // x22
  _QWORD *v19; // x0
  _QWORD *v20; // x20
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  void *v24; // x0
  __int64 v25; // x8
  __int64 v26; // x8
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  __int64 v31; // [xsp+0h] [xbp-60h] BYREF
  _QWORD *v32; // [xsp+8h] [xbp-58h]
  __int64 v33; // [xsp+18h] [xbp-48h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(&v31, *a2 + 8LL);
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find();
  v5 = v4;
  v6 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v6);
  }
  v7 = *a2;
  if ( a1 + 24 == v5 )
  {
    if ( (unsigned int)(*(_DWORD *)v7 - 1) <= 1 )
    {
      Caver::CharacterState::HighestLevelItemOfType();
      if ( v31 )
      {
        v9 = *(_DWORD *)(v31 + 44);
        v10 = v32;
        v11 = *(_DWORD *)(*a2 + 44LL);
        if ( v32 )
        {
          v12 = v32[1] - 1LL;
          v32[1] = v12;
          if ( !v12 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
            v13 = v10[2] - 1LL;
            v10[2] = v13;
            if ( !v13 )
              (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
          }
        }
        if ( v9 >= v11 )
          return 0;
      }
      else
      {
        v14 = v32;
        if ( v32 )
        {
          v15 = v32[1] - 1LL;
          v32[1] = v15;
          if ( !v15 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
            v16 = v14[2] - 1LL;
            v14[2] = v16;
            if ( !v16 )
              (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
          }
        }
      }
    }
    v18 = *a2;
    v17 = (_QWORD *)a2[1];
    if ( v17 )
      ++v17[1];
    sub_56A528(&v31, v18 + 8);
    v19 = (_QWORD *)std::map<std::string,Caver::CharacterState::ItemState>::operator[]();
    v20 = v19;
    if ( v17 )
      ++v17[1];
    v21 = (_QWORD *)v19[1];
    *v19 = v18;
    v19[1] = v17;
    if ( v21 )
    {
      v22 = v21[1] - 1LL;
      v21[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v23 = v21[2] - 1LL;
        v21[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
    }
    *((_DWORD *)v20 + 4) = 1;
    v24 = (void *)(v31 - 24);
    if ( (__int64 *)(v31 - 24) == &qword_6FD2E0 )
      goto LABEL_27;
    v29 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 > 0 )
    {
LABEL_27:
      if ( !v17 )
        return 1;
    }
    else
    {
      operator delete(v24);
      if ( !v17 )
        return 1;
    }
    v25 = v17[1] - 1LL;
    v17[1] = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v26 = v17[2] - 1LL;
      v17[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
    return 1;
  }
  if ( *(_BYTE *)(v7 + 40) )
    return 0;
  ++*(_DWORD *)(v5 + 56);
  return 1;
}

