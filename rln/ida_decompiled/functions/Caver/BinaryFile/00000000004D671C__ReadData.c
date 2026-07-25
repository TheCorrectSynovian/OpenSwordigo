/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D671C
 * Mangled: _ZN5Caver10BinaryFile8ReadDataEPhi
 * Demangled: Caver::BinaryFile::ReadData(uchar *,int)
 *
 * Callers: 1
 *   0x00000000001FC4D0  Caver::BinaryFile::ReadData(uchar *,int)
 *
 * Callees: 2
 *   0x00000000001F5B40  .fread
 *   0x0000000000201980  .gzread
 *
 * Referenced strings: 7
 *   insn=0x00000000004D6720 string=0x00000000004D6724 "?\t"
 *   insn=0x00000000004D6728 string=0x00000000004D673C "?"
 *   insn=0x00000000004D672C string=0x00000000004D6730 "@"
 *   insn=0x00000000004D673C string=0x00000000004D6740 "B|@"
 *   insn=0x00000000004D6740 string=0x00000000004D6744 "a"
 *   insn=0x00000000004D6758 string=0x00000000004D675C "B|@"
 *   insn=0x00000000004D6768 string=0x00000000001F5B40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall Caver::BinaryFile::ReadData(Caver::BinaryFile *this, unsigned __int8 *ptr, size_t a3)
{
  FILE *v4; // x3

  if ( *(_DWORD *)this == 2 )
  {
    if ( *((_QWORD *)this + 1) )
      return gzread();
    v4 = 0;
    a3 = (int)a3;
  }
  else
  {
    a3 = (int)a3;
    if ( *(_DWORD *)this == 1 )
      v4 = (FILE *)*((_QWORD *)this + 1);
    else
      v4 = 0;
  }
  return fread(ptr, 1u, a3, v4);
}

