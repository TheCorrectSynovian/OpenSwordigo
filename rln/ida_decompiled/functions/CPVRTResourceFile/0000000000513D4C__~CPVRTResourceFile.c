/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513D4C
 * Mangled: _ZN17CPVRTResourceFileD0Ev
 * Demangled: CPVRTResourceFile::~CPVRTResourceFile()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 11
 *   insn=0x0000000000513D5C string=0x0000000000513D60 "h"@9)ID"
 *   insn=0x0000000000513D60 string=0x0000000000513D64 ")ID"
 *   insn=0x0000000000513D64 string=0x0000000000513D68 ")A"
 *   insn=0x0000000000513D68 string=0x0000000000513D6C "i"
 *   insn=0x0000000000513D70 string=0x0000000000513D74 "h&@9"
 *   insn=0x0000000000513D78 string=0x0000000000513D7C "`"
 *   insn=0x0000000000513D7C string=0x0000000000513D80 "@"
 *   insn=0x0000000000513D80 string=0x0000000000513D84 "w"
 *   insn=0x0000000000513D84 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000513D90 string=0x0000000000513D94 "G"
 *   insn=0x0000000000513D94 string=0x00000000001F72B0 "0'"
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
  }
  operator delete(this);
}

