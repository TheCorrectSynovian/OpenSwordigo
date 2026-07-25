/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D64EC
 * Mangled: _ZN5Caver10BinaryFileD2Ev
 * Demangled: Caver::BinaryFile::~BinaryFile()
 *
 * Callers: 1
 *   0x00000000001F8FA0  Caver::BinaryFile::~BinaryFile()
 *
 * Callees: 2
 *   0x00000000001F6000  .gzclose
 *   0x00000000001FDDC0  .fclose
 *
 * Referenced strings: 8
 *   insn=0x00000000004D64F8 string=0x00000000004D64FC "h"
 *   insn=0x00000000004D6504 string=0x00000000004D6508 "`"
 *   insn=0x00000000004D6508 string=0x00000000004D650C "@"
 *   insn=0x00000000004D650C string=0x00000000004D6510 ","
 *   insn=0x00000000004D6510 string=0x00000000004D6514 "h"
 *   insn=0x00000000004D6510 string=0x00000000001FDDC0 "0'"
 *   insn=0x00000000004D651C string=0x00000000004D6520 "`"
 *   insn=0x00000000004D6530 string=0x00000000001F6000 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BinaryFile::~BinaryFile(Caver::BinaryFile *this)
{
  int v2; // w8
  FILE *v3; // x0

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this == 1 )
  {
    v3 = (FILE *)*((_QWORD *)this + 1);
    if ( !v3 )
      return;
    fclose(v3);
    v2 = *(_DWORD *)this;
  }
  if ( v2 == 2 )
  {
    if ( *((_QWORD *)this + 1) )
      gzclose();
  }
}

