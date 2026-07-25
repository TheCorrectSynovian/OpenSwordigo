/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D676C
 * Mangled: _ZN5Caver10BinaryFile9WriteDataEPKhi
 * Demangled: Caver::BinaryFile::WriteData(uchar const*,int)
 *
 * Callers: 1
 *   0x00000000001F9BB0  Caver::BinaryFile::WriteData(uchar const*,int)
 *
 * Callees: 2
 *   0x00000000001F6550  .fwrite
 *   0x00000000001F9240  .gzwrite
 *
 * Referenced strings: 9
 *   insn=0x00000000004D6770 string=0x00000000004D6774 "?\t"
 *   insn=0x00000000004D6778 string=0x00000000004D678C "?"
 *   insn=0x00000000004D677C string=0x00000000004D6780 "@"
 *   insn=0x00000000004D6788 string=0x00000000001F9240 "0'"
 *   insn=0x00000000004D678C string=0x00000000004D6790 "B|@"
 *   insn=0x00000000004D6790 string=0x00000000004D6794 "a"
 *   insn=0x00000000004D67A8 string=0x00000000004D67AC "B|@"
 *   insn=0x00000000004D67B4 string=0x00000000004D67B8 "f"
 *   insn=0x00000000004D67B8 string=0x00000000001F6550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall Caver::BinaryFile::WriteData(Caver::BinaryFile *this, const unsigned __int8 *ptr, size_t a3)
{
  FILE *v4; // x3

  if ( *(_DWORD *)this == 2 )
  {
    if ( *((_QWORD *)this + 1) )
      return gzwrite();
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
  return fwrite(ptr, 1u, a3, v4);
}

