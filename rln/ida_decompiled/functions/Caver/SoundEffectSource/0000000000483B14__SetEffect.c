/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000483B14
 * Mangled: _ZN5Caver17SoundEffectSource9SetEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEE
 * Demangled: Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callers: 1
 *   0x00000000001F55A0  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 12
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F81B0  Caver::SoundEffectSource::setReferenceDistance(float)
 *   0x00000000001FCDF0  .alSourcei
 *   0x00000000001FD520  Caver::SoundEffectSource::setPosition(Caver::Vector3 const&)
 *   0x00000000001FD5C0  Caver::SoundEffectSource::setGain(float)
 *   0x0000000000200720  Caver::SoundEffectSource::setRolloffFactor(float)
 *   0x0000000000203390  Caver::SoundEffect::LoadBuffer(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 55
 *   insn=0x0000000000483B24 string=0x0000000000483B28 "U"
 *   insn=0x0000000000483B34 string=0x0000000000483B38 "3"
 *   insn=0x0000000000483B40 string=0x0000000000483B44 "@"
 *   insn=0x0000000000483B48 string=0x0000000000483B4C "h\n@"
 *   insn=0x0000000000483B4C string=0x0000000000483B50 ""
 *   insn=0x0000000000483B50 string=0x0000000000483B54 "h\n"
 *   insn=0x0000000000483B5C string=0x0000000000483B60 "@"
 *   insn=0x0000000000483B60 string=0x0000000000483B64 ""
 *   insn=0x0000000000483B64 string=0x0000000000483B68 ""
 *   insn=0x0000000000483B68 string=0x0000000000483B6C "@"
 *   insn=0x0000000000483B6C string=0x0000000000483B94 ""
 *   insn=0x0000000000483B74 string=0x0000000000483B78 "h"
 *   insn=0x0000000000483B84 string=0x0000000000483B88 "h"
 *   insn=0x0000000000483B8C string=0x0000000000483B90 ""
 *   insn=0x0000000000483B90 string=0x0000000000483BB0 "!"
 *   insn=0x0000000000483B94 string=0x0000000000483B98 ""
 *   insn=0x0000000000483BB8 string=0x00000000001FCDF0 "0'"
 *   insn=0x0000000000483BBC string=0x00000000005967ED "alSourcei"
 *   insn=0x0000000000483BD0 string=0x00000000001F4330 "P'"
 *   insn=0x0000000000483BD4 string=0x0000000000483BD8 "\t"
 *   insn=0x0000000000483BD8 string=0x0000000000483BDC ")"
 *   insn=0x0000000000483BE4 string=0x0000000000483BE8 "A"
 *   insn=0x0000000000483BE8 string=0x0000000000483C10 "\t"
 *   insn=0x0000000000483C10 string=0x0000000000483C14 ")=G"
 *   insn=0x0000000000483C14 string=0x0000000000483C18 "!"
 *   insn=0x0000000000483C1C string=0x0000000000483C20 "\t"
 *   insn=0x0000000000483C1C string=0x0000000000483C34 "\t"
 *   insn=0x0000000000483C20 string=0x0000000000483C24 "*"
 *   insn=0x0000000000483C24 string=0x0000000000483C28 "\n"
 *   insn=0x0000000000483C30 string=0x0000000000483C40 "?"
 *   insn=0x0000000000483C34 string=0x0000000000483C38 "*"
 *   insn=0x0000000000483C38 string=0x0000000000483C3C "\n"
 *   insn=0x0000000000483C40 string=0x0000000000483C44 "L"
 *   insn=0x0000000000483C54 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000483C58 string=0x0000000000483C5C "\n"
 *   insn=0x0000000000483C5C string=0x0000000000483C60 "J"
 *   insn=0x0000000000483C64 string=0x0000000000483C68 "(a"
 *   insn=0x0000000000483C70 string=0x0000000000483C74 "\n"
 *   insn=0x0000000000483C74 string=0x0000000000483C78 "J=G"
 *   insn=0x0000000000483C78 string=0x0000000000483C7C ")!"
 *   insn=0x0000000000483C80 string=0x0000000000483C84 "*"
 *   insn=0x0000000000483C80 string=0x0000000000483CB0 "*"
 *   insn=0x0000000000483C84 string=0x0000000000483C88 "K"
 *   insn=0x0000000000483C88 string=0x0000000000483C8C "+"
 *   insn=0x0000000000483C90 string=0x0000000000483C94 "_"
 *   insn=0x0000000000483CB0 string=0x0000000000483CB4 "K"
 *   insn=0x0000000000483CB4 string=0x0000000000483CB8 "+"
 *   insn=0x0000000000483CB8 string=0x0000000000483CBC "_"
 *   insn=0x0000000000483CD8 string=0x0000000000483CDC "T"
 *   insn=0x0000000000483CF0 string=0x0000000000483CF4 "/"
 *   insn=0x0000000000483CF4 string=0x00000000001F81B0 "0'"
 *   insn=0x0000000000483D08 string=0x0000000000483D0C "-"
 *   insn=0x0000000000483D0C string=0x00000000001FD5C0 "0'"
 *   insn=0x0000000000483D20 string=0x00000000001FD520 "0'"
 *   insn=0x0000000000483D30 string=0x0000000000483D44 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectSource::SetEffect(__int64 a1, Caver::SoundEffect **a2)
{
  Caver::SoundEffect *v3; // x19
  Caver::SoundEffect *v4; // x0
  int v5; // w8
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+40h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *a2;
  v4 = *(Caver::SoundEffect **)(a1 + 40);
  if ( *a2 == v4 )
    return;
  if ( v3 )
    ++*((_DWORD *)v3 + 2);
  *(_QWORD *)(a1 + 40) = v3;
  if ( v4 && (v5 = *((_DWORD *)v4 + 2) - 1, (*((_DWORD *)v4 + 2) = v5) == 0) )
  {
    (*(void (__fastcall **)(Caver::SoundEffect *))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = *(Caver::SoundEffect **)(a1 + 40);
    if ( v3 )
    {
LABEL_7:
      if ( !*((_QWORD *)v3 + 5) )
        Caver::SoundEffect::LoadBuffer(v3);
    }
  }
  else if ( v3 )
  {
    goto LABEL_7;
  }
  alSourcei();
  sub_566BB8((int)v9, "alSourcei");
  alGetError();
  v6 = (void *)(v9[0] - 24LL);
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
      operator delete(v6);
  }
}

