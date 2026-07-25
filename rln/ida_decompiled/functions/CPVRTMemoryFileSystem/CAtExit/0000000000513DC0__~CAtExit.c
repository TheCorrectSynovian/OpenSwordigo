/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513DC0
 * Mangled: _ZN21CPVRTMemoryFileSystem7CAtExitD2Ev
 * Demangled: CPVRTMemoryFileSystem::CAtExit::~CAtExit()
 *
 * Callers: 1
 *   0x000000000020DE70  sub_20DE70
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 12
 *   insn=0x0000000000513DD0 string=0x0000000000513DD4 "s>G"
 *   insn=0x0000000000513DD8 string=0x0000000000513DDC "h"
 *   insn=0x0000000000513DF4 string=0x0000000000513DF8 ""
 *   insn=0x0000000000513DF8 string=0x0000000000513DFC "a@9"
 *   insn=0x0000000000513E00 string=0x0000000000513E04 "hu"
 *   insn=0x0000000000513E00 string=0x0000000000513E30 "h"
 *   insn=0x0000000000513E08 string=0x0000000000513E18 ""
 *   insn=0x0000000000513E0C string=0x0000000000513E10 "T"
 *   insn=0x0000000000513E10 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000513E18 string=0x0000000000513E1C ""
 *   insn=0x0000000000513E24 string=0x0000000000513E28 "N"
 *   insn=0x0000000000513E50 string=0x0000000000513E54 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTMemoryFileSystem::CAtExit::~CAtExit(CPVRTMemoryFileSystem::CAtExit *this)
{
  _BYTE *v1; // x0
  __int64 v2; // x21
  __int64 v3; // x22

  v1 = (_BYTE *)CPVRTMemoryFileSystem::s_pFileInfo;
  if ( CPVRTMemoryFileSystem::s_i32NumFiles >= 1 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      if ( v1[v2 + 24] )
      {
        if ( *(_QWORD *)&v1[v2] )
        {
          operator delete[](*(void **)&v1[v2]);
          v1 = (_BYTE *)CPVRTMemoryFileSystem::s_pFileInfo;
        }
        if ( *(_QWORD *)&v1[v2 + 8] )
        {
          operator delete[](*(void **)&v1[v2 + 8]);
          v1 = (_BYTE *)CPVRTMemoryFileSystem::s_pFileInfo;
        }
      }
      ++v3;
      v2 += 32;
    }
    while ( v3 < CPVRTMemoryFileSystem::s_i32NumFiles );
  }
  if ( v1 )
    operator delete[](v1);
}

