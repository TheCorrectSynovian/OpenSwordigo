/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CAB10
 * Mangled: _ZN5Caver19WeaponGlowComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::WeaponGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F71E0  Caver::WeaponGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002CA9B4  Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F4400  Caver::GlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71E0  Caver::WeaponGlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 177
 *   insn=0x00000000002CAB28 string=0x00000000002CAB2C "V"
 *   insn=0x00000000002CAB38 string=0x00000000002CAB3C "1"
 *   insn=0x00000000002CAB3C string=0x00000000001F4400 "P'"
 *   insn=0x00000000002CAB40 string=0x0000000000583F83 "color"
 *   insn=0x00000000002CAB68 string=0x00000000002CAB6C "o~\n"
 *   insn=0x00000000002CAB70 string=0x00000000002CAB74 "yG"
 *   insn=0x00000000002CAB7C string=0x00000000002CAB80 "t"
 *   insn=0x00000000002CAB90 string=0x00000000002CAB94 ""
 *   insn=0x00000000002CAB98 string=0x00000000002CAB9C "c~\n"
 *   insn=0x00000000002CABA0 string=0x00000000002CABA4 "\t\t@"
 *   insn=0x00000000002CABA8 string=0x00000000002CABAC ""
 *   insn=0x00000000002CABB0 string=0x00000000002CABB4 "h"
 *   insn=0x00000000002CABB4 string=0x00000000002CABB8 ""
 *   insn=0x00000000002CABB8 string=0x00000000002CABBC "h"
 *   insn=0x00000000002CABCC string=0x00000000002CABD0 "D"
 *   insn=0x00000000002CABD0 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002CABFC string=0x000000000058A2C0 "particleColor"
 *   insn=0x00000000002CAC24 string=0x00000000002CAC28 "@~\n"
 *   insn=0x00000000002CAC30 string=0x00000000002CAC34 "t"
 *   insn=0x00000000002CAC44 string=0x00000000002CAC48 ""
 *   insn=0x00000000002CAC4C string=0x00000000002CAC50 "6~\n"
 *   insn=0x00000000002CAC50 string=0x00000000002CAC54 "C"
 *   insn=0x00000000002CAC54 string=0x00000000002CAC58 "\t\t@"
 *   insn=0x00000000002CAC5C string=0x00000000002CAC60 ""
 *   insn=0x00000000002CAC64 string=0x00000000002CAC68 "h"
 *   insn=0x00000000002CAC68 string=0x00000000002CAC6C ""
 *   insn=0x00000000002CAC6C string=0x00000000002CAC70 "h"
 *   insn=0x00000000002CACA8 string=0x000000000058A0F3 "width"
 *   insn=0x00000000002CACE4 string=0x00000000002CACE8 "t"
 *   insn=0x00000000002CACF8 string=0x00000000002CACFC ""
 *   insn=0x00000000002CAD00 string=0x00000000002CAD04 "\t~\n"
 *   insn=0x00000000002CAD04 string=0x00000000002CAD08 "C"
 *   insn=0x00000000002CAD08 string=0x00000000002CAD0C "\t\t@"
 *   insn=0x00000000002CAD10 string=0x00000000002CAD14 ""
 *   insn=0x00000000002CAD18 string=0x00000000002CAD1C "h"
 *   insn=0x00000000002CAD1C string=0x00000000002CAD20 ""
 *   insn=0x00000000002CAD20 string=0x00000000002CAD24 "h"
 *   insn=0x00000000002CAD54 string=0x00000000002CAD58 "!"
 *   insn=0x00000000002CAD88 string=0x00000000002CAD8C ")=G"
 *   insn=0x00000000002CAD8C string=0x00000000002CAD90 "!"
 *   insn=0x00000000002CAD90 string=0x00000000002CAD94 "i"
 *   insn=0x00000000002CAD94 string=0x00000000002CAD98 "\t"
 *   insn=0x00000000002CAD94 string=0x00000000002CAE60 "\t"
 *   insn=0x00000000002CAD98 string=0x00000000002CAD9C "*"
 *   insn=0x00000000002CAD9C string=0x00000000002CADA0 "\n"
 *   insn=0x00000000002CADA4 string=0x00000000002CADA8 "1"
 *   insn=0x00000000002CADA8 string=0x00000000002CAE6C "?"
 *   insn=0x00000000002CADAC string=0x00000000002CADB0 ")=G"
 *   insn=0x00000000002CADB0 string=0x00000000002CADB4 "!"
 *   insn=0x00000000002CADB4 string=0x00000000002CADB8 "I"
 *   insn=0x00000000002CADB8 string=0x00000000002CADBC "\t"
 *   insn=0x00000000002CADB8 string=0x00000000002CAE80 "\t"
 *   insn=0x00000000002CADBC string=0x00000000002CADC0 "*"
 *   insn=0x00000000002CADC0 string=0x00000000002CADC4 "\n"
 *   insn=0x00000000002CADC8 string=0x00000000002CADCC "0"
 *   insn=0x00000000002CADCC string=0x00000000002CAE8C "?"
 *   insn=0x00000000002CADD0 string=0x00000000002CADD4 ")=G"
 *   insn=0x00000000002CADD4 string=0x00000000002CADD8 "!"
 *   insn=0x00000000002CADD8 string=0x00000000002CADDC ")"
 *   insn=0x00000000002CADDC string=0x00000000002CADE0 "\t"
 *   insn=0x00000000002CADDC string=0x00000000002CAEA0 "\t"
 *   insn=0x00000000002CADE0 string=0x00000000002CADE4 "*"
 *   insn=0x00000000002CADE4 string=0x00000000002CADE8 "\n"
 *   insn=0x00000000002CADEC string=0x00000000002CADF0 "/"
 *   insn=0x00000000002CADF0 string=0x00000000002CAEAC "?"
 *   insn=0x00000000002CADF4 string=0x00000000002CADF8 ")=G"
 *   insn=0x00000000002CADF8 string=0x00000000002CADFC "!"
 *   insn=0x00000000002CADFC string=0x00000000002CAE00 "\t"
 *   insn=0x00000000002CAE00 string=0x00000000002CAE04 "\t"
 *   insn=0x00000000002CAE00 string=0x00000000002CAEC0 "\t"
 *   insn=0x00000000002CAE04 string=0x00000000002CAE08 "*"
 *   insn=0x00000000002CAE08 string=0x00000000002CAE0C "\n"
 *   insn=0x00000000002CAE10 string=0x00000000002CAE14 "."
 *   insn=0x00000000002CAE14 string=0x00000000002CAECC "?"
 *   insn=0x00000000002CAE18 string=0x00000000002CAE1C ")=G"
 *   insn=0x00000000002CAE1C string=0x00000000002CAE20 "!"
 *   insn=0x00000000002CAE24 string=0x00000000002CAE28 "\t"
 *   insn=0x00000000002CAE24 string=0x00000000002CAEE0 "\t"
 *   insn=0x00000000002CAE28 string=0x00000000002CAE2C "*"
 *   insn=0x00000000002CAE2C string=0x00000000002CAE30 "\n"
 *   insn=0x00000000002CAE34 string=0x00000000002CAE38 "-"
 *   insn=0x00000000002CAE38 string=0x00000000002CAEEC "?"
 *   insn=0x00000000002CAE3C string=0x00000000002CAE40 ")=G"
 *   insn=0x00000000002CAE40 string=0x00000000002CAE44 "!"
 *   insn=0x00000000002CAE48 string=0x00000000002CAE4C "\t"
 *   insn=0x00000000002CAE48 string=0x00000000002CAF00 "\t"
 *   insn=0x00000000002CAE4C string=0x00000000002CAE50 "*"
 *   insn=0x00000000002CAE50 string=0x00000000002CAE54 "\n"
 *   insn=0x00000000002CAE58 string=0x00000000002CAE5C ","
 *   insn=0x00000000002CAE5C string=0x00000000002CAF0C "?"
 *   insn=0x00000000002CAE60 string=0x00000000002CAE64 "*"
 *   insn=0x00000000002CAE64 string=0x00000000002CAE68 "\n"
 *   insn=0x00000000002CAE74 string=0x00000000002CAE78 "K}\n"
 *   insn=0x00000000002CAE78 string=0x00000000002CAE7C "\"
 *   insn=0x00000000002CAE80 string=0x00000000002CAE84 "*"
 *   insn=0x00000000002CAE84 string=0x00000000002CAE88 "\n"
 *   insn=0x00000000002CAE8C string=0x00000000002CAE90 "l"
 *   insn=0x00000000002CAE94 string=0x00000000002CAE98 "C}\n"
 *   insn=0x00000000002CAE98 string=0x00000000002CAE9C "X"
 *   insn=0x00000000002CAEA0 string=0x00000000002CAEA4 "*"
 *   insn=0x00000000002CAEA4 string=0x00000000002CAEA8 "\n"
 *   insn=0x00000000002CAEAC string=0x00000000002CAEB0 "L"
 *   insn=0x00000000002CAEB4 string=0x00000000002CAEB8 ";}\n"
 *   insn=0x00000000002CAEB8 string=0x00000000002CAEBC "w"
 *   insn=0x00000000002CAEC0 string=0x00000000002CAEC4 "*"
 *   insn=0x00000000002CAEC4 string=0x00000000002CAEC8 "\n"
 *   insn=0x00000000002CAED4 string=0x00000000002CAED8 "3}\n"
 *   insn=0x00000000002CAED8 string=0x00000000002CAEDC "s"
 *   insn=0x00000000002CAEE0 string=0x00000000002CAEE4 "*"
 *   insn=0x00000000002CAEE4 string=0x00000000002CAEE8 "\n"
 *   insn=0x00000000002CAEF4 string=0x00000000002CAEF8 "+}\n"
 *   insn=0x00000000002CAF00 string=0x00000000002CAF04 "*"
 *   insn=0x00000000002CAF04 string=0x00000000002CAF08 "\n"
 *   insn=0x00000000002CAF0C string=0x00000000002CAF10 "l"
 *   insn=0x00000000002CAF14 string=0x00000000002CAF18 "#}\n"
 *   insn=0x00000000002CAF20 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CAF28 string=0x00000000002CAF2C "(a"
 *   insn=0x00000000002CAF38 string=0x00000000002CAF3C "J=G"
 *   insn=0x00000000002CAF3C string=0x00000000002CAF40 ")!"
 *   insn=0x00000000002CAF44 string=0x00000000002CAF48 "*"
 *   insn=0x00000000002CAF44 string=0x00000000002CAF5C "*"
 *   insn=0x00000000002CAF48 string=0x00000000002CAF4C "K"
 *   insn=0x00000000002CAF4C string=0x00000000002CAF50 "+"
 *   insn=0x00000000002CAF58 string=0x00000000002CAF68 "_"
 *   insn=0x00000000002CAF5C string=0x00000000002CAF60 "K"
 *   insn=0x00000000002CAF60 string=0x00000000002CAF64 "+"
 *   insn=0x00000000002CAF74 string=0x00000000002CAF78 "}\n"
 *   insn=0x00000000002CAF94 string=0x00000000002CAF98 ")=G"
 *   insn=0x00000000002CAF98 string=0x00000000002CAF9C "!"
 *   insn=0x00000000002CAF9C string=0x00000000002CAFA0 "i"
 *   insn=0x00000000002CAFA0 string=0x00000000002CAFA4 "\t"
 *   insn=0x00000000002CAFA0 string=0x00000000002CB10C "\t"
 *   insn=0x00000000002CAFA4 string=0x00000000002CAFA8 "*"
 *   insn=0x00000000002CAFA8 string=0x00000000002CAFAC "\n"
 *   insn=0x00000000002CAFB0 string=0x00000000002CAFB4 "P"
 *   insn=0x00000000002CAFB4 string=0x00000000002CB0F4 "?"
 *   insn=0x00000000002CAFC0 string=0x00000000002CAFC4 "(a"
 *   insn=0x00000000002CAFD0 string=0x00000000002CAFD4 "J=G"
 *   insn=0x00000000002CAFD4 string=0x00000000002CAFD8 ")!"
 *   insn=0x00000000002CAFDC string=0x00000000002CAFE0 "*"
 *   insn=0x00000000002CAFDC string=0x00000000002CAFF4 "*"
 *   insn=0x00000000002CAFE0 string=0x00000000002CAFE4 "K"
 *   insn=0x00000000002CAFE4 string=0x00000000002CAFE8 "+"
 *   insn=0x00000000002CAFF0 string=0x00000000002CB000 "_"
 *   insn=0x00000000002CAFF4 string=0x00000000002CAFF8 "K"
 *   insn=0x00000000002CAFF8 string=0x00000000002CAFFC "+"
 *   insn=0x00000000002CB02C string=0x00000000002CB030 ")=G"
 *   insn=0x00000000002CB030 string=0x00000000002CB034 "!"
 *   insn=0x00000000002CB038 string=0x00000000002CB03C "\t"
 *   insn=0x00000000002CB03C string=0x00000000002CB040 "*"
 *   insn=0x00000000002CB040 string=0x00000000002CB044 "\n"
 *   insn=0x00000000002CB048 string=0x00000000002CB04C "*"
 *   insn=0x00000000002CB058 string=0x00000000002CB05C "J"
 *   insn=0x00000000002CB060 string=0x00000000002CB064 "(a"
 *   insn=0x00000000002CB070 string=0x00000000002CB074 "J=G"
 *   insn=0x00000000002CB074 string=0x00000000002CB078 ")!"
 *   insn=0x00000000002CB07C string=0x00000000002CB080 "*"
 *   insn=0x00000000002CB07C string=0x00000000002CB094 "*"
 *   insn=0x00000000002CB080 string=0x00000000002CB084 "K"
 *   insn=0x00000000002CB084 string=0x00000000002CB088 "+"
 *   insn=0x00000000002CB090 string=0x00000000002CB0A0 "_"
 *   insn=0x00000000002CB094 string=0x00000000002CB098 "K"
 *   insn=0x00000000002CB098 string=0x00000000002CB09C "+"
 *   insn=0x00000000002CB0C0 string=0x00000000002CB0C4 ")"
 *   insn=0x00000000002CB0D4 string=0x00000000002CB0D8 ")=G"
 *   insn=0x00000000002CB0D8 string=0x00000000002CB0DC "!"
 *   insn=0x00000000002CB0DC string=0x00000000002CB0E0 "i"
 *   insn=0x00000000002CB0E0 string=0x00000000002CB0E4 "\t"
 *   insn=0x00000000002CB0E4 string=0x00000000002CB0E8 "*"
 *   insn=0x00000000002CB0E8 string=0x00000000002CB0EC "\n"
 *   insn=0x00000000002CB0F4 string=0x00000000002CB0F8 "l"
 *   insn=0x00000000002CB10C string=0x00000000002CB110 "*"
 *   insn=0x00000000002CB110 string=0x00000000002CB114 "\n"
 *   insn=0x00000000002CB114 string=0x00000000002CB118 "?"
 *   insn=0x00000000002CB118 string=0x00000000002CB11C ""
 *   insn=0x00000000002CB128 string=0x00000000002CB12C "-"
 *   insn=0x00000000002CB12C string=0x00000000001F71E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  __int64 v24; // [xsp+8h] [xbp-78h] BYREF
  int v25; // [xsp+18h] [xbp-68h]
  __int64 v26; // [xsp+20h] [xbp-60h] BYREF
  __int64 v27; // [xsp+28h] [xbp-58h]
  int v28; // [xsp+30h] [xbp-50h]
  __int64 v29; // [xsp+38h] [xbp-48h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::GetBindings();
  sub_566BB8((int)&v24, "color");
  v25 = 101;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x700000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v25;
    sub_56A528(v3 + 8, &v26);
    *(_DWORD *)(v3 + 24) = v28;
    *(_QWORD *)(v3 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v24, "particleColor");
  v25 = 102;
  sub_56A528(&v26, &v24);
  v27 = 0x700000001LL;
  v28 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v25;
    sub_56A528(v6 + 8, &v26);
    *(_DWORD *)(v6 + 24) = v28;
    *(_QWORD *)(v6 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v24 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v24, "width");
  v25 = 103;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x500000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v25;
    sub_56A528(v9 + 8, &v26);
    *(_DWORD *)(v9 + 24) = v28;
    *(_QWORD *)(v9 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v26 - 8);
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
      operator delete(v10);
  }
  v11 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v11);
  }
}

