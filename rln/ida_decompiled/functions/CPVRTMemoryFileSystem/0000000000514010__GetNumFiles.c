/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514010
 * Mangled: _ZN21CPVRTMemoryFileSystem11GetNumFilesEv
 * Demangled: CPVRTMemoryFileSystem::GetNumFiles(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000514010 string=0x0000000000514014 "=G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTMemoryFileSystem::GetNumFiles(CPVRTMemoryFileSystem *this)
{
  return (unsigned int)CPVRTMemoryFileSystem::s_i32NumFiles;
}

