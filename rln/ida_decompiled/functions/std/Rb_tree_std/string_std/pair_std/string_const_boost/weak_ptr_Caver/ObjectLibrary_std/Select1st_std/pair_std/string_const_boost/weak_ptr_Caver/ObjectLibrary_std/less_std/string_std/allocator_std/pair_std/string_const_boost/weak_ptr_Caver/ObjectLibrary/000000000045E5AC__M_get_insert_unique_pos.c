/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045E5AC
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver13ObjectLibraryEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x0000000000203140  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x000000000054C700  sub_54C700
 *
 * Referenced strings: 22
 *   insn=0x000000000045E5D0 string=0x000000000045E5D4 "\t"
 *   insn=0x000000000045E5EC string=0x000000000045E5F0 "a"
 *   insn=0x000000000045E5F4 string=0x000000000045E5F8 "("
 *   insn=0x000000000045E604 string=0x00000000001F5190 "P'"
 *   insn=0x000000000045E608 string=0x000000000045E60C "`"
 *   insn=0x000000000045E60C string=0x000000000045E610 "iB"
 *   insn=0x000000000045E614 string=0x000000000045E618 ")"
 *   insn=0x000000000045E61C string=0x000000000045E620 "\n"
 *   insn=0x000000000045E62C string=0x000000000045E630 "`"
 *   insn=0x000000000045E638 string=0x000000000045E63C "ib"
 *   insn=0x000000000045E63C string=0x000000000045E640 ")"
 *   insn=0x000000000045E640 string=0x000000000045E644 "I"
 *   insn=0x000000000045E648 string=0x000000000045E64C "h"
 *   insn=0x000000000045E64C string=0x000000000045E650 ""
 *   insn=0x000000000045E65C string=0x000000000045E660 " "
 *   insn=0x000000000045E664 string=0x000000000045E668 "&"
 *   insn=0x000000000045E674 string=0x000000000045E678 ""
 *   insn=0x000000000045E678 string=0x000000000045E67C ")"
 *   insn=0x000000000045E680 string=0x000000000045E684 """
 *   insn=0x000000000045E69C string=0x000000000045E6A0 "\n"
 *   insn=0x000000000045E6A4 string=0x000000000045E6A8 ""
 *   insn=0x000000000045E6C0 string=0x000000000045E6C4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_unique_pos(
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

