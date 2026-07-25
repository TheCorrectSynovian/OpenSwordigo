/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513CBC
 * Mangled: _ZN17CPVRTResourceFileD2Ev
 * Demangled: CPVRTResourceFile::~CPVRTResourceFile()
 *
 * Callers: 1
 *   0x00000000001F4230  CPVRTResourceFile::~CPVRTResourceFile()
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 9
 *   insn=0x0000000000513CCC string=0x0000000000513CD0 "h"@9)ID"
 *   insn=0x0000000000513CD0 string=0x0000000000513CD4 ")ID"
 *   insn=0x0000000000513CD4 string=0x0000000000513CD8 ")A"
 *   insn=0x0000000000513CD8 string=0x0000000000513CDC "i"
 *   insn=0x0000000000513CDC string=0x0000000000513CE0 ""
 *   insn=0x0000000000513CE0 string=0x0000000000513CE4 "h&@9"
 *   insn=0x0000000000513CE8 string=0x0000000000513CEC "`"
 *   insn=0x0000000000513CEC string=0x0000000000513CF0 "@"
 *   insn=0x0000000000513CF4 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTResourceFile::~CPVRTResourceFile(CPVRTResourceFile *this)
{
  int v2; // w8
  void *v3; // x0

  v2 = *((unsigned __int8 *)this + 8);
  *(_QWORD *)this = off_6D8E08;
  if ( v2 )
  {
    if ( !*((_BYTE *)this + 9) )
    {
      v3 = (void *)*((_QWORD *)this + 3);
      if ( v3 )
        operator delete[](v3);
    }
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 0;
  }
}

