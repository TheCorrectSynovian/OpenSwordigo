/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E3D4
 * Mangled: _ZN5Caver11AudioSystemC2Ev
 * Demangled: Caver::AudioSystem::AudioSystem(void)
 *
 * Callers: 2
 *   0x00000000001FAC00  Caver::AudioSystem::AudioSystem(void)
 *   0x000000000047E37C  Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8120  Caver::AudioListener::AudioListener(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000047E504  Caver::AudioSystem::~AudioSystem()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x000000000047E3E4 string=0x000000000047E3E8 "`"
 *   insn=0x000000000047E3EC string=0x000000000047E3F0 "`"
 *   insn=0x000000000047E3F0 string=0x000000000047E3F4 "`"
 *   insn=0x000000000047E3F4 string=0x000000000047E3F8 "J"
 *   insn=0x000000000047E3F8 string=0x00000000001F8120 "0'"
 *   insn=0x000000000047E408 string=0x000000000047E40C "h"
 *   insn=0x000000000047E40C string=0x000000000047E410 "i~"
 *   insn=0x000000000047E410 string=0x000000000047E414 "j"
 *   insn=0x000000000047E434 string=0x000000000047E46C "u"
 *   insn=0x000000000047E43C string=0x000000000047E440 "@"
 *   insn=0x000000000047E440 string=0x000000000047E444 ""
 *   insn=0x000000000047E444 string=0x000000000047E448 ""
 *   insn=0x000000000047E44C string=0x000000000047E450 ""
 *   insn=0x000000000047E450 string=0x000000000047E454 ""
 *   insn=0x000000000047E464 string=0x000000000047E468 "u"
 *   insn=0x000000000047E46C string=0x000000000047E478 "hVA"
 *   insn=0x000000000047E474 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047E480 string=0x000000000047E484 " "
 *   insn=0x000000000047E484 string=0x000000000047E4C8 "@"
 *   insn=0x000000000047E48C string=0x000000000047E490 "@"
 *   insn=0x000000000047E490 string=0x000000000047E494 "\t@"
 *   insn=0x000000000047E490 string=0x000000000047E4B8 "!"
 *   insn=0x000000000047E494 string=0x000000000047E498 ")"
 *   insn=0x000000000047E498 string=0x000000000047E49C "\t"
 *   insn=0x000000000047E4A0 string=0x000000000047E4A4 "\t"
 *   insn=0x000000000047E4A4 string=0x000000000047E4A8 ")"
 *   insn=0x000000000047E4AC string=0x000000000047E4B0 " "
 *   insn=0x000000000047E4BC string=0x000000000047E4C0 "a"
 *   insn=0x000000000047E4C0 string=0x000000000047E4C4 "`\n@"
 *   insn=0x000000000047E4C8 string=0x000000000047E4CC "y"
 *   insn=0x000000000047E4D4 string=0x000000000047E4D8 "h"
 *   insn=0x000000000047E4EC string=0x000000000047E4F0 "h"
 *   insn=0x000000000047E4F4 string=0x000000000047E4F8 "n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::AudioSystem(Caver::AudioSystem *this)
{
  __int64 result; // x0

  *((_OWORD *)this + 2) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *(_OWORD *)this = 0u;
  *((_OWORD *)this + 1) = 0u;
  result = Caver::AudioListener::AudioListener((Caver::AudioSystem *)((char *)this + 64));
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_BYTE *)this + 120) = 1;
  *((_DWORD *)this + 31) = 1065353216;
  *((_WORD *)this + 64) = 256;
  return result;
}

