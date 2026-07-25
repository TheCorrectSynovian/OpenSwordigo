/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004484DC
 * Mangled: _ZN5Caver12MeshInstance17ResetDrawCountersEv
 * Demangled: Caver::MeshInstance::ResetDrawCounters(void)
 *
 * Callers: 1
 *   0x0000000000202630  Caver::MeshInstance::ResetDrawCounters(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004484DC string=0x00000000004484E0 "\t"
 *   insn=0x00000000004484E0 string=0x00000000004484E4 "\n"
 *   insn=0x00000000004484E8 string=0x00000000004484EC "?"
 *   insn=0x00000000004484EC string=0x00000000004484F0 "_\t\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshInstance::ResetDrawCounters(Caver::MeshInstance *this)
{
  dword_6E9A00 = 0;
  dword_6E9A04 = 0;
  dword_6E9A08 = 0;
}

