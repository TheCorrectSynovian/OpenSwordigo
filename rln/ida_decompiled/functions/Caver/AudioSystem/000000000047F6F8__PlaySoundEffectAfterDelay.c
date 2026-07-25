/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F6F8
 * Mangled: _ZN5Caver11AudioSystem25PlaySoundEffectAfterDelayERKN5boost13intrusive_ptrINS_11SoundEffectEEEff
 * Demangled: Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *
 * Callers: 1
 *   0x00000000001F4460  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *
 * Callees: 7
 *   0x00000000001F48F0  std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *   0x00000000001F49C0  Caver::SoundEffectSource::Play(void)
 *   0x00000000001F4F70  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD5C0  Caver::SoundEffectSource::setGain(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 85
 *   insn=0x000000000047F714 string=0x000000000047F718 "V"
 *   insn=0x000000000047F720 string=0x000000000047F724 "("
 *   insn=0x000000000047F724 string=0x000000000047F728 "\t"
 *   insn=0x000000000047F738 string=0x000000000047F73C "\t"
 *   insn=0x000000000047F74C string=0x000000000047F750 "@"
 *   insn=0x000000000047F75C string=0x000000000047F760 "\t@"
 *   insn=0x000000000047F760 string=0x000000000047F764 ")"
 *   insn=0x000000000047F764 string=0x000000000047F768 "\t"
 *   insn=0x000000000047F770 string=0x000000000047F774 "@"
 *   insn=0x000000000047F774 string=0x000000000047F79C "\nI@"
 *   insn=0x000000000047F778 string=0x000000000047F77C "@"
 *   insn=0x000000000047F77C string=0x000000000047F780 ""
 *   insn=0x000000000047F780 string=0x000000000047F784 ""
 *   insn=0x000000000047F784 string=0x000000000047F788 "!"
 *   insn=0x000000000047F788 string=0x000000000047F78C ""
 *   insn=0x000000000047F78C string=0x000000000047F790 ""
 *   insn=0x000000000047F794 string=0x000000000047F798 ""
 *   insn=0x000000000047F79C string=0x000000000047F7A0 "<@"
 *   insn=0x000000000047F7A4 string=0x000000000047F7A8 "@"
 *   insn=0x000000000047F7A4 string=0x000000000047F7C4 "@!+"
 *   insn=0x000000000047F7A8 string=0x000000000047F7AC ""
 *   insn=0x000000000047F7AC string=0x000000000047F7B0 ""
 *   insn=0x000000000047F7B4 string=0x000000000047F7B8 ""
 *   insn=0x000000000047F7B8 string=0x000000000047F7BC ""
 *   insn=0x000000000047F7E0 string=0x00000000001F4F70 "P'"
 *   insn=0x000000000047F7E4 string=0x000000000047F7E8 "\tD"
 *   insn=0x000000000047F7F0 string=0x000000000047F7F4 "s"
 *   insn=0x000000000047F7F4 string=0x00000000001FD5C0 "0'"
 *   insn=0x000000000047F7F8 string=0x000000000047F7FC ""
 *   insn=0x000000000047F800 string=0x000000000047F804 "H"
 *   insn=0x000000000047F800 string=0x000000000047F8B8 "H"
 *   insn=0x000000000047F804 string=0x00000000005895F8 "\n"
 *   insn=0x000000000047F818 string=0x000000000047F81C "?"
 *   insn=0x000000000047F820 string=0x000000000047F824 " "
 *   insn=0x000000000047F824 string=0x000000000047F828 "@"
 *   insn=0x000000000047F828 string=0x000000000047F82C ""
 *   insn=0x000000000047F82C string=0x000000000047F830 ""
 *   insn=0x000000000047F848 string=0x000000000047F84C "A"
 *   insn=0x000000000047F84C string=0x000000000047F8F4 "w"
 *   insn=0x000000000047F870 string=0x000000000047F874 "?"
 *   insn=0x000000000047F874 string=0x000000000047F878 "`"
 *   insn=0x000000000047F878 string=0x000000000047F87C " "
 *   insn=0x000000000047F87C string=0x000000000047F880 "@"
 *   insn=0x000000000047F880 string=0x000000000047F884 ""
 *   insn=0x000000000047F884 string=0x000000000047F888 ""
 *   insn=0x000000000047F88C string=0x000000000047F890 ""
 *   insn=0x000000000047F89C string=0x00000000001F48F0 "P'"
 *   insn=0x000000000047F8C4 string=0x000000000047F8C8 "l"
 *   insn=0x000000000047F8C8 string=0x000000000047F8CC "="
 *   insn=0x000000000047F8C8 string=0x000000000047F8D4 "`"
 *   insn=0x000000000047F8CC string=0x00000000001F49C0 "P'"
 *   insn=0x000000000047F8D4 string=0x000000000047F8D8 "@"
 *   insn=0x000000000047F8D8 string=0x000000000047F8DC "@"
 *   insn=0x000000000047F8DC string=0x000000000047F8E0 ""
 *   insn=0x000000000047F8E0 string=0x000000000047F8E4 ""
 *   insn=0x000000000047F8E4 string=0x000000000047F8E8 ""
 *   insn=0x000000000047F8F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047F8FC string=0x000000000047F900 "("
 *   insn=0x000000000047F900 string=0x000000000047F904 "\t\t@"
 *   insn=0x000000000047F904 string=0x000000000047F908 ")"
 *   insn=0x000000000047F908 string=0x000000000047F90C "\t\t"
 *   insn=0x000000000047F910 string=0x000000000047F914 "\t"
 *   insn=0x000000000047F914 string=0x000000000047F918 ")"
 *   insn=0x000000000047F91C string=0x000000000047F920 " "
 *   insn=0x000000000047F94C string=0x000000000047F950 "@"
 *   insn=0x000000000047F95C string=0x000000000047F960 "\t@"
 *   insn=0x000000000047F95C string=0x000000000047F96C "i"
 *   insn=0x000000000047F960 string=0x000000000047F964 ")"
 *   insn=0x000000000047F964 string=0x000000000047F968 "\t"
 *   insn=0x000000000047F970 string=0x000000000047F974 "@"
 *   insn=0x000000000047F974 string=0x000000000047F99C "I@"
 *   insn=0x000000000047F978 string=0x000000000047F97C "@"
 *   insn=0x000000000047F97C string=0x000000000047F980 ""
 *   insn=0x000000000047F980 string=0x000000000047F984 ""
 *   insn=0x000000000047F984 string=0x000000000047F988 "!"
 *   insn=0x000000000047F988 string=0x000000000047F98C ""
 *   insn=0x000000000047F98C string=0x000000000047F990 ""
 *   insn=0x000000000047F994 string=0x000000000047F998 ""
 *   insn=0x000000000047F99C string=0x000000000047F9A0 "\t<@"
 *   insn=0x000000000047F9A4 string=0x000000000047F9A8 "@"
 *   insn=0x000000000047F9A8 string=0x000000000047F9AC ""
 *   insn=0x000000000047F9AC string=0x000000000047F9B0 ""
 *   insn=0x000000000047F9B4 string=0x000000000047F9B8 ""
 *   insn=0x000000000047F9B8 string=0x000000000047F9BC ""
 *   insn=0x000000000047F9C4 string=0x000000000047F9C8 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::AudioSystem::PlaySoundEffectAfterDelay@<X0>(
        __int64 result@<X0>,
        _QWORD *a2@<X1>,
        __int64 *a3@<X8>,
        float a4@<S0>,
        float a5@<S1>)
{
  __int64 v5; // x20
  __int64 *v10; // x23
  __int64 *i; // x24
  __int64 v12; // x8
  int v13; // w8
  float v14; // s10
  float v15; // s11
  int v16; // w8
  Caver::SoundEffectSource **v17; // x1
  Caver::SoundEffectSource **v18; // x1
  Caver::SoundEffectSource *v19; // [xsp+40h] [xbp-60h]

  v5 = result;
  _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(result + 8) || !*(_BYTE *)(result + 120) )
  {
LABEL_19:
    *a3 = 0;
    return result;
  }
  v10 = *(__int64 **)(result + 40);
  for ( i = *(__int64 **)(result + 48); i != v10; ++v10 )
  {
    v12 = *v10;
    result = *(_QWORD *)(*v10 + 40);
    if ( result )
      ++*(_DWORD *)(result + 8);
    if ( result == *a2 )
    {
      v14 = *(float *)(v12 + 72);
      v15 = *(float *)(result + 60);
      if ( result )
      {
        v16 = *(_DWORD *)(result + 8) - 1;
        *(_DWORD *)(result + 8) = v16;
        if ( !v16 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      }
      if ( v14 < v15 )
        goto LABEL_19;
    }
    else if ( result )
    {
      v13 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v13;
      if ( !v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  Caver::SoundEffectSource::DequeueSourceForEffect();
  *((float *)v19 + 17) = a4;
  Caver::SoundEffectSource::setGain(v19, *(float *)(v5 + 124) * a5);
  result = (__int64)v19;
  if ( !*((_QWORD *)v19 + 4) )
  {
    if ( *((float *)v19 + 17) <= 0.005 )
    {
      v18 = *(Caver::SoundEffectSource ***)(v5 + 48);
      if ( v18 != *(Caver::SoundEffectSource ***)(v5 + 56) )
      {
        *v18 = v19;
        ++*((_DWORD *)v19 + 2);
        *(_QWORD *)(v5 + 48) = v18 + 1;
        goto LABEL_24;
      }
    }
    else
    {
      v17 = *(Caver::SoundEffectSource ***)(v5 + 24);
      if ( v17 != *(Caver::SoundEffectSource ***)(v5 + 32) )
      {
        *v17 = v19;
        ++*((_DWORD *)v19 + 2);
        *(_QWORD *)(v5 + 24) = v17 + 1;
LABEL_24:
        result = (__int64)v19;
        *((_QWORD *)v19 + 4) = v5;
        goto LABEL_25;
      }
    }
    std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>>::_M_insert_aux();
    goto LABEL_24;
  }
LABEL_25:
  if ( *(float *)(result + 68) <= 0.005 )
  {
    Caver::SoundEffectSource::Play((Caver::SoundEffectSource *)result);
    result = (__int64)v19;
  }
  *a3 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 8) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

