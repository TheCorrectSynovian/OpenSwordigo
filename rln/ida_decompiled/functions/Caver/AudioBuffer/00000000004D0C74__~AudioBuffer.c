/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0C74
 * Mangled: _ZN5Caver11AudioBufferD2Ev
 * Demangled: Caver::AudioBuffer::~AudioBuffer()
 *
 * Callers: 1
 *   0x0000000000201C80  Caver::AudioBuffer::~AudioBuffer()
 *
 * Callees: 9
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7540  Caver::AudioBuffer::FreeDataImpl(void)
 *   0x00000000001FAF90  Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *   0x00000000001FF340  .alDeleteBuffers
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x00000000004D0C80 string=0x00000000004D0C84 "T"
 *   insn=0x00000000004D0C90 string=0x00000000004D0C94 "h"
 *   insn=0x00000000004D0C94 string=0x00000000004D0C98 "H"
 *   insn=0x00000000004D0CA4 string=0x00000000004D0CA8 "A"
 *   insn=0x00000000004D0CA8 string=0x0000000000598026 "alDeleteBuffers"
 *   insn=0x00000000004D0CBC string=0x00000000001F4330 "P'"
 *   insn=0x00000000004D0CC4 string=0x00000000004D0CC8 ")"
 *   insn=0x00000000004D0CD0 string=0x00000000004D0CD4 "a"
 *   insn=0x00000000004D0CDC string=0x00000000001F7540 "0'"
 *   insn=0x00000000004D0CEC string=0x00000000004D0D44 "c"
 *   insn=0x00000000004D0D00 string=0x00000000004D0D04 ")=G"
 *   insn=0x00000000004D0D04 string=0x00000000004D0D08 "!"
 *   insn=0x00000000004D0D0C string=0x00000000004D0D10 "\t"
 *   insn=0x00000000004D0D0C string=0x00000000004D0D24 "\t"
 *   insn=0x00000000004D0D10 string=0x00000000004D0D14 "*"
 *   insn=0x00000000004D0D14 string=0x00000000004D0D18 "\n"
 *   insn=0x00000000004D0D20 string=0x00000000004D0D30 "?"
 *   insn=0x00000000004D0D24 string=0x00000000004D0D28 "*"
 *   insn=0x00000000004D0D28 string=0x00000000004D0D2C "\n"
 *   insn=0x00000000004D0D30 string=0x00000000004D0D34 ","
 *   insn=0x00000000004D0D44 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D0D4C string=0x00000000004D0D50 "J"
 *   insn=0x00000000004D0D54 string=0x00000000004D0D58 "(a"
 *   insn=0x00000000004D0D64 string=0x00000000004D0D68 "J=G"
 *   insn=0x00000000004D0D68 string=0x00000000004D0D6C ")!"
 *   insn=0x00000000004D0D70 string=0x00000000004D0D74 "*"
 *   insn=0x00000000004D0D70 string=0x00000000004D0DA0 "*"
 *   insn=0x00000000004D0D74 string=0x00000000004D0D78 "K"
 *   insn=0x00000000004D0D78 string=0x00000000004D0D7C "+"
 *   insn=0x00000000004D0D80 string=0x00000000004D0D84 "_"
 *   insn=0x00000000004D0DA0 string=0x00000000004D0DA4 "K"
 *   insn=0x00000000004D0DA4 string=0x00000000004D0DA8 "+"
 *   insn=0x00000000004D0DA8 string=0x00000000004D0DAC "_"
 *   insn=0x00000000004D0DB8 string=0x00000000004D0DBC "u"
 *   insn=0x00000000004D0DBC string=0x00000000001FAF90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AudioBuffer::~AudioBuffer(Caver::AudioBuffer *this)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+8h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)this )
  {
    alDeleteBuffers();
    sub_566BB8((int)v5, "alDeleteBuffers");
    alGetError();
    v2 = (void *)(v5[0] - 24LL);
    if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(v5[0] - 8LL);
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
        operator delete(v2);
    }
    Caver::AudioBuffer::FreeDataImpl(this);
  }
}

