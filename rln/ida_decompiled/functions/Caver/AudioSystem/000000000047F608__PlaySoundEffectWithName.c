/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F608
 * Mangled: _ZN5Caver11AudioSystem23PlaySoundEffectWithNameERKSsf
 * Demangled: Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *
 * Callers: 1
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *
 * Callees: 6
 *   0x00000000001F4460  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000047F61C string=0x000000000047F620 "V"
 *   insn=0x000000000047F628 string=0x000000000047F62C ""
 *   insn=0x000000000047F63C string=0x00000000001FD0C0 "0'"
 *   insn=0x000000000047F644 string=0x000000000047F648 "V"
 *   insn=0x000000000047F648 string=0x00000000001FDFA0 "0'"
 *   insn=0x000000000047F660 string=0x00000000001F4460 "P'"
 *   insn=0x000000000047F668 string=0x000000000047F66C "@"
 *   insn=0x000000000047F66C string=0x000000000047F670 ""
 *   insn=0x000000000047F670 string=0x000000000047F674 ""
 *   insn=0x000000000047F678 string=0x000000000047F67C ""
 *   insn=0x000000000047F67C string=0x000000000047F680 ""
 *   insn=0x000000000047F694 string=0x000000000047F6B0 ""
 *   insn=0x000000000047F6B0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047F6B8 string=0x000000000047F6BC "("
 *   insn=0x000000000047F6BC string=0x000000000047F6C0 "\t\t@"
 *   insn=0x000000000047F6C0 string=0x000000000047F6C4 ")"
 *   insn=0x000000000047F6C4 string=0x000000000047F6C8 "\t\t"
 *   insn=0x000000000047F6CC string=0x000000000047F6D0 "\t"
 *   insn=0x000000000047F6D0 string=0x000000000047F6D4 ")"
 *   insn=0x000000000047F6D8 string=0x000000000047F6DC " "
 *   insn=0x000000000047F6E0 string=0x000000000047F6E4 "x"
 *   insn=0x000000000047F6F0 string=0x000000000047F6F4 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::PlaySoundEffectWithName(Caver::SoundLibrary *a1)
{
  __int64 result; // x0
  int v2; // w8
  _DWORD *v3; // [xsp+0h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::SoundLibrary::sharedLibrary(a1);
  Caver::SoundLibrary::EffectForName();
  Caver::AudioSystem::PlaySoundEffectAfterDelay();
  result = (__int64)v3;
  if ( v3 )
  {
    v2 = v3[2] - 1;
    v3[2] = v2;
    if ( !v2 )
      return (*(__int64 (__fastcall **)())(*(_QWORD *)v3 + 8LL))();
  }
  return result;
}

