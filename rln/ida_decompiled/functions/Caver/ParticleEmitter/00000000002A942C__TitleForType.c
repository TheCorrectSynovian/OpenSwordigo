/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A942C
 * Mangled: _ZN5Caver15ParticleEmitter12TitleForTypeENS0_4TypeE
 * Demangled: Caver::ParticleEmitter::TitleForType(Caver::ParticleEmitter::Type)
 *
 * Callers: 1
 *   0x00000000001F7900  Caver::ParticleEmitter::TitleForType(Caver::ParticleEmitter::Type)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002A99DC  `non-virtual thunk to'Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 165
 *   insn=0x00000000002A9440 string=0x00000000002A9444 "V"
 *   insn=0x00000000002A9458 string=0x0000000000583AEC "none"
 *   insn=0x00000000002A9474 string=0x0000000000588C49 "blast"
 *   insn=0x00000000002A9490 string=0x0000000000589852 "spark"
 *   insn=0x00000000002A94A8 string=0x000000000058A100 "trail"
 *   insn=0x00000000002A94C0 string=0x00000000002A94C4 "!"
 *   insn=0x00000000002A94C4 string=0x000000000058EABB "whoosh"
 *   insn=0x00000000002A94DC string=0x0000000000589858 "fountain"
 *   insn=0x00000000002A94F8 string=0x00000000002A94FC ""
 *   insn=0x00000000002A9504 string=0x00000000002A9508 "s"
 *   insn=0x00000000002A9530 string=0x00000000002A9534 "!"
 *   insn=0x00000000002A9550 string=0x00000000002A9554 "a"
 *   insn=0x00000000002A9590 string=0x00000000002A9594 ")=G"
 *   insn=0x00000000002A9594 string=0x00000000002A9598 "!"
 *   insn=0x00000000002A9598 string=0x00000000002A959C "i"
 *   insn=0x00000000002A959C string=0x00000000002A95A0 "\t"
 *   insn=0x00000000002A959C string=0x00000000002A9668 "\t"
 *   insn=0x00000000002A95A0 string=0x00000000002A95A4 "*"
 *   insn=0x00000000002A95A4 string=0x00000000002A95A8 "\n"
 *   insn=0x00000000002A95AC string=0x00000000002A95B0 "1"
 *   insn=0x00000000002A95B0 string=0x00000000002A9674 "?"
 *   insn=0x00000000002A95B4 string=0x00000000002A95B8 ")=G"
 *   insn=0x00000000002A95B8 string=0x00000000002A95BC "!"
 *   insn=0x00000000002A95BC string=0x00000000002A95C0 "I"
 *   insn=0x00000000002A95C0 string=0x00000000002A95C4 "\t"
 *   insn=0x00000000002A95C0 string=0x00000000002A9688 "\t"
 *   insn=0x00000000002A95C4 string=0x00000000002A95C8 "*"
 *   insn=0x00000000002A95C8 string=0x00000000002A95CC "\n"
 *   insn=0x00000000002A95D0 string=0x00000000002A95D4 "0"
 *   insn=0x00000000002A95D4 string=0x00000000002A9694 "?"
 *   insn=0x00000000002A95D8 string=0x00000000002A95DC ")=G"
 *   insn=0x00000000002A95DC string=0x00000000002A95E0 "!"
 *   insn=0x00000000002A95E0 string=0x00000000002A95E4 ")"
 *   insn=0x00000000002A95E4 string=0x00000000002A95E8 "\t"
 *   insn=0x00000000002A95E4 string=0x00000000002A96A8 "\t"
 *   insn=0x00000000002A95E8 string=0x00000000002A95EC "*"
 *   insn=0x00000000002A95EC string=0x00000000002A95F0 "\n"
 *   insn=0x00000000002A95F4 string=0x00000000002A95F8 "/"
 *   insn=0x00000000002A95F8 string=0x00000000002A96B4 "?"
 *   insn=0x00000000002A95FC string=0x00000000002A9600 ")=G"
 *   insn=0x00000000002A9600 string=0x00000000002A9604 "!"
 *   insn=0x00000000002A9604 string=0x00000000002A9608 "\t"
 *   insn=0x00000000002A9608 string=0x00000000002A960C "\t"
 *   insn=0x00000000002A9608 string=0x00000000002A96C8 "\t"
 *   insn=0x00000000002A960C string=0x00000000002A9610 "*"
 *   insn=0x00000000002A9610 string=0x00000000002A9614 "\n"
 *   insn=0x00000000002A9618 string=0x00000000002A961C "."
 *   insn=0x00000000002A961C string=0x00000000002A96D4 "?"
 *   insn=0x00000000002A9620 string=0x00000000002A9624 ")=G"
 *   insn=0x00000000002A9624 string=0x00000000002A9628 "!"
 *   insn=0x00000000002A962C string=0x00000000002A9630 "\t"
 *   insn=0x00000000002A962C string=0x00000000002A96E8 "\t"
 *   insn=0x00000000002A9630 string=0x00000000002A9634 "*"
 *   insn=0x00000000002A9634 string=0x00000000002A9638 "\n"
 *   insn=0x00000000002A963C string=0x00000000002A9640 "-"
 *   insn=0x00000000002A9640 string=0x00000000002A96F4 "?"
 *   insn=0x00000000002A9644 string=0x00000000002A9648 ")=G"
 *   insn=0x00000000002A9648 string=0x00000000002A964C "!"
 *   insn=0x00000000002A9650 string=0x00000000002A9654 "\t"
 *   insn=0x00000000002A9650 string=0x00000000002A9708 "\t"
 *   insn=0x00000000002A9654 string=0x00000000002A9658 "*"
 *   insn=0x00000000002A9658 string=0x00000000002A965C "\n"
 *   insn=0x00000000002A9660 string=0x00000000002A9664 ","
 *   insn=0x00000000002A9664 string=0x00000000002A9714 "?"
 *   insn=0x00000000002A9668 string=0x00000000002A966C "*"
 *   insn=0x00000000002A966C string=0x00000000002A9670 "\n"
 *   insn=0x00000000002A967C string=0x00000000002A9680 "I"
 *   insn=0x00000000002A9688 string=0x00000000002A968C "*"
 *   insn=0x00000000002A968C string=0x00000000002A9690 "\n"
 *   insn=0x00000000002A969C string=0x00000000002A96A0 "A"
 *   insn=0x00000000002A96A8 string=0x00000000002A96AC "*"
 *   insn=0x00000000002A96AC string=0x00000000002A96B0 "\n"
 *   insn=0x00000000002A96BC string=0x00000000002A96C0 "9"
 *   insn=0x00000000002A96C8 string=0x00000000002A96CC "*"
 *   insn=0x00000000002A96CC string=0x00000000002A96D0 "\n"
 *   insn=0x00000000002A96DC string=0x00000000002A96E0 "1"
 *   insn=0x00000000002A96E8 string=0x00000000002A96EC "*"
 *   insn=0x00000000002A96EC string=0x00000000002A96F0 "\n"
 *   insn=0x00000000002A96FC string=0x00000000002A9700 ")"
 *   insn=0x00000000002A9708 string=0x00000000002A970C "*"
 *   insn=0x00000000002A970C string=0x00000000002A9710 "\n"
 *   insn=0x00000000002A971C string=0x00000000002A9720 "!"
 *   insn=0x00000000002A9728 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A9738 string=0x00000000002A973C "(a"
 *   insn=0x00000000002A9740 string=0x00000000002A9744 "a"
 *   insn=0x00000000002A9770 string=0x00000000002A9774 "A"
 *   insn=0x00000000002A9798 string=0x00000000002A979C ")=G"
 *   insn=0x00000000002A979C string=0x00000000002A97A0 "!"
 *   insn=0x00000000002A97A0 string=0x00000000002A97A4 ")"
 *   insn=0x00000000002A97A4 string=0x00000000002A97A8 "\t"
 *   insn=0x00000000002A97A4 string=0x00000000002A9928 "\t"
 *   insn=0x00000000002A97A8 string=0x00000000002A97AC "*"
 *   insn=0x00000000002A97AC string=0x00000000002A97B0 "\n"
 *   insn=0x00000000002A97B4 string=0x00000000002A97B8 "?"
 *   insn=0x00000000002A97B8 string=0x00000000002A97BC "l"
 *   insn=0x00000000002A97C8 string=0x00000000002A97CC ">`"
 *   insn=0x00000000002A97D0 string=0x00000000002A97D4 "J=G"
 *   insn=0x00000000002A97D4 string=0x00000000002A97D8 ")!"
 *   insn=0x00000000002A97D8 string=0x00000000002A97DC "J"
 *   insn=0x00000000002A97DC string=0x00000000002A97E0 "*"
 *   insn=0x00000000002A97DC string=0x00000000002A9884 "*"
 *   insn=0x00000000002A97E0 string=0x00000000002A97E4 "K"
 *   insn=0x00000000002A97E4 string=0x00000000002A97E8 "+"
 *   insn=0x00000000002A97EC string=0x00000000002A97F0 "("
 *   insn=0x00000000002A97F0 string=0x00000000002A9890 "_"
 *   insn=0x00000000002A97F4 string=0x00000000002A97F8 ")=G"
 *   insn=0x00000000002A97F8 string=0x00000000002A97FC "!"
 *   insn=0x00000000002A97FC string=0x00000000002A9800 "I"
 *   insn=0x00000000002A9800 string=0x00000000002A9804 "\t"
 *   insn=0x00000000002A9800 string=0x00000000002A98A8 "\t"
 *   insn=0x00000000002A9804 string=0x00000000002A9808 "*"
 *   insn=0x00000000002A9808 string=0x00000000002A980C "\n"
 *   insn=0x00000000002A9810 string=0x00000000002A9814 "("
 *   insn=0x00000000002A9814 string=0x00000000002A98B4 "?"
 *   insn=0x00000000002A9818 string=0x00000000002A981C ")=G"
 *   insn=0x00000000002A981C string=0x00000000002A9820 "!"
 *   insn=0x00000000002A9820 string=0x00000000002A9824 ")"
 *   insn=0x00000000002A9824 string=0x00000000002A9828 "\t"
 *   insn=0x00000000002A9824 string=0x00000000002A98C8 "\t"
 *   insn=0x00000000002A9828 string=0x00000000002A982C "*"
 *   insn=0x00000000002A982C string=0x00000000002A9830 "\n"
 *   insn=0x00000000002A9834 string=0x00000000002A9838 "'"
 *   insn=0x00000000002A9838 string=0x00000000002A98D4 "?"
 *   insn=0x00000000002A983C string=0x00000000002A9840 ")=G"
 *   insn=0x00000000002A9840 string=0x00000000002A9844 "!"
 *   insn=0x00000000002A9844 string=0x00000000002A9848 "\t"
 *   insn=0x00000000002A9848 string=0x00000000002A984C "\t"
 *   insn=0x00000000002A9848 string=0x00000000002A98E8 "\t"
 *   insn=0x00000000002A984C string=0x00000000002A9850 "*"
 *   insn=0x00000000002A9850 string=0x00000000002A9854 "\n"
 *   insn=0x00000000002A9858 string=0x00000000002A985C "&"
 *   insn=0x00000000002A985C string=0x00000000002A98F4 "?"
 *   insn=0x00000000002A9860 string=0x00000000002A9864 ")=G"
 *   insn=0x00000000002A9864 string=0x00000000002A9868 "!"
 *   insn=0x00000000002A986C string=0x00000000002A9870 "\t"
 *   insn=0x00000000002A986C string=0x00000000002A9908 "\t"
 *   insn=0x00000000002A9870 string=0x00000000002A9874 "*"
 *   insn=0x00000000002A9874 string=0x00000000002A9878 "\n"
 *   insn=0x00000000002A987C string=0x00000000002A9880 "%"
 *   insn=0x00000000002A9880 string=0x00000000002A9914 "?"
 *   insn=0x00000000002A9884 string=0x00000000002A9888 "K"
 *   insn=0x00000000002A9888 string=0x00000000002A988C "+"
 *   insn=0x00000000002A98A8 string=0x00000000002A98AC "*"
 *   insn=0x00000000002A98AC string=0x00000000002A98B0 "\n"
 *   insn=0x00000000002A98C8 string=0x00000000002A98CC "*"
 *   insn=0x00000000002A98CC string=0x00000000002A98D0 "\n"
 *   insn=0x00000000002A98E8 string=0x00000000002A98EC "*"
 *   insn=0x00000000002A98EC string=0x00000000002A98F0 "\n"
 *   insn=0x00000000002A9908 string=0x00000000002A990C "*"
 *   insn=0x00000000002A990C string=0x00000000002A9910 "\n"
 *   insn=0x00000000002A9928 string=0x00000000002A992C "*"
 *   insn=0x00000000002A992C string=0x00000000002A9930 "\n"
 *   insn=0x00000000002A9930 string=0x00000000002A9934 "?"
 *   insn=0x00000000002A9934 string=0x00000000002A9938 "M"
 *   insn=0x00000000002A9938 string=0x00000000002A993C "#"
 *   insn=0x00000000002A9970 string=0x00000000002A9974 "\t"
 *   insn=0x00000000002A9970 string=0x00000000002A9990 "\t"
 *   insn=0x00000000002A9974 string=0x00000000002A9978 "*"
 *   insn=0x00000000002A9978 string=0x00000000002A997C "\n"
 *   insn=0x00000000002A9980 string=0x00000000002A9984 "?"
 *   insn=0x00000000002A9990 string=0x00000000002A9994 "*"
 *   insn=0x00000000002A9994 string=0x00000000002A9998 "\n"
 *   insn=0x00000000002A9998 string=0x00000000002A999C "?"
 *   insn=0x00000000002A99BC string=0x00000000002A996C "!"
 *   insn=0x00000000002A99C0 string=0x00000000002A99C4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ParticleEmitter::TitleForType(unsigned int a1@<W0>, __int64 a2@<X8>)
{
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
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
  __int64 v22; // [xsp+38h] [xbp-68h] BYREF
  __int64 v23; // [xsp+40h] [xbp-60h] BYREF
  __int64 v24; // [xsp+48h] [xbp-58h] BYREF
  __int64 v25; // [xsp+50h] [xbp-50h] BYREF
  __int64 v26; // [xsp+58h] [xbp-48h] BYREF
  _QWORD v27[2]; // [xsp+60h] [xbp-40h] BYREF

  v27[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v22, "none");
  sub_566BB8((int)&v23, "blast");
  sub_566BB8((int)&v24, "spark");
  sub_566BB8((int)&v25, "trail");
  sub_566BB8((int)&v26, "whoosh");
  sub_566BB8((int)v27, "fountain");
  sub_56A528(a2, &v22 + a1);
  v4 = (void *)(v27[0] - 24LL);
  if ( (__int64 *)(v27[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v27[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v26 - 24);
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
      operator delete(v5);
  }
  v6 = (void *)(v25 - 24);
  if ( (__int64 *)(v25 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v25 - 8);
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
      operator delete(v6);
  }
  v7 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v24 - 8);
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
  v8 = (void *)(v23 - 24);
  if ( (__int64 *)(v23 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v23 - 8);
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
  v9 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v22 - 8);
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
      operator delete(v9);
  }
}

