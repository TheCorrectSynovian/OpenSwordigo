/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B487C
 * Mangled: _ZN5Caver16DeleteFileAtPathERKSs
 * Demangled: Caver::DeleteFileAtPath(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FF6A0  Caver::DeleteFileAtPath(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F3900  .remove
 *   0x0000000000202250  .perror
 *
 * Referenced strings: 3
 *   insn=0x00000000004B4888 string=0x00000000001F3900 "P'"
 *   insn=0x00000000004B489C string=0x00000000004B48A4 "k6"
 *   insn=0x00000000004B489C string=0x00000000005973A1 "Error deleting file"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DeleteFileAtPath(const char **a1)
{
  if ( !remove(*a1) )
    return 1;
  perror("Error deleting file");
  return 0;
}

