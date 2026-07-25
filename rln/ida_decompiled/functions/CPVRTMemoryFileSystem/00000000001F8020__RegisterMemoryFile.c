/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8020
 * Mangled: ._ZN21CPVRTMemoryFileSystem18RegisterMemoryFileEPKcPKvmb
 * Demangled: CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *
 * Callers: 1
 *   0x0000000000513E68  CPVRTMemoryFileSystem::CPVRTMemoryFileSystem(char const*,void const*,ulong,bool)
 *
 * Callees: 1
 *   0x0000000000513E80  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8028 string=0x00000000001F802C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTMemoryFileSystem::RegisterMemoryFile(
        CPVRTMemoryFileSystem *this,
        const char *a2,
        const void *a3,
        unsigned __int64 a4,
        bool a5)
{
  return _ZN21CPVRTMemoryFileSystem18RegisterMemoryFileEPKcPKvmb(this, a2, a3, a4, a5);
}

