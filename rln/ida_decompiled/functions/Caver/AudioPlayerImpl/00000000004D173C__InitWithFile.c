/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D173C
 * Mangled: _ZN5Caver15AudioPlayerImpl12InitWithFileERKSs
 * Demangled: Caver::AudioPlayerImpl::InitWithFile(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F47F0  Caver::LastPathComponent(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9380  MusicPlayerJNI::LoadFile(std::string const&)
 *   0x00000000001FB210  Caver::StringByRemovingPathExtension(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 54
 *   insn=0x00000000004D1748 string=0x00000000004D174C "S"
 *   insn=0x00000000004D174C string=0x00000000004D1750 "h"
 *   insn=0x00000000004D175C string=0x00000000004D1760 "$"
 *   insn=0x00000000004D1760 string=0x00000000001F47F0 "P'"
 *   insn=0x00000000004D176C string=0x00000000001FB210 "0'"
 *   insn=0x00000000004D1774 string=0x00000000001F9380 "0'"
 *   insn=0x00000000004D1798 string=0x00000000004D179C "a"
 *   insn=0x00000000004D179C string=0x00000000004D17A0 "h"
 *   insn=0x00000000004D17C4 string=0x00000000004D17C8 ")=G"
 *   insn=0x00000000004D17C8 string=0x00000000004D17CC "!"
 *   insn=0x00000000004D17D0 string=0x00000000004D17D4 "\t"
 *   insn=0x00000000004D17D0 string=0x00000000004D180C "\t"
 *   insn=0x00000000004D17D4 string=0x00000000004D17D8 "*"
 *   insn=0x00000000004D17D8 string=0x00000000004D17DC "\n"
 *   insn=0x00000000004D17E0 string=0x00000000004D17E4 ""
 *   insn=0x00000000004D17E4 string=0x00000000004D1818 "?"
 *   insn=0x00000000004D17E8 string=0x00000000004D17EC ")=G"
 *   insn=0x00000000004D17EC string=0x00000000004D17F0 "!"
 *   insn=0x00000000004D17F4 string=0x00000000004D17F8 "\t"
 *   insn=0x00000000004D17F4 string=0x00000000004D182C "\t"
 *   insn=0x00000000004D17F8 string=0x00000000004D17FC "*"
 *   insn=0x00000000004D17FC string=0x00000000004D1800 "\n"
 *   insn=0x00000000004D1808 string=0x00000000004D1838 "?"
 *   insn=0x00000000004D180C string=0x00000000004D1810 "*"
 *   insn=0x00000000004D1810 string=0x00000000004D1814 "\n"
 *   insn=0x00000000004D182C string=0x00000000004D1830 "*"
 *   insn=0x00000000004D1830 string=0x00000000004D1834 "\n"
 *   insn=0x00000000004D1838 string=0x00000000004D183C ","
 *   insn=0x00000000004D184C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D1854 string=0x00000000004D1858 "J"
 *   insn=0x00000000004D185C string=0x00000000004D1860 "(a"
 *   insn=0x00000000004D186C string=0x00000000004D1870 "J=G"
 *   insn=0x00000000004D1870 string=0x00000000004D1874 ")!"
 *   insn=0x00000000004D1878 string=0x00000000004D187C "*"
 *   insn=0x00000000004D1878 string=0x00000000004D1890 "*"
 *   insn=0x00000000004D187C string=0x00000000004D1880 "K"
 *   insn=0x00000000004D1880 string=0x00000000004D1884 "+"
 *   insn=0x00000000004D188C string=0x00000000004D189C "_"
 *   insn=0x00000000004D1890 string=0x00000000004D1894 "K"
 *   insn=0x00000000004D1894 string=0x00000000004D1898 "+"
 *   insn=0x00000000004D18BC string=0x00000000004D18C0 ")"
 *   insn=0x00000000004D18D0 string=0x00000000004D18D4 ")=G"
 *   insn=0x00000000004D18D4 string=0x00000000004D18D8 "!"
 *   insn=0x00000000004D18D8 string=0x00000000004D18DC "i"
 *   insn=0x00000000004D18DC string=0x00000000004D18E0 "\t"
 *   insn=0x00000000004D18DC string=0x00000000004D1908 "\t"
 *   insn=0x00000000004D18E0 string=0x00000000004D18E4 "*"
 *   insn=0x00000000004D18E4 string=0x00000000004D18E8 "\n"
 *   insn=0x00000000004D18EC string=0x00000000004D18F0 "?"
 *   insn=0x00000000004D18F0 string=0x00000000004D18F4 "l"
 *   insn=0x00000000004D1908 string=0x00000000004D190C "*"
 *   insn=0x00000000004D190C string=0x00000000004D1910 "\n"
 *   insn=0x00000000004D1910 string=0x00000000004D1914 "?"
 *   insn=0x00000000004D1914 string=0x00000000004D1918 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::AudioPlayerImpl::InitWithFile()
{
  unsigned int *v1; // x8
  int v2; // w9
  unsigned int *v3; // x8
  int v4; // w9
  __int64 v5; // [xsp+0h] [xbp-30h]
  __int64 v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::LastPathComponent();
  Caver::StringByRemovingPathExtension();
  MusicPlayerJNI::LoadFile();
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v1 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v2 = __ldaxr(v1);
      while ( __stlxr(v2 - 1, v1) );
    }
    else
    {
      v2 = (*v1)--;
    }
    if ( v2 <= 0 )
      operator delete((void *)(v6 - 24));
  }
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5 - 8);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete((void *)(v5 - 24));
  }
  return 1;
}

