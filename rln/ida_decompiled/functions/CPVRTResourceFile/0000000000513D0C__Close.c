/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513D0C
 * Mangled: _ZN17CPVRTResourceFile5CloseEv
 * Demangled: CPVRTResourceFile::Close(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 6
 *   insn=0x0000000000513D18 string=0x0000000000513D1C "h"@9"
 *   insn=0x0000000000513D1C string=0x0000000000513D20 ""
 *   insn=0x0000000000513D20 string=0x0000000000513D24 "h&@9"
 *   insn=0x0000000000513D28 string=0x0000000000513D2C "`"
 *   insn=0x0000000000513D2C string=0x0000000000513D30 "@"
 *   insn=0x0000000000513D34 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTResourceFile::Close(CPVRTResourceFile *this)
{
  void *v2; // x0

  if ( *((_BYTE *)this + 8) )
  {
    if ( !*((_BYTE *)this + 9) )
    {
      v2 = (void *)*((_QWORD *)this + 3);
      if ( v2 )
        operator delete[](v2);
    }
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 0;
  }
}

