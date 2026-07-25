/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A744
 * Mangled: _ZN5Caver20SoundEffectComponent13PlayWithDelayEf
 * Demangled: Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Callers: 1
 *   0x00000000001FBC90  Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Callees: 6
 *   0x00000000001F4460  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8320  Caver::SoundEffectSource::isPlaying(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000023A758 string=0x000000000023A75C "U"
 *   insn=0x000000000023A768 string=0x000000000023A76C ""
 *   insn=0x000000000023A774 string=0x000000000023A778 ""
 *   insn=0x000000000023A77C string=0x000000000023A780 "a"
 *   insn=0x000000000023A77C string=0x00000000001FDF30 "0'"
 *   insn=0x000000000023A78C string=0x000000000023A790 "4"
 *   insn=0x000000000023A790 string=0x00000000001F4460 "P'"
 *   insn=0x000000000023A798 string=0x000000000023A79C "@"
 *   insn=0x000000000023A798 string=0x000000000023A7A8 "hJ@"
 *   insn=0x000000000023A79C string=0x000000000023A7A0 ""
 *   insn=0x000000000023A7A0 string=0x000000000023A7A4 ""
 *   insn=0x000000000023A7A8 string=0x000000000023A7AC "`J"
 *   insn=0x000000000023A7AC string=0x000000000023A7B0 "H"
 *   insn=0x000000000023A7B0 string=0x000000000023A7B4 "\t\t@"
 *   insn=0x000000000023A7B4 string=0x000000000023A7B8 ")"
 *   insn=0x000000000023A7B8 string=0x000000000023A7BC "\t\t"
 *   insn=0x000000000023A7C0 string=0x000000000023A7C4 "\t"
 *   insn=0x000000000023A7C4 string=0x000000000023A7C8 ")"
 *   insn=0x000000000023A7CC string=0x000000000023A7D0 " "
 *   insn=0x000000000023A7D8 string=0x000000000023A7DC "@"
 *   insn=0x000000000023A7DC string=0x000000000023A7E0 ""
 *   insn=0x000000000023A7E0 string=0x000000000023A7E4 ""
 *   insn=0x000000000023A7E8 string=0x000000000023A7EC ""
 *   insn=0x000000000023A7EC string=0x000000000023A7F0 ""
 *   insn=0x000000000023A820 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023A828 string=0x000000000023A82C "("
 *   insn=0x000000000023A82C string=0x000000000023A830 "\t\t@"
 *   insn=0x000000000023A830 string=0x000000000023A834 ")"
 *   insn=0x000000000023A834 string=0x000000000023A838 "\t\t"
 *   insn=0x000000000023A83C string=0x000000000023A840 "\t"
 *   insn=0x000000000023A840 string=0x000000000023A844 ")"
 *   insn=0x000000000023A848 string=0x000000000023A84C " "
 *   insn=0x000000000023A85C string=0x000000000023A860 "@"
 *   insn=0x000000000023A864 string=0x00000000001F8320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::PlayWithDelay(__int64 this, float a2)
{
  __int64 v2; // x19
  _DWORD *v3; // x8
  int v4; // w9
  int v5; // w8
  __int64 v6; // [xsp+0h] [xbp-30h]

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( *(_QWORD *)(this + 136) )
  {
    Caver::AudioSystem::sharedSystem((Caver::AudioSystem *)this);
    Caver::AudioSystem::PlaySoundEffectAfterDelay();
    this = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v3 = *(_DWORD **)(v2 + 144);
    *(_QWORD *)(v2 + 144) = v6;
    if ( v3 )
    {
      v4 = v3[2] - 1;
      v3[2] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
        this = v6;
      }
    }
    if ( this )
    {
      v5 = *(_DWORD *)(this + 8) - 1;
      *(_DWORD *)(this + 8) = v5;
      if ( !v5 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
    }
  }
  return this;
}

