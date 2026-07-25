/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513E68
 * Mangled: _ZN21CPVRTMemoryFileSystemC2EPKcPKvmb
 * Demangled: CPVRTMemoryFileSystem::CPVRTMemoryFileSystem(char const*,void const*,ulong,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8020  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *
 * Referenced strings: 2
 *   insn=0x0000000000513E78 string=0x0000000000513E7C "i"
 *   insn=0x0000000000513E7C string=0x00000000001F8020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTMemoryFileSystem::CPVRTMemoryFileSystem(
        CPVRTMemoryFileSystem *this,
        CPVRTMemoryFileSystem *a2,
        char *a3,
        void *a4,
        bool a5)
{
  CPVRTMemoryFileSystem::RegisterMemoryFile(a2, a3, a4, a5, a5);
}

