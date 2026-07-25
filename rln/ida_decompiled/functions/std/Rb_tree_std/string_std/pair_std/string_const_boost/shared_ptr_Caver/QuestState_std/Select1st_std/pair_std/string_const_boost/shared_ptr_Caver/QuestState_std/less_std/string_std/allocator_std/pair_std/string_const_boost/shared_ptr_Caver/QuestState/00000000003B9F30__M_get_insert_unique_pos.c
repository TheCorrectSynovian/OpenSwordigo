/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9F30
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 22
 *   insn=0x00000000003B9F54 string=0x00000000003B9F58 "\t"
 *   insn=0x00000000003B9F70 string=0x00000000003B9F74 "a"
 *   insn=0x00000000003B9F78 string=0x00000000003B9F7C "("
 *   insn=0x00000000003B9F88 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B9F8C string=0x00000000003B9F90 "`"
 *   insn=0x00000000003B9F90 string=0x00000000003B9F94 "iB"
 *   insn=0x00000000003B9F98 string=0x00000000003B9F9C ")"
 *   insn=0x00000000003B9FA0 string=0x00000000003B9FA4 "\n"
 *   insn=0x00000000003B9FB0 string=0x00000000003B9FB4 "`"
 *   insn=0x00000000003B9FBC string=0x00000000003B9FC0 "ib"
 *   insn=0x00000000003B9FC0 string=0x00000000003B9FC4 ")"
 *   insn=0x00000000003B9FC4 string=0x00000000003B9FC8 "I"
 *   insn=0x00000000003B9FCC string=0x00000000003B9FD0 "h"
 *   insn=0x00000000003B9FD0 string=0x00000000003B9FD4 ""
 *   insn=0x00000000003B9FE0 string=0x00000000003B9FE4 " "
 *   insn=0x00000000003B9FF8 string=0x00000000003B9FFC ""
 *   insn=0x00000000003B9FFC string=0x00000000003BA000 ")"
 *   insn=0x00000000003BA004 string=0x00000000003BA008 """
 *   insn=0x00000000003BA008 string=0x00000000003BA00C "a"
 *   insn=0x00000000003BA020 string=0x00000000003BA024 "\n"
 *   insn=0x00000000003BA028 string=0x00000000003BA02C ""
 *   insn=0x00000000003BA044 string=0x00000000003BA048 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos(
        __int64 a1,
        const void **a2)
{
  __int64 v3; // x9
  const void *v5; // x22
  unsigned __int64 v6; // x23
  __int64 v7; // x19
  _QWORD *v8; // x1
  unsigned __int64 v9; // x8
  __int64 v10; // x27
  size_t v11; // x2
  int v12; // w0
  int v13; // w8
  int v14; // w0
  __int64 v15; // x22
  _QWORD *v16; // x0
  const void *v17; // x1
  unsigned __int64 v18; // x8
  size_t v19; // x9
  __int64 v20; // x20
  size_t v21; // x2
  int v22; // w0

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
    v7 = a1 + 8;
    goto LABEL_19;
  }
  v5 = *a2;
  v6 = *((_QWORD *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      v7 = v3;
      v8 = *(_QWORD **)(v3 + 32);
      v9 = *(v8 - 3);
      v10 = v6 - v9;
      v11 = v6 <= v9 ? v6 : *(v8 - 3);
      v12 = memcmp(v5, v8, v11);
      if ( !v12 )
        break;
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v13 = 1;
      v3 = *(_QWORD *)(v7 + 16);
      if ( !v3 )
        goto LABEL_16;
    }
    if ( v10 <= 0x7FFFFFFF )
    {
      v14 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
      if ( v14 < 0 )
        goto LABEL_8;
    }
LABEL_15:
    v13 = 0;
    v3 = *(_QWORD *)(v7 + 24);
  }
  while ( v3 );
LABEL_16:
  v15 = v7;
  if ( v13 )
  {
LABEL_19:
    if ( v7 != *(_QWORD *)(a1 + 24) )
    {
      v15 = sub_54C700(v7);
      goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  v16 = *(_QWORD **)(v15 + 32);
  v17 = *a2;
  v18 = *(v16 - 3);
  v19 = *((_QWORD *)*a2 - 3);
  v20 = v18 - v19;
  if ( v18 <= v19 )
    v21 = *(v16 - 3);
  else
    v21 = v19;
  v22 = memcmp(v16, v17, v21);
  if ( !v22 )
  {
    if ( v20 > 0x7FFFFFFF )
      return v15;
    if ( v20 <= (__int64)0xFFFFFFFF80000000LL )
      v22 = 0x80000000;
    else
      v22 = v20;
  }
  if ( v22 < 0 )
    return 0;
  return v15;
}

