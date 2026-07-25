/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004837BC
 * Mangled: _ZN5Caver17SoundEffectSource22DequeueSourceForEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEE
 * Demangled: Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callers: 1
 *   0x00000000001F4F70  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 17
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F4FF0  .alGenSources
 *   0x00000000001F55A0  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F81B0  Caver::SoundEffectSource::setReferenceDistance(float)
 *   0x00000000001FD520  Caver::SoundEffectSource::setPosition(Caver::Vector3 const&)
 *   0x00000000001FD5C0  Caver::SoundEffectSource::setGain(float)
 *   0x0000000000200720  Caver::SoundEffectSource::setRolloffFactor(float)
 *   0x00000000002022E0  Caver::SoundEffectSource::InitWithEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 77
 *   insn=0x00000000004837D0 string=0x00000000004837D4 "W"
 *   insn=0x00000000004837E4 string=0x00000000004837E8 "("
 *   insn=0x00000000004837E8 string=0x00000000004837F0 "\t"
 *   insn=0x00000000004837F4 string=0x00000000004837F8 "?"
 *   insn=0x0000000000483808 string=0x000000000048380C "h\n@"
 *   insn=0x000000000048380C string=0x0000000000483810 ""
 *   insn=0x0000000000483810 string=0x0000000000483814 "h\n"
 *   insn=0x000000000048381C string=0x0000000000483820 "j"
 *   insn=0x0000000000483828 string=0x000000000048382C "@"
 *   insn=0x000000000048382C string=0x0000000000483830 ""
 *   insn=0x0000000000483830 string=0x0000000000483834 ""
 *   insn=0x0000000000483838 string=0x000000000048383C ""
 *   insn=0x000000000048383C string=0x0000000000483840 ""
 *   insn=0x000000000048384C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000483864 string=0x0000000000483868 "N"
 *   insn=0x0000000000483868 string=0x00000000001F55A0 "P'"
 *   insn=0x0000000000483874 string=0x0000000000483878 "N"
 *   insn=0x0000000000483878 string=0x00000000001F81B0 "0'"
 *   insn=0x000000000048388C string=0x0000000000483890 "L"
 *   insn=0x0000000000483890 string=0x00000000001FD5C0 "0'"
 *   insn=0x00000000004838A4 string=0x00000000001FD520 "0'"
 *   insn=0x00000000004838AC string=0x00000000004838B0 "L"
 *   insn=0x00000000004838B0 string=0x00000000004838B4 "("
 *   insn=0x00000000004838B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004838B4 string=0x00000000004838B8 "IG"
 *   insn=0x00000000004838C0 string=0x00000000004838C4 "i\n"
 *   insn=0x00000000004838C8 string=0x00000000004838CC "A"
 *   insn=0x00000000004838E0 string=0x00000000004838E4 "i"
 *   insn=0x00000000004838E4 string=0x00000000004838E8 "h"
 *   insn=0x00000000004838F0 string=0x00000000004838F4 "{"
 *   insn=0x0000000000483904 string=0x0000000000483920 "l"
 *   insn=0x0000000000483920 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000483924 string=0x0000000000483928 "s"
 *   insn=0x0000000000483928 string=0x000000000048392C "\n"
 *   insn=0x0000000000483928 string=0x0000000000483934 "h\n@"
 *   insn=0x0000000000483934 string=0x0000000000483938 ""
 *   insn=0x0000000000483938 string=0x000000000048393C "h\n"
 *   insn=0x0000000000483940 string=0x0000000000483944 "h"
 *   insn=0x0000000000483944 string=0x0000000000483948 ""
 *   insn=0x0000000000483958 string=0x000000000048395C "|*"
 *   insn=0x0000000000483970 string=0x0000000000483974 "V"
 *   insn=0x0000000000483980 string=0x0000000000483984 "a"
 *   insn=0x0000000000483990 string=0x00000000001F4FF0 "P'"
 *   insn=0x0000000000483994 string=0x00000000005967E0 "alGenSources"
 *   insn=0x00000000004839A4 string=0x00000000004839A8 "b"
 *   insn=0x00000000004839A8 string=0x00000000001F4330 "P'"
 *   insn=0x00000000004839B0 string=0x00000000004839B4 "\t"
 *   insn=0x00000000004839B4 string=0x00000000004839B8 ")"
 *   insn=0x00000000004839C4 string=0x00000000004839D4 "\t"
 *   insn=0x00000000004839CC string=0x00000000004839D0 "%"
 *   insn=0x00000000004839D4 string=0x00000000004839D8 ")=G"
 *   insn=0x00000000004839D8 string=0x00000000004839DC "!"
 *   insn=0x00000000004839E0 string=0x00000000004839E4 "\t"
 *   insn=0x00000000004839E0 string=0x00000000004839F8 "\t"
 *   insn=0x00000000004839E4 string=0x00000000004839E8 "*"
 *   insn=0x00000000004839E8 string=0x00000000004839EC "\n"
 *   insn=0x00000000004839F4 string=0x0000000000483A04 "?"
 *   insn=0x00000000004839F8 string=0x00000000004839FC "*"
 *   insn=0x00000000004839FC string=0x0000000000483A00 "\n"
 *   insn=0x0000000000483A0C string=0x0000000000483A10 "e"
 *   insn=0x0000000000483A38 string=0x0000000000483A3C "9"
 *   insn=0x0000000000483A8C string=0x0000000000483A90 "\n"
 *   insn=0x0000000000483A90 string=0x0000000000483A94 "J"
 *   insn=0x0000000000483A98 string=0x0000000000483A9C "(a"
 *   insn=0x0000000000483AA4 string=0x0000000000483AA8 "\n"
 *   insn=0x0000000000483AA8 string=0x0000000000483AAC "J=G"
 *   insn=0x0000000000483AAC string=0x0000000000483AB0 ")!"
 *   insn=0x0000000000483AB4 string=0x0000000000483AB8 "*"
 *   insn=0x0000000000483AB4 string=0x0000000000483AE4 "*"
 *   insn=0x0000000000483AB8 string=0x0000000000483ABC "K"
 *   insn=0x0000000000483ABC string=0x0000000000483AC0 "+"
 *   insn=0x0000000000483AC4 string=0x0000000000483AC8 "_"
 *   insn=0x0000000000483AD4 string=0x0000000000483AD8 "3"
 *   insn=0x0000000000483ADC string=0x0000000000483AE0 "y"
 *   insn=0x0000000000483AE4 string=0x0000000000483AE8 "K"
 *   insn=0x0000000000483AE8 string=0x0000000000483AEC "+"
 *   insn=0x0000000000483AEC string=0x0000000000483AF0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::SoundEffectSource::DequeueSourceForEffect(__int64 *a1@<X8>)
{
  __int128 *v2; // x9
  _QWORD *v3; // x22
  __int64 v4; // x19
  _DWORD *v5; // x0
  int v6; // w8
  __int64 v7; // x0

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int128 *)xmmword_6E9DA0;
  *a1 = 0;
  if ( v2 == &xmmword_6E9DA0 )
  {
    v7 = operator new(0x50u);
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)(v7 + 16) = 0;
    *(_BYTE *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *(_QWORD *)(v7 + 48) = 0x3F80000000000000LL;
    *(_QWORD *)v7 = off_6D53D0;
    *a1 = v7;
    Caver::SoundEffectSource::InitWithEffect();
  }
  else
  {
    v3 = (_QWORD *)*((_QWORD *)&xmmword_6E9DA0 + 1);
    v4 = *(_QWORD *)(*((_QWORD *)&xmmword_6E9DA0 + 1) + 16LL);
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    *a1 = v4;
    sub_52A9C8(v3);
    v5 = (_DWORD *)v3[2];
    if ( v5 )
    {
      v6 = v5[2] - 1;
      v5[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    operator delete(v3);
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 16) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    *(_DWORD *)(v4 + 72) = 0;
    Caver::SoundEffectSource::SetEffect();
    Caver::SoundEffectSource::setReferenceDistance((Caver::SoundEffectSource *)v4, 4131.0);
    Caver::SoundEffectSource::setRolloffFactor((Caver::SoundEffectSource *)v4, 0.0);
    Caver::SoundEffectSource::setGain((Caver::SoundEffectSource *)v4, 1.0);
    Caver::SoundEffectSource::setPosition();
  }
}

