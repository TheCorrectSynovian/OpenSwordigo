/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A7F2C
 * Mangled: _ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5eraseERKS2_
 * Demangled: std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *
 * Callers: 1
 *   0x00000000001F6530  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC5D0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *
 * Referenced strings: 31
 *   insn=0x00000000003A7F44 string=0x00000000003A7F48 "a\n@"
 *   insn=0x00000000003A7F48 string=0x00000000003A7F4C "t""
 *   insn=0x00000000003A7F4C string=0x00000000003A7F50 "a"
 *   insn=0x00000000003A7F50 string=0x00000000003A7F54 ""
 *   insn=0x00000000003A7F60 string=0x00000000003A7F64 "?"
 *   insn=0x00000000003A7F70 string=0x00000000003A7F74 "j"
 *   insn=0x00000000003A7F74 string=0x00000000003A7F78 ""
 *   insn=0x00000000003A7F80 string=0x00000000003A7F84 """
 *   insn=0x00000000003A7F98 string=0x00000000003A7FF4 "x"
 *   insn=0x00000000003A7FA8 string=0x00000000003A7FAC "*"
 *   insn=0x00000000003A7FAC string=0x00000000003A7FB0 "K"
 *   insn=0x00000000003A7FAC string=0x00000000003A7FD0 ")"
 *   insn=0x00000000003A7FB0 string=0x00000000003A7FB4 "La"
 *   insn=0x00000000003A7FB4 string=0x00000000003A7FB8 "MA"
 *   insn=0x00000000003A7FC4 string=0x00000000003A7FC8 "j"
 *   insn=0x00000000003A7FC8 string=0x00000000003A7FCC "*"
 *   insn=0x00000000003A7FD0 string=0x00000000003A7FD4 "*"
 *   insn=0x00000000003A7FD4 string=0x00000000003A7FD8 "+a"
 *   insn=0x00000000003A7FD8 string=0x00000000003A7FDC ",A"
 *   insn=0x00000000003A7FE4 string=0x00000000003A7FE8 "71"
 *   insn=0x00000000003A7FE8 string=0x00000000003A7FEC "I"
 *   insn=0x00000000003A7FEC string=0x00000000003A7FF0 ")"
 *   insn=0x00000000003A7FF8 string=0x00000000003A7FFC "A"
 *   insn=0x00000000003A7FFC string=0x00000000003A8000 "h"
 *   insn=0x00000000003A800C string=0x00000000003A8010 "pQ"
 *   insn=0x00000000003A8010 string=0x00000000001FC5D0 "0'"
 *   insn=0x00000000003A8018 string=0x00000000003A801C "t~"
 *   insn=0x00000000003A8044 string=0x00000000003A8048 "h"
 *   insn=0x00000000003A8044 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A8050 string=0x00000000003A8054 ""
 *   insn=0x00000000003A8054 string=0x00000000003A8058 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // x20
  unsigned __int64 v4; // x8
  _QWORD *v5; // x21
  _QWORD *v6; // x23
  unsigned __int64 v7; // x9
  _QWORD *v8; // x10
  _QWORD *v9; // x9
  unsigned __int64 v10; // x11
  bool v11; // cf
  _QWORD *v12; // x11
  unsigned __int64 v13; // x10
  bool v14; // cf
  _QWORD *v15; // x10
  __int64 v16; // x24
  __int64 v17; // x8
  __int64 v18; // x22
  void *v19; // x0

  v3 = a1 + 1;
  if ( a1[2] )
  {
    v4 = *a2;
    v5 = (_QWORD *)a1[2];
    v6 = a1 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v5[4];
        if ( v7 >= v4 )
          break;
        v5 = (_QWORD *)v5[3];
        if ( !v5 )
          goto LABEL_8;
      }
      v8 = (_QWORD *)v5[2];
      if ( v4 >= v7 )
        break;
      v6 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v8 )
      {
LABEL_8:
        v5 = v6;
        goto LABEL_25;
      }
    }
    v9 = (_QWORD *)v5[3];
    if ( v8 )
    {
      do
      {
        v10 = v8[4];
        v11 = v10 >= v4;
        if ( v10 >= v4 )
          v12 = v8 + 2;
        else
          v12 = v8 + 3;
        if ( v11 )
          v5 = v8;
        v8 = (_QWORD *)*v12;
      }
      while ( *v12 );
    }
    if ( v9 )
    {
      do
      {
        v13 = v9[4];
        v14 = v4 >= v13;
        if ( v4 >= v13 )
          v15 = v9 + 3;
        else
          v15 = v9 + 2;
        if ( !v14 )
          v6 = v9;
        v9 = (_QWORD *)*v15;
      }
      while ( *v15 );
    }
  }
  else
  {
    v6 = a1 + 1;
    v5 = a1 + 1;
  }
LABEL_25:
  v16 = a1[5];
  if ( v3 == v6 && (_QWORD *)a1[3] == v5 )
  {
    std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase();
    v17 = 0;
    a1[2] = 0;
    a1[3] = v3;
    a1[4] = v3;
    a1[5] = 0;
  }
  else if ( v5 == v6 )
  {
    v17 = a1[5];
  }
  else
  {
    do
    {
      v18 = sub_54C6A0(v5);
      v19 = (void *)sub_54CA60(v5, v3);
      operator delete(v19);
      v5 = (_QWORD *)v18;
      v17 = a1[5] - 1LL;
      a1[5] = v17;
    }
    while ( (_QWORD *)v18 != v6 );
  }
  return v16 - v17;
}

