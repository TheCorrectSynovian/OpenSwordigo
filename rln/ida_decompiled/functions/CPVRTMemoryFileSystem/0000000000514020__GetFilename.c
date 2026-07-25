/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514020
 * Mangled: _ZN21CPVRTMemoryFileSystem11GetFilenameEi
 * Demangled: CPVRTMemoryFileSystem::GetFilename(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000514024 string=0x0000000000514028 "h"
 *   insn=0x000000000051402C string=0x0000000000514030 ")=G"
 *   insn=0x0000000000514030 string=0x0000000000514034 ")"
 *   insn=0x0000000000514034 string=0x0000000000514038 "?"
 *   insn=0x0000000000514040 string=0x0000000000514044 ")"
 *   insn=0x0000000000514044 string=0x0000000000514048 "}{"
 *   insn=0x0000000000514048 string=0x000000000051404C ")"
 *   insn=0x000000000051404C string=0x0000000000514050 " ih"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTMemoryFileSystem::GetFilename(CPVRTMemoryFileSystem *this)
{
  int v1; // w8
  __int64 result; // x0

  v1 = (int)this;
  result = 0;
  if ( (v1 & 0x80000000) == 0 && CPVRTMemoryFileSystem::s_i32NumFiles >= v1 )
    return *(_QWORD *)(CPVRTMemoryFileSystem::s_pFileInfo + 32LL * v1);
  return result;
}

