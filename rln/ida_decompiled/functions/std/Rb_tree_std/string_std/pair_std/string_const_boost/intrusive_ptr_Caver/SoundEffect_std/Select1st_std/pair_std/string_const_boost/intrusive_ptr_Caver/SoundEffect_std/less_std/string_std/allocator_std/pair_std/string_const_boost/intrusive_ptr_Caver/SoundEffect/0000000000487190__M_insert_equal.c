/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000487190
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE15_M_insert_equalERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *
 * Callers: 1
 *   0x00000000001FE310  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *
 * Callees: 3
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FA780  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 16
 *   insn=0x00000000004871AC string=0x00000000004871B0 "h\n@"
 *   insn=0x00000000004871B4 string=0x00000000004871B8 "t""
 *   insn=0x00000000004871DC string=0x00000000004871E0 "("
 *   insn=0x00000000004871EC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004871F0 string=0x00000000004871F4 "@"
 *   insn=0x00000000004871F8 string=0x00000000004871FC ""
 *   insn=0x0000000000487200 string=0x0000000000487204 "\t"
 *   insn=0x000000000048721C string=0x0000000000487220 ""
 *   insn=0x0000000000487234 string=0x0000000000487238 ""
 *   insn=0x0000000000487238 string=0x000000000048723C ")"
 *   insn=0x0000000000487240 string=0x0000000000487244 """
 *   insn=0x0000000000487288 string=0x000000000048728C "="
 *   insn=0x000000000048728C string=0x00000000001FA780 "0'"
 *   insn=0x00000000004872A4 string=0x00000000004872A8 "h"
 *   insn=0x00000000004872AC string=0x00000000004872B0 ""
 *   insn=0x00000000004872B0 string=0x00000000004872B4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal(
        _QWORD *a1,
        const void **a2)
{
  _QWORD *v3; // x8
  _QWORD *v5; // x20
  const void *v6; // x23
  unsigned __int64 v7; // x24
  _QWORD *v8; // x22
  _QWORD *v9; // x1
  unsigned __int64 v10; // x8
  __int64 v11; // x28
  size_t v12; // x2
  int v13; // w0
  int v14; // w0
  _QWORD *v15; // x1
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x23
  size_t v19; // x2
  unsigned int v20; // w0
  unsigned int v21; // w23
  __int64 node; // x21
  __int64 result; // x0

  v3 = (_QWORD *)a1[2];
  v5 = a1 + 1;
  if ( !v3 )
  {
    v8 = a1 + 1;
    goto LABEL_27;
  }
  v6 = *a2;
  v7 = *((_QWORD *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      v8 = v3;
      v9 = (_QWORD *)v3[4];
      v10 = *(v9 - 3);
      v11 = v7 - v10;
      v12 = v7 <= v10 ? v7 : *(v9 - 3);
      v13 = memcmp(v6, v9, v12);
      if ( !v13 )
        break;
      if ( (v13 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v3 = (_QWORD *)v8[2];
      if ( !v3 )
        goto LABEL_16;
    }
    if ( v11 <= 0x7FFFFFFF )
    {
      v14 = v11 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v11;
      if ( v14 < 0 )
        goto LABEL_8;
    }
LABEL_15:
    v3 = (_QWORD *)v8[3];
  }
  while ( v3 );
LABEL_16:
  if ( v5 == v8 )
  {
LABEL_27:
    v21 = 1;
    goto LABEL_28;
  }
  v15 = (_QWORD *)v8[4];
  v16 = *((_QWORD *)*a2 - 3);
  v17 = *(v15 - 3);
  v18 = v16 - v17;
  if ( v16 <= v17 )
    v19 = *((_QWORD *)*a2 - 3);
  else
    v19 = *(v15 - 3);
  v20 = memcmp(*a2, v15, v19);
  if ( !v20 )
  {
    v20 = 0x7FFFFFFF;
    if ( v18 <= 0x7FFFFFFF )
    {
      if ( v18 <= (__int64)0xFFFFFFFF80000000LL )
        v20 = 0x80000000;
      else
        v20 = v18;
    }
  }
  v21 = v20 >> 31;
LABEL_28:
  node = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node();
  sub_54C8A0(v21, node, v8, v5);
  result = node;
  ++a1[5];
  return result;
}

