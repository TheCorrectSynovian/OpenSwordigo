/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047ED50
 * Mangled: _ZN5Caver11AudioSystem31EndAudioInterruptionIfNecessaryEv
 * Demangled: Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Callers: 1
 *   0x00000000001F9550  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Callees: 11
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9BC0  .alcMakeContextCurrent
 *   0x00000000001FF8E0  Caver::MusicPlayer::SetSuspended(bool)
 *   0x0000000000200F40  SetAudioSessionActive(bool)
 *   0x0000000000203650  .alcProcessContext
 *   0x000000000047EF74  Caver::AudioSystem::SetCanEndAudioInterruption(bool)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 70
 *   insn=0x000000000047ED60 string=0x000000000047ED64 "T"
 *   insn=0x000000000047ED70 string=0x000000000047ED74 "h"
 *   insn=0x000000000047ED74 string=0x000000000047ED78 "h"
 *   insn=0x000000000047ED80 string=0x000000000047ED84 "o"
 *   insn=0x000000000047ED84 string=0x000000000047ED88 "`"
 *   insn=0x000000000047ED88 string=0x000000000047ED8C "@"
 *   insn=0x000000000047ED8C string=0x000000000047EDF4 "`6@"
 *   insn=0x000000000047ED90 string=0x00000000001F9BC0 "0'"
 *   insn=0x000000000047ED94 string=0x000000000059661E "alcMakeContexCurrent"
 *   insn=0x000000000047EDA4 string=0x000000000047EDA8 "b"
 *   insn=0x000000000047EDA8 string=0x00000000001F4330 "P'"
 *   insn=0x000000000047EDAC string=0x000000000047EDB0 "5"
 *   insn=0x000000000047EDBC string=0x000000000047EDC0 "A"
 *   insn=0x000000000047EDC0 string=0x000000000047EDC4 "`"
 *   insn=0x000000000047EDC0 string=0x000000000047EE28 ")"
 *   insn=0x000000000047EDC4 string=0x000000000047EDC8 """
 *   insn=0x000000000047EDCC string=0x0000000000596633 "alcProcessContext"
 *   insn=0x000000000047EDD8 string=0x000000000047EDDC "w"
 *   insn=0x000000000047EDDC string=0x000000000047EDE0 "T"
 *   insn=0x000000000047EDF0 string=0x000000000047EE4C ")"
 *   insn=0x000000000047EDF4 string=0x000000000047EDF8 "`"
 *   insn=0x000000000047EE0C string=0x000000000047EE10 "A"
 *   insn=0x000000000047EE28 string=0x000000000047EE2C ")=G"
 *   insn=0x000000000047EE2C string=0x000000000047EE30 "!"
 *   insn=0x000000000047EE34 string=0x000000000047EE38 "\t"
 *   insn=0x000000000047EE34 string=0x000000000047EE70 "\t"
 *   insn=0x000000000047EE38 string=0x000000000047EE3C "*"
 *   insn=0x000000000047EE3C string=0x000000000047EE40 "\n"
 *   insn=0x000000000047EE44 string=0x000000000047EE48 ""
 *   insn=0x000000000047EE48 string=0x000000000047EE7C "?"
 *   insn=0x000000000047EE4C string=0x000000000047EE50 ")=G"
 *   insn=0x000000000047EE50 string=0x000000000047EE54 "!"
 *   insn=0x000000000047EE58 string=0x000000000047EE5C "\t"
 *   insn=0x000000000047EE58 string=0x000000000047EE90 "\t"
 *   insn=0x000000000047EE5C string=0x000000000047EE60 "*"
 *   insn=0x000000000047EE60 string=0x000000000047EE64 "\n"
 *   insn=0x000000000047EE6C string=0x000000000047EE9C "?"
 *   insn=0x000000000047EE70 string=0x000000000047EE74 "*"
 *   insn=0x000000000047EE74 string=0x000000000047EE78 "\n"
 *   insn=0x000000000047EE7C string=0x000000000047EE80 ","
 *   insn=0x000000000047EE84 string=0x000000000047EE88 "G"
 *   insn=0x000000000047EE90 string=0x000000000047EE94 "*"
 *   insn=0x000000000047EE94 string=0x000000000047EE98 "\n"
 *   insn=0x000000000047EEA4 string=0x000000000047EEA8 "?"
 *   insn=0x000000000047EEA8 string=0x000000000047EEAC "`6@"
 *   insn=0x000000000047EEAC string=0x000000000047EEB0 "`"
 *   insn=0x000000000047EEB8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047EEC0 string=0x000000000047EEC4 "(a"
 *   insn=0x000000000047EECC string=0x000000000047EED0 "*"
 *   insn=0x000000000047EED0 string=0x000000000047EED4 "J=G"
 *   insn=0x000000000047EED4 string=0x000000000047EED8 ")!"
 *   insn=0x000000000047EEDC string=0x000000000047EEE0 "*"
 *   insn=0x000000000047EEDC string=0x000000000047EF50 "*"
 *   insn=0x000000000047EEE0 string=0x000000000047EEE4 "K"
 *   insn=0x000000000047EEE4 string=0x000000000047EEE8 "+"
 *   insn=0x000000000047EEF0 string=0x000000000047EF34 "_"
 *   insn=0x000000000047EEF8 string=0x000000000047EEFC "*"
 *   insn=0x000000000047EEFC string=0x000000000047EF00 "J"
 *   insn=0x000000000047EF04 string=0x000000000047EF08 "(a"
 *   insn=0x000000000047EF10 string=0x000000000047EF14 "*"
 *   insn=0x000000000047EF14 string=0x000000000047EF18 "J=G"
 *   insn=0x000000000047EF18 string=0x000000000047EF1C ")!"
 *   insn=0x000000000047EF20 string=0x000000000047EF24 "*"
 *   insn=0x000000000047EF24 string=0x000000000047EF28 "K"
 *   insn=0x000000000047EF28 string=0x000000000047EF2C "+"
 *   insn=0x000000000047EF48 string=0x000000000047EF4C "^\n"
 *   insn=0x000000000047EF50 string=0x000000000047EF54 "K"
 *   insn=0x000000000047EF54 string=0x000000000047EF58 "+"
 *   insn=0x000000000047EF58 string=0x000000000047EF5C "_"
 *   insn=0x000000000047EF6C string=0x000000000047EF70 "U\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall Caver::AudioSystem::EndAudioInterruptionIfNecessary(_BYTE *this)
{
  _BYTE *v1; // x19
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v1 = this;
  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[128] )
  {
    this[128] = 0;
    SetAudioSessionActive(1);
    if ( !*((_QWORD *)v1 + 1) )
      goto LABEL_5;
    alcMakeContextCurrent();
    sub_566BB8((int)v8, "alcMakeContexCurrent");
    alGetError();
    v2 = (void *)(v8[0] - 24LL);
    if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(v8[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
      }
      else
      {
        v5 = (*v4)--;
      }
      if ( v5 <= 0 )
        operator delete(v2);
    }
    alcProcessContext();
    sub_566BB8((int)v8, "alcProcessContext");
    alGetError();
    v3 = (void *)(v8[0] - 24LL);
    if ( (__int64 *)(v8[0] - 24LL) == &qword_6FD2E0 )
      goto LABEL_5;
    v6 = (unsigned int *)(v8[0] - 8LL);
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
    if ( v7 > 0 )
    {
LABEL_5:
      this = (_BYTE *)*((_QWORD *)v1 + 13);
      if ( !this )
        return this;
    }
    else
    {
      operator delete(v3);
      this = (_BYTE *)*((_QWORD *)v1 + 13);
      if ( !this )
        return this;
    }
    return (_BYTE *)Caver::MusicPlayer::SetSuspended((Caver::MusicPlayer *)this, 0);
  }
  return this;
}

