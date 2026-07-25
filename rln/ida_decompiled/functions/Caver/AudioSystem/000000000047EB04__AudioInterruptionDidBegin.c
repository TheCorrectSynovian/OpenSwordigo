/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047EB04
 * Mangled: _ZN5Caver11AudioSystem25AudioInterruptionDidBeginEv
 * Demangled: Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *
 * Callers: 3
 *   0x00000000001F5800  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 12
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9BC0  .alcMakeContextCurrent
 *   0x00000000001FF8E0  Caver::MusicPlayer::SetSuspended(bool)
 *   0x0000000000200F40  SetAudioSessionActive(bool)
 *   0x0000000000201560  .alcSuspend
 *   0x0000000000203B00  .alcSuspendContext
 *   0x000000000047ED10  Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x000000000047EB10 string=0x000000000047EB14 "T"
 *   insn=0x000000000047EB20 string=0x000000000047EB24 "`6@"
 *   insn=0x000000000047EB24 string=0x000000000047EB28 "`"
 *   insn=0x000000000047EB28 string=0x000000000047EB34 "`"
 *   insn=0x000000000047EB2C string=0x000000000047EB30 "l"
 *   insn=0x000000000047EB34 string=0x000000000047EB38 "@"
 *   insn=0x000000000047EB40 string=0x000000000059660C "alcSuspendContext"
 *   insn=0x000000000047EB54 string=0x00000000001F4330 "P'"
 *   insn=0x000000000047EB58 string=0x000000000047EB5C "3"
 *   insn=0x000000000047EB5C string=0x000000000047EB60 "s"
 *   insn=0x000000000047EB6C string=0x000000000047EBCC ")"
 *   insn=0x000000000047EB74 string=0x00000000001F9BC0 "0'"
 *   insn=0x000000000047EB78 string=0x000000000059661E "alcMakeContexCurrent"
 *   insn=0x000000000047EB9C string=0x000000000047EBF0 ")"
 *   insn=0x000000000047EBA4 string=0x000000000047EBA8 "n\n"
 *   insn=0x000000000047EBCC string=0x000000000047EBD0 ")=G"
 *   insn=0x000000000047EBD0 string=0x000000000047EBD4 "!"
 *   insn=0x000000000047EBD8 string=0x000000000047EBDC "\t"
 *   insn=0x000000000047EBD8 string=0x000000000047EC14 "\t"
 *   insn=0x000000000047EBDC string=0x000000000047EBE0 "*"
 *   insn=0x000000000047EBE0 string=0x000000000047EBE4 "\n"
 *   insn=0x000000000047EBE8 string=0x000000000047EBEC ""
 *   insn=0x000000000047EBEC string=0x000000000047EC20 "?"
 *   insn=0x000000000047EBF0 string=0x000000000047EBF4 ")=G"
 *   insn=0x000000000047EBF4 string=0x000000000047EBF8 "!"
 *   insn=0x000000000047EBFC string=0x000000000047EC00 "\t"
 *   insn=0x000000000047EBFC string=0x000000000047EC34 "\t"
 *   insn=0x000000000047EC00 string=0x000000000047EC04 "*"
 *   insn=0x000000000047EC04 string=0x000000000047EC08 "\n"
 *   insn=0x000000000047EC10 string=0x000000000047EC40 "?"
 *   insn=0x000000000047EC14 string=0x000000000047EC18 "*"
 *   insn=0x000000000047EC18 string=0x000000000047EC1C "\n"
 *   insn=0x000000000047EC20 string=0x000000000047EC24 "l"
 *   insn=0x000000000047EC34 string=0x000000000047EC38 "*"
 *   insn=0x000000000047EC38 string=0x000000000047EC3C "\n"
 *   insn=0x000000000047EC54 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047EC58 string=0x000000000047EC5C "(a"
 *   insn=0x000000000047EC68 string=0x000000000047EC6C "*"
 *   insn=0x000000000047EC6C string=0x000000000047EC70 "J=G"
 *   insn=0x000000000047EC70 string=0x000000000047EC74 ")!"
 *   insn=0x000000000047EC78 string=0x000000000047EC7C "*"
 *   insn=0x000000000047EC78 string=0x000000000047ECEC "*"
 *   insn=0x000000000047EC7C string=0x000000000047EC80 "K"
 *   insn=0x000000000047EC80 string=0x000000000047EC84 "+"
 *   insn=0x000000000047EC8C string=0x000000000047ECD0 "_"
 *   insn=0x000000000047EC94 string=0x000000000047EC98 "*"
 *   insn=0x000000000047EC98 string=0x000000000047EC9C "J"
 *   insn=0x000000000047ECA0 string=0x000000000047ECA4 "(a"
 *   insn=0x000000000047ECAC string=0x000000000047ECB0 "*"
 *   insn=0x000000000047ECB0 string=0x000000000047ECB4 "J=G"
 *   insn=0x000000000047ECB4 string=0x000000000047ECB8 ")!"
 *   insn=0x000000000047ECBC string=0x000000000047ECC0 "*"
 *   insn=0x000000000047ECC0 string=0x000000000047ECC4 "K"
 *   insn=0x000000000047ECC4 string=0x000000000047ECC8 "+"
 *   insn=0x000000000047ECEC string=0x000000000047ECF0 "K"
 *   insn=0x000000000047ECF0 string=0x000000000047ECF4 "+"
 *   insn=0x000000000047ECF4 string=0x000000000047ECF8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::AudioInterruptionDidBegin(Caver::AudioSystem *this)
{
  Caver::MusicPlayer *v2; // x0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+8h] [xbp-28h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::MusicPlayer *)*((_QWORD *)this + 13);
  if ( v2 )
    Caver::MusicPlayer::SetSuspended(v2, 1);
  if ( *((_QWORD *)this + 1) )
  {
    alcSuspendContext();
    sub_566BB8((int)v10, "alcSuspendContext");
    alGetError();
    v3 = (void *)(v10[0] - 24LL);
    if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v10[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
      }
      else
      {
        v7 = (*v6)--;
      }
      if ( v7 <= 0 )
        operator delete(v3);
    }
    alcMakeContextCurrent();
    sub_566BB8((int)v10, "alcMakeContexCurrent");
    alGetError();
    v4 = (void *)(v10[0] - 24LL);
    if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v10[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v9 = __ldaxr(v8);
        while ( __stlxr(v9 - 1, v8) );
      }
      else
      {
        v9 = (*v8)--;
      }
      if ( v9 <= 0 )
        operator delete(v4);
    }
  }
  SetAudioSessionActive(0);
  return alcSuspend();
}

