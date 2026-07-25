/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD8E8
 * Mangled: _ZN5Caver21PortalEffectComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PortalEffectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001FFF00  Caver::PortalEffectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F4400  Caver::GlowComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FFF00  Caver::PortalEffectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x00000000002AD8FC string=0x00000000002AD900 "V"
 *   insn=0x00000000002AD910 string=0x00000000001F4400 "P'"
 *   insn=0x00000000002AD914 string=0x0000000000583F83 "color"
 *   insn=0x00000000002AD950 string=0x00000000002AD954 "t"
 *   insn=0x00000000002AD964 string=0x00000000002AD968 ""
 *   insn=0x00000000002AD974 string=0x00000000002AD978 "\t\t@"
 *   insn=0x00000000002AD97C string=0x00000000002AD980 ""
 *   insn=0x00000000002AD984 string=0x00000000002AD988 "h"
 *   insn=0x00000000002AD988 string=0x00000000002AD98C ""
 *   insn=0x00000000002AD98C string=0x00000000002AD990 "h"
 *   insn=0x00000000002AD9A4 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002AD9C8 string=0x00000000002AD9CC "!"
 *   insn=0x00000000002AD9D0 string=0x0000000000588B61 "speed"
 *   insn=0x00000000002AD9DC string=0x00000000002AD9E0 "v"
 *   insn=0x00000000002ADA0C string=0x00000000002ADA10 "t"
 *   insn=0x00000000002ADA20 string=0x00000000002ADA24 ""
 *   insn=0x00000000002ADA2C string=0x00000000002ADA30 "C"
 *   insn=0x00000000002ADA30 string=0x00000000002ADA34 "\t\t@"
 *   insn=0x00000000002ADA38 string=0x00000000002ADA3C ""
 *   insn=0x00000000002ADA40 string=0x00000000002ADA44 "h"
 *   insn=0x00000000002ADA44 string=0x00000000002ADA48 ""
 *   insn=0x00000000002ADA48 string=0x00000000002ADA4C "h"
 *   insn=0x00000000002ADA6C string=0x00000000002ADA70 "!"
 *   insn=0x00000000002ADA8C string=0x00000000002ADA90 "a\t"
 *   insn=0x00000000002ADAAC string=0x00000000002ADAB0 ")=G"
 *   insn=0x00000000002ADAB0 string=0x00000000002ADAB4 "!"
 *   insn=0x00000000002ADAB4 string=0x00000000002ADAB8 ")"
 *   insn=0x00000000002ADAB8 string=0x00000000002ADABC "\t"
 *   insn=0x00000000002ADAB8 string=0x00000000002ADB3C "\t"
 *   insn=0x00000000002ADABC string=0x00000000002ADAC0 "*"
 *   insn=0x00000000002ADAC0 string=0x00000000002ADAC4 "\n"
 *   insn=0x00000000002ADACC string=0x00000000002ADB48 "?"
 *   insn=0x00000000002ADAD0 string=0x00000000002ADAD4 ")=G"
 *   insn=0x00000000002ADAD4 string=0x00000000002ADAD8 "!"
 *   insn=0x00000000002ADAD8 string=0x00000000002ADADC "\t"
 *   insn=0x00000000002ADADC string=0x00000000002ADAE0 "\t"
 *   insn=0x00000000002ADADC string=0x00000000002ADB5C "\t"
 *   insn=0x00000000002ADAE0 string=0x00000000002ADAE4 "*"
 *   insn=0x00000000002ADAE4 string=0x00000000002ADAE8 "\n"
 *   insn=0x00000000002ADAF0 string=0x00000000002ADB68 "?"
 *   insn=0x00000000002ADAF4 string=0x00000000002ADAF8 ")=G"
 *   insn=0x00000000002ADAF8 string=0x00000000002ADAFC "!"
 *   insn=0x00000000002ADB00 string=0x00000000002ADB04 "\t"
 *   insn=0x00000000002ADB00 string=0x00000000002ADB7C "\t"
 *   insn=0x00000000002ADB04 string=0x00000000002ADB08 "*"
 *   insn=0x00000000002ADB08 string=0x00000000002ADB0C "\n"
 *   insn=0x00000000002ADB14 string=0x00000000002ADB88 "?"
 *   insn=0x00000000002ADB18 string=0x00000000002ADB1C ")=G"
 *   insn=0x00000000002ADB1C string=0x00000000002ADB20 "!"
 *   insn=0x00000000002ADB24 string=0x00000000002ADB28 "\t"
 *   insn=0x00000000002ADB24 string=0x00000000002ADB9C "\t"
 *   insn=0x00000000002ADB28 string=0x00000000002ADB2C "*"
 *   insn=0x00000000002ADB2C string=0x00000000002ADB30 "\n"
 *   insn=0x00000000002ADB38 string=0x00000000002ADBA8 "?"
 *   insn=0x00000000002ADB3C string=0x00000000002ADB40 "*"
 *   insn=0x00000000002ADB40 string=0x00000000002ADB44 "\n"
 *   insn=0x00000000002ADB5C string=0x00000000002ADB60 "*"
 *   insn=0x00000000002ADB60 string=0x00000000002ADB64 "\n"
 *   insn=0x00000000002ADB68 string=0x00000000002ADB6C ","
 *   insn=0x00000000002ADB7C string=0x00000000002ADB80 "*"
 *   insn=0x00000000002ADB80 string=0x00000000002ADB84 "\n"
 *   insn=0x00000000002ADB88 string=0x00000000002ADB8C "L"
 *   insn=0x00000000002ADB9C string=0x00000000002ADBA0 "*"
 *   insn=0x00000000002ADBA0 string=0x00000000002ADBA4 "\n"
 *   insn=0x00000000002ADBBC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002ADBC4 string=0x00000000002ADBC8 "(a"
 *   insn=0x00000000002ADBD4 string=0x00000000002ADBD8 "J=G"
 *   insn=0x00000000002ADBD8 string=0x00000000002ADBDC ")!"
 *   insn=0x00000000002ADBE0 string=0x00000000002ADBE4 "*"
 *   insn=0x00000000002ADBE0 string=0x00000000002ADBF8 "*"
 *   insn=0x00000000002ADBE4 string=0x00000000002ADBE8 "K"
 *   insn=0x00000000002ADBE8 string=0x00000000002ADBEC "+"
 *   insn=0x00000000002ADBF4 string=0x00000000002ADC04 "_"
 *   insn=0x00000000002ADBF8 string=0x00000000002ADBFC "K"
 *   insn=0x00000000002ADBFC string=0x00000000002ADC00 "+"
 *   insn=0x00000000002ADC30 string=0x00000000002ADC34 ")=G"
 *   insn=0x00000000002ADC34 string=0x00000000002ADC38 "!"
 *   insn=0x00000000002ADC3C string=0x00000000002ADC40 "\t"
 *   insn=0x00000000002ADC3C string=0x00000000002ADD10 "\t"
 *   insn=0x00000000002ADC40 string=0x00000000002ADC44 "*"
 *   insn=0x00000000002ADC44 string=0x00000000002ADC48 "\n"
 *   insn=0x00000000002ADC4C string=0x00000000002ADC50 "*"
 *   insn=0x00000000002ADC50 string=0x00000000002ADCF8 "?"
 *   insn=0x00000000002ADC5C string=0x00000000002ADC60 "J"
 *   insn=0x00000000002ADC64 string=0x00000000002ADC68 "(a"
 *   insn=0x00000000002ADC74 string=0x00000000002ADC78 "J=G"
 *   insn=0x00000000002ADC78 string=0x00000000002ADC7C ")!"
 *   insn=0x00000000002ADC80 string=0x00000000002ADC84 "*"
 *   insn=0x00000000002ADC80 string=0x00000000002ADC98 "*"
 *   insn=0x00000000002ADC84 string=0x00000000002ADC88 "K"
 *   insn=0x00000000002ADC88 string=0x00000000002ADC8C "+"
 *   insn=0x00000000002ADC94 string=0x00000000002ADCA4 "_"
 *   insn=0x00000000002ADC98 string=0x00000000002ADC9C "K"
 *   insn=0x00000000002ADC9C string=0x00000000002ADCA0 "+"
 *   insn=0x00000000002ADCC4 string=0x00000000002ADCC8 ")"
 *   insn=0x00000000002ADCD8 string=0x00000000002ADCDC ")=G"
 *   insn=0x00000000002ADCDC string=0x00000000002ADCE0 "!"
 *   insn=0x00000000002ADCE0 string=0x00000000002ADCE4 "i"
 *   insn=0x00000000002ADCE4 string=0x00000000002ADCE8 "\t"
 *   insn=0x00000000002ADCE8 string=0x00000000002ADCEC "*"
 *   insn=0x00000000002ADCEC string=0x00000000002ADCF0 "\n"
 *   insn=0x00000000002ADCF8 string=0x00000000002ADCFC "l"
 *   insn=0x00000000002ADD10 string=0x00000000002ADD14 "*"
 *   insn=0x00000000002ADD14 string=0x00000000002ADD18 "\n"
 *   insn=0x00000000002ADD18 string=0x00000000002ADD1C "?"
 *   insn=0x00000000002ADD1C string=0x00000000002ADD20 ""
 *   insn=0x00000000002ADD2C string=0x00000000002ADD30 "tH"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalEffectComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+8h] [xbp-68h] BYREF
  int v18; // [xsp+18h] [xbp-58h]
  __int64 v19; // [xsp+20h] [xbp-50h] BYREF
  __int64 v20; // [xsp+28h] [xbp-48h]
  int v21; // [xsp+30h] [xbp-40h]
  __int64 v22; // [xsp+38h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::GetBindings();
  sub_566BB8((int)&v17, "color");
  v18 = 102;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x700000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v18;
    sub_56A528(v3 + 8, &v19);
    *(_DWORD *)(v3 + 24) = v21;
    *(_QWORD *)(v3 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v17, "speed");
  v18 = 103;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x900000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v18;
    sub_56A528(v6 + 8, &v19);
    *(_DWORD *)(v6 + 24) = v21;
    *(_QWORD *)(v6 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v8);
  }
}

