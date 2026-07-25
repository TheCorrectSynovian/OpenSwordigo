/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD728
 * Mangled: _ZN5Caver14CharacterState23TrinketDamageMultiplierERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F86E0  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 30
 *   insn=0x00000000003AD738 string=0x00000000003AD73C "U"
 *   insn=0x00000000003AD748 string=0x00000000003AD74C "E5"
 *   insn=0x00000000003AD74C string=0x00000000001FAC60 "0'"
 *   insn=0x00000000003AD75C string=0x00000000003AD760 "r"
 *   insn=0x00000000003AD764 string=0x000000000058EB23 "firetrinket"
 *   insn=0x00000000003AD77C string=0x00000000003AD780 ")"
 *   insn=0x00000000003AD79C string=0x00000000003AD7A0 ")=G"
 *   insn=0x00000000003AD7A0 string=0x00000000003AD7A4 "!"
 *   insn=0x00000000003AD7A8 string=0x00000000003AD7AC "\t"
 *   insn=0x00000000003AD7A8 string=0x00000000003AD7C0 "\t"
 *   insn=0x00000000003AD7AC string=0x00000000003AD7B0 "*"
 *   insn=0x00000000003AD7B0 string=0x00000000003AD7B4 "\n"
 *   insn=0x00000000003AD7BC string=0x00000000003AD7CC "?"
 *   insn=0x00000000003AD7C0 string=0x00000000003AD7C4 "*"
 *   insn=0x00000000003AD7C4 string=0x00000000003AD7C8 "\n"
 *   insn=0x00000000003AD7E4 string=0x00000000003AD7E8 "a"
 *   insn=0x00000000003AD7E8 string=0x00000000003AD7EC "  "
 *   insn=0x00000000003AD81C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AD824 string=0x00000000003AD828 "J"
 *   insn=0x00000000003AD82C string=0x00000000003AD830 "(a"
 *   insn=0x00000000003AD83C string=0x00000000003AD840 "J=G"
 *   insn=0x00000000003AD840 string=0x00000000003AD844 ")!"
 *   insn=0x00000000003AD848 string=0x00000000003AD84C "*"
 *   insn=0x00000000003AD848 string=0x00000000003AD878 "*"
 *   insn=0x00000000003AD84C string=0x00000000003AD850 "K"
 *   insn=0x00000000003AD850 string=0x00000000003AD854 "+"
 *   insn=0x00000000003AD858 string=0x00000000003AD85C "_"
 *   insn=0x00000000003AD878 string=0x00000000003AD87C "K"
 *   insn=0x00000000003AD87C string=0x00000000003AD880 "+"
 *   insn=0x00000000003AD880 string=0x00000000003AD884 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::CharacterState::TrinketDamageMultiplier(__int64 a1, _QWORD *a2)
{
  int v3; // w19
  int v4; // w20
  void *v5; // x0
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = Caver::CharacterState::ItemCount();
  sub_56A528(v9, *a2 + 8LL);
  v4 = sub_5689E0((int)v9, "firetrinket");
  v5 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
    {
      operator delete(v5);
      if ( !v4 )
        return (float)((float)v3 * 0.4) + 1.0;
      return 1.0;
    }
  }
  if ( v4 )
    return 1.0;
  return (float)((float)v3 * 0.4) + 1.0;
}

