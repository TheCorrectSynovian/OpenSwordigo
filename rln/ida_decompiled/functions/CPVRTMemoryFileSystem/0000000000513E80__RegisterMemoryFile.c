/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513E80
 * Mangled: _ZN21CPVRTMemoryFileSystem18RegisterMemoryFileEPKcPKvmb
 * Demangled: CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *
 * Callers: 1
 *   0x00000000001F8020  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F6AA0  .strcpy
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 35
 *   insn=0x0000000000513EA4 string=0x0000000000513EA8 "Z?G"
 *   insn=0x0000000000513EB4 string=0x0000000000513EB8 "["
 *   insn=0x0000000000513ED0 string=0x0000000000513ED4 "!"
 *   insn=0x0000000000513ED4 string=0x0000000000513ED8 "z"
 *   insn=0x0000000000513EDC string=0x0000000000513EE0 "Y+"
 *   insn=0x0000000000513EE0 string=0x0000000000513EE4 "("
 *   insn=0x0000000000513EE4 string=0x0000000000513EE8 ")"
 *   insn=0x0000000000513EEC string=0x0000000000513EF0 " "
 *   insn=0x0000000000513EF4 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000513EF8 string=0x0000000000513EFC ""
 *   insn=0x0000000000513EFC string=0x0000000000513F00 "B"
 *   insn=0x0000000000513F1C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000513F24 string=0x0000000000513F28 "Z?G"
 *   insn=0x0000000000513F2C string=0x0000000000513F30 "["
 *   insn=0x0000000000513F30 string=0x0000000000513F34 ""
 *   insn=0x0000000000513F38 string=0x0000000000513F3C ""
 *   insn=0x0000000000513F40 string=0x0000000000513F44 ""
 *   insn=0x0000000000513F44 string=0x0000000000513F60 "i"
 *   insn=0x0000000000513F48 string=0x0000000000513F4C "Z?G"
 *   insn=0x0000000000513F50 string=0x0000000000513F54 ""
 *   insn=0x0000000000513F70 string=0x0000000000513F74 "\t"
 *   insn=0x0000000000513F74 string=0x0000000000513F78 "4"
 *   insn=0x0000000000513F7C string=0x0000000000513FD4 "x"
 *   insn=0x0000000000513F84 string=0x0000000000513F88 "z"
 *   insn=0x0000000000513F94 string=0x0000000000513F98 "["
 *   insn=0x0000000000513F94 string=0x00000000001F6AA0 "0'"
 *   insn=0x0000000000513FA0 string=0x0000000000513FA4 "y"
 *   insn=0x0000000000513FA4 string=0x0000000000513FA8 "x"
 *   insn=0x0000000000513FAC string=0x0000000000513FB0 "p"
 *   insn=0x0000000000513FC4 string=0x0000000000513FC8 "\t"
 *   insn=0x0000000000513FC8 string=0x0000000000513FCC "5"
 *   insn=0x0000000000513FD8 string=0x0000000000513FDC ""
 *   insn=0x0000000000513FDC string=0x0000000000513FE0 "i"
 *   insn=0x0000000000513FE4 string=0x0000000000513FE8 "\na"
 *   insn=0x0000000000513FE8 string=0x0000000000513FEC "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTMemoryFileSystem::RegisterMemoryFile(
        CPVRTMemoryFileSystem *this,
        const char *a2,
        unsigned __int64 a3,
        char a4)
{
  int v6; // w27
  unsigned __int64 v9; // x25
  unsigned __int64 v10; // x0
  char *v11; // x23
  void *v12; // x24
  __int64 v13; // x9
  __int64 v14; // x8
  size_t v15; // x0
  char *v16; // x22
  __int64 v17; // x25
  __int64 v18; // x24
  void *v19; // x21
  __int64 v20; // x8
  char v21; // [xsp+Ch] [xbp-54h]

  v6 = CPVRTMemoryFileSystem::s_i32NumFiles;
  v21 = a4 & 1;
  if ( CPVRTMemoryFileSystem::s_i32NumFiles == CPVRTMemoryFileSystem::s_i32Capacity )
  {
    v9 = CPVRTMemoryFileSystem::s_i32NumFiles + 10LL;
    if ( is_mul_ok(v9, 0x20u) )
      v10 = 32 * v9;
    else
      v10 = -1;
    v11 = (char *)operator new[](v10);
    v12 = (void *)CPVRTMemoryFileSystem::s_pFileInfo;
    memcpy(v11, (const void *)CPVRTMemoryFileSystem::s_pFileInfo, 32LL * v6);
    if ( v12 )
    {
      operator delete[](v12);
      LODWORD(v9) = CPVRTMemoryFileSystem::s_i32Capacity + 10;
      v6 = CPVRTMemoryFileSystem::s_i32NumFiles;
    }
    CPVRTMemoryFileSystem::s_i32Capacity = v9;
    CPVRTMemoryFileSystem::s_pFileInfo = (__int64)v11;
  }
  else
  {
    v11 = (char *)CPVRTMemoryFileSystem::s_pFileInfo;
  }
  v13 = 32LL * v6;
  *(_QWORD *)&v11[v13] = this;
  v14 = CPVRTMemoryFileSystem::s_pFileInfo;
  *(_QWORD *)(CPVRTMemoryFileSystem::s_pFileInfo + v13 + 8) = a2;
  if ( (a4 & 1) != 0 )
  {
    v15 = strlen((const char *)this);
    v16 = (char *)operator new[](v15);
    strcpy(v16, (const char *)this);
    v6 = CPVRTMemoryFileSystem::s_i32NumFiles;
    v17 = 32LL * CPVRTMemoryFileSystem::s_i32NumFiles;
    v18 = CPVRTMemoryFileSystem::s_i32NumFiles;
    *(_QWORD *)(CPVRTMemoryFileSystem::s_pFileInfo + v17) = v16;
    v19 = (void *)operator new[](a3);
    memcpy(v19, a2, a3);
    v14 = CPVRTMemoryFileSystem::s_pFileInfo;
    *(_QWORD *)(CPVRTMemoryFileSystem::s_pFileInfo + v17 + 8) = v19;
  }
  else
  {
    v18 = v6;
  }
  v20 = v14 + 32 * v18;
  *(_QWORD *)(v20 + 16) = a3;
  *(_BYTE *)(v20 + 24) = v21;
  CPVRTMemoryFileSystem::s_i32NumFiles = v6 + 1;
}

