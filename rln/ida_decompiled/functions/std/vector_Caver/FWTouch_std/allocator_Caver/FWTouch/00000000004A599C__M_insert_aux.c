/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A599C
 * Mangled: _ZNSt6vectorIN5Caver7FWTouchESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000200520  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5D20  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C60  Caver::FWTouch::operator=(Caver::FWTouch const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 75
 *   insn=0x00000000004A59B4 string=0x00000000004A59B8 "X"
 *   insn=0x00000000004A59B8 string=0x00000000004A59BC ""
 *   insn=0x00000000004A59E0 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000004A59EC string=0x00000000004A59F0 ""
 *   insn=0x00000000004A59FC string=0x00000000004A5A00 "\tA"
 *   insn=0x00000000004A5A00 string=0x00000000004A5A04 ")"
 *   insn=0x00000000004A5A04 string=0x00000000004A5A08 "?"
 *   insn=0x00000000004A5A10 string=0x00000000004A5A18 ")}"
 *   insn=0x00000000004A5A18 string=0x00000000004A5A1C ")"
 *   insn=0x00000000004A5A1C string=0x00000000004A5A20 "5"
 *   insn=0x00000000004A5A24 string=0x00000000004A5A28 "`"
 *   insn=0x00000000004A5A30 string=0x00000000001F6C60 "0'"
 *   insn=0x00000000004A5A38 string=0x00000000004A5A3C "s"
 *   insn=0x00000000004A5A3C string=0x00000000004A5A40 "L"
 *   insn=0x00000000004A5A4C string=0x00000000004A5A50 ">"
 *   insn=0x00000000004A5A50 string=0x00000000004A5B48 ""
 *   insn=0x00000000004A5A60 string=0x00000000004A5A64 "\t"
 *   insn=0x00000000004A5A64 string=0x00000000004A5A68 ")"
 *   insn=0x00000000004A5A68 string=0x00000000004A5A6C ")}"
 *   insn=0x00000000004A5A6C string=0x00000000004A5A70 "*"
 *   insn=0x00000000004A5A74 string=0x00000000004A5A78 "I"
 *   insn=0x00000000004A5A7C string=0x00000000004A5A80 "?"
 *   insn=0x00000000004A5A84 string=0x00000000004A5A88 "J"
 *   insn=0x00000000004A5A88 string=0x00000000004A5A8C "_"
 *   insn=0x00000000004A5A94 string=0x00000000004A5A98 "?"
 *   insn=0x00000000004A5A9C string=0x00000000004A5AA0 "("
 *   insn=0x00000000004A5AA8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A5AB8 string=0x00000000004A5ABC ""
 *   insn=0x00000000004A5ABC string=0x00000000004A5AC0 "}"
 *   insn=0x00000000004A5AC0 string=0x00000000004A5AC4 "\t"
 *   insn=0x00000000004A5ADC string=0x00000000004A5AE0 " "
 *   insn=0x00000000004A5AFC string=0x00000000004A5B00 "A"
 *   insn=0x00000000004A5B2C string=0x00000000004A5B30 "@"
 *   insn=0x00000000004A5B30 string=0x00000000004A5B38 ""
 *   insn=0x00000000004A5B34 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A5B38 string=0x00000000004A5B3C "(O"
 *   insn=0x00000000004A5B74 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A5B7C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004A5B94 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004A5BA8 string=0x00000000004A5BAC "y^"
 *   insn=0x00000000004A5BB4 string=0x00000000004A5BB8 "s"
 *   insn=0x00000000004A5BCC string=0x00000000004A5BD0 "p^"
 *   insn=0x00000000004A5BD4 string=0x00000000004A5BD8 ";o"
 *   insn=0x00000000004A5BF8 string=0x00000000004A5BFC "a\n@"
 *   insn=0x00000000004A5BFC string=0x00000000004A5C00 "t""
 *   insn=0x00000000004A5C00 string=0x00000000004A5C04 "a"
 *   insn=0x00000000004A5C04 string=0x00000000004A5C08 ""
 *   insn=0x00000000004A5C14 string=0x00000000004A5C18 "?"
 *   insn=0x00000000004A5C24 string=0x00000000004A5C28 "j"
 *   insn=0x00000000004A5C28 string=0x00000000004A5C2C ""
 *   insn=0x00000000004A5C34 string=0x00000000004A5C38 """
 *   insn=0x00000000004A5C4C string=0x00000000004A5CA8 "x"
 *   insn=0x00000000004A5C5C string=0x00000000004A5C60 "*"
 *   insn=0x00000000004A5C60 string=0x00000000004A5C64 "K!@"
 *   insn=0x00000000004A5C60 string=0x00000000004A5C84 ")"
 *   insn=0x00000000004A5C64 string=0x00000000004A5C68 "La"
 *   insn=0x00000000004A5C68 string=0x00000000004A5C6C "MA"
 *   insn=0x00000000004A5C78 string=0x00000000004A5C7C "j"
 *   insn=0x00000000004A5C7C string=0x00000000004A5C80 "*"
 *   insn=0x00000000004A5C84 string=0x00000000004A5C88 "*!@"
 *   insn=0x00000000004A5C88 string=0x00000000004A5C8C "+a"
 *   insn=0x00000000004A5C8C string=0x00000000004A5C90 ",A"
 *   insn=0x00000000004A5C98 string=0x00000000004A5C9C "71"
 *   insn=0x00000000004A5C9C string=0x00000000004A5CA0 "I"
 *   insn=0x00000000004A5CA0 string=0x00000000004A5CA4 ")"
 *   insn=0x00000000004A5CAC string=0x00000000004A5CB0 "A"
 *   insn=0x00000000004A5CB0 string=0x00000000004A5CB4 "h"
 *   insn=0x00000000004A5CC4 string=0x00000000001F5D20 "P'"
 *   insn=0x00000000004A5CCC string=0x00000000004A5CD0 "t~"
 *   insn=0x00000000004A5CE0 string=0x00000000004A5CE4 "o"
 *   insn=0x00000000004A5CF0 string=0x00000000004A5CF4 "["
 *   insn=0x00000000004A5CF4 string=0x00000000004A5CF8 "nE"
 *   insn=0x00000000004A5CF8 string=0x00000000004A5CFC "h"
 *   insn=0x00000000004A5D04 string=0x00000000004A5D08 ""
 *   insn=0x00000000004A5D08 string=0x00000000004A5D0C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::FWTouch>::_M_insert_aux(
        __int64 a1,
        const Caver::FWTouch *a2,
        const Caver::FWTouch *a3)
{
  const Caver::FWTouch *v5; // x20
  Caver::FWTouch *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  signed __int64 v9; // x21
  __int64 v10; // x19
  Caver::FWTouch *v11; // x23
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x9
  _BOOL4 v14; // w10
  unsigned __int64 v15; // x25
  __int64 v16; // x19
  const Caver::FWTouch *v17; // x23
  Caver::FWTouch *v18; // x22
  const Caver::FWTouch *v19; // x23
  _QWORD v20[6]; // [xsp+40h] [xbp-70h] BYREF

  v5 = a2;
  v20[5] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(Caver::FWTouch **)(a1 + 8);
  if ( v6 == *(Caver::FWTouch **)(a1 + 16) )
  {
    v11 = *(Caver::FWTouch **)a1;
    if ( v6 == *(Caver::FWTouch **)a1 )
      v12 = 1;
    else
      v12 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v6 - *(_QWORD *)a1) >> 3);
    v13 = v12 - 0x3333333333333333LL * (((__int64)v6 - *(_QWORD *)a1) >> 3);
    v14 = __CFADD__(v12, 0xCCCCCCCCCCCCCCCDLL * (((__int64)v6 - *(_QWORD *)a1) >> 3));
    if ( v14 || v13 > 0x666666666666666LL )
      v15 = 0x666666666666666LL;
    else
      v15 = v13;
    if ( v15 )
    {
      if ( v15 > 0x666666666666666LL )
        sub_565294(v6, a2, a3);
      v16 = operator new(40 * v15);
    }
    else
    {
      v16 = 0;
    }
    Caver::FWTouch::FWTouch((Caver::FWTouch *)(v16 + 8 * ((v5 - v11) >> 3)), a3);
    v17 = *(const Caver::FWTouch **)a1;
    v18 = (Caver::FWTouch *)v16;
    if ( *(const Caver::FWTouch **)a1 != v5 )
    {
      v18 = (Caver::FWTouch *)v16;
      do
      {
        Caver::FWTouch::FWTouch(v18, v17);
        v17 = (const Caver::FWTouch *)((char *)v17 + 40);
        v18 = (Caver::FWTouch *)((char *)v18 + 40);
      }
      while ( v5 != v17 );
    }
    v19 = *(const Caver::FWTouch **)(a1 + 8);
    while ( 1 )
    {
      v18 = (Caver::FWTouch *)((char *)v18 + 40);
      if ( v19 == v5 )
        break;
      Caver::FWTouch::FWTouch(v18, v5);
      v5 = (const Caver::FWTouch *)((char *)v5 + 40);
    }
    if ( *(_QWORD *)a1 )
      operator delete(*(void **)a1);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 16) = v16 + 40 * v15;
  }
  else
  {
    Caver::FWTouch::FWTouch(v6, (Caver::FWTouch *)((char *)v6 - 40));
    *(_QWORD *)(a1 + 8) += 40LL;
    Caver::FWTouch::FWTouch((Caver::FWTouch *)v20, a3);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = v7 - 80 - (_QWORD)v5;
    if ( v8 >= 1 )
    {
      v9 = v8 / 0x28uLL + 1;
      v10 = v7 - 120;
      do
      {
        Caver::FWTouch::operator=();
        --v9;
        v10 -= 40;
      }
      while ( v9 > 1 );
    }
    Caver::FWTouch::operator=();
  }
}

