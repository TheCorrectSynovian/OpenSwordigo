/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B3D4
 * Mangled: sub_20B3D4
 * Demangled: sub_20B3D4
 *
 * Callers: 1
 *   0x00000000004529E0  Caver::FountainParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 15
 *   insn=0x000000000020B3E8 string=0x000000000020B3EC "S"
 *   insn=0x000000000020B3EC string=0x000000000020B3F0 "h"
 *   insn=0x000000000020B420 string=0x000000000020B430 "!"
 *   insn=0x000000000020B424 string=0x000000000020B428 "a"
 *   insn=0x000000000020B42C string=0x000000000020B470 "h"
 *   insn=0x000000000020B434 string=0x000000000020B438 "\t"
 *   insn=0x000000000020B434 string=0x000000000020B44C "\t"
 *   insn=0x000000000020B438 string=0x000000000020B43C "*"
 *   insn=0x000000000020B43C string=0x000000000020B440 "\n"
 *   insn=0x000000000020B448 string=0x000000000020B458 "?"
 *   insn=0x000000000020B44C string=0x000000000020B450 "*"
 *   insn=0x000000000020B450 string=0x000000000020B454 "\n"
 *   insn=0x000000000020B458 string=0x000000000020B45C "L"
 *   insn=0x000000000020B468 string=0x000000000020B46C "A"
 *   insn=0x000000000020B498 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20B3D4()
{
  char *v0; // x22
  __int64 v1; // x8
  __int64 v2; // t1
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = &`guard variable for'Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles;
  do
  {
    while ( 1 )
    {
      v2 = *((_QWORD *)v0 - 1);
      v0 -= 8;
      v1 = v2;
      v3 = (void *)(v2 - 24);
      if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
      {
        v4 = (unsigned int *)(v1 - 8);
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
          break;
      }
      if ( v0 == (char *)&Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles )
        return;
    }
    operator delete(v3);
  }
  while ( v0 != (char *)&Caver::FountainParticleEmitter::TitleForParameter(unsigned int)::titles );
}

